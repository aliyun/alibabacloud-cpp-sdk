// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODYSYSTEMPROPERTYTEMPLATEMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODYSYSTEMPROPERTYTEMPLATEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemPropertyInfo, systemPropertyInfo_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyInfo, systemPropertyInfo_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel() = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel(const DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel &) = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel(DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel &&) = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel() = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& operator=(const DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel &) = default ;
    DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& operator=(DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableAuto_ != nullptr
        && this->filePath_ != nullptr && this->status_ != nullptr && this->systemPropertyInfo_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr; };
    // enableAuto Field Functions 
    bool hasEnableAuto() const { return this->enableAuto_ != nullptr;};
    void deleteEnableAuto() { this->enableAuto_ = nullptr;};
    inline bool enableAuto() const { DARABONBA_PTR_GET_DEFAULT(enableAuto_, false) };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setEnableAuto(bool enableAuto) { DARABONBA_PTR_SET_VALUE(enableAuto_, enableAuto) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemPropertyInfo Field Functions 
    bool hasSystemPropertyInfo() const { return this->systemPropertyInfo_ != nullptr;};
    void deleteSystemPropertyInfo() { this->systemPropertyInfo_ = nullptr;};
    inline const Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo & systemPropertyInfo() const { DARABONBA_PTR_GET_CONST(systemPropertyInfo_, Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo) };
    inline Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo systemPropertyInfo() { DARABONBA_PTR_GET(systemPropertyInfo_, Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo) };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setSystemPropertyInfo(const Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo & systemPropertyInfo) { DARABONBA_PTR_SET_VALUE(systemPropertyInfo_, systemPropertyInfo) };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setSystemPropertyInfo(Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo && systemPropertyInfo) { DARABONBA_PTR_SET_RVALUE(systemPropertyInfo_, systemPropertyInfo) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<bool> enableAuto_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo> systemPropertyInfo_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
