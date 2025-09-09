// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateLogoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogoVersion, logoVersion_);
      DARABONBA_PTR_TO_JSON(NegativePrompt, negativePrompt_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogoVersion, logoVersion_);
      DARABONBA_PTR_FROM_JSON(NegativePrompt, negativePrompt_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
    };
    CreateLogoTaskRequest() = default ;
    CreateLogoTaskRequest(const CreateLogoTaskRequest &) = default ;
    CreateLogoTaskRequest(CreateLogoTaskRequest &&) = default ;
    CreateLogoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogoTaskRequest() = default ;
    CreateLogoTaskRequest& operator=(const CreateLogoTaskRequest &) = default ;
    CreateLogoTaskRequest& operator=(CreateLogoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logoVersion_ != nullptr
        && this->negativePrompt_ != nullptr && this->parameters_ != nullptr && this->prompt_ != nullptr; };
    // logoVersion Field Functions 
    bool hasLogoVersion() const { return this->logoVersion_ != nullptr;};
    void deleteLogoVersion() { this->logoVersion_ = nullptr;};
    inline string logoVersion() const { DARABONBA_PTR_GET_DEFAULT(logoVersion_, "") };
    inline CreateLogoTaskRequest& setLogoVersion(string logoVersion) { DARABONBA_PTR_SET_VALUE(logoVersion_, logoVersion) };


    // negativePrompt Field Functions 
    bool hasNegativePrompt() const { return this->negativePrompt_ != nullptr;};
    void deleteNegativePrompt() { this->negativePrompt_ = nullptr;};
    inline string negativePrompt() const { DARABONBA_PTR_GET_DEFAULT(negativePrompt_, "") };
    inline CreateLogoTaskRequest& setNegativePrompt(string negativePrompt) { DARABONBA_PTR_SET_VALUE(negativePrompt_, negativePrompt) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateLogoTaskRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateLogoTaskRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


  protected:
    std::shared_ptr<string> logoVersion_ = nullptr;
    std::shared_ptr<string> negativePrompt_ = nullptr;
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
