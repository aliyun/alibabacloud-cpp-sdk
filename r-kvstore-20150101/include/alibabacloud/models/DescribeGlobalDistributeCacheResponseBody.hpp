// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDISTRIBUTECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDISTRIBUTECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeGlobalDistributeCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDistributeCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalDistributeCaches, globalDistributeCaches_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDistributeCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalDistributeCaches, globalDistributeCaches_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeGlobalDistributeCacheResponseBody() = default ;
    DescribeGlobalDistributeCacheResponseBody(const DescribeGlobalDistributeCacheResponseBody &) = default ;
    DescribeGlobalDistributeCacheResponseBody(DescribeGlobalDistributeCacheResponseBody &&) = default ;
    DescribeGlobalDistributeCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDistributeCacheResponseBody() = default ;
    DescribeGlobalDistributeCacheResponseBody& operator=(const DescribeGlobalDistributeCacheResponseBody &) = default ;
    DescribeGlobalDistributeCacheResponseBody& operator=(DescribeGlobalDistributeCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalDistributeCaches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalDistributeCaches& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalInstanceId, globalInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubInstances, subInstances_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalDistributeCaches& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalInstanceId, globalInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubInstances, subInstances_);
      };
      GlobalDistributeCaches() = default ;
      GlobalDistributeCaches(const GlobalDistributeCaches &) = default ;
      GlobalDistributeCaches(GlobalDistributeCaches &&) = default ;
      GlobalDistributeCaches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalDistributeCaches() = default ;
      GlobalDistributeCaches& operator=(const GlobalDistributeCaches &) = default ;
      GlobalDistributeCaches& operator=(GlobalDistributeCaches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubInstances& obj) { 
          DARABONBA_PTR_TO_JSON(GlobalInstanceId, globalInstanceId_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, SubInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(GlobalInstanceId, globalInstanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        SubInstances() = default ;
        SubInstances(const SubInstances &) = default ;
        SubInstances(SubInstances &&) = default ;
        SubInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubInstances() = default ;
        SubInstances& operator=(const SubInstances &) = default ;
        SubInstances& operator=(SubInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->globalInstanceId_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceID_ == nullptr && this->instanceStatus_ == nullptr && this->regionId_ == nullptr; };
        // globalInstanceId Field Functions 
        bool hasGlobalInstanceId() const { return this->globalInstanceId_ != nullptr;};
        void deleteGlobalInstanceId() { this->globalInstanceId_ = nullptr;};
        inline string getGlobalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalInstanceId_, "") };
        inline SubInstances& setGlobalInstanceId(string globalInstanceId) { DARABONBA_PTR_SET_VALUE(globalInstanceId_, globalInstanceId) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline SubInstances& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline SubInstances& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline SubInstances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SubInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The ID of the distributed instance.
        shared_ptr<string> globalInstanceId_ {};
        // The instance type of the child instance. For more information, see the following topics:
        // 
        // *   [Standard DRAM-based instances](https://help.aliyun.com/document_detail/145228.html)
        // *   [Cluster DRAM-based instances](https://help.aliyun.com/document_detail/150458.html)
        // *   [Read/write splitting DRAM-based instances](https://help.aliyun.com/document_detail/150459.html)
        shared_ptr<string> instanceClass_ {};
        // The ID of the child instance.
        shared_ptr<string> instanceID_ {};
        // The state of the child instance. Valid values:
        // 
        // *   **Normal**: The instance is normal.
        // *   **Creating**: The instance is being created.
        // *   **Changing**: The configurations of the instance are being changed.
        // *   **Inactive**: The instance is disabled.
        // *   **Flushing**: The instance is being released.
        // *   **Released**: The instance is released.
        // *   **Transforming**: The billing method of the instance is changing.
        // *   **Unavailable**: The instance is suspended.
        // *   **Error**: The instance failed to be created.
        // *   **Migrating**: The instance is being migrated.
        // *   **BackupRecovering**: The instance is being restored from a backup.
        // *   **MinorVersionUpgrading**: The minor version of the instance is being updated.
        // *   **NetworkModifying**: The network type of the instance is being changed.
        // *   **SSLModifying**: The SSL certificate of the instance is being changed.
        // *   **MajorVersionUpgrading**: The major version of the instance is being upgraded. The instance remains available during the upgrade.
        // 
        // >  For more information about instance states, see [Instance states and impacts](https://help.aliyun.com/document_detail/200740.html).
        shared_ptr<string> instanceStatus_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->globalInstanceId_ == nullptr
        && this->status_ == nullptr && this->subInstances_ == nullptr; };
      // globalInstanceId Field Functions 
      bool hasGlobalInstanceId() const { return this->globalInstanceId_ != nullptr;};
      void deleteGlobalInstanceId() { this->globalInstanceId_ = nullptr;};
      inline string getGlobalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalInstanceId_, "") };
      inline GlobalDistributeCaches& setGlobalInstanceId(string globalInstanceId) { DARABONBA_PTR_SET_VALUE(globalInstanceId_, globalInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GlobalDistributeCaches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subInstances Field Functions 
      bool hasSubInstances() const { return this->subInstances_ != nullptr;};
      void deleteSubInstances() { this->subInstances_ = nullptr;};
      inline const vector<GlobalDistributeCaches::SubInstances> & getSubInstances() const { DARABONBA_PTR_GET_CONST(subInstances_, vector<GlobalDistributeCaches::SubInstances>) };
      inline vector<GlobalDistributeCaches::SubInstances> getSubInstances() { DARABONBA_PTR_GET(subInstances_, vector<GlobalDistributeCaches::SubInstances>) };
      inline GlobalDistributeCaches& setSubInstances(const vector<GlobalDistributeCaches::SubInstances> & subInstances) { DARABONBA_PTR_SET_VALUE(subInstances_, subInstances) };
      inline GlobalDistributeCaches& setSubInstances(vector<GlobalDistributeCaches::SubInstances> && subInstances) { DARABONBA_PTR_SET_RVALUE(subInstances_, subInstances) };


    protected:
      // The ID of the distributed instance.
      shared_ptr<string> globalInstanceId_ {};
      // The state of the distributed instance. Valid values:
      // 
      // *   **Normal**: The instance is normal.
      // *   **Changing**: The configurations of the instance are being changed.
      // *   **Creating**: The instance is being created.
      shared_ptr<string> status_ {};
      // Details of the child instances.
      shared_ptr<vector<GlobalDistributeCaches::SubInstances>> subInstances_ {};
    };

    virtual bool empty() const override { return this->globalDistributeCaches_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // globalDistributeCaches Field Functions 
    bool hasGlobalDistributeCaches() const { return this->globalDistributeCaches_ != nullptr;};
    void deleteGlobalDistributeCaches() { this->globalDistributeCaches_ = nullptr;};
    inline const vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches> & getGlobalDistributeCaches() const { DARABONBA_PTR_GET_CONST(globalDistributeCaches_, vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches>) };
    inline vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches> getGlobalDistributeCaches() { DARABONBA_PTR_GET(globalDistributeCaches_, vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches>) };
    inline DescribeGlobalDistributeCacheResponseBody& setGlobalDistributeCaches(const vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches> & globalDistributeCaches) { DARABONBA_PTR_SET_VALUE(globalDistributeCaches_, globalDistributeCaches) };
    inline DescribeGlobalDistributeCacheResponseBody& setGlobalDistributeCaches(vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches> && globalDistributeCaches) { DARABONBA_PTR_SET_RVALUE(globalDistributeCaches_, globalDistributeCaches) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalDistributeCacheResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGlobalDistributeCacheResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDistributeCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeGlobalDistributeCacheResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Details of the distributed instance.
    shared_ptr<vector<DescribeGlobalDistributeCacheResponseBody::GlobalDistributeCaches>> globalDistributeCaches_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
