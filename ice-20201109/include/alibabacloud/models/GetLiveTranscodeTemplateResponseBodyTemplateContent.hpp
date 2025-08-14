// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeTemplateResponseBodyTemplateContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeTemplateResponseBodyTemplateContent& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeTemplateResponseBodyTemplateContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLiveTranscodeTemplateResponseBodyTemplateContent() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContent(const GetLiveTranscodeTemplateResponseBodyTemplateContent &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContent(GetLiveTranscodeTemplateResponseBodyTemplateContent &&) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeTemplateResponseBodyTemplateContent() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContent& operator=(const GetLiveTranscodeTemplateResponseBodyTemplateContent &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContent& operator=(GetLiveTranscodeTemplateResponseBodyTemplateContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->createTime_ != nullptr && this->name_ != nullptr && this->templateConfig_ != nullptr && this->templateId_ != nullptr && this->type_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig) };
    inline Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setTemplateConfig(const Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setTemplateConfig(Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category of the template. Valid values:
    // 
    // *   system
    // *   customized
    std::shared_ptr<string> category_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration of the template.
    std::shared_ptr<Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig> templateConfig_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The type of the template.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
