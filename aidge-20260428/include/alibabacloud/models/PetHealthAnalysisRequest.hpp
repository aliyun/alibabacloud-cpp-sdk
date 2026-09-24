// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PETHEALTHANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PETHEALTHANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class PetHealthAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PetHealthAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, PetHealthAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    PetHealthAnalysisRequest() = default ;
    PetHealthAnalysisRequest(const PetHealthAnalysisRequest &) = default ;
    PetHealthAnalysisRequest(PetHealthAnalysisRequest &&) = default ;
    PetHealthAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PetHealthAnalysisRequest() = default ;
    PetHealthAnalysisRequest& operator=(const PetHealthAnalysisRequest &) = default ;
    PetHealthAnalysisRequest& operator=(PetHealthAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->systemPrompt_ == nullptr && this->userPrompt_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
    inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
    inline PetHealthAnalysisRequest& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
    inline PetHealthAnalysisRequest& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline PetHealthAnalysisRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline PetHealthAnalysisRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The list of HTTPS URLs of images to analyze. At least one accessible image must be provided.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> imageUrl_ {};
    // The system prompt used to specify the response role or requirements. The value must comply with JSON string escaping rules.
    shared_ptr<string> systemPrompt_ {};
    // The custom analysis requirement. If not specified or set to an empty string, excrement analysis is performed by default. The value must comply with JSON string escaping rules.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
