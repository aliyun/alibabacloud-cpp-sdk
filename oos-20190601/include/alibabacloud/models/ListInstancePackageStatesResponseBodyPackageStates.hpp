// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESRESPONSEBODYPACKAGESTATES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESRESPONSEBODYPACKAGESTATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePackageStatesResponseBodyPackageStates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePackageStatesResponseBodyPackageStates& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationInfo, configurationInfo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Publisher, publisher_);
      DARABONBA_PTR_TO_JSON(TemplateCategory, templateCategory_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TemplateVersionName, templateVersionName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePackageStatesResponseBodyPackageStates& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationInfo, configurationInfo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Publisher, publisher_);
      DARABONBA_PTR_FROM_JSON(TemplateCategory, templateCategory_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateVersionName, templateVersionName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListInstancePackageStatesResponseBodyPackageStates() = default ;
    ListInstancePackageStatesResponseBodyPackageStates(const ListInstancePackageStatesResponseBodyPackageStates &) = default ;
    ListInstancePackageStatesResponseBodyPackageStates(ListInstancePackageStatesResponseBodyPackageStates &&) = default ;
    ListInstancePackageStatesResponseBodyPackageStates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePackageStatesResponseBodyPackageStates() = default ;
    ListInstancePackageStatesResponseBodyPackageStates& operator=(const ListInstancePackageStatesResponseBodyPackageStates &) = default ;
    ListInstancePackageStatesResponseBodyPackageStates& operator=(ListInstancePackageStatesResponseBodyPackageStates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationInfo_ == nullptr
        && return this->description_ == nullptr && return this->parameters_ == nullptr && return this->publisher_ == nullptr && return this->templateCategory_ == nullptr && return this->templateId_ == nullptr
        && return this->templateName_ == nullptr && return this->templateVersion_ == nullptr && return this->templateVersionName_ == nullptr && return this->updateTime_ == nullptr; };
    // configurationInfo Field Functions 
    bool hasConfigurationInfo() const { return this->configurationInfo_ != nullptr;};
    void deleteConfigurationInfo() { this->configurationInfo_ = nullptr;};
    inline string configurationInfo() const { DARABONBA_PTR_GET_DEFAULT(configurationInfo_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setConfigurationInfo(string configurationInfo) { DARABONBA_PTR_SET_VALUE(configurationInfo_, configurationInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // publisher Field Functions 
    bool hasPublisher() const { return this->publisher_ != nullptr;};
    void deletePublisher() { this->publisher_ = nullptr;};
    inline string publisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


    // templateCategory Field Functions 
    bool hasTemplateCategory() const { return this->templateCategory_ != nullptr;};
    void deleteTemplateCategory() { this->templateCategory_ = nullptr;};
    inline string templateCategory() const { DARABONBA_PTR_GET_DEFAULT(templateCategory_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setTemplateCategory(string templateCategory) { DARABONBA_PTR_SET_VALUE(templateCategory_, templateCategory) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // templateVersionName Field Functions 
    bool hasTemplateVersionName() const { return this->templateVersionName_ != nullptr;};
    void deleteTemplateVersionName() { this->templateVersionName_ = nullptr;};
    inline string templateVersionName() const { DARABONBA_PTR_GET_DEFAULT(templateVersionName_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setTemplateVersionName(string templateVersionName) { DARABONBA_PTR_SET_VALUE(templateVersionName_, templateVersionName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListInstancePackageStatesResponseBodyPackageStates& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> configurationInfo_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // Parameters
    std::shared_ptr<string> parameters_ = nullptr;
    // Publisher
    std::shared_ptr<string> publisher_ = nullptr;
    // Template type
    std::shared_ptr<string> templateCategory_ = nullptr;
    // Template ID
    std::shared_ptr<string> templateId_ = nullptr;
    // Template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // Template version number
    std::shared_ptr<string> templateVersion_ = nullptr;
    // Template version name
    std::shared_ptr<string> templateVersionName_ = nullptr;
    // Update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
