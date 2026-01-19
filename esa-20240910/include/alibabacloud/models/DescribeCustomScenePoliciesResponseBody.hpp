// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMSCENEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMSCENEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeCustomScenePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomScenePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomScenePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCustomScenePoliciesResponseBody() = default ;
    DescribeCustomScenePoliciesResponseBody(const DescribeCustomScenePoliciesResponseBody &) = default ;
    DescribeCustomScenePoliciesResponseBody(DescribeCustomScenePoliciesResponseBody &&) = default ;
    DescribeCustomScenePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomScenePoliciesResponseBody() = default ;
    DescribeCustomScenePoliciesResponseBody& operator=(const DescribeCustomScenePoliciesResponseBody &) = default ;
    DescribeCustomScenePoliciesResponseBody& operator=(DescribeCustomScenePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataModule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Objects, objects_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Objects, objects_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
      };
      DataModule() = default ;
      DataModule(const DataModule &) = default ;
      DataModule(DataModule &&) = default ;
      DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataModule() = default ;
      DataModule& operator=(const DataModule &) = default ;
      DataModule& operator=(DataModule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->name_ == nullptr && this->objects_ == nullptr && this->policyId_ == nullptr && this->siteIds_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->template_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline DataModule& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataModule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objects Field Functions 
      bool hasObjects() const { return this->objects_ != nullptr;};
      void deleteObjects() { this->objects_ = nullptr;};
      inline const vector<string> & getObjects() const { DARABONBA_PTR_GET_CONST(objects_, vector<string>) };
      inline vector<string> getObjects() { DARABONBA_PTR_GET(objects_, vector<string>) };
      inline DataModule& setObjects(const vector<string> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
      inline DataModule& setObjects(vector<string> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline DataModule& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // siteIds Field Functions 
      bool hasSiteIds() const { return this->siteIds_ != nullptr;};
      void deleteSiteIds() { this->siteIds_ = nullptr;};
      inline string getSiteIds() const { DARABONBA_PTR_GET_DEFAULT(siteIds_, "") };
      inline DataModule& setSiteIds(string siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline DataModule& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline DataModule& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    protected:
      // The time when the policy expires.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The name of the scenario-specific policy.
      shared_ptr<string> name_ {};
      // The IDs of websites that are associated with the policy.
      shared_ptr<vector<string>> objects_ {};
      // The policy ID.
      shared_ptr<int64_t> policyId_ {};
      shared_ptr<string> siteIds_ {};
      // The time when the policy takes effect.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The status of the policy. Valid values:
      // 
      // *   **Disabled**
      // *   **Pending**
      // *   **Running**
      // *   **Expired**
      shared_ptr<string> status_ {};
      // The name of the policy template. Valid value:
      // 
      // *   **promotion**: major events.
      shared_ptr<string> template_ {};
    };

    virtual bool empty() const override { return this->dataModule_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->quota_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<DescribeCustomScenePoliciesResponseBody::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DescribeCustomScenePoliciesResponseBody::DataModule>) };
    inline vector<DescribeCustomScenePoliciesResponseBody::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DescribeCustomScenePoliciesResponseBody::DataModule>) };
    inline DescribeCustomScenePoliciesResponseBody& setDataModule(const vector<DescribeCustomScenePoliciesResponseBody::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeCustomScenePoliciesResponseBody& setDataModule(vector<DescribeCustomScenePoliciesResponseBody::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCustomScenePoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCustomScenePoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline DescribeCustomScenePoliciesResponseBody& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomScenePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCustomScenePoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The scenario-specific policies.
    shared_ptr<vector<DescribeCustomScenePoliciesResponseBody::DataModule>> dataModule_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The policy quota.
    shared_ptr<int32_t> quota_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
