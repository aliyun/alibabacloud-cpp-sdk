// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEAPPSNAPSHOTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEAPPSNAPSHOTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveAppSnapshotConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveAppSnapshotConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OverwriteOssObject, overwriteOssObject_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SequenceOssObject, sequenceOssObject_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveAppSnapshotConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OverwriteOssObject, overwriteOssObject_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SequenceOssObject, sequenceOssObject_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    UpdateLiveAppSnapshotConfigRequest() = default ;
    UpdateLiveAppSnapshotConfigRequest(const UpdateLiveAppSnapshotConfigRequest &) = default ;
    UpdateLiveAppSnapshotConfigRequest(UpdateLiveAppSnapshotConfigRequest &&) = default ;
    UpdateLiveAppSnapshotConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveAppSnapshotConfigRequest() = default ;
    UpdateLiveAppSnapshotConfigRequest& operator=(const UpdateLiveAppSnapshotConfigRequest &) = default ;
    UpdateLiveAppSnapshotConfigRequest& operator=(UpdateLiveAppSnapshotConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->callback_ != nullptr && this->domainName_ != nullptr && this->ossBucket_ != nullptr && this->ossEndpoint_ != nullptr && this->overwriteOssObject_ != nullptr
        && this->ownerId_ != nullptr && this->securityToken_ != nullptr && this->sequenceOssObject_ != nullptr && this->timeInterval_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // overwriteOssObject Field Functions 
    bool hasOverwriteOssObject() const { return this->overwriteOssObject_ != nullptr;};
    void deleteOverwriteOssObject() { this->overwriteOssObject_ = nullptr;};
    inline string overwriteOssObject() const { DARABONBA_PTR_GET_DEFAULT(overwriteOssObject_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setOverwriteOssObject(string overwriteOssObject) { DARABONBA_PTR_SET_VALUE(overwriteOssObject_, overwriteOssObject) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveAppSnapshotConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sequenceOssObject Field Functions 
    bool hasSequenceOssObject() const { return this->sequenceOssObject_ != nullptr;};
    void deleteSequenceOssObject() { this->sequenceOssObject_ = nullptr;};
    inline string sequenceOssObject() const { DARABONBA_PTR_GET_DEFAULT(sequenceOssObject_, "") };
    inline UpdateLiveAppSnapshotConfigRequest& setSequenceOssObject(string sequenceOssObject) { DARABONBA_PTR_SET_VALUE(sequenceOssObject_, sequenceOssObject) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline UpdateLiveAppSnapshotConfigRequest& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The callback URL that is used to receive notifications about snapshot capture.
    std::shared_ptr<string> callback_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The endpoint of the OSS bucket.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The naming format of snapshots that are stored in the overwrite mode, which means that a new snapshot overwrites the previous snapshot.
    // 
    // *   The name must be less than 256 bytes in length.
    // *   Only JPG images are supported.
    // *   The name can contain variables such as {AppName} and {StreamName}.
    // *   A value of hyphen (-) indicates that this parameter is deleted.
    std::shared_ptr<string> overwriteOssObject_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The naming format of snapshots that are stored in sequence, which means that a new snapshot does not overwrite the previous snapshot. You can call the [DescribeLiveStreamSnapshotInfo](https://help.aliyun.com/document_detail/2847902.html) operation to query the snapshots that were captured within a specific time period.
    // 
    // *   The name must be less than 256 bytes in length.
    // *   Only JPG images are supported.
    // *   The name can contain variables such as {AppName}, {StreamName}, {UnixTimestamp}, and {Sequence}. The name must contain at least one of the {UnixTimestamp} and {Sequence} variables.
    // *   A value of hyphen (-) indicates that this parameter is deleted.
    std::shared_ptr<string> sequenceOssObject_ = nullptr;
    // The interval at which snapshots are captured. Valid values: **5 to 3600**. Unit: seconds.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
