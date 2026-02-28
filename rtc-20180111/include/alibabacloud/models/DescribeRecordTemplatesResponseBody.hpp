// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODY_HPP_
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
  class DescribeRecordTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeRecordTemplatesResponseBody() = default ;
    DescribeRecordTemplatesResponseBody(const DescribeRecordTemplatesResponseBody &) = default ;
    DescribeRecordTemplatesResponseBody(DescribeRecordTemplatesResponseBody &&) = default ;
    DescribeRecordTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordTemplatesResponseBody() = default ;
    DescribeRecordTemplatesResponseBody& operator=(const DescribeRecordTemplatesResponseBody &) = default ;
    DescribeRecordTemplatesResponseBody& operator=(DescribeRecordTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
        DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
        DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
        DARABONBA_PTR_TO_JSON(OssFilePrefix, ossFilePrefix_);
        DARABONBA_PTR_TO_JSON(TaskProfile, taskProfile_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
        DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
        DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
        DARABONBA_PTR_FROM_JSON(OssFilePrefix, ossFilePrefix_);
        DARABONBA_PTR_FROM_JSON(TaskProfile, taskProfile_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
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

      virtual bool empty() const override { return this->backgroundColor_ == nullptr
        && this->backgrounds_ == nullptr && this->clockWidgets_ == nullptr && this->createTime_ == nullptr && this->delayStopTime_ == nullptr && this->enableM3u8DateTime_ == nullptr
        && this->fileSplitInterval_ == nullptr && this->formats_ == nullptr && this->httpCallbackUrl_ == nullptr && this->layoutIds_ == nullptr && this->mediaEncode_ == nullptr
        && this->mnsQueue_ == nullptr && this->name_ == nullptr && this->ossBucket_ == nullptr && this->ossFilePrefix_ == nullptr && this->taskProfile_ == nullptr
        && this->templateId_ == nullptr && this->watermarks_ == nullptr; };
      // backgroundColor Field Functions 
      bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
      void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
      inline int32_t getBackgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, 0) };
      inline Templates& setBackgroundColor(int32_t backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


      // backgrounds Field Functions 
      bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
      void deleteBackgrounds() { this->backgrounds_ = nullptr;};
      inline const vector<Templates::Backgrounds> & getBackgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<Templates::Backgrounds>) };
      inline vector<Templates::Backgrounds> getBackgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<Templates::Backgrounds>) };
      inline Templates& setBackgrounds(const vector<Templates::Backgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
      inline Templates& setBackgrounds(vector<Templates::Backgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


      // clockWidgets Field Functions 
      bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
      void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
      inline const vector<Templates::ClockWidgets> & getClockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<Templates::ClockWidgets>) };
      inline vector<Templates::ClockWidgets> getClockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<Templates::ClockWidgets>) };
      inline Templates& setClockWidgets(const vector<Templates::ClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
      inline Templates& setClockWidgets(vector<Templates::ClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Templates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // delayStopTime Field Functions 
      bool hasDelayStopTime() const { return this->delayStopTime_ != nullptr;};
      void deleteDelayStopTime() { this->delayStopTime_ = nullptr;};
      inline int32_t getDelayStopTime() const { DARABONBA_PTR_GET_DEFAULT(delayStopTime_, 0) };
      inline Templates& setDelayStopTime(int32_t delayStopTime) { DARABONBA_PTR_SET_VALUE(delayStopTime_, delayStopTime) };


      // enableM3u8DateTime Field Functions 
      bool hasEnableM3u8DateTime() const { return this->enableM3u8DateTime_ != nullptr;};
      void deleteEnableM3u8DateTime() { this->enableM3u8DateTime_ = nullptr;};
      inline bool getEnableM3u8DateTime() const { DARABONBA_PTR_GET_DEFAULT(enableM3u8DateTime_, false) };
      inline Templates& setEnableM3u8DateTime(bool enableM3u8DateTime) { DARABONBA_PTR_SET_VALUE(enableM3u8DateTime_, enableM3u8DateTime) };


      // fileSplitInterval Field Functions 
      bool hasFileSplitInterval() const { return this->fileSplitInterval_ != nullptr;};
      void deleteFileSplitInterval() { this->fileSplitInterval_ = nullptr;};
      inline int32_t getFileSplitInterval() const { DARABONBA_PTR_GET_DEFAULT(fileSplitInterval_, 0) };
      inline Templates& setFileSplitInterval(int32_t fileSplitInterval) { DARABONBA_PTR_SET_VALUE(fileSplitInterval_, fileSplitInterval) };


      // formats Field Functions 
      bool hasFormats() const { return this->formats_ != nullptr;};
      void deleteFormats() { this->formats_ = nullptr;};
      inline const vector<string> & getFormats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
      inline vector<string> getFormats() { DARABONBA_PTR_GET(formats_, vector<string>) };
      inline Templates& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
      inline Templates& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


      // httpCallbackUrl Field Functions 
      bool hasHttpCallbackUrl() const { return this->httpCallbackUrl_ != nullptr;};
      void deleteHttpCallbackUrl() { this->httpCallbackUrl_ = nullptr;};
      inline string getHttpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(httpCallbackUrl_, "") };
      inline Templates& setHttpCallbackUrl(string httpCallbackUrl) { DARABONBA_PTR_SET_VALUE(httpCallbackUrl_, httpCallbackUrl) };


      // layoutIds Field Functions 
      bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
      void deleteLayoutIds() { this->layoutIds_ = nullptr;};
      inline const vector<int64_t> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
      inline vector<int64_t> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
      inline Templates& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
      inline Templates& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


      // mediaEncode Field Functions 
      bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
      void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
      inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
      inline Templates& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


      // mnsQueue Field Functions 
      bool hasMnsQueue() const { return this->mnsQueue_ != nullptr;};
      void deleteMnsQueue() { this->mnsQueue_ = nullptr;};
      inline string getMnsQueue() const { DARABONBA_PTR_GET_DEFAULT(mnsQueue_, "") };
      inline Templates& setMnsQueue(string mnsQueue) { DARABONBA_PTR_SET_VALUE(mnsQueue_, mnsQueue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Templates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline Templates& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossFilePrefix Field Functions 
      bool hasOssFilePrefix() const { return this->ossFilePrefix_ != nullptr;};
      void deleteOssFilePrefix() { this->ossFilePrefix_ = nullptr;};
      inline string getOssFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(ossFilePrefix_, "") };
      inline Templates& setOssFilePrefix(string ossFilePrefix) { DARABONBA_PTR_SET_VALUE(ossFilePrefix_, ossFilePrefix) };


      // taskProfile Field Functions 
      bool hasTaskProfile() const { return this->taskProfile_ != nullptr;};
      void deleteTaskProfile() { this->taskProfile_ = nullptr;};
      inline string getTaskProfile() const { DARABONBA_PTR_GET_DEFAULT(taskProfile_, "") };
      inline Templates& setTaskProfile(string taskProfile) { DARABONBA_PTR_SET_VALUE(taskProfile_, taskProfile) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Templates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // watermarks Field Functions 
      bool hasWatermarks() const { return this->watermarks_ != nullptr;};
      void deleteWatermarks() { this->watermarks_ = nullptr;};
      inline const vector<Templates::Watermarks> & getWatermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<Templates::Watermarks>) };
      inline vector<Templates::Watermarks> getWatermarks() { DARABONBA_PTR_GET(watermarks_, vector<Templates::Watermarks>) };
      inline Templates& setWatermarks(const vector<Templates::Watermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
      inline Templates& setWatermarks(vector<Templates::Watermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


    protected:
      shared_ptr<int32_t> backgroundColor_ {};
      shared_ptr<vector<Templates::Backgrounds>> backgrounds_ {};
      shared_ptr<vector<Templates::ClockWidgets>> clockWidgets_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> delayStopTime_ {};
      shared_ptr<bool> enableM3u8DateTime_ {};
      shared_ptr<int32_t> fileSplitInterval_ {};
      shared_ptr<vector<string>> formats_ {};
      shared_ptr<string> httpCallbackUrl_ {};
      shared_ptr<vector<int64_t>> layoutIds_ {};
      shared_ptr<int32_t> mediaEncode_ {};
      shared_ptr<string> mnsQueue_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ossBucket_ {};
      shared_ptr<string> ossFilePrefix_ {};
      shared_ptr<string> taskProfile_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<vector<Templates::Watermarks>> watermarks_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templates_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeRecordTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeRecordTemplatesResponseBody::Templates>) };
    inline vector<DescribeRecordTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<DescribeRecordTemplatesResponseBody::Templates>) };
    inline DescribeRecordTemplatesResponseBody& setTemplates(const vector<DescribeRecordTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeRecordTemplatesResponseBody& setTemplates(vector<DescribeRecordTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeRecordTemplatesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeRecordTemplatesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRecordTemplatesResponseBody::Templates>> templates_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
