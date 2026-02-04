// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeGadInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeGadInstancesResponseBody() = default ;
    DescribeGadInstancesResponseBody(const DescribeGadInstancesResponseBody &) = default ;
    DescribeGadInstancesResponseBody(DescribeGadInstancesResponseBody &&) = default ;
    DescribeGadInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBody() = default ;
    DescribeGadInstancesResponseBody& operator=(const DescribeGadInstancesResponseBody &) = default ;
    DescribeGadInstancesResponseBody& operator=(DescribeGadInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Instances, instances_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
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
      class InstancesItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstancesItem& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DbEngineType, dbEngineType_);
          DARABONBA_PTR_TO_JSON(DbInstanceCount, dbInstanceCount_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceRegion, instanceRegion_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(MasterDbInstanceId, masterDbInstanceId_);
          DARABONBA_PTR_TO_JSON(MasterDbInstanceName, masterDbInstanceName_);
          DARABONBA_PTR_TO_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
          DARABONBA_PTR_TO_JSON(MasterDbInstanceZoneId, masterDbInstanceZoneId_);
          DARABONBA_PTR_TO_JSON(MasterEngineArchType, masterEngineArchType_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InstancesItem& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DbEngineType, dbEngineType_);
          DARABONBA_PTR_FROM_JSON(DbInstanceCount, dbInstanceCount_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceRegion, instanceRegion_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(MasterDbInstanceId, masterDbInstanceId_);
          DARABONBA_PTR_FROM_JSON(MasterDbInstanceName, masterDbInstanceName_);
          DARABONBA_PTR_FROM_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
          DARABONBA_PTR_FROM_JSON(MasterDbInstanceZoneId, masterDbInstanceZoneId_);
          DARABONBA_PTR_FROM_JSON(MasterEngineArchType, masterEngineArchType_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        InstancesItem() = default ;
        InstancesItem(const InstancesItem &) = default ;
        InstancesItem(InstancesItem &&) = default ;
        InstancesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstancesItem() = default ;
        InstancesItem& operator=(const InstancesItem &) = default ;
        InstancesItem& operator=(InstancesItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dbEngineType_ == nullptr && this->dbInstanceCount_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceRegion_ == nullptr
        && this->instanceType_ == nullptr && this->masterDbInstanceId_ == nullptr && this->masterDbInstanceName_ == nullptr && this->masterDbInstanceRegion_ == nullptr && this->masterDbInstanceZoneId_ == nullptr
        && this->masterEngineArchType_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline InstancesItem& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dbEngineType Field Functions 
        bool hasDbEngineType() const { return this->dbEngineType_ != nullptr;};
        void deleteDbEngineType() { this->dbEngineType_ = nullptr;};
        inline string getDbEngineType() const { DARABONBA_PTR_GET_DEFAULT(dbEngineType_, "") };
        inline InstancesItem& setDbEngineType(string dbEngineType) { DARABONBA_PTR_SET_VALUE(dbEngineType_, dbEngineType) };


        // dbInstanceCount Field Functions 
        bool hasDbInstanceCount() const { return this->dbInstanceCount_ != nullptr;};
        void deleteDbInstanceCount() { this->dbInstanceCount_ = nullptr;};
        inline int32_t getDbInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceCount_, 0) };
        inline InstancesItem& setDbInstanceCount(int32_t dbInstanceCount) { DARABONBA_PTR_SET_VALUE(dbInstanceCount_, dbInstanceCount) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstancesItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline InstancesItem& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceRegion Field Functions 
        bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
        void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
        inline string getInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
        inline InstancesItem& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline InstancesItem& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // masterDbInstanceId Field Functions 
        bool hasMasterDbInstanceId() const { return this->masterDbInstanceId_ != nullptr;};
        void deleteMasterDbInstanceId() { this->masterDbInstanceId_ = nullptr;};
        inline string getMasterDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceId_, "") };
        inline InstancesItem& setMasterDbInstanceId(string masterDbInstanceId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceId_, masterDbInstanceId) };


        // masterDbInstanceName Field Functions 
        bool hasMasterDbInstanceName() const { return this->masterDbInstanceName_ != nullptr;};
        void deleteMasterDbInstanceName() { this->masterDbInstanceName_ = nullptr;};
        inline string getMasterDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceName_, "") };
        inline InstancesItem& setMasterDbInstanceName(string masterDbInstanceName) { DARABONBA_PTR_SET_VALUE(masterDbInstanceName_, masterDbInstanceName) };


        // masterDbInstanceRegion Field Functions 
        bool hasMasterDbInstanceRegion() const { return this->masterDbInstanceRegion_ != nullptr;};
        void deleteMasterDbInstanceRegion() { this->masterDbInstanceRegion_ = nullptr;};
        inline string getMasterDbInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceRegion_, "") };
        inline InstancesItem& setMasterDbInstanceRegion(string masterDbInstanceRegion) { DARABONBA_PTR_SET_VALUE(masterDbInstanceRegion_, masterDbInstanceRegion) };


        // masterDbInstanceZoneId Field Functions 
        bool hasMasterDbInstanceZoneId() const { return this->masterDbInstanceZoneId_ != nullptr;};
        void deleteMasterDbInstanceZoneId() { this->masterDbInstanceZoneId_ = nullptr;};
        inline string getMasterDbInstanceZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceZoneId_, "") };
        inline InstancesItem& setMasterDbInstanceZoneId(string masterDbInstanceZoneId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceZoneId_, masterDbInstanceZoneId) };


        // masterEngineArchType Field Functions 
        bool hasMasterEngineArchType() const { return this->masterEngineArchType_ != nullptr;};
        void deleteMasterEngineArchType() { this->masterEngineArchType_ = nullptr;};
        inline int32_t getMasterEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(masterEngineArchType_, 0) };
        inline InstancesItem& setMasterEngineArchType(int32_t masterEngineArchType) { DARABONBA_PTR_SET_VALUE(masterEngineArchType_, masterEngineArchType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline InstancesItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstancesItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> dbEngineType_ {};
        shared_ptr<int32_t> dbInstanceCount_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> instanceRegion_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> masterDbInstanceId_ {};
        shared_ptr<string> masterDbInstanceName_ {};
        shared_ptr<string> masterDbInstanceRegion_ {};
        shared_ptr<string> masterDbInstanceZoneId_ {};
        shared_ptr<int32_t> masterEngineArchType_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->instances_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Instances::InstancesItem> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Instances::InstancesItem>) };
      inline vector<Instances::InstancesItem> getInstances() { DARABONBA_PTR_GET(instances_, vector<Instances::InstancesItem>) };
      inline Instances& setInstances(const vector<Instances::InstancesItem> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Instances& setInstances(vector<Instances::InstancesItem> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    protected:
      shared_ptr<vector<Instances::InstancesItem>> instances_ {};
    };

    virtual bool empty() const override { return this->dynamicCode_ == nullptr
        && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeGadInstancesResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeGadInstancesResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeGadInstancesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeGadInstancesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeGadInstancesResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeGadInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeGadInstancesResponseBody::Instances) };
    inline DescribeGadInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeGadInstancesResponseBody::Instances) };
    inline DescribeGadInstancesResponseBody& setInstances(const DescribeGadInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeGadInstancesResponseBody& setInstances(DescribeGadInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGadInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeGadInstancesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGadInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeGadInstancesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeGadInstancesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<DescribeGadInstancesResponseBody::Instances> instances_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
