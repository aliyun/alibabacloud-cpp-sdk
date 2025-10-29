// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LocationList, locationList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LocationList, locationList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    SetLiveStreamBlockRequest() = default ;
    SetLiveStreamBlockRequest(const SetLiveStreamBlockRequest &) = default ;
    SetLiveStreamBlockRequest(SetLiveStreamBlockRequest &&) = default ;
    SetLiveStreamBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamBlockRequest() = default ;
    SetLiveStreamBlockRequest& operator=(const SetLiveStreamBlockRequest &) = default ;
    SetLiveStreamBlockRequest& operator=(SetLiveStreamBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->blockType_ == nullptr && return this->domainName_ == nullptr && return this->locationList_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->releaseTime_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetLiveStreamBlockRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline SetLiveStreamBlockRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveStreamBlockRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // locationList Field Functions 
    bool hasLocationList() const { return this->locationList_ != nullptr;};
    void deleteLocationList() { this->locationList_ = nullptr;};
    inline string locationList() const { DARABONBA_PTR_GET_DEFAULT(locationList_, "") };
    inline SetLiveStreamBlockRequest& setLocationList(string locationList) { DARABONBA_PTR_SET_VALUE(locationList_, locationList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveStreamBlockRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLiveStreamBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline SetLiveStreamBlockRequest& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline SetLiveStreamBlockRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The blocking type. Valid values: blacklist and whitelist.
    // 
    // This parameter is required.
    std::shared_ptr<string> blockType_ = nullptr;
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The blocked region. If you specify multiple regions, such as CN and AS, separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> locationList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the blocking ends. The time must be in UTC. If you do not specify this parameter, the blocking is valid for 7 days by default.
    std::shared_ptr<string> releaseTime_ = nullptr;
    // The name of the live stream. You can view the stream name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
