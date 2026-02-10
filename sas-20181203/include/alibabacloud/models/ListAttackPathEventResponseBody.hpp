// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathEventList, attackPathEventList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathEventList, attackPathEventList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAttackPathEventResponseBody() = default ;
    ListAttackPathEventResponseBody(const ListAttackPathEventResponseBody &) = default ;
    ListAttackPathEventResponseBody(ListAttackPathEventResponseBody &&) = default ;
    ListAttackPathEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathEventResponseBody() = default ;
    ListAttackPathEventResponseBody& operator=(const ListAttackPathEventResponseBody &) = default ;
    ListAttackPathEventResponseBody& operator=(ListAttackPathEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of data entries displayed on the current page when performing a paginated query.
      shared_ptr<int32_t> count_ {};
      // The page number displayed in the pagination query.
      shared_ptr<int32_t> currentPage_ {};
      // The number of data items displayed per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of data items.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AttackPathEventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathEventList& obj) { 
        DARABONBA_PTR_TO_JSON(DstAsset, dstAsset_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(PathName, pathName_);
        DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
        DARABONBA_PTR_TO_JSON(PathType, pathType_);
        DARABONBA_PTR_TO_JSON(PathTypeDesc, pathTypeDesc_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SrcAsset, srcAsset_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathEventList& obj) { 
        DARABONBA_PTR_FROM_JSON(DstAsset, dstAsset_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(PathName, pathName_);
        DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
        DARABONBA_PTR_FROM_JSON(PathType, pathType_);
        DARABONBA_PTR_FROM_JSON(PathTypeDesc, pathTypeDesc_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SrcAsset, srcAsset_);
      };
      AttackPathEventList() = default ;
      AttackPathEventList(const AttackPathEventList &) = default ;
      AttackPathEventList(AttackPathEventList &&) = default ;
      AttackPathEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathEventList() = default ;
      AttackPathEventList& operator=(const AttackPathEventList &) = default ;
      AttackPathEventList& operator=(AttackPathEventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SrcAsset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SrcAsset& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, SrcAsset& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        SrcAsset() = default ;
        SrcAsset(const SrcAsset &) = default ;
        SrcAsset(SrcAsset &&) = default ;
        SrcAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SrcAsset() = default ;
        SrcAsset& operator=(const SrcAsset &) = default ;
        SrcAsset& operator=(SrcAsset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->sensitiveAssetFlag_ == nullptr
        && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline SrcAsset& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline SrcAsset& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SrcAsset& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline SrcAsset& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SrcAsset& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // sensitiveAssetFlag Field Functions 
        bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
        void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
        inline int32_t getSensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
        inline SrcAsset& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline SrcAsset& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // Subtype of the cloud product asset.
        shared_ptr<int32_t> assetSubType_ {};
        // Type of the cloud product asset.
        shared_ptr<int32_t> assetType_ {};
        // ID of the cloud product asset instance.
        shared_ptr<string> instanceId_ {};
        // Instance name.
        shared_ptr<string> instanceName_ {};
        // ID of the region where the cloud product asset instance is located.
        shared_ptr<string> regionId_ {};
        // Sensitive asset flag. Values:
        // - **0**: Non-sensitive asset.
        // - **1**: Sensitive asset.
        shared_ptr<int32_t> sensitiveAssetFlag_ {};
        // Vendor of the cloud product asset.
        shared_ptr<int32_t> vendor_ {};
      };

      class DstAsset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DstAsset& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, DstAsset& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        DstAsset() = default ;
        DstAsset(const DstAsset &) = default ;
        DstAsset(DstAsset &&) = default ;
        DstAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DstAsset() = default ;
        DstAsset& operator=(const DstAsset &) = default ;
        DstAsset& operator=(DstAsset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->sensitiveAssetFlag_ == nullptr
        && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline DstAsset& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline DstAsset& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DstAsset& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline DstAsset& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DstAsset& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // sensitiveAssetFlag Field Functions 
        bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
        void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
        inline int32_t getSensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
        inline DstAsset& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline DstAsset& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // Subtype of the cloud product asset.
        shared_ptr<int32_t> assetSubType_ {};
        // Type of the cloud product asset.
        shared_ptr<int32_t> assetType_ {};
        // ID of the cloud product asset instance.
        shared_ptr<string> instanceId_ {};
        // Instance name.
        shared_ptr<string> instanceName_ {};
        // ID of the region where the cloud product asset instance is located.
        shared_ptr<string> regionId_ {};
        // Sensitive asset flag. Values:
        // - **0**: Non-sensitive asset.
        // - **1**: Sensitive asset.
        shared_ptr<int32_t> sensitiveAssetFlag_ {};
        // Vendor of the cloud product asset.
        shared_ptr<int32_t> vendor_ {};
      };

      virtual bool empty() const override { return this->dstAsset_ == nullptr
        && this->eventId_ == nullptr && this->lastTime_ == nullptr && this->pathName_ == nullptr && this->pathNameDesc_ == nullptr && this->pathType_ == nullptr
        && this->pathTypeDesc_ == nullptr && this->riskLevel_ == nullptr && this->srcAsset_ == nullptr; };
      // dstAsset Field Functions 
      bool hasDstAsset() const { return this->dstAsset_ != nullptr;};
      void deleteDstAsset() { this->dstAsset_ = nullptr;};
      inline const AttackPathEventList::DstAsset & getDstAsset() const { DARABONBA_PTR_GET_CONST(dstAsset_, AttackPathEventList::DstAsset) };
      inline AttackPathEventList::DstAsset getDstAsset() { DARABONBA_PTR_GET(dstAsset_, AttackPathEventList::DstAsset) };
      inline AttackPathEventList& setDstAsset(const AttackPathEventList::DstAsset & dstAsset) { DARABONBA_PTR_SET_VALUE(dstAsset_, dstAsset) };
      inline AttackPathEventList& setDstAsset(AttackPathEventList::DstAsset && dstAsset) { DARABONBA_PTR_SET_RVALUE(dstAsset_, dstAsset) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
      inline AttackPathEventList& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline AttackPathEventList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // pathName Field Functions 
      bool hasPathName() const { return this->pathName_ != nullptr;};
      void deletePathName() { this->pathName_ = nullptr;};
      inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
      inline AttackPathEventList& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


      // pathNameDesc Field Functions 
      bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
      void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
      inline string getPathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
      inline AttackPathEventList& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


      // pathType Field Functions 
      bool hasPathType() const { return this->pathType_ != nullptr;};
      void deletePathType() { this->pathType_ = nullptr;};
      inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
      inline AttackPathEventList& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


      // pathTypeDesc Field Functions 
      bool hasPathTypeDesc() const { return this->pathTypeDesc_ != nullptr;};
      void deletePathTypeDesc() { this->pathTypeDesc_ = nullptr;};
      inline string getPathTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(pathTypeDesc_, "") };
      inline AttackPathEventList& setPathTypeDesc(string pathTypeDesc) { DARABONBA_PTR_SET_VALUE(pathTypeDesc_, pathTypeDesc) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline AttackPathEventList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // srcAsset Field Functions 
      bool hasSrcAsset() const { return this->srcAsset_ != nullptr;};
      void deleteSrcAsset() { this->srcAsset_ = nullptr;};
      inline const AttackPathEventList::SrcAsset & getSrcAsset() const { DARABONBA_PTR_GET_CONST(srcAsset_, AttackPathEventList::SrcAsset) };
      inline AttackPathEventList::SrcAsset getSrcAsset() { DARABONBA_PTR_GET(srcAsset_, AttackPathEventList::SrcAsset) };
      inline AttackPathEventList& setSrcAsset(const AttackPathEventList::SrcAsset & srcAsset) { DARABONBA_PTR_SET_VALUE(srcAsset_, srcAsset) };
      inline AttackPathEventList& setSrcAsset(AttackPathEventList::SrcAsset && srcAsset) { DARABONBA_PTR_SET_RVALUE(srcAsset_, srcAsset) };


    protected:
      // Destination asset.
      shared_ptr<AttackPathEventList::DstAsset> dstAsset_ {};
      // The ID of the alert event.
      shared_ptr<int64_t> eventId_ {};
      // Timestamp of the latest discovery. Unit: milliseconds.
      shared_ptr<int64_t> lastTime_ {};
      // Path name.
      shared_ptr<string> pathName_ {};
      // Description of the path name.
      shared_ptr<string> pathNameDesc_ {};
      // Path type.
      shared_ptr<string> pathType_ {};
      // Description of the path type.
      shared_ptr<string> pathTypeDesc_ {};
      // Risk level.
      shared_ptr<string> riskLevel_ {};
      // Source asset.
      shared_ptr<AttackPathEventList::SrcAsset> srcAsset_ {};
    };

    virtual bool empty() const override { return this->attackPathEventList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // attackPathEventList Field Functions 
    bool hasAttackPathEventList() const { return this->attackPathEventList_ != nullptr;};
    void deleteAttackPathEventList() { this->attackPathEventList_ = nullptr;};
    inline const vector<ListAttackPathEventResponseBody::AttackPathEventList> & getAttackPathEventList() const { DARABONBA_PTR_GET_CONST(attackPathEventList_, vector<ListAttackPathEventResponseBody::AttackPathEventList>) };
    inline vector<ListAttackPathEventResponseBody::AttackPathEventList> getAttackPathEventList() { DARABONBA_PTR_GET(attackPathEventList_, vector<ListAttackPathEventResponseBody::AttackPathEventList>) };
    inline ListAttackPathEventResponseBody& setAttackPathEventList(const vector<ListAttackPathEventResponseBody::AttackPathEventList> & attackPathEventList) { DARABONBA_PTR_SET_VALUE(attackPathEventList_, attackPathEventList) };
    inline ListAttackPathEventResponseBody& setAttackPathEventList(vector<ListAttackPathEventResponseBody::AttackPathEventList> && attackPathEventList) { DARABONBA_PTR_SET_RVALUE(attackPathEventList_, attackPathEventList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAttackPathEventResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAttackPathEventResponseBody::PageInfo) };
    inline ListAttackPathEventResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAttackPathEventResponseBody::PageInfo) };
    inline ListAttackPathEventResponseBody& setPageInfo(const ListAttackPathEventResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAttackPathEventResponseBody& setPageInfo(ListAttackPathEventResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttackPathEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of attack path events.
    shared_ptr<vector<ListAttackPathEventResponseBody::AttackPathEventList>> attackPathEventList_ {};
    // Pagination information.
    shared_ptr<ListAttackPathEventResponseBody::PageInfo> pageInfo_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request. It can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
