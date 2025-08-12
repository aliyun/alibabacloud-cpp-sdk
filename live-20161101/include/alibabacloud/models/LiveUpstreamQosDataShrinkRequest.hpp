// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class LiveUpstreamQosDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveUpstreamQosDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdnDomains, cdnDomainsShrink_);
      DARABONBA_PTR_TO_JSON(CdnIsps, cdnIspsShrink_);
      DARABONBA_PTR_TO_JSON(CdnProvinces, cdnProvincesShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KwaiSidcs, kwaiSidcsShrink_);
      DARABONBA_PTR_TO_JSON(KwaiTsc, kwaiTscShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpstreamDomains, upstreamDomainsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, LiveUpstreamQosDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnDomains, cdnDomainsShrink_);
      DARABONBA_PTR_FROM_JSON(CdnIsps, cdnIspsShrink_);
      DARABONBA_PTR_FROM_JSON(CdnProvinces, cdnProvincesShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KwaiSidcs, kwaiSidcsShrink_);
      DARABONBA_PTR_FROM_JSON(KwaiTsc, kwaiTscShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpstreamDomains, upstreamDomainsShrink_);
    };
    LiveUpstreamQosDataShrinkRequest() = default ;
    LiveUpstreamQosDataShrinkRequest(const LiveUpstreamQosDataShrinkRequest &) = default ;
    LiveUpstreamQosDataShrinkRequest(LiveUpstreamQosDataShrinkRequest &&) = default ;
    LiveUpstreamQosDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveUpstreamQosDataShrinkRequest() = default ;
    LiveUpstreamQosDataShrinkRequest& operator=(const LiveUpstreamQosDataShrinkRequest &) = default ;
    LiveUpstreamQosDataShrinkRequest& operator=(LiveUpstreamQosDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdnDomainsShrink_ != nullptr
        && this->cdnIspsShrink_ != nullptr && this->cdnProvincesShrink_ != nullptr && this->endTime_ != nullptr && this->kwaiSidcsShrink_ != nullptr && this->kwaiTscShrink_ != nullptr
        && this->ownerId_ != nullptr && this->region_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr && this->upstreamDomainsShrink_ != nullptr; };
    // cdnDomainsShrink Field Functions 
    bool hasCdnDomainsShrink() const { return this->cdnDomainsShrink_ != nullptr;};
    void deleteCdnDomainsShrink() { this->cdnDomainsShrink_ = nullptr;};
    inline string cdnDomainsShrink() const { DARABONBA_PTR_GET_DEFAULT(cdnDomainsShrink_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setCdnDomainsShrink(string cdnDomainsShrink) { DARABONBA_PTR_SET_VALUE(cdnDomainsShrink_, cdnDomainsShrink) };


    // cdnIspsShrink Field Functions 
    bool hasCdnIspsShrink() const { return this->cdnIspsShrink_ != nullptr;};
    void deleteCdnIspsShrink() { this->cdnIspsShrink_ = nullptr;};
    inline string cdnIspsShrink() const { DARABONBA_PTR_GET_DEFAULT(cdnIspsShrink_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setCdnIspsShrink(string cdnIspsShrink) { DARABONBA_PTR_SET_VALUE(cdnIspsShrink_, cdnIspsShrink) };


    // cdnProvincesShrink Field Functions 
    bool hasCdnProvincesShrink() const { return this->cdnProvincesShrink_ != nullptr;};
    void deleteCdnProvincesShrink() { this->cdnProvincesShrink_ = nullptr;};
    inline string cdnProvincesShrink() const { DARABONBA_PTR_GET_DEFAULT(cdnProvincesShrink_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setCdnProvincesShrink(string cdnProvincesShrink) { DARABONBA_PTR_SET_VALUE(cdnProvincesShrink_, cdnProvincesShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // kwaiSidcsShrink Field Functions 
    bool hasKwaiSidcsShrink() const { return this->kwaiSidcsShrink_ != nullptr;};
    void deleteKwaiSidcsShrink() { this->kwaiSidcsShrink_ = nullptr;};
    inline string kwaiSidcsShrink() const { DARABONBA_PTR_GET_DEFAULT(kwaiSidcsShrink_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setKwaiSidcsShrink(string kwaiSidcsShrink) { DARABONBA_PTR_SET_VALUE(kwaiSidcsShrink_, kwaiSidcsShrink) };


    // kwaiTscShrink Field Functions 
    bool hasKwaiTscShrink() const { return this->kwaiTscShrink_ != nullptr;};
    void deleteKwaiTscShrink() { this->kwaiTscShrink_ = nullptr;};
    inline string kwaiTscShrink() const { DARABONBA_PTR_GET_DEFAULT(kwaiTscShrink_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setKwaiTscShrink(string kwaiTscShrink) { DARABONBA_PTR_SET_VALUE(kwaiTscShrink_, kwaiTscShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline LiveUpstreamQosDataShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // upstreamDomainsShrink Field Functions 
    bool hasUpstreamDomainsShrink() const { return this->upstreamDomainsShrink_ != nullptr;};
    void deleteUpstreamDomainsShrink() { this->upstreamDomainsShrink_ = nullptr;};
    inline string upstreamDomainsShrink() const { DARABONBA_PTR_GET_DEFAULT(upstreamDomainsShrink_, "") };
    inline LiveUpstreamQosDataShrinkRequest& setUpstreamDomainsShrink(string upstreamDomainsShrink) { DARABONBA_PTR_SET_VALUE(upstreamDomainsShrink_, upstreamDomainsShrink) };


  protected:
    std::shared_ptr<string> cdnDomainsShrink_ = nullptr;
    std::shared_ptr<string> cdnIspsShrink_ = nullptr;
    std::shared_ptr<string> cdnProvincesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> kwaiSidcsShrink_ = nullptr;
    std::shared_ptr<string> kwaiTscShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> upstreamDomainsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
