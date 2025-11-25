// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTLISTRESPONSEBODYSDLEVENTDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTLISTRESPONSEBODYSDLEVENTDETAILLIST_HPP_
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
  class DescribeSdlEventListResponseBodySdlEventDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventListResponseBodySdlEventDetailList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventListResponseBodySdlEventDetailList& obj) { 
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
    DescribeSdlEventListResponseBodySdlEventDetailList() = default ;
    DescribeSdlEventListResponseBodySdlEventDetailList(const DescribeSdlEventListResponseBodySdlEventDetailList &) = default ;
    DescribeSdlEventListResponseBodySdlEventDetailList(DescribeSdlEventListResponseBodySdlEventDetailList &&) = default ;
    DescribeSdlEventListResponseBodySdlEventDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventListResponseBodySdlEventDetailList() = default ;
    DescribeSdlEventListResponseBodySdlEventDetailList& operator=(const DescribeSdlEventListResponseBodySdlEventDetailList &) = default ;
    DescribeSdlEventListResponseBodySdlEventDetailList& operator=(DescribeSdlEventListResponseBodySdlEventDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr
        && return this->assetPrivateIp_ == nullptr && return this->assetType_ == nullptr && return this->categoryClassId_ == nullptr && return this->categoryName_ == nullptr && return this->cityId_ == nullptr
        && return this->countryId_ == nullptr && return this->dstIp_ == nullptr && return this->dstPortList_ == nullptr && return this->eventCnt_ == nullptr && return this->eventLevel_ == nullptr
        && return this->eventName_ == nullptr && return this->firstTime_ == nullptr && return this->lastTime_ == nullptr && return this->locationName_ == nullptr && return this->payload_ == nullptr
        && return this->protoList_ == nullptr && return this->regionId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceIdType_ == nullptr && return this->sensitiveDataCnt_ == nullptr
        && return this->sensitiveDataList_ == nullptr && return this->sensitiveLevel_ == nullptr && return this->sensitiveType_ == nullptr && return this->srcIp_ == nullptr && return this->srcPortList_ == nullptr
        && return this->trafficBytes_ == nullptr && return this->uuid_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // assetPrivateIp Field Functions 
    bool hasAssetPrivateIp() const { return this->assetPrivateIp_ != nullptr;};
    void deleteAssetPrivateIp() { this->assetPrivateIp_ = nullptr;};
    inline string assetPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(assetPrivateIp_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setAssetPrivateIp(string assetPrivateIp) { DARABONBA_PTR_SET_VALUE(assetPrivateIp_, assetPrivateIp) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // categoryClassId Field Functions 
    bool hasCategoryClassId() const { return this->categoryClassId_ != nullptr;};
    void deleteCategoryClassId() { this->categoryClassId_ = nullptr;};
    inline string categoryClassId() const { DARABONBA_PTR_GET_DEFAULT(categoryClassId_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setCategoryClassId(string categoryClassId) { DARABONBA_PTR_SET_VALUE(categoryClassId_, categoryClassId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // cityId Field Functions 
    bool hasCityId() const { return this->cityId_ != nullptr;};
    void deleteCityId() { this->cityId_ = nullptr;};
    inline string cityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


    // countryId Field Functions 
    bool hasCountryId() const { return this->countryId_ != nullptr;};
    void deleteCountryId() { this->countryId_ = nullptr;};
    inline string countryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // dstPortList Field Functions 
    bool hasDstPortList() const { return this->dstPortList_ != nullptr;};
    void deleteDstPortList() { this->dstPortList_ = nullptr;};
    inline string dstPortList() const { DARABONBA_PTR_GET_DEFAULT(dstPortList_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setDstPortList(string dstPortList) { DARABONBA_PTR_SET_VALUE(dstPortList_, dstPortList) };


    // eventCnt Field Functions 
    bool hasEventCnt() const { return this->eventCnt_ != nullptr;};
    void deleteEventCnt() { this->eventCnt_ = nullptr;};
    inline int64_t eventCnt() const { DARABONBA_PTR_GET_DEFAULT(eventCnt_, 0L) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setEventCnt(int64_t eventCnt) { DARABONBA_PTR_SET_VALUE(eventCnt_, eventCnt) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // locationName Field Functions 
    bool hasLocationName() const { return this->locationName_ != nullptr;};
    void deleteLocationName() { this->locationName_ = nullptr;};
    inline string locationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // protoList Field Functions 
    bool hasProtoList() const { return this->protoList_ != nullptr;};
    void deleteProtoList() { this->protoList_ = nullptr;};
    inline string protoList() const { DARABONBA_PTR_GET_DEFAULT(protoList_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setProtoList(string protoList) { DARABONBA_PTR_SET_VALUE(protoList_, protoList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceIdType Field Functions 
    bool hasResourceIdType() const { return this->resourceIdType_ != nullptr;};
    void deleteResourceIdType() { this->resourceIdType_ = nullptr;};
    inline int32_t resourceIdType() const { DARABONBA_PTR_GET_DEFAULT(resourceIdType_, 0) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setResourceIdType(int32_t resourceIdType) { DARABONBA_PTR_SET_VALUE(resourceIdType_, resourceIdType) };


    // sensitiveDataCnt Field Functions 
    bool hasSensitiveDataCnt() const { return this->sensitiveDataCnt_ != nullptr;};
    void deleteSensitiveDataCnt() { this->sensitiveDataCnt_ = nullptr;};
    inline int64_t sensitiveDataCnt() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataCnt_, 0L) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSensitiveDataCnt(int64_t sensitiveDataCnt) { DARABONBA_PTR_SET_VALUE(sensitiveDataCnt_, sensitiveDataCnt) };


    // sensitiveDataList Field Functions 
    bool hasSensitiveDataList() const { return this->sensitiveDataList_ != nullptr;};
    void deleteSensitiveDataList() { this->sensitiveDataList_ = nullptr;};
    inline const vector<string> & sensitiveDataList() const { DARABONBA_PTR_GET_CONST(sensitiveDataList_, vector<string>) };
    inline vector<string> sensitiveDataList() { DARABONBA_PTR_GET(sensitiveDataList_, vector<string>) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSensitiveDataList(const vector<string> & sensitiveDataList) { DARABONBA_PTR_SET_VALUE(sensitiveDataList_, sensitiveDataList) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSensitiveDataList(vector<string> && sensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataList_, sensitiveDataList) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline string sensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // srcPortList Field Functions 
    bool hasSrcPortList() const { return this->srcPortList_ != nullptr;};
    void deleteSrcPortList() { this->srcPortList_ = nullptr;};
    inline string srcPortList() const { DARABONBA_PTR_GET_DEFAULT(srcPortList_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setSrcPortList(string srcPortList) { DARABONBA_PTR_SET_VALUE(srcPortList_, srcPortList) };


    // trafficBytes Field Functions 
    bool hasTrafficBytes() const { return this->trafficBytes_ != nullptr;};
    void deleteTrafficBytes() { this->trafficBytes_ = nullptr;};
    inline int64_t trafficBytes() const { DARABONBA_PTR_GET_DEFAULT(trafficBytes_, 0L) };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setTrafficBytes(int64_t trafficBytes) { DARABONBA_PTR_SET_VALUE(trafficBytes_, trafficBytes) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSdlEventListResponseBodySdlEventDetailList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> assetName_ = nullptr;
    std::shared_ptr<string> assetPrivateIp_ = nullptr;
    std::shared_ptr<string> assetType_ = nullptr;
    std::shared_ptr<string> categoryClassId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> cityId_ = nullptr;
    std::shared_ptr<string> countryId_ = nullptr;
    std::shared_ptr<string> dstIp_ = nullptr;
    std::shared_ptr<string> dstPortList_ = nullptr;
    std::shared_ptr<int64_t> eventCnt_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    std::shared_ptr<string> locationName_ = nullptr;
    std::shared_ptr<string> payload_ = nullptr;
    std::shared_ptr<string> protoList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<int32_t> resourceIdType_ = nullptr;
    std::shared_ptr<int64_t> sensitiveDataCnt_ = nullptr;
    std::shared_ptr<vector<string>> sensitiveDataList_ = nullptr;
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    std::shared_ptr<string> sensitiveType_ = nullptr;
    std::shared_ptr<string> srcIp_ = nullptr;
    std::shared_ptr<string> srcPortList_ = nullptr;
    std::shared_ptr<int64_t> trafficBytes_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
