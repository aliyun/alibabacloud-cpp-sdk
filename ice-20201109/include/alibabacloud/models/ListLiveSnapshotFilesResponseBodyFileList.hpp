// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTFILESRESPONSEBODYFILELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTFILESRESPONSEBODYFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotFilesResponseBodyFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotFilesResponseBodyFileList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(IsOverlay, isOverlay_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotFilesResponseBodyFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(IsOverlay, isOverlay_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
    };
    ListLiveSnapshotFilesResponseBodyFileList() = default ;
    ListLiveSnapshotFilesResponseBodyFileList(const ListLiveSnapshotFilesResponseBodyFileList &) = default ;
    ListLiveSnapshotFilesResponseBodyFileList(ListLiveSnapshotFilesResponseBodyFileList &&) = default ;
    ListLiveSnapshotFilesResponseBodyFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotFilesResponseBodyFileList() = default ;
    ListLiveSnapshotFilesResponseBodyFileList& operator=(const ListLiveSnapshotFilesResponseBodyFileList &) = default ;
    ListLiveSnapshotFilesResponseBodyFileList& operator=(ListLiveSnapshotFilesResponseBodyFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->createTimestamp_ == nullptr && return this->isOverlay_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->ossObject_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLiveSnapshotFilesResponseBodyFileList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline ListLiveSnapshotFilesResponseBodyFileList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // isOverlay Field Functions 
    bool hasIsOverlay() const { return this->isOverlay_ != nullptr;};
    void deleteIsOverlay() { this->isOverlay_ = nullptr;};
    inline bool isOverlay() const { DARABONBA_PTR_GET_DEFAULT(isOverlay_, false) };
    inline ListLiveSnapshotFilesResponseBodyFileList& setIsOverlay(bool isOverlay) { DARABONBA_PTR_SET_VALUE(isOverlay_, isOverlay) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline ListLiveSnapshotFilesResponseBodyFileList& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline ListLiveSnapshotFilesResponseBodyFileList& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline string ossObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
    inline ListLiveSnapshotFilesResponseBodyFileList& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


  protected:
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The creation timestamp that is used as an input parameter for a delete API operation.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Specifies whether to overlay snapshots.
    std::shared_ptr<bool> isOverlay_ = nullptr;
    // The OSS bucket.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The Object Storage Service (OSS) domain name.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The location in which the OSS object is stored.
    std::shared_ptr<string> ossObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
