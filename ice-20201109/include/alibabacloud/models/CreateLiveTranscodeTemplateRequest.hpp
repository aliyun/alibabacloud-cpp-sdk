// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVETRANSCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVETRANSCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLiveTranscodeTemplateRequestTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveTranscodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateLiveTranscodeTemplateRequest() = default ;
    CreateLiveTranscodeTemplateRequest(const CreateLiveTranscodeTemplateRequest &) = default ;
    CreateLiveTranscodeTemplateRequest(CreateLiveTranscodeTemplateRequest &&) = default ;
    CreateLiveTranscodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveTranscodeTemplateRequest() = default ;
    CreateLiveTranscodeTemplateRequest& operator=(const CreateLiveTranscodeTemplateRequest &) = default ;
    CreateLiveTranscodeTemplateRequest& operator=(CreateLiveTranscodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->templateConfig_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLiveTranscodeTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const CreateLiveTranscodeTemplateRequestTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, CreateLiveTranscodeTemplateRequestTemplateConfig) };
    inline CreateLiveTranscodeTemplateRequestTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, CreateLiveTranscodeTemplateRequestTemplateConfig) };
    inline CreateLiveTranscodeTemplateRequest& setTemplateConfig(const CreateLiveTranscodeTemplateRequestTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline CreateLiveTranscodeTemplateRequest& setTemplateConfig(CreateLiveTranscodeTemplateRequestTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateLiveTranscodeTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration of the template.
    std::shared_ptr<CreateLiveTranscodeTemplateRequestTemplateConfig> templateConfig_ = nullptr;
    // The type of the template. Valid values:
    // 
    // *   normal
    // *   narrow-band
    // *   audio-only
    // *   origin
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
