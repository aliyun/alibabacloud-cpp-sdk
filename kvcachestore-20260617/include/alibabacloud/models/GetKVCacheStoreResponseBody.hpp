// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVCACHESTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKVCACHESTORERESPONSEBODY_HPP_
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
  class GetKVCacheStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KvCacheStore, kvCacheStore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KvCacheStore, kvCacheStore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetKVCacheStoreResponseBody() = default ;
    GetKVCacheStoreResponseBody(const GetKVCacheStoreResponseBody &) = default ;
    GetKVCacheStoreResponseBody(GetKVCacheStoreResponseBody &&) = default ;
    GetKVCacheStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKVCacheStoreResponseBody() = default ;
    GetKVCacheStoreResponseBody& operator=(const GetKVCacheStoreResponseBody &) = default ;
    GetKVCacheStoreResponseBody& operator=(GetKVCacheStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KvCacheStore : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KvCacheStore& obj) { 
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
      friend void from_json(const Darabonba::Json& j, KvCacheStore& obj) { 
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
      KvCacheStore() = default ;
      KvCacheStore(const KvCacheStore &) = default ;
      KvCacheStore(KvCacheStore &&) = default ;
      KvCacheStore(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KvCacheStore() = default ;
      KvCacheStore& operator=(const KvCacheStore &) = default ;
      KvCacheStore& operator=(KvCacheStore &&) = default ;
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
        shared_ptr<string> tagKey_ {};
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
      inline KvCacheStore& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline KvCacheStore& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline KvCacheStore& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extraStatus Field Functions 
      bool hasExtraStatus() const { return this->extraStatus_ != nullptr;};
      void deleteExtraStatus() { this->extraStatus_ = nullptr;};
      inline string getExtraStatus() const { DARABONBA_PTR_GET_DEFAULT(extraStatus_, "") };
      inline KvCacheStore& setExtraStatus(string extraStatus) { DARABONBA_PTR_SET_VALUE(extraStatus_, extraStatus) };


      // hpnZone Field Functions 
      bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
      void deleteHpnZone() { this->hpnZone_ = nullptr;};
      inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
      inline KvCacheStore& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline KvCacheStore& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline KvCacheStore& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline KvCacheStore& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline KvCacheStore& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline KvCacheStore& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline KvCacheStore& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline KvCacheStore& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<KvCacheStore::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<KvCacheStore::Tags>) };
      inline vector<KvCacheStore::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<KvCacheStore::Tags>) };
      inline KvCacheStore& setTags(const vector<KvCacheStore::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline KvCacheStore& setTags(vector<KvCacheStore::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline KvCacheStore& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline KvCacheStore& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<int64_t> capacity_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> extraStatus_ {};
      shared_ptr<string> hpnZone_ {};
      shared_ptr<string> kvcsId_ {};
      shared_ptr<string> mountPointId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> paymentType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<KvCacheStore::Tags>> tags_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->kvCacheStore_ == nullptr
        && this->requestId_ == nullptr; };
    // kvCacheStore Field Functions 
    bool hasKvCacheStore() const { return this->kvCacheStore_ != nullptr;};
    void deleteKvCacheStore() { this->kvCacheStore_ = nullptr;};
    inline const GetKVCacheStoreResponseBody::KvCacheStore & getKvCacheStore() const { DARABONBA_PTR_GET_CONST(kvCacheStore_, GetKVCacheStoreResponseBody::KvCacheStore) };
    inline GetKVCacheStoreResponseBody::KvCacheStore getKvCacheStore() { DARABONBA_PTR_GET(kvCacheStore_, GetKVCacheStoreResponseBody::KvCacheStore) };
    inline GetKVCacheStoreResponseBody& setKvCacheStore(const GetKVCacheStoreResponseBody::KvCacheStore & kvCacheStore) { DARABONBA_PTR_SET_VALUE(kvCacheStore_, kvCacheStore) };
    inline GetKVCacheStoreResponseBody& setKvCacheStore(GetKVCacheStoreResponseBody::KvCacheStore && kvCacheStore) { DARABONBA_PTR_SET_RVALUE(kvCacheStore_, kvCacheStore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKVCacheStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetKVCacheStoreResponseBody::KvCacheStore> kvCacheStore_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
