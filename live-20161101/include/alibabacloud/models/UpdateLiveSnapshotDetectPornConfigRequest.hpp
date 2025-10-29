// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVESNAPSHOTDETECTPORNCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVESNAPSHOTDETECTPORNCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveSnapshotDetectPornConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveSnapshotDetectPornConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveSnapshotDetectPornConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    UpdateLiveSnapshotDetectPornConfigRequest() = default ;
    UpdateLiveSnapshotDetectPornConfigRequest(const UpdateLiveSnapshotDetectPornConfigRequest &) = default ;
    UpdateLiveSnapshotDetectPornConfigRequest(UpdateLiveSnapshotDetectPornConfigRequest &&) = default ;
    UpdateLiveSnapshotDetectPornConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveSnapshotDetectPornConfigRequest() = default ;
    UpdateLiveSnapshotDetectPornConfigRequest& operator=(const UpdateLiveSnapshotDetectPornConfigRequest &) = default ;
    UpdateLiveSnapshotDetectPornConfigRequest& operator=(UpdateLiveSnapshotDetectPornConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->interval_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->ossObject_ == nullptr
        && return this->ownerId_ == nullptr && return this->scene_ == nullptr && return this->securityToken_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline string ossObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const vector<string> & scene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
    inline vector<string> scene() { DARABONBA_PTR_GET(scene_, vector<string>) };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLiveSnapshotDetectPornConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The name of the application to which the live stream belongs. The value of this parameter must be the same as the application name in the ingest URL. Otherwise, the configuration does not take effect. The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name cannot start with a hyphen (-) or underscore (_). You can also specify an asterisk (\\*) as the value to match all applications.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The interval at which snapshots are captured from the live stream. Valid values: **5 to 3600**. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The endpoint of the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The name of the snapshot that stores violations such as pornographic content and politically sensitive content.
    std::shared_ptr<string> ossObject_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The moderation scenario array.
    std::shared_ptr<vector<string>> scene_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
