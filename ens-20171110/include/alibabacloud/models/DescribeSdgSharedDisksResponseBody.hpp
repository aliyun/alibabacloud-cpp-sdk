// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSRESPONSEBODY_HPP_
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
  class DescribeSDGSharedDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGSharedDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedDisks, sharedDisks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGSharedDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedDisks, sharedDisks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSDGSharedDisksResponseBody() = default ;
    DescribeSDGSharedDisksResponseBody(const DescribeSDGSharedDisksResponseBody &) = default ;
    DescribeSDGSharedDisksResponseBody(DescribeSDGSharedDisksResponseBody &&) = default ;
    DescribeSDGSharedDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGSharedDisksResponseBody() = default ;
    DescribeSDGSharedDisksResponseBody& operator=(const DescribeSDGSharedDisksResponseBody &) = default ;
    DescribeSDGSharedDisksResponseBody& operator=(DescribeSDGSharedDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedDisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedDisks& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SdgId, sdgId_);
        DARABONBA_PTR_TO_JSON(SharedNum, sharedNum_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SharedDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SdgId, sdgId_);
        DARABONBA_PTR_FROM_JSON(SharedNum, sharedNum_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->diskId_ == nullptr && this->diskType_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->sdgId_ == nullptr
        && this->sharedNum_ == nullptr && this->status_ == nullptr; };
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


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline SharedDisks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline SharedDisks& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


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


      // sharedNum Field Functions 
      bool hasSharedNum() const { return this->sharedNum_ != nullptr;};
      void deleteSharedNum() { this->sharedNum_ = nullptr;};
      inline int32_t getSharedNum() const { DARABONBA_PTR_GET_DEFAULT(sharedNum_, 0) };
      inline SharedDisks& setSharedNum(int32_t sharedNum) { DARABONBA_PTR_SET_VALUE(sharedNum_, sharedNum) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SharedDisks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the shared disk was created.
      shared_ptr<string> creationTime_ {};
      // shared disk id
      shared_ptr<string> diskId_ {};
      // Shared disk type
      shared_ptr<string> diskType_ {};
      // The namespace of the service.
      shared_ptr<string> namespace_ {};
      // The node ID.
      shared_ptr<string> regionId_ {};
      // SdgId of the shared disk
      shared_ptr<string> sdgId_ {};
      // Number of shared mounts
      shared_ptr<int32_t> sharedNum_ {};
      // Shared disk status
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sharedDisks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSDGSharedDisksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSDGSharedDisksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSDGSharedDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedDisks Field Functions 
    bool hasSharedDisks() const { return this->sharedDisks_ != nullptr;};
    void deleteSharedDisks() { this->sharedDisks_ = nullptr;};
    inline const vector<DescribeSDGSharedDisksResponseBody::SharedDisks> & getSharedDisks() const { DARABONBA_PTR_GET_CONST(sharedDisks_, vector<DescribeSDGSharedDisksResponseBody::SharedDisks>) };
    inline vector<DescribeSDGSharedDisksResponseBody::SharedDisks> getSharedDisks() { DARABONBA_PTR_GET(sharedDisks_, vector<DescribeSDGSharedDisksResponseBody::SharedDisks>) };
    inline DescribeSDGSharedDisksResponseBody& setSharedDisks(const vector<DescribeSDGSharedDisksResponseBody::SharedDisks> & sharedDisks) { DARABONBA_PTR_SET_VALUE(sharedDisks_, sharedDisks) };
    inline DescribeSDGSharedDisksResponseBody& setSharedDisks(vector<DescribeSDGSharedDisksResponseBody::SharedDisks> && sharedDisks) { DARABONBA_PTR_SET_RVALUE(sharedDisks_, sharedDisks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSDGSharedDisksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number when paging
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Shared disk list
    shared_ptr<vector<DescribeSDGSharedDisksResponseBody::SharedDisks>> sharedDisks_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
