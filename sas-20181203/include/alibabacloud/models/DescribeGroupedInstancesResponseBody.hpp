// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupedInstancesResponseBody() = default ;
    DescribeGroupedInstancesResponseBody(const DescribeGroupedInstancesResponseBody &) = default ;
    DescribeGroupedInstancesResponseBody(DescribeGroupedInstancesResponseBody &&) = default ;
    DescribeGroupedInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedInstancesResponseBody() = default ;
    DescribeGroupedInstancesResponseBody& operator=(const DescribeGroupedInstancesResponseBody &) = default ;
    DescribeGroupedInstancesResponseBody& operator=(DescribeGroupedInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(AsapVulInstanceCount, asapVulInstanceCount_);
        DARABONBA_PTR_TO_JSON(AuthVersionCheckCount, authVersionCheckCount_);
        DARABONBA_PTR_TO_JSON(FieldAliasName, fieldAliasName_);
        DARABONBA_PTR_TO_JSON(GroupFlag, groupFlag_);
        DARABONBA_PTR_TO_JSON(InstanceCoreCount, instanceCoreCount_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
        DARABONBA_PTR_TO_JSON(UnProtectedInstanceCount, unProtectedInstanceCount_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(AsapVulInstanceCount, asapVulInstanceCount_);
        DARABONBA_PTR_FROM_JSON(AuthVersionCheckCount, authVersionCheckCount_);
        DARABONBA_PTR_FROM_JSON(FieldAliasName, fieldAliasName_);
        DARABONBA_PTR_FROM_JSON(GroupFlag, groupFlag_);
        DARABONBA_PTR_FROM_JSON(InstanceCoreCount, instanceCoreCount_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
        DARABONBA_PTR_FROM_JSON(UnProtectedInstanceCount, unProtectedInstanceCount_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asapVulInstanceCount_ == nullptr
        && this->authVersionCheckCount_ == nullptr && this->fieldAliasName_ == nullptr && this->groupFlag_ == nullptr && this->instanceCoreCount_ == nullptr && this->instanceCount_ == nullptr
        && this->os_ == nullptr && this->riskInstanceCount_ == nullptr && this->unProtectedInstanceCount_ == nullptr; };
      // asapVulInstanceCount Field Functions 
      bool hasAsapVulInstanceCount() const { return this->asapVulInstanceCount_ != nullptr;};
      void deleteAsapVulInstanceCount() { this->asapVulInstanceCount_ = nullptr;};
      inline int64_t getAsapVulInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(asapVulInstanceCount_, 0L) };
      inline Instances& setAsapVulInstanceCount(int64_t asapVulInstanceCount) { DARABONBA_PTR_SET_VALUE(asapVulInstanceCount_, asapVulInstanceCount) };


      // authVersionCheckCount Field Functions 
      bool hasAuthVersionCheckCount() const { return this->authVersionCheckCount_ != nullptr;};
      void deleteAuthVersionCheckCount() { this->authVersionCheckCount_ = nullptr;};
      inline int32_t getAuthVersionCheckCount() const { DARABONBA_PTR_GET_DEFAULT(authVersionCheckCount_, 0) };
      inline Instances& setAuthVersionCheckCount(int32_t authVersionCheckCount) { DARABONBA_PTR_SET_VALUE(authVersionCheckCount_, authVersionCheckCount) };


      // fieldAliasName Field Functions 
      bool hasFieldAliasName() const { return this->fieldAliasName_ != nullptr;};
      void deleteFieldAliasName() { this->fieldAliasName_ = nullptr;};
      inline string getFieldAliasName() const { DARABONBA_PTR_GET_DEFAULT(fieldAliasName_, "") };
      inline Instances& setFieldAliasName(string fieldAliasName) { DARABONBA_PTR_SET_VALUE(fieldAliasName_, fieldAliasName) };


      // groupFlag Field Functions 
      bool hasGroupFlag() const { return this->groupFlag_ != nullptr;};
      void deleteGroupFlag() { this->groupFlag_ = nullptr;};
      inline int32_t getGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(groupFlag_, 0) };
      inline Instances& setGroupFlag(int32_t groupFlag) { DARABONBA_PTR_SET_VALUE(groupFlag_, groupFlag) };


      // instanceCoreCount Field Functions 
      bool hasInstanceCoreCount() const { return this->instanceCoreCount_ != nullptr;};
      void deleteInstanceCoreCount() { this->instanceCoreCount_ = nullptr;};
      inline int64_t getInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCoreCount_, 0L) };
      inline Instances& setInstanceCoreCount(int64_t instanceCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCoreCount_, instanceCoreCount) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline string getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
      inline Instances& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Instances& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // riskInstanceCount Field Functions 
      bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
      void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
      inline string getRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, "") };
      inline Instances& setRiskInstanceCount(string riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


      // unProtectedInstanceCount Field Functions 
      bool hasUnProtectedInstanceCount() const { return this->unProtectedInstanceCount_ != nullptr;};
      void deleteUnProtectedInstanceCount() { this->unProtectedInstanceCount_ = nullptr;};
      inline string getUnProtectedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(unProtectedInstanceCount_, "") };
      inline Instances& setUnProtectedInstanceCount(string unProtectedInstanceCount) { DARABONBA_PTR_SET_VALUE(unProtectedInstanceCount_, unProtectedInstanceCount) };


    protected:
      // The number of assets on which high-risk vulnerabilities are detected.
      shared_ptr<int64_t> asapVulInstanceCount_ {};
      // The number of assets that are protected by the specified edition.
      shared_ptr<int32_t> authVersionCheckCount_ {};
      // The name of the server group.
      shared_ptr<string> fieldAliasName_ {};
      // The type of the server group. Valid values:
      // 
      // *   **0**: the default group
      // *   **1**: other group
      shared_ptr<int32_t> groupFlag_ {};
      // The number of cores of assets in the specified asset type.
      // 
      // >  If the **MachineTypes** request parameter is not specified, the value of the InstanceCoreCount parameter indicates the total number of cores of assets within your account.
      shared_ptr<int64_t> instanceCoreCount_ {};
      // The total number of assets that belong to the specified type.
      // 
      // >  If the **MachineTypes** request parameter is not specified, the value of the InstanceCount parameter is the total number of your assets.
      shared_ptr<string> instanceCount_ {};
      // The operating system type of the asset. Valid values:
      // 
      // * **windows**
      // * **linux**
      // 
      // > This parameter is returned only when Lang is set to zh.
      shared_ptr<string> os_ {};
      // The number of assets that are at risk.
      shared_ptr<string> riskInstanceCount_ {};
      // The number of assets that are not protected by Security Center.
      shared_ptr<string> unProtectedInstanceCount_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeGroupedInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeGroupedInstancesResponseBody::Instances>) };
    inline vector<DescribeGroupedInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeGroupedInstancesResponseBody::Instances>) };
    inline DescribeGroupedInstancesResponseBody& setInstances(const vector<DescribeGroupedInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeGroupedInstancesResponseBody& setInstances(vector<DescribeGroupedInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeGroupedInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeGroupedInstancesResponseBody::PageInfo) };
    inline DescribeGroupedInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeGroupedInstancesResponseBody::PageInfo) };
    inline DescribeGroupedInstancesResponseBody& setPageInfo(const DescribeGroupedInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeGroupedInstancesResponseBody& setPageInfo(DescribeGroupedInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the assets.
    shared_ptr<vector<DescribeGroupedInstancesResponseBody::Instances>> instances_ {};
    // The pagination information.
    shared_ptr<DescribeGroupedInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
