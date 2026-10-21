from google import genai
from google.genai.types import GenerateContentConfig

client = genai.Client()

system_prompt = "Limit your output to one sentence. Act as distingushed gentleman"
user_prompt = input("Prompt: ")

response = client.models.generate_content(
    model="gemini-3.1-flash-lite",
    config=GenerateContentConfig(system_instruction=system_prompt),
    contents=user_prompt,
)

print(f"Output: {response.text}")
