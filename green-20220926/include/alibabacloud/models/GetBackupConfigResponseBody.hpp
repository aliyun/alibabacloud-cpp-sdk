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
        && this->bucket_ == nullptr && this->enable_ == nullptr && this->enableBackup_ == nullptr && this->enableBackupVoice_ == nullptr && this->expireSeconds_ == nullptr
        && this->gmtModified_ == nullptr && this->path_ == nullptr && this->pathVoice_ == nullptr && this->region_ == nullptr && this->requestId_ == nullptr
        && this->resourceType_ == nullptr && this->serviceCode_ == nullptr && this->uid_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline int32_t getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, 0) };
    inline GetBackupConfigResponseBody& setBackupMode(int32_t backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetBackupConfigResponseBody& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetBackupConfigResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableBackup Field Functions 
    bool hasEnableBackup() const { return this->enableBackup_ != nullptr;};
    void deleteEnableBackup() { this->enableBackup_ = nullptr;};
    inline bool getEnableBackup() const { DARABONBA_PTR_GET_DEFAULT(enableBackup_, false) };
    inline GetBackupConfigResponseBody& setEnableBackup(bool enableBackup) { DARABONBA_PTR_SET_VALUE(enableBackup_, enableBackup) };


    // enableBackupVoice Field Functions 
    bool hasEnableBackupVoice() const { return this->enableBackupVoice_ != nullptr;};
    void deleteEnableBackupVoice() { this->enableBackupVoice_ = nullptr;};
    inline bool getEnableBackupVoice() const { DARABONBA_PTR_GET_DEFAULT(enableBackupVoice_, false) };
    inline GetBackupConfigResponseBody& setEnableBackupVoice(bool enableBackupVoice) { DARABONBA_PTR_SET_VALUE(enableBackupVoice_, enableBackupVoice) };


    // expireSeconds Field Functions 
    bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
    void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
    inline int32_t getExpireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0) };
    inline GetBackupConfigResponseBody& setExpireSeconds(int32_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetBackupConfigResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetBackupConfigResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathVoice Field Functions 
    bool hasPathVoice() const { return this->pathVoice_ != nullptr;};
    void deletePathVoice() { this->pathVoice_ = nullptr;};
    inline string getPathVoice() const { DARABONBA_PTR_GET_DEFAULT(pathVoice_, "") };
    inline GetBackupConfigResponseBody& setPathVoice(string pathVoice) { DARABONBA_PTR_SET_VALUE(pathVoice_, pathVoice) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetBackupConfigResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetBackupConfigResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetBackupConfigResponseBody& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetBackupConfigResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Backup scope.
    shared_ptr<int32_t> backupMode_ {};
    // File server OSS Bucket.
    shared_ptr<string> bucket_ {};
    // Whether it is enabled. Values:
    // - **true**: Enabled
    // - **false**: Disabled
    shared_ptr<bool> enable_ {};
    // Whether to enable backup.
    shared_ptr<bool> enableBackup_ {};
    // Whether to enable audio backup.
    shared_ptr<bool> enableBackupVoice_ {};
    // Expiration time in seconds.
    shared_ptr<int32_t> expireSeconds_ {};
    // Modification time.
    shared_ptr<string> gmtModified_ {};
    // Path.
    shared_ptr<string> path_ {};
    // Audio backup path.
    shared_ptr<string> pathVoice_ {};
    // Region ID.
    shared_ptr<string> region_ {};
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Resource type.
    shared_ptr<string> resourceType_ {};
    // Service code.
    shared_ptr<string> serviceCode_ {};
    // UID.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
