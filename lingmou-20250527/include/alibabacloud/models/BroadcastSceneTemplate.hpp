// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROADCASTSCENETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_BROADCASTSCENETEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class BroadcastSceneTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BroadcastSceneTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(coverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(previewURL, previewURL_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(shortVideoURL, shortVideoURL_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(thumbnailURL, thumbnailURL_);
    };
    friend void from_json(const Darabonba::Json& j, BroadcastSceneTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(coverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(previewURL, previewURL_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(shortVideoURL, shortVideoURL_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(thumbnailURL, thumbnailURL_);
    };
    BroadcastSceneTemplate() = default ;
    BroadcastSceneTemplate(const BroadcastSceneTemplate &) = default ;
    BroadcastSceneTemplate(BroadcastSceneTemplate &&) = default ;
    BroadcastSceneTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BroadcastSceneTemplate() = default ;
    BroadcastSceneTemplate& operator=(const BroadcastSceneTemplate &) = default ;
    BroadcastSceneTemplate& operator=(BroadcastSceneTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverURL_ == nullptr
        && this->createTime_ == nullptr && this->desc_ == nullptr && this->id_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr
        && this->previewURL_ == nullptr && this->ratio_ == nullptr && this->shortVideoURL_ == nullptr && this->tags_ == nullptr && this->thumbnailURL_ == nullptr; };
    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline BroadcastSceneTemplate& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BroadcastSceneTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline BroadcastSceneTemplate& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BroadcastSceneTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline BroadcastSceneTemplate& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BroadcastSceneTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewURL Field Functions 
    bool hasPreviewURL() const { return this->previewURL_ != nullptr;};
    void deletePreviewURL() { this->previewURL_ = nullptr;};
    inline string getPreviewURL() const { DARABONBA_PTR_GET_DEFAULT(previewURL_, "") };
    inline BroadcastSceneTemplate& setPreviewURL(string previewURL) { DARABONBA_PTR_SET_VALUE(previewURL_, previewURL) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline BroadcastSceneTemplate& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // shortVideoURL Field Functions 
    bool hasShortVideoURL() const { return this->shortVideoURL_ != nullptr;};
    void deleteShortVideoURL() { this->shortVideoURL_ = nullptr;};
    inline string getShortVideoURL() const { DARABONBA_PTR_GET_DEFAULT(shortVideoURL_, "") };
    inline BroadcastSceneTemplate& setShortVideoURL(string shortVideoURL) { DARABONBA_PTR_SET_VALUE(shortVideoURL_, shortVideoURL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline BroadcastSceneTemplate& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline BroadcastSceneTemplate& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // thumbnailURL Field Functions 
    bool hasThumbnailURL() const { return this->thumbnailURL_ != nullptr;};
    void deleteThumbnailURL() { this->thumbnailURL_ = nullptr;};
    inline string getThumbnailURL() const { DARABONBA_PTR_GET_DEFAULT(thumbnailURL_, "") };
    inline BroadcastSceneTemplate& setThumbnailURL(string thumbnailURL) { DARABONBA_PTR_SET_VALUE(thumbnailURL_, thumbnailURL) };


  protected:
    shared_ptr<string> coverURL_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> desc_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> modifiedTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> previewURL_ {};
    shared_ptr<string> ratio_ {};
    shared_ptr<string> shortVideoURL_ {};
    shared_ptr<vector<string>> tags_ {};
    shared_ptr<string> thumbnailURL_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
