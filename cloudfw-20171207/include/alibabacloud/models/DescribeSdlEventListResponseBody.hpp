// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSdlEventListResponseBody() = default ;
    DescribeSdlEventListResponseBody(const DescribeSdlEventListResponseBody &) = default ;
    DescribeSdlEventListResponseBody(DescribeSdlEventListResponseBody &&) = default ;
    DescribeSdlEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventListResponseBody() = default ;
    DescribeSdlEventListResponseBody& operator=(const DescribeSdlEventListResponseBody &) = default ;
    DescribeSdlEventListResponseBody& operator=(DescribeSdlEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdlEventDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdlEventDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetName, assetName_);
        DARABONBA_PTR_TO_JSON(AssetPrivateIp, assetPrivateIp_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(CategoryClassId, categoryClassId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(CityId, cityId_);
        DARABONBA_PTR_TO_JSON(CountryId, countryId_);
        DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
        DARABONBA_PTR_TO_JSON(DstPortList, dstPortList_);
        DARABONBA_PTR_TO_JSON(EventCnt, eventCnt_);
        DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(LocationName, locationName_);
        DARABONBA_PTR_TO_JSON(Payload, payload_);
        DARABONBA_PTR_TO_JSON(ProtoList, protoList_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceIdType, resourceIdType_);
        DARABONBA_PTR_TO_JSON(SensitiveDataCnt, sensitiveDataCnt_);
        DARABONBA_PTR_TO_JSON(SensitiveDataList, sensitiveDataList_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(SrcPortList, srcPortList_);
        DARABONBA_PTR_TO_JSON(TrafficBytes, trafficBytes_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, SdlEventDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
        DARABONBA_PTR_FROM_JSON(AssetPrivateIp, assetPrivateIp_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(CategoryClassId, categoryClassId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(CityId, cityId_);
        DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
        DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
        DARABONBA_PTR_FROM_JSON(DstPortList, dstPortList_);
        DARABONBA_PTR_FROM_JSON(EventCnt, eventCnt_);
        DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
        DARABONBA_PTR_FROM_JSON(Payload, payload_);
        DARABONBA_PTR_FROM_JSON(ProtoList, protoList_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceIdType, resourceIdType_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataCnt, sensitiveDataCnt_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataList, sensitiveDataList_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(SrcPortList, srcPortList_);
        DARABONBA_PTR_FROM_JSON(TrafficBytes, trafficBytes_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      SdlEventDetailList() = default ;
      SdlEventDetailList(const SdlEventDetailList &) = default ;
      SdlEventDetailList(SdlEventDetailList &&) = default ;
      SdlEventDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdlEventDetailList() = default ;
      SdlEventDetailList& operator=(const SdlEventDetailList &) = default ;
      SdlEventDetailList& operator=(SdlEventDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetName_ == nullptr
        && this->assetPrivateIp_ == nullptr && this->assetType_ == nullptr && this->categoryClassId_ == nullptr && this->categoryName_ == nullptr && this->cityId_ == nullptr
        && this->countryId_ == nullptr && this->dstIp_ == nullptr && this->dstPortList_ == nullptr && this->eventCnt_ == nullptr && this->eventLevel_ == nullptr
        && this->eventName_ == nullptr && this->firstTime_ == nullptr && this->lastTime_ == nullptr && this->locationName_ == nullptr && this->payload_ == nullptr
        && this->protoList_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceIdType_ == nullptr && this->sensitiveDataCnt_ == nullptr
        && this->sensitiveDataList_ == nullptr && this->sensitiveLevel_ == nullptr && this->sensitiveType_ == nullptr && this->srcIp_ == nullptr && this->srcPortList_ == nullptr
        && this->trafficBytes_ == nullptr && this->uuid_ == nullptr; };
      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline SdlEventDetailList& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // assetPrivateIp Field Functions 
      bool hasAssetPrivateIp() const { return this->assetPrivateIp_ != nullptr;};
      void deleteAssetPrivateIp() { this->assetPrivateIp_ = nullptr;};
      inline string getAssetPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(assetPrivateIp_, "") };
      inline SdlEventDetailList& setAssetPrivateIp(string assetPrivateIp) { DARABONBA_PTR_SET_VALUE(assetPrivateIp_, assetPrivateIp) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline SdlEventDetailList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // categoryClassId Field Functions 
      bool hasCategoryClassId() const { return this->categoryClassId_ != nullptr;};
      void deleteCategoryClassId() { this->categoryClassId_ = nullptr;};
      inline string getCategoryClassId() const { DARABONBA_PTR_GET_DEFAULT(categoryClassId_, "") };
      inline SdlEventDetailList& setCategoryClassId(string categoryClassId) { DARABONBA_PTR_SET_VALUE(categoryClassId_, categoryClassId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline SdlEventDetailList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // cityId Field Functions 
      bool hasCityId() const { return this->cityId_ != nullptr;};
      void deleteCityId() { this->cityId_ = nullptr;};
      inline string getCityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
      inline SdlEventDetailList& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


      // countryId Field Functions 
      bool hasCountryId() const { return this->countryId_ != nullptr;};
      void deleteCountryId() { this->countryId_ = nullptr;};
      inline string getCountryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
      inline SdlEventDetailList& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


      // dstIp Field Functions 
      bool hasDstIp() const { return this->dstIp_ != nullptr;};
      void deleteDstIp() { this->dstIp_ = nullptr;};
      inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
      inline SdlEventDetailList& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


      // dstPortList Field Functions 
      bool hasDstPortList() const { return this->dstPortList_ != nullptr;};
      void deleteDstPortList() { this->dstPortList_ = nullptr;};
      inline string getDstPortList() const { DARABONBA_PTR_GET_DEFAULT(dstPortList_, "") };
      inline SdlEventDetailList& setDstPortList(string dstPortList) { DARABONBA_PTR_SET_VALUE(dstPortList_, dstPortList) };


      // eventCnt Field Functions 
      bool hasEventCnt() const { return this->eventCnt_ != nullptr;};
      void deleteEventCnt() { this->eventCnt_ = nullptr;};
      inline int64_t getEventCnt() const { DARABONBA_PTR_GET_DEFAULT(eventCnt_, 0L) };
      inline SdlEventDetailList& setEventCnt(int64_t eventCnt) { DARABONBA_PTR_SET_VALUE(eventCnt_, eventCnt) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline SdlEventDetailList& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline SdlEventDetailList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline SdlEventDetailList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline SdlEventDetailList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // locationName Field Functions 
      bool hasLocationName() const { return this->locationName_ != nullptr;};
      void deleteLocationName() { this->locationName_ = nullptr;};
      inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
      inline SdlEventDetailList& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
      inline SdlEventDetailList& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


      // protoList Field Functions 
      bool hasProtoList() const { return this->protoList_ != nullptr;};
      void deleteProtoList() { this->protoList_ = nullptr;};
      inline string getProtoList() const { DARABONBA_PTR_GET_DEFAULT(protoList_, "") };
      inline SdlEventDetailList& setProtoList(string protoList) { DARABONBA_PTR_SET_VALUE(protoList_, protoList) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SdlEventDetailList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline SdlEventDetailList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceIdType Field Functions 
      bool hasResourceIdType() const { return this->resourceIdType_ != nullptr;};
      void deleteResourceIdType() { this->resourceIdType_ = nullptr;};
      inline int32_t getResourceIdType() const { DARABONBA_PTR_GET_DEFAULT(resourceIdType_, 0) };
      inline SdlEventDetailList& setResourceIdType(int32_t resourceIdType) { DARABONBA_PTR_SET_VALUE(resourceIdType_, resourceIdType) };


      // sensitiveDataCnt Field Functions 
      bool hasSensitiveDataCnt() const { return this->sensitiveDataCnt_ != nullptr;};
      void deleteSensitiveDataCnt() { this->sensitiveDataCnt_ = nullptr;};
      inline int64_t getSensitiveDataCnt() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataCnt_, 0L) };
      inline SdlEventDetailList& setSensitiveDataCnt(int64_t sensitiveDataCnt) { DARABONBA_PTR_SET_VALUE(sensitiveDataCnt_, sensitiveDataCnt) };


      // sensitiveDataList Field Functions 
      bool hasSensitiveDataList() const { return this->sensitiveDataList_ != nullptr;};
      void deleteSensitiveDataList() { this->sensitiveDataList_ = nullptr;};
      inline const vector<string> & getSensitiveDataList() const { DARABONBA_PTR_GET_CONST(sensitiveDataList_, vector<string>) };
      inline vector<string> getSensitiveDataList() { DARABONBA_PTR_GET(sensitiveDataList_, vector<string>) };
      inline SdlEventDetailList& setSensitiveDataList(const vector<string> & sensitiveDataList) { DARABONBA_PTR_SET_VALUE(sensitiveDataList_, sensitiveDataList) };
      inline SdlEventDetailList& setSensitiveDataList(vector<string> && sensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataList_, sensitiveDataList) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline SdlEventDetailList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // sensitiveType Field Functions 
      bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
      void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
      inline string getSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
      inline SdlEventDetailList& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline SdlEventDetailList& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // srcPortList Field Functions 
      bool hasSrcPortList() const { return this->srcPortList_ != nullptr;};
      void deleteSrcPortList() { this->srcPortList_ = nullptr;};
      inline string getSrcPortList() const { DARABONBA_PTR_GET_DEFAULT(srcPortList_, "") };
      inline SdlEventDetailList& setSrcPortList(string srcPortList) { DARABONBA_PTR_SET_VALUE(srcPortList_, srcPortList) };


      // trafficBytes Field Functions 
      bool hasTrafficBytes() const { return this->trafficBytes_ != nullptr;};
      void deleteTrafficBytes() { this->trafficBytes_ = nullptr;};
      inline int64_t getTrafficBytes() const { DARABONBA_PTR_GET_DEFAULT(trafficBytes_, 0L) };
      inline SdlEventDetailList& setTrafficBytes(int64_t trafficBytes) { DARABONBA_PTR_SET_VALUE(trafficBytes_, trafficBytes) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline SdlEventDetailList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> assetName_ {};
      shared_ptr<string> assetPrivateIp_ {};
      shared_ptr<string> assetType_ {};
      shared_ptr<string> categoryClassId_ {};
      shared_ptr<string> categoryName_ {};
      shared_ptr<string> cityId_ {};
      shared_ptr<string> countryId_ {};
      shared_ptr<string> dstIp_ {};
      shared_ptr<string> dstPortList_ {};
      shared_ptr<int64_t> eventCnt_ {};
      shared_ptr<string> eventLevel_ {};
      shared_ptr<string> eventName_ {};
      shared_ptr<int64_t> firstTime_ {};
      shared_ptr<int64_t> lastTime_ {};
      shared_ptr<string> locationName_ {};
      shared_ptr<string> payload_ {};
      shared_ptr<string> protoList_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<int32_t> resourceIdType_ {};
      shared_ptr<int64_t> sensitiveDataCnt_ {};
      shared_ptr<vector<string>> sensitiveDataList_ {};
      shared_ptr<string> sensitiveLevel_ {};
      shared_ptr<string> sensitiveType_ {};
      shared_ptr<string> srcIp_ {};
      shared_ptr<string> srcPortList_ {};
      shared_ptr<int64_t> trafficBytes_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sdlEventDetailList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlEventDetailList Field Functions 
    bool hasSdlEventDetailList() const { return this->sdlEventDetailList_ != nullptr;};
    void deleteSdlEventDetailList() { this->sdlEventDetailList_ = nullptr;};
    inline const vector<DescribeSdlEventListResponseBody::SdlEventDetailList> & getSdlEventDetailList() const { DARABONBA_PTR_GET_CONST(sdlEventDetailList_, vector<DescribeSdlEventListResponseBody::SdlEventDetailList>) };
    inline vector<DescribeSdlEventListResponseBody::SdlEventDetailList> getSdlEventDetailList() { DARABONBA_PTR_GET(sdlEventDetailList_, vector<DescribeSdlEventListResponseBody::SdlEventDetailList>) };
    inline DescribeSdlEventListResponseBody& setSdlEventDetailList(const vector<DescribeSdlEventListResponseBody::SdlEventDetailList> & sdlEventDetailList) { DARABONBA_PTR_SET_VALUE(sdlEventDetailList_, sdlEventDetailList) };
    inline DescribeSdlEventListResponseBody& setSdlEventDetailList(vector<DescribeSdlEventListResponseBody::SdlEventDetailList> && sdlEventDetailList) { DARABONBA_PTR_SET_RVALUE(sdlEventDetailList_, sdlEventDetailList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSdlEventListResponseBody::SdlEventDetailList>> sdlEventDetailList_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
