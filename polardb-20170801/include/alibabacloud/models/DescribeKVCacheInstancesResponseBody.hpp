// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKVCacheInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKVCacheInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKVCacheInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeKVCacheInstancesResponseBody() = default ;
    DescribeKVCacheInstancesResponseBody(const DescribeKVCacheInstancesResponseBody &) = default ;
    DescribeKVCacheInstancesResponseBody(DescribeKVCacheInstancesResponseBody &&) = default ;
    DescribeKVCacheInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKVCacheInstancesResponseBody() = default ;
    DescribeKVCacheInstancesResponseBody& operator=(const DescribeKVCacheInstancesResponseBody &) = default ;
    DescribeKVCacheInstancesResponseBody& operator=(DescribeKVCacheInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(KVCacheItem, KVCacheItem_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(KVCacheItem, KVCacheItem_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KVCacheItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KVCacheItem& obj) { 
          DARABONBA_PTR_TO_JSON(AIDBClusterId, AIDBClusterId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(KVCacheInstanceId, KVCacheInstanceId_);
          DARABONBA_PTR_TO_JSON(KVCacheInstanceStatus, KVCacheInstanceStatus_);
          DARABONBA_PTR_TO_JSON(KVCacheSpace, KVCacheSpace_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, KVCacheItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AIDBClusterId, AIDBClusterId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(KVCacheInstanceId, KVCacheInstanceId_);
          DARABONBA_PTR_FROM_JSON(KVCacheInstanceStatus, KVCacheInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(KVCacheSpace, KVCacheSpace_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        KVCacheItem() = default ;
        KVCacheItem(const KVCacheItem &) = default ;
        KVCacheItem(KVCacheItem &&) = default ;
        KVCacheItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KVCacheItem() = default ;
        KVCacheItem& operator=(const KVCacheItem &) = default ;
        KVCacheItem& operator=(KVCacheItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->AIDBClusterId_ == nullptr
        && this->creationTime_ == nullptr && this->DBClusterId_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->KVCacheInstanceId_ == nullptr
        && this->KVCacheInstanceStatus_ == nullptr && this->KVCacheSpace_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // AIDBClusterId Field Functions 
        bool hasAIDBClusterId() const { return this->AIDBClusterId_ != nullptr;};
        void deleteAIDBClusterId() { this->AIDBClusterId_ = nullptr;};
        inline string getAIDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(AIDBClusterId_, "") };
        inline KVCacheItem& setAIDBClusterId(string AIDBClusterId) { DARABONBA_PTR_SET_VALUE(AIDBClusterId_, AIDBClusterId) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline KVCacheItem& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline KVCacheItem& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline KVCacheItem& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
        inline KVCacheItem& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // KVCacheInstanceId Field Functions 
        bool hasKVCacheInstanceId() const { return this->KVCacheInstanceId_ != nullptr;};
        void deleteKVCacheInstanceId() { this->KVCacheInstanceId_ = nullptr;};
        inline string getKVCacheInstanceId() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceId_, "") };
        inline KVCacheItem& setKVCacheInstanceId(string KVCacheInstanceId) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceId_, KVCacheInstanceId) };


        // KVCacheInstanceStatus Field Functions 
        bool hasKVCacheInstanceStatus() const { return this->KVCacheInstanceStatus_ != nullptr;};
        void deleteKVCacheInstanceStatus() { this->KVCacheInstanceStatus_ = nullptr;};
        inline string getKVCacheInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceStatus_, "") };
        inline KVCacheItem& setKVCacheInstanceStatus(string KVCacheInstanceStatus) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceStatus_, KVCacheInstanceStatus) };


        // KVCacheSpace Field Functions 
        bool hasKVCacheSpace() const { return this->KVCacheSpace_ != nullptr;};
        void deleteKVCacheSpace() { this->KVCacheSpace_ = nullptr;};
        inline int32_t getKVCacheSpace() const { DARABONBA_PTR_GET_DEFAULT(KVCacheSpace_, 0) };
        inline KVCacheItem& setKVCacheSpace(int32_t KVCacheSpace) { DARABONBA_PTR_SET_VALUE(KVCacheSpace_, KVCacheSpace) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline KVCacheItem& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline KVCacheItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline KVCacheItem& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline KVCacheItem& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline KVCacheItem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> AIDBClusterId_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> DBClusterId_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> expired_ {};
        shared_ptr<string> KVCacheInstanceId_ {};
        shared_ptr<string> KVCacheInstanceStatus_ {};
        shared_ptr<int32_t> KVCacheSpace_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->KVCacheItem_ == nullptr; };
      // KVCacheItem Field Functions 
      bool hasKVCacheItem() const { return this->KVCacheItem_ != nullptr;};
      void deleteKVCacheItem() { this->KVCacheItem_ = nullptr;};
      inline const vector<Items::KVCacheItem> & getKVCacheItem() const { DARABONBA_PTR_GET_CONST(KVCacheItem_, vector<Items::KVCacheItem>) };
      inline vector<Items::KVCacheItem> getKVCacheItem() { DARABONBA_PTR_GET(KVCacheItem_, vector<Items::KVCacheItem>) };
      inline Items& setKVCacheItem(const vector<Items::KVCacheItem> & kVCacheItem) { DARABONBA_PTR_SET_VALUE(KVCacheItem_, kVCacheItem) };
      inline Items& setKVCacheItem(vector<Items::KVCacheItem> && kVCacheItem) { DARABONBA_PTR_SET_RVALUE(KVCacheItem_, kVCacheItem) };


    protected:
      shared_ptr<vector<Items::KVCacheItem>> KVCacheItem_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeKVCacheInstancesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeKVCacheInstancesResponseBody::Items) };
    inline DescribeKVCacheInstancesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeKVCacheInstancesResponseBody::Items) };
    inline DescribeKVCacheInstancesResponseBody& setItems(const DescribeKVCacheInstancesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeKVCacheInstancesResponseBody& setItems(DescribeKVCacheInstancesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKVCacheInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeKVCacheInstancesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKVCacheInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeKVCacheInstancesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribeKVCacheInstancesResponseBody::Items> items_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of instances returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances that match the filter conditions.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
