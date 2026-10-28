// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSOLEMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSOLEMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeConsoleMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsoleMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsoleMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeConsoleMessagesResponseBody() = default ;
    DescribeConsoleMessagesResponseBody(const DescribeConsoleMessagesResponseBody &) = default ;
    DescribeConsoleMessagesResponseBody(DescribeConsoleMessagesResponseBody &&) = default ;
    DescribeConsoleMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsoleMessagesResponseBody() = default ;
    DescribeConsoleMessagesResponseBody& operator=(const DescribeConsoleMessagesResponseBody &) = default ;
    DescribeConsoleMessagesResponseBody& operator=(DescribeConsoleMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MessageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageList& obj) { 
        DARABONBA_PTR_TO_JSON(ClientTypes, clientTypes_);
        DARABONBA_PTR_TO_JSON(ContentConfigs, contentConfigs_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(HyperLinkConfigs, hyperLinkConfigs_);
        DARABONBA_PTR_TO_JSON(ImageFilePath, imageFilePath_);
        DARABONBA_PTR_TO_JSON(ImageInfoList, imageInfoList_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(MessageLevel, messageLevel_);
        DARABONBA_PTR_TO_JSON(MessageType, messageType_);
        DARABONBA_PTR_TO_JSON(MetaData, metaData_);
        DARABONBA_PTR_TO_JSON(Position, position_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TitleConfigs, titleConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, MessageList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientTypes, clientTypes_);
        DARABONBA_PTR_FROM_JSON(ContentConfigs, contentConfigs_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(HyperLinkConfigs, hyperLinkConfigs_);
        DARABONBA_PTR_FROM_JSON(ImageFilePath, imageFilePath_);
        DARABONBA_PTR_FROM_JSON(ImageInfoList, imageInfoList_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(MessageLevel, messageLevel_);
        DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
        DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
        DARABONBA_PTR_FROM_JSON(Position, position_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TitleConfigs, titleConfigs_);
      };
      MessageList() = default ;
      MessageList(const MessageList &) = default ;
      MessageList(MessageList &&) = default ;
      MessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageList() = default ;
      MessageList& operator=(const MessageList &) = default ;
      MessageList& operator=(MessageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TitleConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TitleConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Color, color_);
          DARABONBA_PTR_TO_JSON(LangType, langType_);
          DARABONBA_PTR_TO_JSON(TitleText, titleText_);
        };
        friend void from_json(const Darabonba::Json& j, TitleConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Color, color_);
          DARABONBA_PTR_FROM_JSON(LangType, langType_);
          DARABONBA_PTR_FROM_JSON(TitleText, titleText_);
        };
        TitleConfigs() = default ;
        TitleConfigs(const TitleConfigs &) = default ;
        TitleConfigs(TitleConfigs &&) = default ;
        TitleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TitleConfigs() = default ;
        TitleConfigs& operator=(const TitleConfigs &) = default ;
        TitleConfigs& operator=(TitleConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->color_ == nullptr
        && this->langType_ == nullptr && this->titleText_ == nullptr; };
        // color Field Functions 
        bool hasColor() const { return this->color_ != nullptr;};
        void deleteColor() { this->color_ = nullptr;};
        inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
        inline TitleConfigs& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


        // langType Field Functions 
        bool hasLangType() const { return this->langType_ != nullptr;};
        void deleteLangType() { this->langType_ = nullptr;};
        inline string getLangType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
        inline TitleConfigs& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


        // titleText Field Functions 
        bool hasTitleText() const { return this->titleText_ != nullptr;};
        void deleteTitleText() { this->titleText_ = nullptr;};
        inline string getTitleText() const { DARABONBA_PTR_GET_DEFAULT(titleText_, "") };
        inline TitleConfigs& setTitleText(string titleText) { DARABONBA_PTR_SET_VALUE(titleText_, titleText) };


      protected:
        // The color of the title text. The color value saved when the message is created or modified is used.
        shared_ptr<string> color_ {};
        // The title language. Valid values: CN (Chinese), EN (English), and JP (Japanese). The query returns the language value saved when the message is created or modified, retaining the original case.
        shared_ptr<string> langType_ {};
        // The message title text in the specified language.
        shared_ptr<string> titleText_ {};
      };

      class MetaData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaData& obj) { 
          DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
          DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_TO_JSON(Timer, timer_);
          DARABONBA_PTR_TO_JSON(TimerType, timerType_);
        };
        friend void from_json(const Darabonba::Json& j, MetaData& obj) { 
          DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
          DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_FROM_JSON(Timer, timer_);
          DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
        };
        MetaData() = default ;
        MetaData(const MetaData &) = default ;
        MetaData(MetaData &&) = default ;
        MetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaData() = default ;
        MetaData& operator=(const MetaData &) = default ;
        MetaData& operator=(MetaData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adDomain_ == nullptr
        && this->officeSiteId_ == nullptr && this->timer_ == nullptr && this->timerType_ == nullptr; };
        // adDomain Field Functions 
        bool hasAdDomain() const { return this->adDomain_ != nullptr;};
        void deleteAdDomain() { this->adDomain_ = nullptr;};
        inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
        inline MetaData& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


        // officeSiteId Field Functions 
        bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
        void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
        inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
        inline MetaData& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


        // timer Field Functions 
        bool hasTimer() const { return this->timer_ != nullptr;};
        void deleteTimer() { this->timer_ = nullptr;};
        inline const vector<string> & getTimer() const { DARABONBA_PTR_GET_CONST(timer_, vector<string>) };
        inline vector<string> getTimer() { DARABONBA_PTR_GET(timer_, vector<string>) };
        inline MetaData& setTimer(const vector<string> & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
        inline MetaData& setTimer(vector<string> && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


        // timerType Field Functions 
        bool hasTimerType() const { return this->timerType_ != nullptr;};
        void deleteTimerType() { this->timerType_ = nullptr;};
        inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
        inline MetaData& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


      protected:
        // The AD domain name associated with the message configuration.
        shared_ptr<string> adDomain_ {};
        // The workspace ID associated with the message configuration.
        shared_ptr<string> officeSiteId_ {};
        // The list of scheduled sending configurations. If TimerType is CRON, the elements are cron expressions. If TimerType is Timestamp, the elements are millisecond timestamps represented as strings.
        shared_ptr<vector<string>> timer_ {};
        // The scheduled sending type. Valid values: CRON (cron expression) and Timestamp (timestamp). The configuration values are case-sensitive.
        shared_ptr<string> timerType_ {};
      };

      class ImageInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(ImageFilePath, imageFilePath_);
          DARABONBA_PTR_TO_JSON(ImageType, imageType_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        };
        friend void from_json(const Darabonba::Json& j, ImageInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(ImageFilePath, imageFilePath_);
          DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        };
        ImageInfoList() = default ;
        ImageInfoList(const ImageInfoList &) = default ;
        ImageInfoList(ImageInfoList &&) = default ;
        ImageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageInfoList() = default ;
        ImageInfoList& operator=(const ImageInfoList &) = default ;
        ImageInfoList& operator=(ImageInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->imageFilePath_ == nullptr && this->imageType_ == nullptr && this->imageUrl_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline ImageInfoList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // imageFilePath Field Functions 
        bool hasImageFilePath() const { return this->imageFilePath_ != nullptr;};
        void deleteImageFilePath() { this->imageFilePath_ = nullptr;};
        inline string getImageFilePath() const { DARABONBA_PTR_GET_DEFAULT(imageFilePath_, "") };
        inline ImageInfoList& setImageFilePath(string imageFilePath) { DARABONBA_PTR_SET_VALUE(imageFilePath_, imageFilePath) };


        // imageType Field Functions 
        bool hasImageType() const { return this->imageType_ != nullptr;};
        void deleteImageType() { this->imageType_ = nullptr;};
        inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
        inline ImageInfoList& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline ImageInfoList& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      protected:
        // The name of the image file.
        shared_ptr<string> fileName_ {};
        // The storage path of the image file.
        shared_ptr<string> imageFilePath_ {};
        // The image type. Configuration types defined by the backend include Operational (operational message image), WallpaperBasic (basic wallpaper image), and WallpaperAppend (appended wallpaper image). The query returns the image type value saved when the message is created or modified, retaining the original case.
        shared_ptr<string> imageType_ {};
        // The temporary download URL of the image file. The link has a limited validity period. If the link expires, you can query again to obtain a new one.
        shared_ptr<string> imageUrl_ {};
      };

      class HyperLinkConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HyperLinkConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, HyperLinkConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        HyperLinkConfigs() = default ;
        HyperLinkConfigs(const HyperLinkConfigs &) = default ;
        HyperLinkConfigs(HyperLinkConfigs &&) = default ;
        HyperLinkConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HyperLinkConfigs() = default ;
        HyperLinkConfigs& operator=(const HyperLinkConfigs &) = default ;
        HyperLinkConfigs& operator=(HyperLinkConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline HyperLinkConfigs& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline HyperLinkConfigs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The text displayed on the hyperlink button.
        shared_ptr<string> title_ {};
        // The URL accessed after the hyperlink button is clicked.
        shared_ptr<string> url_ {};
      };

      class ContentConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContentConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Color, color_);
          DARABONBA_PTR_TO_JSON(ContentText, contentText_);
          DARABONBA_PTR_TO_JSON(LangType, langType_);
        };
        friend void from_json(const Darabonba::Json& j, ContentConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Color, color_);
          DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
          DARABONBA_PTR_FROM_JSON(LangType, langType_);
        };
        ContentConfigs() = default ;
        ContentConfigs(const ContentConfigs &) = default ;
        ContentConfigs(ContentConfigs &&) = default ;
        ContentConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContentConfigs() = default ;
        ContentConfigs& operator=(const ContentConfigs &) = default ;
        ContentConfigs& operator=(ContentConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->color_ == nullptr
        && this->contentText_ == nullptr && this->langType_ == nullptr; };
        // color Field Functions 
        bool hasColor() const { return this->color_ != nullptr;};
        void deleteColor() { this->color_ = nullptr;};
        inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
        inline ContentConfigs& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


        // contentText Field Functions 
        bool hasContentText() const { return this->contentText_ != nullptr;};
        void deleteContentText() { this->contentText_ = nullptr;};
        inline string getContentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
        inline ContentConfigs& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


        // langType Field Functions 
        bool hasLangType() const { return this->langType_ != nullptr;};
        void deleteLangType() { this->langType_ = nullptr;};
        inline string getLangType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
        inline ContentConfigs& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


      protected:
        // The color of the body text. The color value saved when the message is created or modified is used.
        shared_ptr<string> color_ {};
        // The message body text in the specified language.
        shared_ptr<string> contentText_ {};
        // The body language. Valid values: CN (Chinese), EN (English), and JP (Japanese). The query returns the language value saved when the message is created or modified, retaining the original case.
        shared_ptr<string> langType_ {};
      };

      virtual bool empty() const override { return this->clientTypes_ == nullptr
        && this->contentConfigs_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hyperLinkConfigs_ == nullptr
        && this->imageFilePath_ == nullptr && this->imageInfoList_ == nullptr && this->imageUrl_ == nullptr && this->messageId_ == nullptr && this->messageLevel_ == nullptr
        && this->messageType_ == nullptr && this->metaData_ == nullptr && this->position_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->targetIds_ == nullptr && this->targetType_ == nullptr && this->titleConfigs_ == nullptr; };
      // clientTypes Field Functions 
      bool hasClientTypes() const { return this->clientTypes_ != nullptr;};
      void deleteClientTypes() { this->clientTypes_ = nullptr;};
      inline const vector<string> & getClientTypes() const { DARABONBA_PTR_GET_CONST(clientTypes_, vector<string>) };
      inline vector<string> getClientTypes() { DARABONBA_PTR_GET(clientTypes_, vector<string>) };
      inline MessageList& setClientTypes(const vector<string> & clientTypes) { DARABONBA_PTR_SET_VALUE(clientTypes_, clientTypes) };
      inline MessageList& setClientTypes(vector<string> && clientTypes) { DARABONBA_PTR_SET_RVALUE(clientTypes_, clientTypes) };


      // contentConfigs Field Functions 
      bool hasContentConfigs() const { return this->contentConfigs_ != nullptr;};
      void deleteContentConfigs() { this->contentConfigs_ = nullptr;};
      inline const vector<MessageList::ContentConfigs> & getContentConfigs() const { DARABONBA_PTR_GET_CONST(contentConfigs_, vector<MessageList::ContentConfigs>) };
      inline vector<MessageList::ContentConfigs> getContentConfigs() { DARABONBA_PTR_GET(contentConfigs_, vector<MessageList::ContentConfigs>) };
      inline MessageList& setContentConfigs(const vector<MessageList::ContentConfigs> & contentConfigs) { DARABONBA_PTR_SET_VALUE(contentConfigs_, contentConfigs) };
      inline MessageList& setContentConfigs(vector<MessageList::ContentConfigs> && contentConfigs) { DARABONBA_PTR_SET_RVALUE(contentConfigs_, contentConfigs) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline MessageList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline MessageList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline MessageList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // hyperLinkConfigs Field Functions 
      bool hasHyperLinkConfigs() const { return this->hyperLinkConfigs_ != nullptr;};
      void deleteHyperLinkConfigs() { this->hyperLinkConfigs_ = nullptr;};
      inline const vector<MessageList::HyperLinkConfigs> & getHyperLinkConfigs() const { DARABONBA_PTR_GET_CONST(hyperLinkConfigs_, vector<MessageList::HyperLinkConfigs>) };
      inline vector<MessageList::HyperLinkConfigs> getHyperLinkConfigs() { DARABONBA_PTR_GET(hyperLinkConfigs_, vector<MessageList::HyperLinkConfigs>) };
      inline MessageList& setHyperLinkConfigs(const vector<MessageList::HyperLinkConfigs> & hyperLinkConfigs) { DARABONBA_PTR_SET_VALUE(hyperLinkConfigs_, hyperLinkConfigs) };
      inline MessageList& setHyperLinkConfigs(vector<MessageList::HyperLinkConfigs> && hyperLinkConfigs) { DARABONBA_PTR_SET_RVALUE(hyperLinkConfigs_, hyperLinkConfigs) };


      // imageFilePath Field Functions 
      bool hasImageFilePath() const { return this->imageFilePath_ != nullptr;};
      void deleteImageFilePath() { this->imageFilePath_ = nullptr;};
      inline string getImageFilePath() const { DARABONBA_PTR_GET_DEFAULT(imageFilePath_, "") };
      inline MessageList& setImageFilePath(string imageFilePath) { DARABONBA_PTR_SET_VALUE(imageFilePath_, imageFilePath) };


      // imageInfoList Field Functions 
      bool hasImageInfoList() const { return this->imageInfoList_ != nullptr;};
      void deleteImageInfoList() { this->imageInfoList_ = nullptr;};
      inline const vector<MessageList::ImageInfoList> & getImageInfoList() const { DARABONBA_PTR_GET_CONST(imageInfoList_, vector<MessageList::ImageInfoList>) };
      inline vector<MessageList::ImageInfoList> getImageInfoList() { DARABONBA_PTR_GET(imageInfoList_, vector<MessageList::ImageInfoList>) };
      inline MessageList& setImageInfoList(const vector<MessageList::ImageInfoList> & imageInfoList) { DARABONBA_PTR_SET_VALUE(imageInfoList_, imageInfoList) };
      inline MessageList& setImageInfoList(vector<MessageList::ImageInfoList> && imageInfoList) { DARABONBA_PTR_SET_RVALUE(imageInfoList_, imageInfoList) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline MessageList& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline MessageList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // messageLevel Field Functions 
      bool hasMessageLevel() const { return this->messageLevel_ != nullptr;};
      void deleteMessageLevel() { this->messageLevel_ = nullptr;};
      inline string getMessageLevel() const { DARABONBA_PTR_GET_DEFAULT(messageLevel_, "") };
      inline MessageList& setMessageLevel(string messageLevel) { DARABONBA_PTR_SET_VALUE(messageLevel_, messageLevel) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline MessageList& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline const MessageList::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, MessageList::MetaData) };
      inline MessageList::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, MessageList::MetaData) };
      inline MessageList& setMetaData(const MessageList::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
      inline MessageList& setMetaData(MessageList::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
      inline MessageList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline MessageList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MessageList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetIds Field Functions 
      bool hasTargetIds() const { return this->targetIds_ != nullptr;};
      void deleteTargetIds() { this->targetIds_ = nullptr;};
      inline string getTargetIds() const { DARABONBA_PTR_GET_DEFAULT(targetIds_, "") };
      inline MessageList& setTargetIds(string targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline MessageList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // titleConfigs Field Functions 
      bool hasTitleConfigs() const { return this->titleConfigs_ != nullptr;};
      void deleteTitleConfigs() { this->titleConfigs_ = nullptr;};
      inline const vector<MessageList::TitleConfigs> & getTitleConfigs() const { DARABONBA_PTR_GET_CONST(titleConfigs_, vector<MessageList::TitleConfigs>) };
      inline vector<MessageList::TitleConfigs> getTitleConfigs() { DARABONBA_PTR_GET(titleConfigs_, vector<MessageList::TitleConfigs>) };
      inline MessageList& setTitleConfigs(const vector<MessageList::TitleConfigs> & titleConfigs) { DARABONBA_PTR_SET_VALUE(titleConfigs_, titleConfigs) };
      inline MessageList& setTitleConfigs(vector<MessageList::TitleConfigs> && titleConfigs) { DARABONBA_PTR_SET_RVALUE(titleConfigs_, titleConfigs) };


    protected:
      // The list of client types to which the message applies. Standard names are returned: Windows, Mac, Web, and Hardware.
      shared_ptr<vector<string>> clientTypes_ {};
      // The list of message body configurations for each language.
      shared_ptr<vector<MessageList::ContentConfigs>> contentConfigs_ {};
      // The time when the operational message stops taking effect. The time is in ISO 8601 format. A time zone offset of +00:00 indicates UTC time.
      shared_ptr<string> endTime_ {};
      // The time when the message was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the message was last modified. This time is also updated when the message status changes.
      shared_ptr<string> gmtModified_ {};
      // The list of hyperlink button configurations in the message.
      shared_ptr<vector<MessageList::HyperLinkConfigs>> hyperLinkConfigs_ {};
      // The storage path of the image file for the operational message.
      shared_ptr<string> imageFilePath_ {};
      // The list of image configurations, which is mainly used for custom wallpaper messages. Each item includes the image name, image type, storage path, and temporary download URL.
      shared_ptr<vector<MessageList::ImageInfoList>> imageInfoList_ {};
      // The temporary download URL of the operational message image. The link has a limited validity period. If the link expires, you can query again to obtain a new one.
      shared_ptr<string> imageUrl_ {};
      // The message ID, which can be used to send, modify, or delete a specified message.
      shared_ptr<string> messageId_ {};
      // The message level of the notification message. Valid values: STRONG (strong message) and WEAK (weak message).
      shared_ptr<string> messageLevel_ {};
      // The message type. Valid values: OPERATIONAL (client operational message), WALLPAPER (desktop wallpaper text message), NOTIFICATION (message center notification), and CUSTOM_WALLPAPER (custom desktop wallpaper).
      shared_ptr<string> messageType_ {};
      // The additional configuration of the message, including the associated workspace, AD domain name, and scheduled sending configuration. Whether specific fields are returned depends on the message type and its saved configuration.
      shared_ptr<MessageList::MetaData> metaData_ {};
      // The display position of the message. For wallpaper text messages, valid values are CENTER (center), TOP_RIGHT (top right), BOTTOM_RIGHT (bottom right), and BOTTOM_LEFT (bottom left). For client operational messages, valid values are CLIENT_ENTERPRISE_RESOURCE_PAGE (Enterprise Edition client cloud resource page) and CLIENT_BUSINESS_RESOURCE_PAGE (Business Edition client cloud resource page).
      shared_ptr<string> position_ {};
      // The time when the operational message starts taking effect. The time is in ISO 8601 format. A time zone offset of +00:00 indicates UTC time.
      shared_ptr<string> startTime_ {};
      // The current status of the message. Valid values: Init (initializing), Pushing (pushing), Published (published), Expired (expired), Deleting (deleting), and Failed (failed). Published indicates that the message has been published or the server-side push processing has finished, but it does not indicate that all target terminals have successfully received the message.
      shared_ptr<string> status_ {};
      // The JSON string of the list of targets to which the message applies. For Organization and AdOrg, it is an array of objects containing orgId (organization ID) and orgName (organization name). The organization name may be empty, and records in the old format may not contain orgName. For Tag, it is an array of objects containing tagKey (tag key), tagValue (tag value), and regionId (region ID). For other target types, it is an array of strings. The all-users target is represented by ALL_USERS.
      shared_ptr<string> targetIds_ {};
      // The type of the target to which the message applies. Valid values: AllUsers (all convenience users), EndUser (specified convenience user), Organization (specified convenience user organization), Desktop (cloud computer), ResourceGroup (resource group), Region (region), Tag (tag), AdAllUsers (all AD users), AdUser (specified AD user), and AdOrg (specified AD organization).
      shared_ptr<string> targetType_ {};
      // The list of message title configurations for each language.
      shared_ptr<vector<MessageList::TitleConfigs>> titleConfigs_ {};
    };

    virtual bool empty() const override { return this->messageList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<DescribeConsoleMessagesResponseBody::MessageList> & getMessageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<DescribeConsoleMessagesResponseBody::MessageList>) };
    inline vector<DescribeConsoleMessagesResponseBody::MessageList> getMessageList() { DARABONBA_PTR_GET(messageList_, vector<DescribeConsoleMessagesResponseBody::MessageList>) };
    inline DescribeConsoleMessagesResponseBody& setMessageList(const vector<DescribeConsoleMessagesResponseBody::MessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline DescribeConsoleMessagesResponseBody& setMessageList(vector<DescribeConsoleMessagesResponseBody::MessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConsoleMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeConsoleMessagesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of console messages queried for the current page. If no messages match, an empty list is returned.
    shared_ptr<vector<DescribeConsoleMessagesResponseBody::MessageList>> messageList_ {};
    // The ID of the current request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of messages that match the query conditions, not the number of messages returned on the current page.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
