// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PETHEALTHANALYSISSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PETHEALTHANALYSISSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class PetHealthAnalysisShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PetHealthAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrlShrink_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, PetHealthAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrlShrink_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    PetHealthAnalysisShrinkRequest() = default ;
    PetHealthAnalysisShrinkRequest(const PetHealthAnalysisShrinkRequest &) = default ;
    PetHealthAnalysisShrinkRequest(PetHealthAnalysisShrinkRequest &&) = default ;
    PetHealthAnalysisShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PetHealthAnalysisShrinkRequest() = default ;
    PetHealthAnalysisShrinkRequest& operator=(const PetHealthAnalysisShrinkRequest &) = default ;
    PetHealthAnalysisShrinkRequest& operator=(PetHealthAnalysisShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrlShrink_ == nullptr
        && this->systemPrompt_ == nullptr && this->userPrompt_ == nullptr; };
    // imageUrlShrink Field Functions 
    bool hasImageUrlShrink() const { return this->imageUrlShrink_ != nullptr;};
    void deleteImageUrlShrink() { this->imageUrlShrink_ = nullptr;};
    inline string getImageUrlShrink() const { DARABONBA_PTR_GET_DEFAULT(imageUrlShrink_, "") };
    inline PetHealthAnalysisShrinkRequest& setImageUrlShrink(string imageUrlShrink) { DARABONBA_PTR_SET_VALUE(imageUrlShrink_, imageUrlShrink) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline PetHealthAnalysisShrinkRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline PetHealthAnalysisShrinkRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The list of HTTPS URLs of images to analyze. At least one accessible image must be provided.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrlShrink_ {};
    // The system prompt used to specify the response role or requirements. The value must comply with JSON string escaping rules.
    shared_ptr<string> systemPrompt_ {};
    // The custom analysis requirement. If not specified or set to an empty string, excrement analysis is performed by default. The value must comply with JSON string escaping rules.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
