// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHAREDDISKRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHAREDDISKRECORDSRESPONSEBODY_HPP_
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
  class DescribeSharedDiskRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSharedDiskRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedDisks, sharedDisks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSharedDiskRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedDisks, sharedDisks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSharedDiskRecordsResponseBody() = default ;
    DescribeSharedDiskRecordsResponseBody(const DescribeSharedDiskRecordsResponseBody &) = default ;
    DescribeSharedDiskRecordsResponseBody(DescribeSharedDiskRecordsResponseBody &&) = default ;
    DescribeSharedDiskRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSharedDiskRecordsResponseBody() = default ;
    DescribeSharedDiskRecordsResponseBody& operator=(const DescribeSharedDiskRecordsResponseBody &) = default ;
    DescribeSharedDiskRecordsResponseBody& operator=(DescribeSharedDiskRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedDisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedDisks& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
        DARABONBA_PTR_TO_JSON(LastDetachInstanceId, lastDetachInstanceId_);
        DARABONBA_PTR_TO_JSON(LastDetachTime, lastDetachTime_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(RecycleTime, recycleTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SdgId, sdgId_);
      };
      friend void from_json(const Darabonba::Json& j, SharedDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
        DARABONBA_PTR_FROM_JSON(LastDetachInstanceId, lastDetachInstanceId_);
        DARABONBA_PTR_FROM_JSON(LastDetachTime, lastDetachTime_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(RecycleTime, recycleTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SdgId, sdgId_);
      };
      SharedDisks() = default ;
      SharedDisks(const SharedDisks &) = default ;
      SharedDisks(SharedDisks &&) = default ;
      SharedDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharedDisks() = default ;
      SharedDisks& operator=(const SharedDisks &) = default ;
      SharedDisks& operator=(SharedDisks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->diskId_ == nullptr && this->diskSize_ == nullptr && this->lastDetachInstanceId_ == nullptr && this->lastDetachTime_ == nullptr && this->namespace_ == nullptr
        && this->performanceLevel_ == nullptr && this->recycleTime_ == nullptr && this->regionId_ == nullptr && this->sdgId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SharedDisks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline SharedDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // diskSize Field Functions 
      bool hasDiskSize() const { return this->diskSize_ != nullptr;};
      void deleteDiskSize() { this->diskSize_ = nullptr;};
      inline int64_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0L) };
      inline SharedDisks& setDiskSize(int64_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


      // lastDetachInstanceId Field Functions 
      bool hasLastDetachInstanceId() const { return this->lastDetachInstanceId_ != nullptr;};
      void deleteLastDetachInstanceId() { this->lastDetachInstanceId_ = nullptr;};
      inline string getLastDetachInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lastDetachInstanceId_, "") };
      inline SharedDisks& setLastDetachInstanceId(string lastDetachInstanceId) { DARABONBA_PTR_SET_VALUE(lastDetachInstanceId_, lastDetachInstanceId) };


      // lastDetachTime Field Functions 
      bool hasLastDetachTime() const { return this->lastDetachTime_ != nullptr;};
      void deleteLastDetachTime() { this->lastDetachTime_ = nullptr;};
      inline string getLastDetachTime() const { DARABONBA_PTR_GET_DEFAULT(lastDetachTime_, "") };
      inline SharedDisks& setLastDetachTime(string lastDetachTime) { DARABONBA_PTR_SET_VALUE(lastDetachTime_, lastDetachTime) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline SharedDisks& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline int64_t getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, 0L) };
      inline SharedDisks& setPerformanceLevel(int64_t performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // recycleTime Field Functions 
      bool hasRecycleTime() const { return this->recycleTime_ != nullptr;};
      void deleteRecycleTime() { this->recycleTime_ = nullptr;};
      inline string getRecycleTime() const { DARABONBA_PTR_GET_DEFAULT(recycleTime_, "") };
      inline SharedDisks& setRecycleTime(string recycleTime) { DARABONBA_PTR_SET_VALUE(recycleTime_, recycleTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SharedDisks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sdgId Field Functions 
      bool hasSdgId() const { return this->sdgId_ != nullptr;};
      void deleteSdgId() { this->sdgId_ = nullptr;};
      inline string getSdgId() const { DARABONBA_PTR_GET_DEFAULT(sdgId_, "") };
      inline SharedDisks& setSdgId(string sdgId) { DARABONBA_PTR_SET_VALUE(sdgId_, sdgId) };


    protected:
      // The creation time of the shared disk.
      shared_ptr<string> creationTime_ {};
      // The shared disk ID.
      shared_ptr<string> diskId_ {};
      // The disk size. Unit: GB.
      shared_ptr<int64_t> diskSize_ {};
      // The ID of the instance from which the shared disk was last detached.
      shared_ptr<string> lastDetachInstanceId_ {};
      // The time when the shared disk was last detached.
      shared_ptr<string> lastDetachTime_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The SDG sharing ratio parameter, which supports cloud disks with different maximum sharing ratios.
      shared_ptr<int64_t> performanceLevel_ {};
      // The reclamation time of the shared disk.
      shared_ptr<string> recycleTime_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The SDG ID of the shared disk.
      shared_ptr<string> sdgId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sharedDisks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSharedDiskRecordsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSharedDiskRecordsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSharedDiskRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedDisks Field Functions 
    bool hasSharedDisks() const { return this->sharedDisks_ != nullptr;};
    void deleteSharedDisks() { this->sharedDisks_ = nullptr;};
    inline const vector<DescribeSharedDiskRecordsResponseBody::SharedDisks> & getSharedDisks() const { DARABONBA_PTR_GET_CONST(sharedDisks_, vector<DescribeSharedDiskRecordsResponseBody::SharedDisks>) };
    inline vector<DescribeSharedDiskRecordsResponseBody::SharedDisks> getSharedDisks() { DARABONBA_PTR_GET(sharedDisks_, vector<DescribeSharedDiskRecordsResponseBody::SharedDisks>) };
    inline DescribeSharedDiskRecordsResponseBody& setSharedDisks(const vector<DescribeSharedDiskRecordsResponseBody::SharedDisks> & sharedDisks) { DARABONBA_PTR_SET_VALUE(sharedDisks_, sharedDisks) };
    inline DescribeSharedDiskRecordsResponseBody& setSharedDisks(vector<DescribeSharedDiskRecordsResponseBody::SharedDisks> && sharedDisks) { DARABONBA_PTR_SET_RVALUE(sharedDisks_, sharedDisks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSharedDiskRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The shared disk billing records.
    shared_ptr<vector<DescribeSharedDiskRecordsResponseBody::SharedDisks>> sharedDisks_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
