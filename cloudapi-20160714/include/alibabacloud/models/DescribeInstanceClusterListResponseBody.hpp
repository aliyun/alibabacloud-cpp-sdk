// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceClusters, instanceClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceClusters, instanceClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceClusterListResponseBody() = default ;
    DescribeInstanceClusterListResponseBody(const DescribeInstanceClusterListResponseBody &) = default ;
    DescribeInstanceClusterListResponseBody(DescribeInstanceClusterListResponseBody &&) = default ;
    DescribeInstanceClusterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterListResponseBody() = default ;
    DescribeInstanceClusterListResponseBody& operator=(const DescribeInstanceClusterListResponseBody &) = default ;
    DescribeInstanceClusterListResponseBody& operator=(DescribeInstanceClusterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceClusters& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceCluster, instanceCluster_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceCluster, instanceCluster_);
      };
      InstanceClusters() = default ;
      InstanceClusters(const InstanceClusters &) = default ;
      InstanceClusters(InstanceClusters &&) = default ;
      InstanceClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceClusters() = default ;
      InstanceClusters& operator=(const InstanceClusters &) = default ;
      InstanceClusters& operator=(InstanceClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceCluster& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
          DARABONBA_PTR_TO_JSON(InstanceClusterName, instanceClusterName_);
          DARABONBA_PTR_TO_JSON(InstanceClusterStatus, instanceClusterStatus_);
          DARABONBA_PTR_TO_JSON(InstanceClusterType, instanceClusterType_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
          DARABONBA_PTR_FROM_JSON(InstanceClusterName, instanceClusterName_);
          DARABONBA_PTR_FROM_JSON(InstanceClusterStatus, instanceClusterStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceClusterType, instanceClusterType_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        InstanceCluster() = default ;
        InstanceCluster(const InstanceCluster &) = default ;
        InstanceCluster(InstanceCluster &&) = default ;
        InstanceCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceCluster() = default ;
        InstanceCluster& operator=(const InstanceCluster &) = default ;
        InstanceCluster& operator=(InstanceCluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->instanceClusterId_ == nullptr && this->instanceClusterName_ == nullptr && this->instanceClusterStatus_ == nullptr && this->instanceClusterType_ == nullptr
        && this->modifiedTime_ == nullptr && this->regionId_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline InstanceCluster& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline InstanceCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceClusterId Field Functions 
        bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
        void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
        inline string getInstanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
        inline InstanceCluster& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


        // instanceClusterName Field Functions 
        bool hasInstanceClusterName() const { return this->instanceClusterName_ != nullptr;};
        void deleteInstanceClusterName() { this->instanceClusterName_ = nullptr;};
        inline string getInstanceClusterName() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterName_, "") };
        inline InstanceCluster& setInstanceClusterName(string instanceClusterName) { DARABONBA_PTR_SET_VALUE(instanceClusterName_, instanceClusterName) };


        // instanceClusterStatus Field Functions 
        bool hasInstanceClusterStatus() const { return this->instanceClusterStatus_ != nullptr;};
        void deleteInstanceClusterStatus() { this->instanceClusterStatus_ = nullptr;};
        inline string getInstanceClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterStatus_, "") };
        inline InstanceCluster& setInstanceClusterStatus(string instanceClusterStatus) { DARABONBA_PTR_SET_VALUE(instanceClusterStatus_, instanceClusterStatus) };


        // instanceClusterType Field Functions 
        bool hasInstanceClusterType() const { return this->instanceClusterType_ != nullptr;};
        void deleteInstanceClusterType() { this->instanceClusterType_ = nullptr;};
        inline string getInstanceClusterType() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterType_, "") };
        inline InstanceCluster& setInstanceClusterType(string instanceClusterType) { DARABONBA_PTR_SET_VALUE(instanceClusterType_, instanceClusterType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline InstanceCluster& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline InstanceCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The time when the cluster was created. The time is displayed in UTC.
        shared_ptr<string> createdTime_ {};
        // The cluster description.
        shared_ptr<string> description_ {};
        // The cluster ID.
        shared_ptr<string> instanceClusterId_ {};
        // The cluster name.
        shared_ptr<string> instanceClusterName_ {};
        // The cluster status.
        shared_ptr<string> instanceClusterStatus_ {};
        // The cluster type.
        shared_ptr<string> instanceClusterType_ {};
        // The time when the cluster was last modified. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The region ID of the cluster.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->instanceCluster_ == nullptr; };
      // instanceCluster Field Functions 
      bool hasInstanceCluster() const { return this->instanceCluster_ != nullptr;};
      void deleteInstanceCluster() { this->instanceCluster_ = nullptr;};
      inline const vector<InstanceClusters::InstanceCluster> & getInstanceCluster() const { DARABONBA_PTR_GET_CONST(instanceCluster_, vector<InstanceClusters::InstanceCluster>) };
      inline vector<InstanceClusters::InstanceCluster> getInstanceCluster() { DARABONBA_PTR_GET(instanceCluster_, vector<InstanceClusters::InstanceCluster>) };
      inline InstanceClusters& setInstanceCluster(const vector<InstanceClusters::InstanceCluster> & instanceCluster) { DARABONBA_PTR_SET_VALUE(instanceCluster_, instanceCluster) };
      inline InstanceClusters& setInstanceCluster(vector<InstanceClusters::InstanceCluster> && instanceCluster) { DARABONBA_PTR_SET_RVALUE(instanceCluster_, instanceCluster) };


    protected:
      shared_ptr<vector<InstanceClusters::InstanceCluster>> instanceCluster_ {};
    };

    virtual bool empty() const override { return this->instanceClusters_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceClusters Field Functions 
    bool hasInstanceClusters() const { return this->instanceClusters_ != nullptr;};
    void deleteInstanceClusters() { this->instanceClusters_ = nullptr;};
    inline const DescribeInstanceClusterListResponseBody::InstanceClusters & getInstanceClusters() const { DARABONBA_PTR_GET_CONST(instanceClusters_, DescribeInstanceClusterListResponseBody::InstanceClusters) };
    inline DescribeInstanceClusterListResponseBody::InstanceClusters getInstanceClusters() { DARABONBA_PTR_GET(instanceClusters_, DescribeInstanceClusterListResponseBody::InstanceClusters) };
    inline DescribeInstanceClusterListResponseBody& setInstanceClusters(const DescribeInstanceClusterListResponseBody::InstanceClusters & instanceClusters) { DARABONBA_PTR_SET_VALUE(instanceClusters_, instanceClusters) };
    inline DescribeInstanceClusterListResponseBody& setInstanceClusters(DescribeInstanceClusterListResponseBody::InstanceClusters && instanceClusters) { DARABONBA_PTR_SET_RVALUE(instanceClusters_, instanceClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceClusterListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceClusterListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceClusterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceClusterListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance cluster list.
    shared_ptr<DescribeInstanceClusterListResponseBody::InstanceClusters> instanceClusters_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
