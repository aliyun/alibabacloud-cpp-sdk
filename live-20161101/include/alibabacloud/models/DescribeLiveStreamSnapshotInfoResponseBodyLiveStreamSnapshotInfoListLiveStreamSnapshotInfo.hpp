// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODYLIVESTREAMSNAPSHOTINFOLISTLIVESTREAMSNAPSHOTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNAPSHOTINFORESPONSEBODYLIVESTREAMSNAPSHOTINFOLISTLIVESTREAMSNAPSHOTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(IsOverlay, isOverlay_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(IsOverlay, isOverlay_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
    };
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo() = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo(const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo &) = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo(DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo &&) = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo() = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& operator=(const DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo &) = default ;
    DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& operator=(DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo &&) = default ;
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
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // isOverlay Field Functions 
    bool hasIsOverlay() const { return this->isOverlay_ != nullptr;};
    void deleteIsOverlay() { this->isOverlay_ = nullptr;};
    inline bool isOverlay() const { DARABONBA_PTR_GET_DEFAULT(isOverlay_, false) };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& setIsOverlay(bool isOverlay) { DARABONBA_PTR_SET_VALUE(isOverlay_, isOverlay) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline string ossObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
    inline DescribeLiveStreamSnapshotInfoResponseBodyLiveStreamSnapshotInfoListLiveStreamSnapshotInfo& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


  protected:
    // The time when the snapshot was captured. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp when the snapshot file was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The snapshot mode. Valid values:
    // 
    // *   **true**: overwrite mode, which means that a new snapshot overwrites the previous snapshot.
    // *   **false**: sequence mode, which means that a new snapshot does not overwrite the previous snapshot.
    std::shared_ptr<bool> isOverlay_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The endpoint of the OSS bucket.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The name of the snapshot stored in Object Storage Service (OSS).
    std::shared_ptr<string> ossObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
