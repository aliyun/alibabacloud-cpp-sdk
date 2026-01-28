// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class UnderstandVideoContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnderstandVideoContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnderstandVideoContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnderstandVideoContentResponseBody() = default ;
    UnderstandVideoContentResponseBody(const UnderstandVideoContentResponseBody &) = default ;
    UnderstandVideoContentResponseBody(UnderstandVideoContentResponseBody &&) = default ;
    UnderstandVideoContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnderstandVideoContentResponseBody() = default ;
    UnderstandVideoContentResponseBody& operator=(const UnderstandVideoContentResponseBody &) = default ;
    UnderstandVideoContentResponseBody& operator=(UnderstandVideoContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(TagInfo, tagInfo_);
        DARABONBA_PTR_TO_JSON(VideoInfo, videoInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(TagInfo, tagInfo_);
        DARABONBA_PTR_FROM_JSON(VideoInfo, videoInfo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, VideoInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        VideoInfo() = default ;
        VideoInfo(const VideoInfo &) = default ;
        VideoInfo(VideoInfo &&) = default ;
        VideoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoInfo() = default ;
        VideoInfo& operator=(const VideoInfo &) = default ;
        VideoInfo& operator=(VideoInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->width_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline VideoInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline float getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0.0) };
        inline VideoInfo& setFps(float fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline VideoInfo& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline VideoInfo& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<int64_t> duration_ {};
        shared_ptr<float> fps_ {};
        shared_ptr<int64_t> height_ {};
        shared_ptr<int64_t> width_ {};
      };

      virtual bool empty() const override { return this->tagInfo_ == nullptr
        && this->videoInfo_ == nullptr; };
      // tagInfo Field Functions 
      bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
      void deleteTagInfo() { this->tagInfo_ = nullptr;};
      inline       const Darabonba::Json & getTagInfo() const { DARABONBA_GET(tagInfo_) };
      Darabonba::Json & getTagInfo() { DARABONBA_GET(tagInfo_) };
      inline Data& setTagInfo(const Darabonba::Json & tagInfo) { DARABONBA_SET_VALUE(tagInfo_, tagInfo) };
      inline Data& setTagInfo(Darabonba::Json && tagInfo) { DARABONBA_SET_RVALUE(tagInfo_, tagInfo) };


      // videoInfo Field Functions 
      bool hasVideoInfo() const { return this->videoInfo_ != nullptr;};
      void deleteVideoInfo() { this->videoInfo_ = nullptr;};
      inline const Data::VideoInfo & getVideoInfo() const { DARABONBA_PTR_GET_CONST(videoInfo_, Data::VideoInfo) };
      inline Data::VideoInfo getVideoInfo() { DARABONBA_PTR_GET(videoInfo_, Data::VideoInfo) };
      inline Data& setVideoInfo(const Data::VideoInfo & videoInfo) { DARABONBA_PTR_SET_VALUE(videoInfo_, videoInfo) };
      inline Data& setVideoInfo(Data::VideoInfo && videoInfo) { DARABONBA_PTR_SET_RVALUE(videoInfo_, videoInfo) };


    protected:
      Darabonba::Json tagInfo_ {};
      shared_ptr<Data::VideoInfo> videoInfo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UnderstandVideoContentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UnderstandVideoContentResponseBody::Data) };
    inline UnderstandVideoContentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UnderstandVideoContentResponseBody::Data) };
    inline UnderstandVideoContentResponseBody& setData(const UnderstandVideoContentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UnderstandVideoContentResponseBody& setData(UnderstandVideoContentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UnderstandVideoContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnderstandVideoContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UnderstandVideoContentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
