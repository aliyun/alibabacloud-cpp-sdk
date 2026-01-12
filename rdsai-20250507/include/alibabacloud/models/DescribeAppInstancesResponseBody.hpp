// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAppInstancesResponseBody() = default ;
    DescribeAppInstancesResponseBody(const DescribeAppInstancesResponseBody &) = default ;
    DescribeAppInstancesResponseBody(DescribeAppInstancesResponseBody &&) = default ;
    DescribeAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppInstancesResponseBody() = default ;
    DescribeAppInstancesResponseBody& operator=(const DescribeAppInstancesResponseBody &) = default ;
    DescribeAppInstancesResponseBody& operator=(DescribeAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_TO_JSON(InstanceMinorVersion, instanceMinorVersion_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(PublicConnectionString, publicConnectionString_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcConnectionString, vpcConnectionString_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_FROM_JSON(InstanceMinorVersion, instanceMinorVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(PublicConnectionString, publicConnectionString_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcConnectionString, vpcConnectionString_);
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
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->appType_ == nullptr && this->DBInstanceName_ == nullptr && this->instanceClass_ == nullptr && this->instanceMinorVersion_ == nullptr && this->instanceName_ == nullptr
        && this->publicConnectionString_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcConnectionString_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Instances& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Instances& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Instances& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // instanceClass Field Functions 
      bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
      void deleteInstanceClass() { this->instanceClass_ = nullptr;};
      inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
      inline Instances& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


      // instanceMinorVersion Field Functions 
      bool hasInstanceMinorVersion() const { return this->instanceMinorVersion_ != nullptr;};
      void deleteInstanceMinorVersion() { this->instanceMinorVersion_ = nullptr;};
      inline string getInstanceMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceMinorVersion_, "") };
      inline Instances& setInstanceMinorVersion(string instanceMinorVersion) { DARABONBA_PTR_SET_VALUE(instanceMinorVersion_, instanceMinorVersion) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // publicConnectionString Field Functions 
      bool hasPublicConnectionString() const { return this->publicConnectionString_ != nullptr;};
      void deletePublicConnectionString() { this->publicConnectionString_ = nullptr;};
      inline string getPublicConnectionString() const { DARABONBA_PTR_GET_DEFAULT(publicConnectionString_, "") };
      inline Instances& setPublicConnectionString(string publicConnectionString) { DARABONBA_PTR_SET_VALUE(publicConnectionString_, publicConnectionString) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Instances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcConnectionString Field Functions 
      bool hasVpcConnectionString() const { return this->vpcConnectionString_ != nullptr;};
      void deleteVpcConnectionString() { this->vpcConnectionString_ = nullptr;};
      inline string getVpcConnectionString() const { DARABONBA_PTR_GET_DEFAULT(vpcConnectionString_, "") };
      inline Instances& setVpcConnectionString(string vpcConnectionString) { DARABONBA_PTR_SET_VALUE(vpcConnectionString_, vpcConnectionString) };


    protected:
      // The name of the AI application.
      shared_ptr<string> appName_ {};
      // The application type. Only **supabase** is supported. For more information, see [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html).
      shared_ptr<string> appType_ {};
      // The ID of the RDS for PostgreSQL instance with which the RDS Supabase instances are associated.
      shared_ptr<string> DBInstanceName_ {};
      // The instance type.
      shared_ptr<string> instanceClass_ {};
      // The minor version number of RDS Supabase instance.
      shared_ptr<string> instanceMinorVersion_ {};
      // The ID of the RDS Supabase instance.
      shared_ptr<string> instanceName_ {};
      // The public endpoint of the AI application.
      shared_ptr<string> publicConnectionString_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The instance status. For more information, see [Instance state table](https://help.aliyun.com/document_detail/2623972.html).
      shared_ptr<string> status_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // The internal endpoint of the AI application.
      shared_ptr<string> vpcConnectionString_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->maxResults_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeAppInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeAppInstancesResponseBody::Instances>) };
    inline vector<DescribeAppInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeAppInstancesResponseBody::Instances>) };
    inline DescribeAppInstancesResponseBody& setInstances(const vector<DescribeAppInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeAppInstancesResponseBody& setInstances(vector<DescribeAppInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeAppInstancesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAppInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAppInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAppInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the RDS Supabase instances.
    shared_ptr<vector<DescribeAppInstancesResponseBody::Instances>> instances_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<int64_t> maxResults_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
