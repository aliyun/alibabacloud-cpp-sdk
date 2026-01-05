// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVESNAPSHOTDETECTPORNCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVESNAPSHOTDETECTPORNCONFIGREQUEST_HPP_
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
  class AddLiveSnapshotDetectPornConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveSnapshotDetectPornConfigRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AddLiveSnapshotDetectPornConfigRequest& obj) { 
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
    AddLiveSnapshotDetectPornConfigRequest() = default ;
    AddLiveSnapshotDetectPornConfigRequest(const AddLiveSnapshotDetectPornConfigRequest &) = default ;
    AddLiveSnapshotDetectPornConfigRequest(AddLiveSnapshotDetectPornConfigRequest &&) = default ;
    AddLiveSnapshotDetectPornConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveSnapshotDetectPornConfigRequest() = default ;
    AddLiveSnapshotDetectPornConfigRequest& operator=(const AddLiveSnapshotDetectPornConfigRequest &) = default ;
    AddLiveSnapshotDetectPornConfigRequest& operator=(AddLiveSnapshotDetectPornConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->interval_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObject_ == nullptr
        && this->ownerId_ == nullptr && this->scene_ == nullptr && this->securityToken_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLiveSnapshotDetectPornConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveSnapshotDetectPornConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddLiveSnapshotDetectPornConfigRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline AddLiveSnapshotDetectPornConfigRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline AddLiveSnapshotDetectPornConfigRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
    inline AddLiveSnapshotDetectPornConfigRequest& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveSnapshotDetectPornConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const vector<string> & getScene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
    inline vector<string> getScene() { DARABONBA_PTR_GET(scene_, vector<string>) };
    inline AddLiveSnapshotDetectPornConfigRequest& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline AddLiveSnapshotDetectPornConfigRequest& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddLiveSnapshotDetectPornConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The interval at which snapshots are captured from the live stream. Valid values: **5 to 3600**. Unit: seconds.
    shared_ptr<int32_t> interval_ {};
    // The name of the OSS bucket.
    // 
    // After the review is complete, you can search for specific violations in the OSS console based on the callback information. You must create the OSS bucket in advance. For more information, see [Configure content moderation](https://help.aliyun.com/document_detail/199449.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossBucket_ {};
    // The endpoint of the Object Storage Service (OSS) bucket.
    // 
    // After the review is complete, you can search for specific violations in the OSS console based on the callback information. You must configure the OSS endpoint in advance. For more information, see [Configure content moderation](https://help.aliyun.com/document_detail/199449.html).
    // 
    // This parameter is required.
    shared_ptr<string> ossEndpoint_ {};
    // The name of the snapshot that stores violations such as pornographic content and politically sensitive content.
    shared_ptr<string> ossObject_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Scene list detection.
    shared_ptr<vector<string>> scene_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
