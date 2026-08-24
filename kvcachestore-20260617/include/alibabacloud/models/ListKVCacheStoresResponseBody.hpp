// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTORESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTORESRESPONSEBODY_HPP_
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
  class ListKVCacheStoresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KVCacheStores, KVCacheStores_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KVCacheStores, KVCacheStores_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKVCacheStoresResponseBody() = default ;
    ListKVCacheStoresResponseBody(const ListKVCacheStoresResponseBody &) = default ;
    ListKVCacheStoresResponseBody(ListKVCacheStoresResponseBody &&) = default ;
    ListKVCacheStoresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoresResponseBody() = default ;
    ListKVCacheStoresResponseBody& operator=(const ListKVCacheStoresResponseBody &) = default ;
    ListKVCacheStoresResponseBody& operator=(ListKVCacheStoresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KVCacheStores : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KVCacheStores& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExtraStatus, extraStatus_);
        DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, KVCacheStores& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExtraStatus, extraStatus_);
        DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      KVCacheStores() = default ;
      KVCacheStores(const KVCacheStores &) = default ;
      KVCacheStores(KVCacheStores &&) = default ;
      KVCacheStores(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KVCacheStores() = default ;
      KVCacheStores& operator=(const KVCacheStores &) = default ;
      KVCacheStores& operator=(KVCacheStores &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key of the resource.
        shared_ptr<string> tagKey_ {};
        // The tag value of the resource.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->extraStatus_ == nullptr && this->hpnZone_ == nullptr && this->kvcsId_ == nullptr
        && this->mountPointId_ == nullptr && this->name_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->zoneId_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline KVCacheStores& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline KVCacheStores& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline KVCacheStores& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extraStatus Field Functions 
      bool hasExtraStatus() const { return this->extraStatus_ != nullptr;};
      void deleteExtraStatus() { this->extraStatus_ = nullptr;};
      inline string getExtraStatus() const { DARABONBA_PTR_GET_DEFAULT(extraStatus_, "") };
      inline KVCacheStores& setExtraStatus(string extraStatus) { DARABONBA_PTR_SET_VALUE(extraStatus_, extraStatus) };


      // hpnZone Field Functions 
      bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
      void deleteHpnZone() { this->hpnZone_ = nullptr;};
      inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
      inline KVCacheStores& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline KVCacheStores& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline KVCacheStores& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline KVCacheStores& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline KVCacheStores& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline KVCacheStores& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline KVCacheStores& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline KVCacheStores& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<KVCacheStores::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<KVCacheStores::Tags>) };
      inline vector<KVCacheStores::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<KVCacheStores::Tags>) };
      inline KVCacheStores& setTags(const vector<KVCacheStores::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline KVCacheStores& setTags(vector<KVCacheStores::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline KVCacheStores& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline KVCacheStores& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The storage capacity. Unit: GiB.
      shared_ptr<int64_t> capacity_ {};
      // The creation time in ISO 8601 format.
      shared_ptr<string> createTime_ {};
      // The instance description.
      shared_ptr<string> description_ {};
      // The extra status information. Valid values: CapacityExpanding, CapacityExpandSuccess, and CapacityExpandFail.
      shared_ptr<string> extraStatus_ {};
      // The cluster ID.
      shared_ptr<string> hpnZone_ {};
      // The instance ID.
      shared_ptr<string> kvcsId_ {};
      // The file system-level mount point ID. Instances under the same file system share this mount point. For more information, call ListKVCacheInstanceAttachInfo.
      shared_ptr<string> mountPointId_ {};
      // The instance name.
      shared_ptr<string> name_ {};
      // The payment type. Valid values: PREPAY and POSTPAY.
      shared_ptr<string> paymentType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The instance status. Valid values: Creating, Available, InUse, Stopping, Stopped, and Deleting.
      shared_ptr<string> status_ {};
      // The list of resource tags.
      shared_ptr<vector<KVCacheStores::Tags>> tags_ {};
      // The instance type. Valid values: kvcs (KVCacheStore, CPFS).
      shared_ptr<string> type_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->KVCacheStores_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pageTotal_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // KVCacheStores Field Functions 
    bool hasKVCacheStores() const { return this->KVCacheStores_ != nullptr;};
    void deleteKVCacheStores() { this->KVCacheStores_ = nullptr;};
    inline const vector<ListKVCacheStoresResponseBody::KVCacheStores> & getKVCacheStores() const { DARABONBA_PTR_GET_CONST(KVCacheStores_, vector<ListKVCacheStoresResponseBody::KVCacheStores>) };
    inline vector<ListKVCacheStoresResponseBody::KVCacheStores> getKVCacheStores() { DARABONBA_PTR_GET(KVCacheStores_, vector<ListKVCacheStoresResponseBody::KVCacheStores>) };
    inline ListKVCacheStoresResponseBody& setKVCacheStores(const vector<ListKVCacheStoresResponseBody::KVCacheStores> & kVCacheStores) { DARABONBA_PTR_SET_VALUE(KVCacheStores_, kVCacheStores) };
    inline ListKVCacheStoresResponseBody& setKVCacheStores(vector<ListKVCacheStoresResponseBody::KVCacheStores> && kVCacheStores) { DARABONBA_PTR_SET_RVALUE(KVCacheStores_, kVCacheStores) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKVCacheStoresResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKVCacheStoresResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKVCacheStoresResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKVCacheStoresResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageTotal Field Functions 
    bool hasPageTotal() const { return this->pageTotal_ != nullptr;};
    void deletePageTotal() { this->pageTotal_ = nullptr;};
    inline int32_t getPageTotal() const { DARABONBA_PTR_GET_DEFAULT(pageTotal_, 0) };
    inline ListKVCacheStoresResponseBody& setPageTotal(int32_t pageTotal) { DARABONBA_PTR_SET_VALUE(pageTotal_, pageTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKVCacheStoresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKVCacheStoresResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of KVCacheStore instances. Each element contains the following fields: KvcsId, Name, Status, ExtraStatus, RegionId, ZoneId, HpnZone, Type, Capacity, PaymentType, MountPointId, CreateTime, and Description.
    shared_ptr<vector<ListKVCacheStoresResponseBody::KVCacheStores>> KVCacheStores_ {};
    // The maximum number of entries returned per pagination request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. This value is empty when no more data is available. This parameter is valid only for cursor-based pagination.
    shared_ptr<string> nextToken_ {};
    // The current page number. This parameter is valid only for page number-based pagination.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. This parameter is valid only for page number-based pagination.
    shared_ptr<int32_t> pageSize_ {};
    // The total number of pages. This value is returned only for page number-based pagination.
    shared_ptr<int32_t> pageTotal_ {};
    // The request ID. A request ID is returned regardless of whether the API call succeeds.
    shared_ptr<string> requestId_ {};
    // The total number of instances. This value is returned only for page number-based pagination. For cursor-based pagination, the value is -1.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
