// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTSYSAVATARMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartSysAvatarModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartSysAvatarModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartSysAvatarModelList, smartSysAvatarModelList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartSysAvatarModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartSysAvatarModelList, smartSysAvatarModelList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSmartSysAvatarModelsResponseBody() = default ;
    ListSmartSysAvatarModelsResponseBody(const ListSmartSysAvatarModelsResponseBody &) = default ;
    ListSmartSysAvatarModelsResponseBody(ListSmartSysAvatarModelsResponseBody &&) = default ;
    ListSmartSysAvatarModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartSysAvatarModelsResponseBody() = default ;
    ListSmartSysAvatarModelsResponseBody& operator=(const ListSmartSysAvatarModelsResponseBody &) = default ;
    ListSmartSysAvatarModelsResponseBody& operator=(ListSmartSysAvatarModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartSysAvatarModelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartSysAvatarModelList& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
        DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(OutputMask, outputMask_);
        DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, SmartSysAvatarModelList& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
        DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(OutputMask, outputMask_);
        DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      SmartSysAvatarModelList() = default ;
      SmartSysAvatarModelList(const SmartSysAvatarModelList &) = default ;
      SmartSysAvatarModelList(SmartSysAvatarModelList &&) = default ;
      SmartSysAvatarModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartSysAvatarModelList() = default ;
      SmartSysAvatarModelList& operator=(const SmartSysAvatarModelList &) = default ;
      SmartSysAvatarModelList& operator=(SmartSysAvatarModelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatarId_ == nullptr
        && this->avatarName_ == nullptr && this->bitrate_ == nullptr && this->coverUrl_ == nullptr && this->height_ == nullptr && this->outputMask_ == nullptr
        && this->videoUrl_ == nullptr && this->width_ == nullptr; };
      // avatarId Field Functions 
      bool hasAvatarId() const { return this->avatarId_ != nullptr;};
      void deleteAvatarId() { this->avatarId_ = nullptr;};
      inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
      inline SmartSysAvatarModelList& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


      // avatarName Field Functions 
      bool hasAvatarName() const { return this->avatarName_ != nullptr;};
      void deleteAvatarName() { this->avatarName_ = nullptr;};
      inline string getAvatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
      inline SmartSysAvatarModelList& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
      inline SmartSysAvatarModelList& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline SmartSysAvatarModelList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline SmartSysAvatarModelList& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // outputMask Field Functions 
      bool hasOutputMask() const { return this->outputMask_ != nullptr;};
      void deleteOutputMask() { this->outputMask_ = nullptr;};
      inline bool getOutputMask() const { DARABONBA_PTR_GET_DEFAULT(outputMask_, false) };
      inline SmartSysAvatarModelList& setOutputMask(bool outputMask) { DARABONBA_PTR_SET_VALUE(outputMask_, outputMask) };


      // videoUrl Field Functions 
      bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
      void deleteVideoUrl() { this->videoUrl_ = nullptr;};
      inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
      inline SmartSysAvatarModelList& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline SmartSysAvatarModelList& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The ID of the digital human. The ID is required to submit a separate digital human rendering job or use the digital human image in an intelligent timeline.
      shared_ptr<string> avatarId_ {};
      // The name of the digital human.
      shared_ptr<string> avatarName_ {};
      // The video bitrate.
      shared_ptr<int32_t> bitrate_ {};
      // The sample thumbnail URL of the digital human.
      shared_ptr<string> coverUrl_ {};
      // The video height.
      shared_ptr<int32_t> height_ {};
      // Indicates whether portrait mask rendering is supported.
      shared_ptr<bool> outputMask_ {};
      // The sample video URL of the digital human.
      shared_ptr<string> videoUrl_ {};
      // The video width.
      shared_ptr<int32_t> width_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->smartSysAvatarModelList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartSysAvatarModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartSysAvatarModelList Field Functions 
    bool hasSmartSysAvatarModelList() const { return this->smartSysAvatarModelList_ != nullptr;};
    void deleteSmartSysAvatarModelList() { this->smartSysAvatarModelList_ = nullptr;};
    inline const vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList> & getSmartSysAvatarModelList() const { DARABONBA_PTR_GET_CONST(smartSysAvatarModelList_, vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList>) };
    inline vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList> getSmartSysAvatarModelList() { DARABONBA_PTR_GET(smartSysAvatarModelList_, vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList>) };
    inline ListSmartSysAvatarModelsResponseBody& setSmartSysAvatarModelList(const vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList> & smartSysAvatarModelList) { DARABONBA_PTR_SET_VALUE(smartSysAvatarModelList_, smartSysAvatarModelList) };
    inline ListSmartSysAvatarModelsResponseBody& setSmartSysAvatarModelList(vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList> && smartSysAvatarModelList) { DARABONBA_PTR_SET_RVALUE(smartSysAvatarModelList_, smartSysAvatarModelList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSmartSysAvatarModelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried digital humans.
    shared_ptr<vector<ListSmartSysAvatarModelsResponseBody::SmartSysAvatarModelList>> smartSysAvatarModelList_ {};
    // The total number of system digital human images returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
