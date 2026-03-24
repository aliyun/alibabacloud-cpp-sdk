// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROADCASTSCENE_HPP_
#define ALIBABACLOUD_MODELS_BROADCASTSCENE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class BroadcastScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BroadcastScene& obj) { 
      DARABONBA_PTR_TO_JSON(clipInfo, clipInfo_);
      DARABONBA_PTR_TO_JSON(coverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(downloadURL, downloadURL_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(previewURL, previewURL_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(remainSeconds, remainSeconds_);
      DARABONBA_PTR_TO_JSON(shortVideoURL, shortVideoURL_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(thumbnailURL, thumbnailURL_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, BroadcastScene& obj) { 
      DARABONBA_PTR_FROM_JSON(clipInfo, clipInfo_);
      DARABONBA_PTR_FROM_JSON(coverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(downloadURL, downloadURL_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(previewURL, previewURL_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(remainSeconds, remainSeconds_);
      DARABONBA_PTR_FROM_JSON(shortVideoURL, shortVideoURL_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(thumbnailURL, thumbnailURL_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    BroadcastScene() = default ;
    BroadcastScene(const BroadcastScene &) = default ;
    BroadcastScene(BroadcastScene &&) = default ;
    BroadcastScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BroadcastScene() = default ;
    BroadcastScene& operator=(const BroadcastScene &) = default ;
    BroadcastScene& operator=(BroadcastScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipInfo_ == nullptr
        && this->coverURL_ == nullptr && this->createTime_ == nullptr && this->downloadURL_ == nullptr && this->id_ == nullptr && this->modifiedTime_ == nullptr
        && this->name_ == nullptr && this->previewURL_ == nullptr && this->ratio_ == nullptr && this->remainSeconds_ == nullptr && this->shortVideoURL_ == nullptr
        && this->status_ == nullptr && this->thumbnailURL_ == nullptr && this->version_ == nullptr; };
    // clipInfo Field Functions 
    bool hasClipInfo() const { return this->clipInfo_ != nullptr;};
    void deleteClipInfo() { this->clipInfo_ = nullptr;};
    inline string getClipInfo() const { DARABONBA_PTR_GET_DEFAULT(clipInfo_, "") };
    inline BroadcastScene& setClipInfo(string clipInfo) { DARABONBA_PTR_SET_VALUE(clipInfo_, clipInfo) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline BroadcastScene& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BroadcastScene& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // downloadURL Field Functions 
    bool hasDownloadURL() const { return this->downloadURL_ != nullptr;};
    void deleteDownloadURL() { this->downloadURL_ = nullptr;};
    inline string getDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(downloadURL_, "") };
    inline BroadcastScene& setDownloadURL(string downloadURL) { DARABONBA_PTR_SET_VALUE(downloadURL_, downloadURL) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BroadcastScene& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline BroadcastScene& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BroadcastScene& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewURL Field Functions 
    bool hasPreviewURL() const { return this->previewURL_ != nullptr;};
    void deletePreviewURL() { this->previewURL_ = nullptr;};
    inline string getPreviewURL() const { DARABONBA_PTR_GET_DEFAULT(previewURL_, "") };
    inline BroadcastScene& setPreviewURL(string previewURL) { DARABONBA_PTR_SET_VALUE(previewURL_, previewURL) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline BroadcastScene& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // remainSeconds Field Functions 
    bool hasRemainSeconds() const { return this->remainSeconds_ != nullptr;};
    void deleteRemainSeconds() { this->remainSeconds_ = nullptr;};
    inline int64_t getRemainSeconds() const { DARABONBA_PTR_GET_DEFAULT(remainSeconds_, 0L) };
    inline BroadcastScene& setRemainSeconds(int64_t remainSeconds) { DARABONBA_PTR_SET_VALUE(remainSeconds_, remainSeconds) };


    // shortVideoURL Field Functions 
    bool hasShortVideoURL() const { return this->shortVideoURL_ != nullptr;};
    void deleteShortVideoURL() { this->shortVideoURL_ = nullptr;};
    inline string getShortVideoURL() const { DARABONBA_PTR_GET_DEFAULT(shortVideoURL_, "") };
    inline BroadcastScene& setShortVideoURL(string shortVideoURL) { DARABONBA_PTR_SET_VALUE(shortVideoURL_, shortVideoURL) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BroadcastScene& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thumbnailURL Field Functions 
    bool hasThumbnailURL() const { return this->thumbnailURL_ != nullptr;};
    void deleteThumbnailURL() { this->thumbnailURL_ = nullptr;};
    inline string getThumbnailURL() const { DARABONBA_PTR_GET_DEFAULT(thumbnailURL_, "") };
    inline BroadcastScene& setThumbnailURL(string thumbnailURL) { DARABONBA_PTR_SET_VALUE(thumbnailURL_, thumbnailURL) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline BroadcastScene& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> clipInfo_ {};
    shared_ptr<string> coverURL_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> downloadURL_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> modifiedTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> previewURL_ {};
    shared_ptr<string> ratio_ {};
    shared_ptr<int64_t> remainSeconds_ {};
    shared_ptr<string> shortVideoURL_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> thumbnailURL_ {};
    shared_ptr<int64_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
