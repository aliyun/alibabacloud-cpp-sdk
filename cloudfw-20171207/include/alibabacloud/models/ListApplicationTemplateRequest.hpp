// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListApplicationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateIds, applicationTemplateIds_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateName, applicationTemplateName_);
      DARABONBA_PTR_TO_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
      DARABONBA_PTR_TO_JSON(CustomRuleStatus, customRuleStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(UnknownAction, unknownAction_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateIds, applicationTemplateIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateName, applicationTemplateName_);
      DARABONBA_PTR_FROM_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
      DARABONBA_PTR_FROM_JSON(CustomRuleStatus, customRuleStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(UnknownAction, unknownAction_);
    };
    ListApplicationTemplateRequest() = default ;
    ListApplicationTemplateRequest(const ListApplicationTemplateRequest &) = default ;
    ListApplicationTemplateRequest(ListApplicationTemplateRequest &&) = default ;
    ListApplicationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationTemplateRequest() = default ;
    ListApplicationTemplateRequest& operator=(const ListApplicationTemplateRequest &) = default ;
    ListApplicationTemplateRequest& operator=(ListApplicationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplateIds_ == nullptr
        && this->applicationTemplateName_ == nullptr && this->builtInApplicationStatus_ == nullptr && this->customRuleStatus_ == nullptr && this->description_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->templateStatus_ == nullptr && this->unknownAction_ == nullptr; };
    // applicationTemplateIds Field Functions 
    bool hasApplicationTemplateIds() const { return this->applicationTemplateIds_ != nullptr;};
    void deleteApplicationTemplateIds() { this->applicationTemplateIds_ = nullptr;};
    inline const vector<string> & getApplicationTemplateIds() const { DARABONBA_PTR_GET_CONST(applicationTemplateIds_, vector<string>) };
    inline vector<string> getApplicationTemplateIds() { DARABONBA_PTR_GET(applicationTemplateIds_, vector<string>) };
    inline ListApplicationTemplateRequest& setApplicationTemplateIds(const vector<string> & applicationTemplateIds) { DARABONBA_PTR_SET_VALUE(applicationTemplateIds_, applicationTemplateIds) };
    inline ListApplicationTemplateRequest& setApplicationTemplateIds(vector<string> && applicationTemplateIds) { DARABONBA_PTR_SET_RVALUE(applicationTemplateIds_, applicationTemplateIds) };


    // applicationTemplateName Field Functions 
    bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
    void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
    inline string getApplicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
    inline ListApplicationTemplateRequest& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


    // builtInApplicationStatus Field Functions 
    bool hasBuiltInApplicationStatus() const { return this->builtInApplicationStatus_ != nullptr;};
    void deleteBuiltInApplicationStatus() { this->builtInApplicationStatus_ = nullptr;};
    inline string getBuiltInApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(builtInApplicationStatus_, "") };
    inline ListApplicationTemplateRequest& setBuiltInApplicationStatus(string builtInApplicationStatus) { DARABONBA_PTR_SET_VALUE(builtInApplicationStatus_, builtInApplicationStatus) };


    // customRuleStatus Field Functions 
    bool hasCustomRuleStatus() const { return this->customRuleStatus_ != nullptr;};
    void deleteCustomRuleStatus() { this->customRuleStatus_ = nullptr;};
    inline string getCustomRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(customRuleStatus_, "") };
    inline ListApplicationTemplateRequest& setCustomRuleStatus(string customRuleStatus) { DARABONBA_PTR_SET_VALUE(customRuleStatus_, customRuleStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationTemplateRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationTemplateRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline ListApplicationTemplateRequest& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // unknownAction Field Functions 
    bool hasUnknownAction() const { return this->unknownAction_ != nullptr;};
    void deleteUnknownAction() { this->unknownAction_ = nullptr;};
    inline string getUnknownAction() const { DARABONBA_PTR_GET_DEFAULT(unknownAction_, "") };
    inline ListApplicationTemplateRequest& setUnknownAction(string unknownAction) { DARABONBA_PTR_SET_VALUE(unknownAction_, unknownAction) };


  protected:
    // The IDs of the application templates for batch exact matching.
    shared_ptr<vector<string>> applicationTemplateIds_ {};
    // The name of the application template for fuzzy matching.
    shared_ptr<string> applicationTemplateName_ {};
    // The switch status of built-in application control for exact matching. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    shared_ptr<string> builtInApplicationStatus_ {};
    // The switch status of custom application rules for exact matching. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    shared_ptr<string> customRuleStatus_ {};
    // The description of the application template for fuzzy matching.
    shared_ptr<string> description_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. The value must be greater than or equal to 1. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The overall switch status of the application template for exact matching. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    shared_ptr<string> templateStatus_ {};
    // The action for unidentified applications for exact matching. Valid values:
    // - **Allow**: Allow.
    // - **Alert**: Monitor.
    // - **Deny**: Block.
    shared_ptr<string> unknownAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
