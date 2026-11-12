// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VACANCYDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VACANCYDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VacancyDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VacancyDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, VacancyDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    VacancyDetectionRequest() = default ;
    VacancyDetectionRequest(const VacancyDetectionRequest &) = default ;
    VacancyDetectionRequest(VacancyDetectionRequest &&) = default ;
    VacancyDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VacancyDetectionRequest() = default ;
    VacancyDetectionRequest& operator=(const VacancyDetectionRequest &) = default ;
    VacancyDetectionRequest& operator=(VacancyDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->systemPrompt_ == nullptr && this->userPrompt_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline VacancyDetectionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline VacancyDetectionRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline VacancyDetectionRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The HTTPS URL of the single image to be detected. Arrays or other image encodings are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The optional system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The optional user prompt. If this parameter is empty, the complete vacancy detection prompt is used. Plain text and JSON containing only text in messages or content are supported.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
