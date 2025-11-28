// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROADCASTVIDEO_HPP_
#define ALIBABACLOUD_MODELS_BROADCASTVIDEO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class BroadcastVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BroadcastVideo& obj) { 
      DARABONBA_PTR_TO_JSON(alignmentFileURL, alignmentFileURL_);
      DARABONBA_PTR_TO_JSON(captionURL, captionURL_);
      DARABONBA_PTR_TO_JSON(coverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(videoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, BroadcastVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(alignmentFileURL, alignmentFileURL_);
      DARABONBA_PTR_FROM_JSON(captionURL, captionURL_);
      DARABONBA_PTR_FROM_JSON(coverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(videoURL, videoURL_);
    };
    BroadcastVideo() = default ;
    BroadcastVideo(const BroadcastVideo &) = default ;
    BroadcastVideo(BroadcastVideo &&) = default ;
    BroadcastVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BroadcastVideo() = default ;
    BroadcastVideo& operator=(const BroadcastVideo &) = default ;
    BroadcastVideo& operator=(BroadcastVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignmentFileURL_ == nullptr
        && return this->captionURL_ == nullptr && return this->coverURL_ == nullptr && return this->createTime_ == nullptr && return this->id_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->name_ == nullptr && return this->status_ == nullptr && return this->videoURL_ == nullptr; };
    // alignmentFileURL Field Functions 
    bool hasAlignmentFileURL() const { return this->alignmentFileURL_ != nullptr;};
    void deleteAlignmentFileURL() { this->alignmentFileURL_ = nullptr;};
    inline string alignmentFileURL() const { DARABONBA_PTR_GET_DEFAULT(alignmentFileURL_, "") };
    inline BroadcastVideo& setAlignmentFileURL(string alignmentFileURL) { DARABONBA_PTR_SET_VALUE(alignmentFileURL_, alignmentFileURL) };


    // captionURL Field Functions 
    bool hasCaptionURL() const { return this->captionURL_ != nullptr;};
    void deleteCaptionURL() { this->captionURL_ = nullptr;};
    inline string captionURL() const { DARABONBA_PTR_GET_DEFAULT(captionURL_, "") };
    inline BroadcastVideo& setCaptionURL(string captionURL) { DARABONBA_PTR_SET_VALUE(captionURL_, captionURL) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline BroadcastVideo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BroadcastVideo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BroadcastVideo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline BroadcastVideo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BroadcastVideo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BroadcastVideo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline BroadcastVideo& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    std::shared_ptr<string> alignmentFileURL_ = nullptr;
    std::shared_ptr<string> captionURL_ = nullptr;
    std::shared_ptr<string> coverURL_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
