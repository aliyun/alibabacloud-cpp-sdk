// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTOREATTACHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTOREATTACHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class ListKVCacheStoreAttachInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoreAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoreAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKVCacheStoreAttachInfoResponseBody() = default ;
    ListKVCacheStoreAttachInfoResponseBody(const ListKVCacheStoreAttachInfoResponseBody &) = default ;
    ListKVCacheStoreAttachInfoResponseBody(ListKVCacheStoreAttachInfoResponseBody &&) = default ;
    ListKVCacheStoreAttachInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoreAttachInfoResponseBody() = default ;
    ListKVCacheStoreAttachInfoResponseBody& operator=(const ListKVCacheStoreAttachInfoResponseBody &) = default ;
    ListKVCacheStoreAttachInfoResponseBody& operator=(ListKVCacheStoreAttachInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedAt, attachedAt_);
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, AttachInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedAt, attachedAt_);
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      AttachInfos() = default ;
      AttachInfos(const AttachInfos &) = default ;
      AttachInfos(AttachInfos &&) = default ;
      AttachInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachInfos() = default ;
      AttachInfos& operator=(const AttachInfos &) = default ;
      AttachInfos& operator=(AttachInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachedAt_ == nullptr
        && this->capacity_ == nullptr && this->kvcsId_ == nullptr && this->mountPointId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr && this->vscId_ == nullptr && this->zoneId_ == nullptr; };
      // attachedAt Field Functions 
      bool hasAttachedAt() const { return this->attachedAt_ != nullptr;};
      void deleteAttachedAt() { this->attachedAt_ = nullptr;};
      inline string getAttachedAt() const { DARABONBA_PTR_GET_DEFAULT(attachedAt_, "") };
      inline AttachInfos& setAttachedAt(string attachedAt) { DARABONBA_PTR_SET_VALUE(attachedAt_, attachedAt) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline AttachInfos& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline AttachInfos& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline AttachInfos& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AttachInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AttachInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AttachInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline AttachInfos& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AttachInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The time of the most recent attach operation, in ISO 8601 format. The value is null if the instance has not been attached.
      shared_ptr<string> attachedAt_ {};
      // The file system capacity, in GiB.
      shared_ptr<int64_t> capacity_ {};
      // KVCacheStore KvcsId
      shared_ptr<string> kvcsId_ {};
      // The mount point ID at the file system level.
      shared_ptr<string> mountPointId_ {};
      // The region where the instance is deployed.
      shared_ptr<string> regionId_ {};
      // The attach status. Valid values:
      // 
      // - Attaching: The instance is being mounted.
      // - Attached: The instance is mounted.
      // - Detaching: The instance is being unmounted.
      // 
      // After unmounting is complete, the record is deleted and not returned.
      shared_ptr<string> status_ {};
      // The instance type. Valid values:
      // 
      // - kvcs: KVCacheStore (CPFS).
      shared_ptr<string> type_ {};
      // The VSC ID on the compute side.
      shared_ptr<string> vscId_ {};
      // The zone where the instance is deployed.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->attachInfos_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // attachInfos Field Functions 
    bool hasAttachInfos() const { return this->attachInfos_ != nullptr;};
    void deleteAttachInfos() { this->attachInfos_ = nullptr;};
    inline const vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos> & getAttachInfos() const { DARABONBA_PTR_GET_CONST(attachInfos_, vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos>) };
    inline vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos> getAttachInfos() { DARABONBA_PTR_GET(attachInfos_, vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos>) };
    inline ListKVCacheStoreAttachInfoResponseBody& setAttachInfos(const vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos> & attachInfos) { DARABONBA_PTR_SET_VALUE(attachInfos_, attachInfos) };
    inline ListKVCacheStoreAttachInfoResponseBody& setAttachInfos(vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos> && attachInfos) { DARABONBA_PTR_SET_RVALUE(attachInfos_, attachInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKVCacheStoreAttachInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKVCacheStoreAttachInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKVCacheStoreAttachInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKVCacheStoreAttachInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListKVCacheStoreAttachInfoResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of mount information.
    shared_ptr<vector<ListKVCacheStoreAttachInfoResponseBody::AttachInfos>> attachInfos_ {};
    // The pagination token used to query the next batch of data.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID. A request ID is returned regardless of whether the call is successful.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned for the paged query.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
