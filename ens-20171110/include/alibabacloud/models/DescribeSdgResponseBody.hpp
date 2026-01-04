// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SDGs, SDGs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SDGs, SDGs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSDGResponseBody() = default ;
    DescribeSDGResponseBody(const DescribeSDGResponseBody &) = default ;
    DescribeSDGResponseBody(DescribeSDGResponseBody &&) = default ;
    DescribeSDGResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGResponseBody() = default ;
    DescribeSDGResponseBody& operator=(const DescribeSDGResponseBody &) = default ;
    DescribeSDGResponseBody& operator=(DescribeSDGResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SDGs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SDGs& obj) { 
        DARABONBA_PTR_TO_JSON(AvaliableRegionIds, avaliableRegionIds_);
        DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
        DARABONBA_PTR_TO_JSON(BillingType, billingType_);
        DARABONBA_PTR_TO_JSON(CreationDiskType, creationDiskType_);
        DARABONBA_PTR_TO_JSON(CreationInstanceId, creationInstanceId_);
        DARABONBA_PTR_TO_JSON(CreationRegionId, creationRegionId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ParentSDGId, parentSDGId_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(PreloadInfos, preloadInfos_);
        DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SDGs& obj) { 
        DARABONBA_PTR_FROM_JSON(AvaliableRegionIds, avaliableRegionIds_);
        DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
        DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
        DARABONBA_PTR_FROM_JSON(CreationDiskType, creationDiskType_);
        DARABONBA_PTR_FROM_JSON(CreationInstanceId, creationInstanceId_);
        DARABONBA_PTR_FROM_JSON(CreationRegionId, creationRegionId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ParentSDGId, parentSDGId_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(PreloadInfos, preloadInfos_);
        DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SDGs() = default ;
      SDGs(const SDGs &) = default ;
      SDGs(SDGs &&) = default ;
      SDGs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SDGs() = default ;
      SDGs& operator=(const SDGs &) = default ;
      SDGs& operator=(SDGs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreloadInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreloadInfos& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RedundantNum, redundantNum_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, PreloadInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RedundantNum, redundantNum_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        PreloadInfos() = default ;
        PreloadInfos(const PreloadInfos &) = default ;
        PreloadInfos(PreloadInfos &&) = default ;
        PreloadInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreloadInfos() = default ;
        PreloadInfos& operator=(const PreloadInfos &) = default ;
        PreloadInfos& operator=(PreloadInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->diskType_ == nullptr && this->namespace_ == nullptr && this->redundantNum_ == nullptr && this->regionId_ == nullptr && this->updateTime_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline PreloadInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline PreloadInfos& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline PreloadInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // redundantNum Field Functions 
        bool hasRedundantNum() const { return this->redundantNum_ != nullptr;};
        void deleteRedundantNum() { this->redundantNum_ = nullptr;};
        inline int32_t getRedundantNum() const { DARABONBA_PTR_GET_DEFAULT(redundantNum_, 0) };
        inline PreloadInfos& setRedundantNum(int32_t redundantNum) { DARABONBA_PTR_SET_VALUE(redundantNum_, redundantNum) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PreloadInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline PreloadInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the SDG was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> diskType_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The number of redundant replicas to quickly respond to shared mounts.
        shared_ptr<int32_t> redundantNum_ {};
        // The ID of the node.
        shared_ptr<string> regionId_ {};
        // The time when the status was last updated.
        shared_ptr<string> updateTime_ {};
      };

      class AvaliableRegionIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvaliableRegionIds& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AvaliableRegionIds& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AvaliableRegionIds() = default ;
        AvaliableRegionIds(const AvaliableRegionIds &) = default ;
        AvaliableRegionIds(AvaliableRegionIds &&) = default ;
        AvaliableRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvaliableRegionIds() = default ;
        AvaliableRegionIds& operator=(const AvaliableRegionIds &) = default ;
        AvaliableRegionIds& operator=(AvaliableRegionIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->regionId_ == nullptr && this->snapshotId_ == nullptr && this->status_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AvaliableRegionIds& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AvaliableRegionIds& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline AvaliableRegionIds& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AvaliableRegionIds& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the SDG was created on the node.
        shared_ptr<string> creationTime_ {};
        // The ID of the node.
        shared_ptr<string> regionId_ {};
        // The ID of the snapshot.
        shared_ptr<string> snapshotId_ {};
        // The status of the SDG on the node. Valid values:
        // 
        // *   **sdg_making**
        // *   **sdg_saving**
        // *   **sdg_copying**
        // *   **failed**
        // *   **success**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->avaliableRegionIds_ == nullptr
        && this->billingCycle_ == nullptr && this->billingType_ == nullptr && this->creationDiskType_ == nullptr && this->creationInstanceId_ == nullptr && this->creationRegionId_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->parentSDGId_ == nullptr && this->performanceLevel_ == nullptr && this->preloadInfos_ == nullptr
        && this->SDGId_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // avaliableRegionIds Field Functions 
      bool hasAvaliableRegionIds() const { return this->avaliableRegionIds_ != nullptr;};
      void deleteAvaliableRegionIds() { this->avaliableRegionIds_ = nullptr;};
      inline const vector<SDGs::AvaliableRegionIds> & getAvaliableRegionIds() const { DARABONBA_PTR_GET_CONST(avaliableRegionIds_, vector<SDGs::AvaliableRegionIds>) };
      inline vector<SDGs::AvaliableRegionIds> getAvaliableRegionIds() { DARABONBA_PTR_GET(avaliableRegionIds_, vector<SDGs::AvaliableRegionIds>) };
      inline SDGs& setAvaliableRegionIds(const vector<SDGs::AvaliableRegionIds> & avaliableRegionIds) { DARABONBA_PTR_SET_VALUE(avaliableRegionIds_, avaliableRegionIds) };
      inline SDGs& setAvaliableRegionIds(vector<SDGs::AvaliableRegionIds> && avaliableRegionIds) { DARABONBA_PTR_SET_RVALUE(avaliableRegionIds_, avaliableRegionIds) };


      // billingCycle Field Functions 
      bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
      void deleteBillingCycle() { this->billingCycle_ = nullptr;};
      inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
      inline SDGs& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


      // billingType Field Functions 
      bool hasBillingType() const { return this->billingType_ != nullptr;};
      void deleteBillingType() { this->billingType_ = nullptr;};
      inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
      inline SDGs& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


      // creationDiskType Field Functions 
      bool hasCreationDiskType() const { return this->creationDiskType_ != nullptr;};
      void deleteCreationDiskType() { this->creationDiskType_ = nullptr;};
      inline string getCreationDiskType() const { DARABONBA_PTR_GET_DEFAULT(creationDiskType_, "") };
      inline SDGs& setCreationDiskType(string creationDiskType) { DARABONBA_PTR_SET_VALUE(creationDiskType_, creationDiskType) };


      // creationInstanceId Field Functions 
      bool hasCreationInstanceId() const { return this->creationInstanceId_ != nullptr;};
      void deleteCreationInstanceId() { this->creationInstanceId_ = nullptr;};
      inline string getCreationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(creationInstanceId_, "") };
      inline SDGs& setCreationInstanceId(string creationInstanceId) { DARABONBA_PTR_SET_VALUE(creationInstanceId_, creationInstanceId) };


      // creationRegionId Field Functions 
      bool hasCreationRegionId() const { return this->creationRegionId_ != nullptr;};
      void deleteCreationRegionId() { this->creationRegionId_ = nullptr;};
      inline string getCreationRegionId() const { DARABONBA_PTR_GET_DEFAULT(creationRegionId_, "") };
      inline SDGs& setCreationRegionId(string creationRegionId) { DARABONBA_PTR_SET_VALUE(creationRegionId_, creationRegionId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SDGs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SDGs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // parentSDGId Field Functions 
      bool hasParentSDGId() const { return this->parentSDGId_ != nullptr;};
      void deleteParentSDGId() { this->parentSDGId_ = nullptr;};
      inline string getParentSDGId() const { DARABONBA_PTR_GET_DEFAULT(parentSDGId_, "") };
      inline SDGs& setParentSDGId(string parentSDGId) { DARABONBA_PTR_SET_VALUE(parentSDGId_, parentSDGId) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline SDGs& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // preloadInfos Field Functions 
      bool hasPreloadInfos() const { return this->preloadInfos_ != nullptr;};
      void deletePreloadInfos() { this->preloadInfos_ = nullptr;};
      inline const vector<SDGs::PreloadInfos> & getPreloadInfos() const { DARABONBA_PTR_GET_CONST(preloadInfos_, vector<SDGs::PreloadInfos>) };
      inline vector<SDGs::PreloadInfos> getPreloadInfos() { DARABONBA_PTR_GET(preloadInfos_, vector<SDGs::PreloadInfos>) };
      inline SDGs& setPreloadInfos(const vector<SDGs::PreloadInfos> & preloadInfos) { DARABONBA_PTR_SET_VALUE(preloadInfos_, preloadInfos) };
      inline SDGs& setPreloadInfos(vector<SDGs::PreloadInfos> && preloadInfos) { DARABONBA_PTR_SET_RVALUE(preloadInfos_, preloadInfos) };


      // SDGId Field Functions 
      bool hasSDGId() const { return this->SDGId_ != nullptr;};
      void deleteSDGId() { this->SDGId_ = nullptr;};
      inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
      inline SDGs& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline SDGs& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SDGs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SDGs& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // SDGs that have snapshots.
      shared_ptr<vector<SDGs::AvaliableRegionIds>> avaliableRegionIds_ {};
      shared_ptr<string> billingCycle_ {};
      shared_ptr<string> billingType_ {};
      shared_ptr<string> creationDiskType_ {};
      // The ID of the instance on which the SDG is created.
      shared_ptr<string> creationInstanceId_ {};
      // The ID of the node on which the SDG is created.
      shared_ptr<string> creationRegionId_ {};
      // The time when the first SDG in the node was created.
      shared_ptr<string> creationTime_ {};
      // The description of the SDG.
      shared_ptr<string> description_ {};
      // The ID of the source SDG from which you want to create an SDG. The value of this parameter is the value of the **FromSDGId** parameter that you need to specify when you call the [CreateSDG](https://help.aliyun.com/document_detail/608128.html) operation.
      shared_ptr<string> parentSDGId_ {};
      shared_ptr<string> performanceLevel_ {};
      // The preload information.
      shared_ptr<vector<SDGs::PreloadInfos>> preloadInfos_ {};
      // The ID of the SDG.
      shared_ptr<string> SDGId_ {};
      // The size of the SDG. Unit: GB.
      shared_ptr<int64_t> size_ {};
      // The status of the SDG creation. Valid values:
      // 
      // *   **sdg_making**
      // *   **sdg_saving**
      // *   **failed**
      // *   **success**
      shared_ptr<string> status_ {};
      // The time when the SDG was last updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->SDGs_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSDGResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSDGResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSDGResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SDGs Field Functions 
    bool hasSDGs() const { return this->SDGs_ != nullptr;};
    void deleteSDGs() { this->SDGs_ = nullptr;};
    inline const vector<DescribeSDGResponseBody::SDGs> & getSDGs() const { DARABONBA_PTR_GET_CONST(SDGs_, vector<DescribeSDGResponseBody::SDGs>) };
    inline vector<DescribeSDGResponseBody::SDGs> getSDGs() { DARABONBA_PTR_GET(SDGs_, vector<DescribeSDGResponseBody::SDGs>) };
    inline DescribeSDGResponseBody& setSDGs(const vector<DescribeSDGResponseBody::SDGs> & sDGs) { DARABONBA_PTR_SET_VALUE(SDGs_, sDGs) };
    inline DescribeSDGResponseBody& setSDGs(vector<DescribeSDGResponseBody::SDGs> && sDGs) { DARABONBA_PTR_SET_RVALUE(SDGs_, sDGs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSDGResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the SDGs.
    shared_ptr<vector<DescribeSDGResponseBody::SDGs>> SDGs_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
