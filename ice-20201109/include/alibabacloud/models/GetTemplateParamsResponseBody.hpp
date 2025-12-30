// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMSRESPONSEBODY_HPP_
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
  class GetTemplateParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetTemplateParamsResponseBody() = default ;
    GetTemplateParamsResponseBody(const GetTemplateParamsResponseBody &) = default ;
    GetTemplateParamsResponseBody(GetTemplateParamsResponseBody &&) = default ;
    GetTemplateParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParamsResponseBody() = default ;
    GetTemplateParamsResponseBody& operator=(const GetTemplateParamsResponseBody &) = default ;
    GetTemplateParamsResponseBody& operator=(GetTemplateParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParamList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MediaUrl, mediaUrl_);
        DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
        DARABONBA_PTR_TO_JSON(TimelineOut, timelineOut_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MediaUrl, mediaUrl_);
        DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
        DARABONBA_PTR_FROM_JSON(TimelineOut, timelineOut_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      ParamList() = default ;
      ParamList(const ParamList &) = default ;
      ParamList(ParamList &&) = default ;
      ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParamList() = default ;
      ParamList& operator=(const ParamList &) = default ;
      ParamList& operator=(ParamList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->coverUrl_ == nullptr && this->height_ == nullptr && this->key_ == nullptr && this->mediaUrl_ == nullptr && this->timelineIn_ == nullptr
        && this->timelineOut_ == nullptr && this->type_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ParamList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline ParamList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline ParamList& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // mediaUrl Field Functions 
      bool hasMediaUrl() const { return this->mediaUrl_ != nullptr;};
      void deleteMediaUrl() { this->mediaUrl_ = nullptr;};
      inline string getMediaUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaUrl_, "") };
      inline ParamList& setMediaUrl(string mediaUrl) { DARABONBA_PTR_SET_VALUE(mediaUrl_, mediaUrl) };


      // timelineIn Field Functions 
      bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
      void deleteTimelineIn() { this->timelineIn_ = nullptr;};
      inline float getTimelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0.0) };
      inline ParamList& setTimelineIn(float timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


      // timelineOut Field Functions 
      bool hasTimelineOut() const { return this->timelineOut_ != nullptr;};
      void deleteTimelineOut() { this->timelineOut_ = nullptr;};
      inline float getTimelineOut() const { DARABONBA_PTR_GET_DEFAULT(timelineOut_, 0.0) };
      inline ParamList& setTimelineOut(float timelineOut) { DARABONBA_PTR_SET_VALUE(timelineOut_, timelineOut) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline ParamList& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
      inline ParamList& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
      inline ParamList& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      // The original subtitle content.
      shared_ptr<string> content_ {};
      // The thumbnail URL of the original material.
      shared_ptr<string> coverUrl_ {};
      shared_ptr<int32_t> height_ {};
      // The parameter name.
      shared_ptr<string> key_ {};
      // The URL of the original material.
      shared_ptr<string> mediaUrl_ {};
      shared_ptr<float> timelineIn_ {};
      shared_ptr<float> timelineOut_ {};
      // The material type.
      // 
      // Valid values:
      // 
      // *   Video
      // *   Text
      // *   Image
      shared_ptr<string> type_ {};
      shared_ptr<int32_t> width_ {};
      shared_ptr<int32_t> x_ {};
      shared_ptr<int32_t> y_ {};
    };

    virtual bool empty() const override { return this->paramList_ == nullptr
        && this->requestId_ == nullptr && this->templateId_ == nullptr; };
    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<GetTemplateParamsResponseBody::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<GetTemplateParamsResponseBody::ParamList>) };
    inline vector<GetTemplateParamsResponseBody::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<GetTemplateParamsResponseBody::ParamList>) };
    inline GetTemplateParamsResponseBody& setParamList(const vector<GetTemplateParamsResponseBody::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline GetTemplateParamsResponseBody& setParamList(vector<GetTemplateParamsResponseBody::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateParamsResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The queried parameters.
    shared_ptr<vector<GetTemplateParamsResponseBody::ParamList>> paramList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
