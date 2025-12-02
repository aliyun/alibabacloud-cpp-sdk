// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetBackupConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EnableBackup, enableBackup_);
      DARABONBA_PTR_TO_JSON(EnableBackupVoice, enableBackupVoice_);
      DARABONBA_PTR_TO_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PathVoice, pathVoice_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EnableBackup, enableBackup_);
      DARABONBA_PTR_FROM_JSON(EnableBackupVoice, enableBackupVoice_);
      DARABONBA_PTR_FROM_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PathVoice, pathVoice_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetBackupConfigResponseBody() = default ;
    GetBackupConfigResponseBody(const GetBackupConfigResponseBody &) = default ;
    GetBackupConfigResponseBody(GetBackupConfigResponseBody &&) = default ;
    GetBackupConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupConfigResponseBody() = default ;
    GetBackupConfigResponseBody& operator=(const GetBackupConfigResponseBody &) = default ;
    GetBackupConfigResponseBody& operator=(GetBackupConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && return this->bucket_ == nullptr && return this->enable_ == nullptr && return this->enableBackup_ == nullptr && return this->enableBackupVoice_ == nullptr && return this->expireSeconds_ == nullptr
        && return this->gmtModified_ == nullptr && return this->path_ == nullptr && return this->pathVoice_ == nullptr && return this->region_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceType_ == nullptr && return this->serviceCode_ == nullptr && return this->uid_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline int32_t backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, 0) };
    inline GetBackupConfigResponseBody& setBackupMode(int32_t backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetBackupConfigResponseBody& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetBackupConfigResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableBackup Field Functions 
    bool hasEnableBackup() const { return this->enableBackup_ != nullptr;};
    void deleteEnableBackup() { this->enableBackup_ = nullptr;};
    inline bool enableBackup() const { DARABONBA_PTR_GET_DEFAULT(enableBackup_, false) };
    inline GetBackupConfigResponseBody& setEnableBackup(bool enableBackup) { DARABONBA_PTR_SET_VALUE(enableBackup_, enableBackup) };


    // enableBackupVoice Field Functions 
    bool hasEnableBackupVoice() const { return this->enableBackupVoice_ != nullptr;};
    void deleteEnableBackupVoice() { this->enableBackupVoice_ = nullptr;};
    inline bool enableBackupVoice() const { DARABONBA_PTR_GET_DEFAULT(enableBackupVoice_, false) };
    inline GetBackupConfigResponseBody& setEnableBackupVoice(bool enableBackupVoice) { DARABONBA_PTR_SET_VALUE(enableBackupVoice_, enableBackupVoice) };


    // expireSeconds Field Functions 
    bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
    void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
    inline int32_t expireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0) };
    inline GetBackupConfigResponseBody& setExpireSeconds(int32_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetBackupConfigResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetBackupConfigResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathVoice Field Functions 
    bool hasPathVoice() const { return this->pathVoice_ != nullptr;};
    void deletePathVoice() { this->pathVoice_ = nullptr;};
    inline string pathVoice() const { DARABONBA_PTR_GET_DEFAULT(pathVoice_, "") };
    inline GetBackupConfigResponseBody& setPathVoice(string pathVoice) { DARABONBA_PTR_SET_VALUE(pathVoice_, pathVoice) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetBackupConfigResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetBackupConfigResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetBackupConfigResponseBody& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetBackupConfigResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Backup scope.
    std::shared_ptr<int32_t> backupMode_ = nullptr;
    // File server OSS Bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // Whether it is enabled. Values:
    // - **true**: Enabled
    // - **false**: Disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // Whether to enable backup.
    std::shared_ptr<bool> enableBackup_ = nullptr;
    // Whether to enable audio backup.
    std::shared_ptr<bool> enableBackupVoice_ = nullptr;
    // Expiration time in seconds.
    std::shared_ptr<int32_t> expireSeconds_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Path.
    std::shared_ptr<string> path_ = nullptr;
    // Audio backup path.
    std::shared_ptr<string> pathVoice_ = nullptr;
    // Region ID.
    std::shared_ptr<string> region_ = nullptr;
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
