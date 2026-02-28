// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class AddRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_TO_JSON(EnableM3u8DateTime, enableM3u8DateTime_);
      DARABONBA_PTR_TO_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(HttpCallbackUrl, httpCallbackUrl_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(MnsQueue, mnsQueue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, AddRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(DelayStopTime, delayStopTime_);
      DARABONBA_PTR_FROM_JSON(EnableM3u8DateTime, enableM3u8DateTime_);
      DARABONBA_PTR_FROM_JSON(FileSplitInterval, fileSplitInterval_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(HttpCallbackUrl, httpCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(MnsQueue, mnsQueue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    AddRecordTemplateRequest() = default ;
    AddRecordTemplateRequest(const AddRecordTemplateRequest &) = default ;
    AddRecordTemplateRequest(AddRecordTemplateRequest &&) = default ;
    AddRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRecordTemplateRequest() = default ;
    AddRecordTemplateRequest& operator=(const AddRecordTemplateRequest &) = default ;
    AddRecordTemplateRequest& operator=(AddRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Watermarks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Watermarks& obj) { 
        DARABONBA_PTR_TO_JSON(Alpha, alpha_);
        DARABONBA_PTR_TO_JSON(Display, display_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Watermarks& obj) { 
        DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
        DARABONBA_PTR_FROM_JSON(Display, display_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      Watermarks() = default ;
      Watermarks(const Watermarks &) = default ;
      Watermarks(Watermarks &&) = default ;
      Watermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Watermarks() = default ;
      Watermarks& operator=(const Watermarks &) = default ;
      Watermarks& operator=(Watermarks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alpha_ == nullptr
        && this->display_ == nullptr && this->height_ == nullptr && this->url_ == nullptr && this->width_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr && this->ZOrder_ == nullptr; };
      // alpha Field Functions 
      bool hasAlpha() const { return this->alpha_ != nullptr;};
      void deleteAlpha() { this->alpha_ = nullptr;};
      inline float getAlpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
      inline Watermarks& setAlpha(float alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
      inline Watermarks& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Watermarks& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Watermarks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Watermarks& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Watermarks& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Watermarks& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline Watermarks& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<float> alpha_ {};
      shared_ptr<int32_t> display_ {};
      shared_ptr<float> height_ {};
      shared_ptr<string> url_ {};
      shared_ptr<float> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    class ClockWidgets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClockWidgets& obj) { 
        DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
        DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
        DARABONBA_PTR_TO_JSON(FontType, fontType_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, ClockWidgets& obj) { 
        DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
        DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
        DARABONBA_PTR_FROM_JSON(FontType, fontType_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      ClockWidgets() = default ;
      ClockWidgets(const ClockWidgets &) = default ;
      ClockWidgets(ClockWidgets &&) = default ;
      ClockWidgets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClockWidgets() = default ;
      ClockWidgets& operator=(const ClockWidgets &) = default ;
      ClockWidgets& operator=(ClockWidgets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fontColor_ == nullptr
        && this->fontSize_ == nullptr && this->fontType_ == nullptr && this->x_ == nullptr && this->y_ == nullptr && this->ZOrder_ == nullptr; };
      // fontColor Field Functions 
      bool hasFontColor() const { return this->fontColor_ != nullptr;};
      void deleteFontColor() { this->fontColor_ = nullptr;};
      inline int32_t getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, 0) };
      inline ClockWidgets& setFontColor(int32_t fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


      // fontSize Field Functions 
      bool hasFontSize() const { return this->fontSize_ != nullptr;};
      void deleteFontSize() { this->fontSize_ = nullptr;};
      inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
      inline ClockWidgets& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


      // fontType Field Functions 
      bool hasFontType() const { return this->fontType_ != nullptr;};
      void deleteFontType() { this->fontType_ = nullptr;};
      inline int32_t getFontType() const { DARABONBA_PTR_GET_DEFAULT(fontType_, 0) };
      inline ClockWidgets& setFontType(int32_t fontType) { DARABONBA_PTR_SET_VALUE(fontType_, fontType) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline ClockWidgets& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline ClockWidgets& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline ClockWidgets& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<int32_t> fontColor_ {};
      shared_ptr<int32_t> fontSize_ {};
      shared_ptr<int32_t> fontType_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    class Backgrounds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backgrounds& obj) { 
        DARABONBA_PTR_TO_JSON(Display, display_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Backgrounds& obj) { 
        DARABONBA_PTR_FROM_JSON(Display, display_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      Backgrounds() = default ;
      Backgrounds(const Backgrounds &) = default ;
      Backgrounds(Backgrounds &&) = default ;
      Backgrounds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Backgrounds() = default ;
      Backgrounds& operator=(const Backgrounds &) = default ;
      Backgrounds& operator=(Backgrounds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->display_ == nullptr
        && this->height_ == nullptr && this->url_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
      inline Backgrounds& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Backgrounds& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Backgrounds& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Backgrounds& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Backgrounds& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Backgrounds& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline Backgrounds& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<int32_t> display_ {};
      shared_ptr<float> height_ {};
      shared_ptr<string> url_ {};
      shared_ptr<float> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->backgroundColor_ == nullptr && this->backgrounds_ == nullptr && this->clockWidgets_ == nullptr && this->delayStopTime_ == nullptr && this->enableM3u8DateTime_ == nullptr
        && this->fileSplitInterval_ == nullptr && this->formats_ == nullptr && this->httpCallbackUrl_ == nullptr && this->layoutIds_ == nullptr && this->mediaEncode_ == nullptr
        && this->mnsQueue_ == nullptr && this->name_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossFilePrefix_ == nullptr
        && this->ownerId_ == nullptr && this->taskProfile_ == nullptr && this->watermarks_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddRecordTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline int32_t getBackgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, 0) };
    inline AddRecordTemplateRequest& setBackgroundColor(int32_t backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<AddRecordTemplateRequest::Backgrounds> & getBackgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<AddRecordTemplateRequest::Backgrounds>) };
    inline vector<AddRecordTemplateRequest::Backgrounds> getBackgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<AddRecordTemplateRequest::Backgrounds>) };
    inline AddRecordTemplateRequest& setBackgrounds(const vector<AddRecordTemplateRequest::Backgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline AddRecordTemplateRequest& setBackgrounds(vector<AddRecordTemplateRequest::Backgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<AddRecordTemplateRequest::ClockWidgets> & getClockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<AddRecordTemplateRequest::ClockWidgets>) };
    inline vector<AddRecordTemplateRequest::ClockWidgets> getClockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<AddRecordTemplateRequest::ClockWidgets>) };
    inline AddRecordTemplateRequest& setClockWidgets(const vector<AddRecordTemplateRequest::ClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline AddRecordTemplateRequest& setClockWidgets(vector<AddRecordTemplateRequest::ClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // delayStopTime Field Functions 
    bool hasDelayStopTime() const { return this->delayStopTime_ != nullptr;};
    void deleteDelayStopTime() { this->delayStopTime_ = nullptr;};
    inline int32_t getDelayStopTime() const { DARABONBA_PTR_GET_DEFAULT(delayStopTime_, 0) };
    inline AddRecordTemplateRequest& setDelayStopTime(int32_t delayStopTime) { DARABONBA_PTR_SET_VALUE(delayStopTime_, delayStopTime) };


    // enableM3u8DateTime Field Functions 
    bool hasEnableM3u8DateTime() const { return this->enableM3u8DateTime_ != nullptr;};
    void deleteEnableM3u8DateTime() { this->enableM3u8DateTime_ = nullptr;};
    inline bool getEnableM3u8DateTime() const { DARABONBA_PTR_GET_DEFAULT(enableM3u8DateTime_, false) };
    inline AddRecordTemplateRequest& setEnableM3u8DateTime(bool enableM3u8DateTime) { DARABONBA_PTR_SET_VALUE(enableM3u8DateTime_, enableM3u8DateTime) };


    // fileSplitInterval Field Functions 
    bool hasFileSplitInterval() const { return this->fileSplitInterval_ != nullptr;};
    void deleteFileSplitInterval() { this->fileSplitInterval_ = nullptr;};
    inline int32_t getFileSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(fileSplitInterval_, 0) };
    inline AddRecordTemplateRequest& setFileSplitInterval(int32_t fileSplitInterval) { DARABONBA_PTR_SET_VALUE(fileSplitInterval_, fileSplitInterval) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & getFormats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> getFormats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline AddRecordTemplateRequest& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline AddRecordTemplateRequest& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // httpCallbackUrl Field Functions 
    bool hasHttpCallbackUrl() const { return this->httpCallbackUrl_ != nullptr;};
    void deleteHttpCallbackUrl() { this->httpCallbackUrl_ = nullptr;};
    inline string getHttpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(httpCallbackUrl_, "") };
    inline AddRecordTemplateRequest& setHttpCallbackUrl(string httpCallbackUrl) { DARABONBA_PTR_SET_VALUE(httpCallbackUrl_, httpCallbackUrl) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline AddRecordTemplateRequest& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline AddRecordTemplateRequest& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline AddRecordTemplateRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mnsQueue Field Functions 
    bool hasMnsQueue() const { return this->mnsQueue_ != nullptr;};
    void deleteMnsQueue() { this->mnsQueue_ = nullptr;};
    inline string getMnsQueue() const { DARABONBA_PTR_GET_DEFAULT(mnsQueue_, "") };
    inline AddRecordTemplateRequest& setMnsQueue(string mnsQueue) { DARABONBA_PTR_SET_VALUE(mnsQueue_, mnsQueue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddRecordTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline AddRecordTemplateRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline AddRecordTemplateRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossFilePrefix Field Functions 
    bool hasOssFilePrefix() const { return this->ossFilePrefix_ != nullptr;};
    void deleteOssFilePrefix() { this->ossFilePrefix_ = nullptr;};
    inline string getOssFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(ossFilePrefix_, "") };
    inline AddRecordTemplateRequest& setOssFilePrefix(string ossFilePrefix) { DARABONBA_PTR_SET_VALUE(ossFilePrefix_, ossFilePrefix) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddRecordTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // taskProfile Field Functions 
    bool hasTaskProfile() const { return this->taskProfile_ != nullptr;};
    void deleteTaskProfile() { this->taskProfile_ = nullptr;};
    inline string getTaskProfile() const { DARABONBA_PTR_GET_DEFAULT(taskProfile_, "") };
    inline AddRecordTemplateRequest& setTaskProfile(string taskProfile) { DARABONBA_PTR_SET_VALUE(taskProfile_, taskProfile) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<AddRecordTemplateRequest::Watermarks> & getWatermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<AddRecordTemplateRequest::Watermarks>) };
    inline vector<AddRecordTemplateRequest::Watermarks> getWatermarks() { DARABONBA_PTR_GET(watermarks_, vector<AddRecordTemplateRequest::Watermarks>) };
    inline AddRecordTemplateRequest& setWatermarks(const vector<AddRecordTemplateRequest::Watermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline AddRecordTemplateRequest& setWatermarks(vector<AddRecordTemplateRequest::Watermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<int32_t> backgroundColor_ {};
    shared_ptr<vector<AddRecordTemplateRequest::Backgrounds>> backgrounds_ {};
    shared_ptr<vector<AddRecordTemplateRequest::ClockWidgets>> clockWidgets_ {};
    shared_ptr<int32_t> delayStopTime_ {};
    shared_ptr<bool> enableM3u8DateTime_ {};
    // This parameter is required.
    shared_ptr<int32_t> fileSplitInterval_ {};
    // This parameter is required.
    shared_ptr<vector<string>> formats_ {};
    shared_ptr<string> httpCallbackUrl_ {};
    // This parameter is required.
    shared_ptr<vector<int64_t>> layoutIds_ {};
    // This parameter is required.
    shared_ptr<int32_t> mediaEncode_ {};
    shared_ptr<string> mnsQueue_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> ossBucket_ {};
    shared_ptr<string> ossEndpoint_ {};
    // This parameter is required.
    shared_ptr<string> ossFilePrefix_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> taskProfile_ {};
    shared_ptr<vector<AddRecordTemplateRequest::Watermarks>> watermarks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
