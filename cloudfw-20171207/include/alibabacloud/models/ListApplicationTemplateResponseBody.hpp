// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONTEMPLATERESPONSEBODY_HPP_
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
  class ListApplicationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplates, applicationTemplates_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplates, applicationTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationTemplateResponseBody() = default ;
    ListApplicationTemplateResponseBody(const ListApplicationTemplateResponseBody &) = default ;
    ListApplicationTemplateResponseBody(ListApplicationTemplateResponseBody &&) = default ;
    ListApplicationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationTemplateResponseBody() = default ;
    ListApplicationTemplateResponseBody& operator=(const ListApplicationTemplateResponseBody &) = default ;
    ListApplicationTemplateResponseBody& operator=(ListApplicationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_TO_JSON(ApplicationTemplateName, applicationTemplateName_);
        DARABONBA_PTR_TO_JSON(BuiltInApplicationActionStatistics, builtInApplicationActionStatistics_);
        DARABONBA_PTR_TO_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomRuleCount, customRuleCount_);
        DARABONBA_PTR_TO_JSON(CustomRuleStatus, customRuleStatus_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
        DARABONBA_PTR_TO_JSON(UnknownAction, unknownAction_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
        DARABONBA_PTR_FROM_JSON(ApplicationTemplateName, applicationTemplateName_);
        DARABONBA_PTR_FROM_JSON(BuiltInApplicationActionStatistics, builtInApplicationActionStatistics_);
        DARABONBA_PTR_FROM_JSON(BuiltInApplicationStatus, builtInApplicationStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomRuleCount, customRuleCount_);
        DARABONBA_PTR_FROM_JSON(CustomRuleStatus, customRuleStatus_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
        DARABONBA_PTR_FROM_JSON(UnknownAction, unknownAction_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ApplicationTemplates() = default ;
      ApplicationTemplates(const ApplicationTemplates &) = default ;
      ApplicationTemplates(ApplicationTemplates &&) = default ;
      ApplicationTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationTemplates() = default ;
      ApplicationTemplates& operator=(const ApplicationTemplates &) = default ;
      ApplicationTemplates& operator=(ApplicationTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BuiltInApplicationActionStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuiltInApplicationActionStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(AlertApplicationCount, alertApplicationCount_);
          DARABONBA_PTR_TO_JSON(AllowApplicationCount, allowApplicationCount_);
          DARABONBA_PTR_TO_JSON(DenyApplicationCount, denyApplicationCount_);
        };
        friend void from_json(const Darabonba::Json& j, BuiltInApplicationActionStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertApplicationCount, alertApplicationCount_);
          DARABONBA_PTR_FROM_JSON(AllowApplicationCount, allowApplicationCount_);
          DARABONBA_PTR_FROM_JSON(DenyApplicationCount, denyApplicationCount_);
        };
        BuiltInApplicationActionStatistics() = default ;
        BuiltInApplicationActionStatistics(const BuiltInApplicationActionStatistics &) = default ;
        BuiltInApplicationActionStatistics(BuiltInApplicationActionStatistics &&) = default ;
        BuiltInApplicationActionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuiltInApplicationActionStatistics() = default ;
        BuiltInApplicationActionStatistics& operator=(const BuiltInApplicationActionStatistics &) = default ;
        BuiltInApplicationActionStatistics& operator=(BuiltInApplicationActionStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertApplicationCount_ == nullptr
        && this->allowApplicationCount_ == nullptr && this->denyApplicationCount_ == nullptr; };
        // alertApplicationCount Field Functions 
        bool hasAlertApplicationCount() const { return this->alertApplicationCount_ != nullptr;};
        void deleteAlertApplicationCount() { this->alertApplicationCount_ = nullptr;};
        inline int64_t getAlertApplicationCount() const { DARABONBA_PTR_GET_DEFAULT(alertApplicationCount_, 0L) };
        inline BuiltInApplicationActionStatistics& setAlertApplicationCount(int64_t alertApplicationCount) { DARABONBA_PTR_SET_VALUE(alertApplicationCount_, alertApplicationCount) };


        // allowApplicationCount Field Functions 
        bool hasAllowApplicationCount() const { return this->allowApplicationCount_ != nullptr;};
        void deleteAllowApplicationCount() { this->allowApplicationCount_ = nullptr;};
        inline int64_t getAllowApplicationCount() const { DARABONBA_PTR_GET_DEFAULT(allowApplicationCount_, 0L) };
        inline BuiltInApplicationActionStatistics& setAllowApplicationCount(int64_t allowApplicationCount) { DARABONBA_PTR_SET_VALUE(allowApplicationCount_, allowApplicationCount) };


        // denyApplicationCount Field Functions 
        bool hasDenyApplicationCount() const { return this->denyApplicationCount_ != nullptr;};
        void deleteDenyApplicationCount() { this->denyApplicationCount_ = nullptr;};
        inline int64_t getDenyApplicationCount() const { DARABONBA_PTR_GET_DEFAULT(denyApplicationCount_, 0L) };
        inline BuiltInApplicationActionStatistics& setDenyApplicationCount(int64_t denyApplicationCount) { DARABONBA_PTR_SET_VALUE(denyApplicationCount_, denyApplicationCount) };


      protected:
        // The number of built-in applications whose final effective action is Alert.
        shared_ptr<int64_t> alertApplicationCount_ {};
        // The number of built-in applications whose final effective action is Allow.
        shared_ptr<int64_t> allowApplicationCount_ {};
        // The number of built-in applications whose final effective action is Deny.
        shared_ptr<int64_t> denyApplicationCount_ {};
      };

      virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->applicationTemplateName_ == nullptr && this->builtInApplicationActionStatistics_ == nullptr && this->builtInApplicationStatus_ == nullptr && this->createTime_ == nullptr && this->customRuleCount_ == nullptr
        && this->customRuleStatus_ == nullptr && this->description_ == nullptr && this->templateStatus_ == nullptr && this->unknownAction_ == nullptr && this->updateTime_ == nullptr; };
      // applicationTemplateId Field Functions 
      bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
      void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
      inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
      inline ApplicationTemplates& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


      // applicationTemplateName Field Functions 
      bool hasApplicationTemplateName() const { return this->applicationTemplateName_ != nullptr;};
      void deleteApplicationTemplateName() { this->applicationTemplateName_ = nullptr;};
      inline string getApplicationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateName_, "") };
      inline ApplicationTemplates& setApplicationTemplateName(string applicationTemplateName) { DARABONBA_PTR_SET_VALUE(applicationTemplateName_, applicationTemplateName) };


      // builtInApplicationActionStatistics Field Functions 
      bool hasBuiltInApplicationActionStatistics() const { return this->builtInApplicationActionStatistics_ != nullptr;};
      void deleteBuiltInApplicationActionStatistics() { this->builtInApplicationActionStatistics_ = nullptr;};
      inline const ApplicationTemplates::BuiltInApplicationActionStatistics & getBuiltInApplicationActionStatistics() const { DARABONBA_PTR_GET_CONST(builtInApplicationActionStatistics_, ApplicationTemplates::BuiltInApplicationActionStatistics) };
      inline ApplicationTemplates::BuiltInApplicationActionStatistics getBuiltInApplicationActionStatistics() { DARABONBA_PTR_GET(builtInApplicationActionStatistics_, ApplicationTemplates::BuiltInApplicationActionStatistics) };
      inline ApplicationTemplates& setBuiltInApplicationActionStatistics(const ApplicationTemplates::BuiltInApplicationActionStatistics & builtInApplicationActionStatistics) { DARABONBA_PTR_SET_VALUE(builtInApplicationActionStatistics_, builtInApplicationActionStatistics) };
      inline ApplicationTemplates& setBuiltInApplicationActionStatistics(ApplicationTemplates::BuiltInApplicationActionStatistics && builtInApplicationActionStatistics) { DARABONBA_PTR_SET_RVALUE(builtInApplicationActionStatistics_, builtInApplicationActionStatistics) };


      // builtInApplicationStatus Field Functions 
      bool hasBuiltInApplicationStatus() const { return this->builtInApplicationStatus_ != nullptr;};
      void deleteBuiltInApplicationStatus() { this->builtInApplicationStatus_ = nullptr;};
      inline string getBuiltInApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(builtInApplicationStatus_, "") };
      inline ApplicationTemplates& setBuiltInApplicationStatus(string builtInApplicationStatus) { DARABONBA_PTR_SET_VALUE(builtInApplicationStatus_, builtInApplicationStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customRuleCount Field Functions 
      bool hasCustomRuleCount() const { return this->customRuleCount_ != nullptr;};
      void deleteCustomRuleCount() { this->customRuleCount_ = nullptr;};
      inline int64_t getCustomRuleCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleCount_, 0L) };
      inline ApplicationTemplates& setCustomRuleCount(int64_t customRuleCount) { DARABONBA_PTR_SET_VALUE(customRuleCount_, customRuleCount) };


      // customRuleStatus Field Functions 
      bool hasCustomRuleStatus() const { return this->customRuleStatus_ != nullptr;};
      void deleteCustomRuleStatus() { this->customRuleStatus_ = nullptr;};
      inline string getCustomRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(customRuleStatus_, "") };
      inline ApplicationTemplates& setCustomRuleStatus(string customRuleStatus) { DARABONBA_PTR_SET_VALUE(customRuleStatus_, customRuleStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // templateStatus Field Functions 
      bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
      void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
      inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
      inline ApplicationTemplates& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


      // unknownAction Field Functions 
      bool hasUnknownAction() const { return this->unknownAction_ != nullptr;};
      void deleteUnknownAction() { this->unknownAction_ = nullptr;};
      inline string getUnknownAction() const { DARABONBA_PTR_GET_DEFAULT(unknownAction_, "") };
      inline ApplicationTemplates& setUnknownAction(string unknownAction) { DARABONBA_PTR_SET_VALUE(unknownAction_, unknownAction) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ApplicationTemplates& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the application template.
      shared_ptr<string> applicationTemplateId_ {};
      // The name of the application template.
      shared_ptr<string> applicationTemplateName_ {};
      // The statistics on built-in applications in the template, categorized by the final effective action.
      shared_ptr<ApplicationTemplates::BuiltInApplicationActionStatistics> builtInApplicationActionStatistics_ {};
      // The switch status of built-in application control. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> builtInApplicationStatus_ {};
      // The creation time of the application template. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> createTime_ {};
      // The number of custom application rules under the template.
      shared_ptr<int64_t> customRuleCount_ {};
      // The switch status of custom application rules. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> customRuleStatus_ {};
      // The description of the application template.
      shared_ptr<string> description_ {};
      // The overall switch status of the application template. Valid values:
      // - **Enable**: Enabled.
      // - **Disable**: Disabled.
      shared_ptr<string> templateStatus_ {};
      // The action for unidentified applications. Valid values:
      // - **Allow**: Allow.
      // - **Alert**: Monitor.
      // - **Deny**: Block.
      shared_ptr<string> unknownAction_ {};
      // The last modification time of the application template. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->applicationTemplates_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationTemplates Field Functions 
    bool hasApplicationTemplates() const { return this->applicationTemplates_ != nullptr;};
    void deleteApplicationTemplates() { this->applicationTemplates_ = nullptr;};
    inline const vector<ListApplicationTemplateResponseBody::ApplicationTemplates> & getApplicationTemplates() const { DARABONBA_PTR_GET_CONST(applicationTemplates_, vector<ListApplicationTemplateResponseBody::ApplicationTemplates>) };
    inline vector<ListApplicationTemplateResponseBody::ApplicationTemplates> getApplicationTemplates() { DARABONBA_PTR_GET(applicationTemplates_, vector<ListApplicationTemplateResponseBody::ApplicationTemplates>) };
    inline ListApplicationTemplateResponseBody& setApplicationTemplates(const vector<ListApplicationTemplateResponseBody::ApplicationTemplates> & applicationTemplates) { DARABONBA_PTR_SET_VALUE(applicationTemplates_, applicationTemplates) };
    inline ListApplicationTemplateResponseBody& setApplicationTemplates(vector<ListApplicationTemplateResponseBody::ApplicationTemplates> && applicationTemplates) { DARABONBA_PTR_SET_RVALUE(applicationTemplates_, applicationTemplates) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationTemplateResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationTemplateResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationTemplateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of application templates.
    shared_ptr<vector<ListApplicationTemplateResponseBody::ApplicationTemplates>> applicationTemplates_ {};
    // The current page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of application templates that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
