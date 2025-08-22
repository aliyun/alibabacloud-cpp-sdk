// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTCACHE_HPP_
#define ALIBABACLOUD_MODELS_SMARTCACHE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SmartCache : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartCache& obj) { 
      DARABONBA_PTR_TO_JSON(CacheWorkerNum, cacheWorkerNum_);
      DARABONBA_PTR_TO_JSON(CacheWorkerSize, cacheWorkerSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SmartCacheId, smartCacheId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SmartCache& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheWorkerNum, cacheWorkerNum_);
      DARABONBA_PTR_FROM_JSON(CacheWorkerSize, cacheWorkerSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SmartCacheId, smartCacheId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SmartCache() = default ;
    SmartCache(const SmartCache &) = default ;
    SmartCache(SmartCache &&) = default ;
    SmartCache(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartCache() = default ;
    SmartCache& operator=(const SmartCache &) = default ;
    SmartCache& operator=(SmartCache &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheWorkerNum_ != nullptr
        && this->cacheWorkerSize_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr && this->duration_ != nullptr && this->endpoint_ != nullptr
        && this->fileSystemId_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifyTime_ != nullptr && this->mountPath_ != nullptr && this->options_ != nullptr
        && this->path_ != nullptr && this->smartCacheId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr; };
    // cacheWorkerNum Field Functions 
    bool hasCacheWorkerNum() const { return this->cacheWorkerNum_ != nullptr;};
    void deleteCacheWorkerNum() { this->cacheWorkerNum_ = nullptr;};
    inline int64_t cacheWorkerNum() const { DARABONBA_PTR_GET_DEFAULT(cacheWorkerNum_, 0L) };
    inline SmartCache& setCacheWorkerNum(int64_t cacheWorkerNum) { DARABONBA_PTR_SET_VALUE(cacheWorkerNum_, cacheWorkerNum) };


    // cacheWorkerSize Field Functions 
    bool hasCacheWorkerSize() const { return this->cacheWorkerSize_ != nullptr;};
    void deleteCacheWorkerSize() { this->cacheWorkerSize_ = nullptr;};
    inline int64_t cacheWorkerSize() const { DARABONBA_PTR_GET_DEFAULT(cacheWorkerSize_, 0L) };
    inline SmartCache& setCacheWorkerSize(int64_t cacheWorkerSize) { DARABONBA_PTR_SET_VALUE(cacheWorkerSize_, cacheWorkerSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SmartCache& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline SmartCache& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SmartCache& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SmartCache& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline SmartCache& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline SmartCache& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline SmartCache& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline SmartCache& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline SmartCache& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline SmartCache& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // smartCacheId Field Functions 
    bool hasSmartCacheId() const { return this->smartCacheId_ != nullptr;};
    void deleteSmartCacheId() { this->smartCacheId_ = nullptr;};
    inline string smartCacheId() const { DARABONBA_PTR_GET_DEFAULT(smartCacheId_, "") };
    inline SmartCache& setSmartCacheId(string smartCacheId) { DARABONBA_PTR_SET_VALUE(smartCacheId_, smartCacheId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SmartCache& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SmartCache& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SmartCache& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> cacheWorkerNum_ = nullptr;
    std::shared_ptr<int64_t> cacheWorkerSize_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> smartCacheId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
