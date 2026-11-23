// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace Models
{
  class ChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audioFrames, audioFrames_);
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_ANY_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audioFrames, audioFrames_);
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_ANY_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ChatResponseBody() = default ;
    ChatResponseBody(const ChatResponseBody &) = default ;
    ChatResponseBody(ChatResponseBody &&) = default ;
    ChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBody() = default ;
    ChatResponseBody& operator=(const ChatResponseBody &) = default ;
    ChatResponseBody& operator=(ChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_ANY_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_ANY_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline       const Darabonba::Json & getCode() const { DARABONBA_GET(code_) };
      Darabonba::Json & getCode() { DARABONBA_GET(code_) };
      inline Error& setCode(const Darabonba::Json & code) { DARABONBA_SET_VALUE(code_, code) };
      inline Error& setCode(Darabonba::Json && code) { DARABONBA_SET_RVALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Error& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // 可选的错误码，可为字符串或数值，表示服务或 Agent 的具体错误类型。程序应按 code 判断，不依赖 message 全文；数值业务码 500 不代表 HTTP 状态一定为 500。
      Darabonba::Json code_ {};
      // 业务错误的说明文本。
      shared_ptr<string> message_ {};
      // 失败调用的业务请求关联号，用于定位问题。
      shared_ptr<string> requestId_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(debug, debug_);
        DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(messages, messages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(debug, debug_);
        DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(messages, messages_);
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
      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_ANY_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(metaData, metaData_);
          DARABONBA_PTR_TO_JSON(mimeType, mimeType_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_ANY_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(metaData, metaData_);
          DARABONBA_PTR_FROM_JSON(mimeType, mimeType_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MetaData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetaData& obj) { 
            DARABONBA_PTR_TO_JSON(barTitle, barTitle_);
            DARABONBA_ANY_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(multiLoad, multiLoad_);
            DARABONBA_PTR_TO_JSON(sourceSeq, sourceSeq_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, MetaData& obj) { 
            DARABONBA_PTR_FROM_JSON(barTitle, barTitle_);
            DARABONBA_ANY_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(multiLoad, multiLoad_);
            DARABONBA_PTR_FROM_JSON(sourceSeq, sourceSeq_);
            DARABONBA_PTR_FROM_JSON(type, type_);
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
          class MultiLoad : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MultiLoad& obj) { 
              DARABONBA_ANY_TO_JSON(content, content_);
              DARABONBA_PTR_TO_JSON(sourceSeq, sourceSeq_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, MultiLoad& obj) { 
              DARABONBA_ANY_FROM_JSON(content, content_);
              DARABONBA_PTR_FROM_JSON(sourceSeq, sourceSeq_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            MultiLoad() = default ;
            MultiLoad(const MultiLoad &) = default ;
            MultiLoad(MultiLoad &&) = default ;
            MultiLoad(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MultiLoad() = default ;
            MultiLoad& operator=(const MultiLoad &) = default ;
            MultiLoad& operator=(MultiLoad &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->sourceSeq_ == nullptr && this->type_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline             const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
            Darabonba::Json & getContent() { DARABONBA_GET(content_) };
            inline MultiLoad& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
            inline MultiLoad& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


            // sourceSeq Field Functions 
            bool hasSourceSeq() const { return this->sourceSeq_ != nullptr;};
            void deleteSourceSeq() { this->sourceSeq_ = nullptr;};
            inline string getSourceSeq() const { DARABONBA_PTR_GET_DEFAULT(sourceSeq_, "") };
            inline MultiLoad& setSourceSeq(string sourceSeq) { DARABONBA_PTR_SET_VALUE(sourceSeq_, sourceSeq) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline MultiLoad& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // 可选，结构随卡片类型变化。图文卡片可含资源列表。
            Darabonba::Json content_ {};
            // 与正文中的卡片引用关联。相同标识代表同一卡片。
            shared_ptr<string> sourceSeq_ {};
            // 按类型选择卡片展示组件。
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->barTitle_ == nullptr
        && this->content_ == nullptr && this->multiLoad_ == nullptr && this->sourceSeq_ == nullptr && this->type_ == nullptr; };
          // barTitle Field Functions 
          bool hasBarTitle() const { return this->barTitle_ != nullptr;};
          void deleteBarTitle() { this->barTitle_ = nullptr;};
          inline string getBarTitle() const { DARABONBA_PTR_GET_DEFAULT(barTitle_, "") };
          inline MetaData& setBarTitle(string barTitle) { DARABONBA_PTR_SET_VALUE(barTitle_, barTitle) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline           const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
          Darabonba::Json & getContent() { DARABONBA_GET(content_) };
          inline MetaData& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
          inline MetaData& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


          // multiLoad Field Functions 
          bool hasMultiLoad() const { return this->multiLoad_ != nullptr;};
          void deleteMultiLoad() { this->multiLoad_ = nullptr;};
          inline const vector<MetaData::MultiLoad> & getMultiLoad() const { DARABONBA_PTR_GET_CONST(multiLoad_, vector<MetaData::MultiLoad>) };
          inline vector<MetaData::MultiLoad> getMultiLoad() { DARABONBA_PTR_GET(multiLoad_, vector<MetaData::MultiLoad>) };
          inline MetaData& setMultiLoad(const vector<MetaData::MultiLoad> & multiLoad) { DARABONBA_PTR_SET_VALUE(multiLoad_, multiLoad) };
          inline MetaData& setMultiLoad(vector<MetaData::MultiLoad> && multiLoad) { DARABONBA_PTR_SET_RVALUE(multiLoad_, multiLoad) };


          // sourceSeq Field Functions 
          bool hasSourceSeq() const { return this->sourceSeq_ != nullptr;};
          void deleteSourceSeq() { this->sourceSeq_ = nullptr;};
          inline string getSourceSeq() const { DARABONBA_PTR_GET_DEFAULT(sourceSeq_, "") };
          inline MetaData& setSourceSeq(string sourceSeq) { DARABONBA_PTR_SET_VALUE(sourceSeq_, sourceSeq) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline MetaData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // 用于展示当前过程的上下文标题。处理状态见对应消息的 status。
          shared_ptr<string> barTitle_ {};
          // 数据结构随模块类型变化。bar/progress 中，思考过程使用 body，工具和结束提示使用 title，过程中检索资料或图片分别使用 docs、images。完整键和示例见接入说明。
          Darabonba::Json content_ {};
          // 与正文关联的结构化内容列表，例如图文卡片，按消息类型返回。
          shared_ptr<vector<MetaData::MultiLoad>> multiLoad_ {};
          // 按本次请求和 sourceSeq 关联同一模块的更新。新的完整快照替换旧快照。
          shared_ptr<string> sourceSeq_ {};
          // 例如 bar_thinking、bar_tool、bar_think_finish、bar_ref_source_inline 或 bar_image_inline。按实际类型选择展示组件。
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->metaData_ == nullptr && this->mimeType_ == nullptr && this->status_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline         const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
        Darabonba::Json & getContent() { DARABONBA_GET(content_) };
        inline Messages& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
        inline Messages& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


        // metaData Field Functions 
        bool hasMetaData() const { return this->metaData_ != nullptr;};
        void deleteMetaData() { this->metaData_ = nullptr;};
        inline const Messages::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, Messages::MetaData) };
        inline Messages::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, Messages::MetaData) };
        inline Messages& setMetaData(const Messages::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
        inline Messages& setMetaData(Messages::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


        // mimeType Field Functions 
        bool hasMimeType() const { return this->mimeType_ != nullptr;};
        void deleteMimeType() { this->mimeType_ = nullptr;};
        inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
        inline Messages& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Messages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // 可选多态内容，按 mimeType 解析。multi_load/iframe 常为累计文本快照；后帧更新当前内容。过程、卡片按各自类型处理，不把任意 content 强转字符串。
        Darabonba::Json content_ {};
        // 可选、可扩展的消息元数据。正文消息可通过 multiLoad 提供卡片；过程消息可按类型包含 sourceSeq、type、barTitle、content，用于关联和展示相应内容。
        shared_ptr<Messages::MetaData> metaData_ {};
        // 消息类型，按此值解析正文、进度及可选信号和追问。常见类型见接入说明。
        shared_ptr<string> mimeType_ {};
        // 可选消息状态，如 processing、complete；complete 只结束该消息，不替代 SSE event:complete。HTTP200 或单条消息complete都不足以判定整次流成功。
        shared_ptr<string> status_ {};
      };

      class ExtraInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
          DARABONBA_PTR_TO_JSON(inputResources, inputResources_);
        };
        friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(inputResources, inputResources_);
        };
        ExtraInfo() = default ;
        ExtraInfo(const ExtraInfo &) = default ;
        ExtraInfo(ExtraInfo &&) = default ;
        ExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtraInfo() = default ;
        ExtraInfo& operator=(const ExtraInfo &) = default ;
        ExtraInfo& operator=(ExtraInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InputResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputResources& obj) { 
            DARABONBA_PTR_TO_JSON(contentIndex, contentIndex_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
            DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, InputResources& obj) { 
            DARABONBA_PTR_FROM_JSON(contentIndex, contentIndex_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
            DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          InputResources() = default ;
          InputResources(const InputResources &) = default ;
          InputResources(InputResources &&) = default ;
          InputResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputResources() = default ;
          InputResources& operator=(const InputResources &) = default ;
          InputResources& operator=(InputResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentIndex_ == nullptr
        && this->fileName_ == nullptr && this->resourceId_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
          // contentIndex Field Functions 
          bool hasContentIndex() const { return this->contentIndex_ != nullptr;};
          void deleteContentIndex() { this->contentIndex_ = nullptr;};
          inline int32_t getContentIndex() const { DARABONBA_PTR_GET_DEFAULT(contentIndex_, 0) };
          inline InputResources& setContentIndex(int32_t contentIndex) { DARABONBA_PTR_SET_VALUE(contentIndex_, contentIndex) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline InputResources& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline InputResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline InputResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline InputResources& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // 从零开始，按原始 content 数组计数，包含文本块。
          shared_ptr<int32_t> contentIndex_ {};
          // 有文件名时返回。
          shared_ptr<string> fileName_ {};
          // 本轮输入资源的标识，用于关联对应资源。
          shared_ptr<string> resourceId_ {};
          // 原始内容块对应的资源类型。
          shared_ptr<string> type_ {};
          // 本轮输入资源的可访问地址。
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->inputResources_ == nullptr; };
        // inputResources Field Functions 
        bool hasInputResources() const { return this->inputResources_ != nullptr;};
        void deleteInputResources() { this->inputResources_ = nullptr;};
        inline const vector<ExtraInfo::InputResources> & getInputResources() const { DARABONBA_PTR_GET_CONST(inputResources_, vector<ExtraInfo::InputResources>) };
        inline vector<ExtraInfo::InputResources> getInputResources() { DARABONBA_PTR_GET(inputResources_, vector<ExtraInfo::InputResources>) };
        inline ExtraInfo& setInputResources(const vector<ExtraInfo::InputResources> & inputResources) { DARABONBA_PTR_SET_VALUE(inputResources_, inputResources) };
        inline ExtraInfo& setInputResources(vector<ExtraInfo::InputResources> && inputResources) { DARABONBA_PTR_SET_RVALUE(inputResources_, inputResources) };


      protected:
        // 仅在响应提供本轮输入资源处理结果时返回。
        shared_ptr<vector<ExtraInfo::InputResources>> inputResources_ {};
      };

      virtual bool empty() const override { return this->debug_ == nullptr
        && this->extraInfo_ == nullptr && this->messages_ == nullptr; };
      // debug Field Functions 
      bool hasDebug() const { return this->debug_ != nullptr;};
      void deleteDebug() { this->debug_ = nullptr;};
      inline       const Darabonba::Json & getDebug() const { DARABONBA_GET(debug_) };
      Darabonba::Json & getDebug() { DARABONBA_GET(debug_) };
      inline Data& setDebug(const Darabonba::Json & debug) { DARABONBA_SET_VALUE(debug_, debug) };
      inline Data& setDebug(Darabonba::Json && debug) { DARABONBA_SET_RVALUE(debug_, debug) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const Data::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Data::ExtraInfo) };
      inline Data::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, Data::ExtraInfo) };
      inline Data& setExtraInfo(const Data::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline Data& setExtraInfo(Data::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    protected:
      // 可选业务调试信息，可省略或为 null。在支持的联调场景中可能包含 intentLabel；具体结构和返回时机按实际响应读取。
      Darabonba::Json debug_ {};
      // 业务响应附带的可选扩展信息。inputResources 是本轮输入资源的处理结果数组，元素可含 contentIndex、type、resourceId、url 和 fileName。contentIndex 是原始消息 content 数组的零起始下标，文本块也计数。
      shared_ptr<Data::ExtraInfo> extraInfo_ {};
      // 可选数组，可能含多条正文、过程或卡片消息。multi_load/iframe 文本为累计快照，不将每帧全文重复拼接；不要固定只取 messages[0]。
      shared_ptr<vector<Data::Messages>> messages_ {};
    };

    class Communication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Communication& obj) { 
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(responseId, responseId_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Communication& obj) { 
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(responseId, responseId_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      };
      Communication() = default ;
      Communication(const Communication &) = default ;
      Communication(Communication &&) = default ;
      Communication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Communication() = default ;
      Communication& operator=(const Communication &) = default ;
      Communication& operator=(Communication &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->requestId_ == nullptr
        && this->responseId_ == nullptr && this->sessionId_ == nullptr; };
      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Communication& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // responseId Field Functions 
      bool hasResponseId() const { return this->responseId_ != nullptr;};
      void deleteResponseId() { this->responseId_ = nullptr;};
      inline int64_t getResponseId() const { DARABONBA_PTR_GET_DEFAULT(responseId_, 0L) };
      inline Communication& setResponseId(int64_t responseId) { DARABONBA_PTR_SET_VALUE(responseId_, responseId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Communication& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // 当前响应所属的业务请求 ID，返回时与请求中的 communication.requestId 一致。
      shared_ptr<string> requestId_ {};
      // 可选整数，业务响应帧标识；网关多帧聚合可为0。不代表可对所有网络帧排序的序列号，也不是会话或请求ID。
      shared_ptr<int64_t> responseId_ {};
      // 当前响应所属的客户会话 ID。
      shared_ptr<string> sessionId_ {};
    };

    class AudioFrames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioFrames& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(last, last_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AudioFrames& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(last, last_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      AudioFrames() = default ;
      AudioFrames(const AudioFrames &) = default ;
      AudioFrames(AudioFrames &&) = default ;
      AudioFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioFrames() = default ;
      AudioFrames& operator=(const AudioFrames &) = default ;
      AudioFrames& operator=(AudioFrames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->last_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline AudioFrames& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline AudioFrames& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // last Field Functions 
      bool hasLast() const { return this->last_ != nullptr;};
      void deleteLast() { this->last_ = nullptr;};
      inline bool getLast() const { DARABONBA_PTR_GET_DEFAULT(last_, false) };
      inline AudioFrames& setLast(bool last) { DARABONBA_PTR_SET_VALUE(last_, last) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AudioFrames& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline AudioFrames& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AudioFrames& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 音频处理失败时可能提供。
      shared_ptr<string> code_ {};
      // 音频帧的 Base64 数据。末帧的值可以为空字符串。
      shared_ptr<string> data_ {};
      // true 表示本路音频的最后一帧。
      shared_ptr<bool> last_ {};
      // 音频处理失败时按实际错误返回。
      shared_ptr<string> message_ {};
      // 用于关联音频错误与本次业务请求。
      shared_ptr<string> requestId_ {};
      // audio 表示音频，error 表示处理失败。
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->audioFrames_ == nullptr
        && this->communication_ == nullptr && this->data_ == nullptr && this->error_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr
        && this->requestId_ == nullptr; };
    // audioFrames Field Functions 
    bool hasAudioFrames() const { return this->audioFrames_ != nullptr;};
    void deleteAudioFrames() { this->audioFrames_ = nullptr;};
    inline const vector<ChatResponseBody::AudioFrames> & getAudioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, vector<ChatResponseBody::AudioFrames>) };
    inline vector<ChatResponseBody::AudioFrames> getAudioFrames() { DARABONBA_PTR_GET(audioFrames_, vector<ChatResponseBody::AudioFrames>) };
    inline ChatResponseBody& setAudioFrames(const vector<ChatResponseBody::AudioFrames> & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
    inline ChatResponseBody& setAudioFrames(vector<ChatResponseBody::AudioFrames> && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const ChatResponseBody::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, ChatResponseBody::Communication) };
    inline ChatResponseBody::Communication getCommunication() { DARABONBA_PTR_GET(communication_, ChatResponseBody::Communication) };
    inline ChatResponseBody& setCommunication(const ChatResponseBody::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline ChatResponseBody& setCommunication(ChatResponseBody::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChatResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ChatResponseBody::Data) };
    inline ChatResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ChatResponseBody::Data) };
    inline ChatResponseBody& setData(const ChatResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChatResponseBody& setData(ChatResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const ChatResponseBody::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, ChatResponseBody::Error) };
    inline ChatResponseBody::Error getError() { DARABONBA_PTR_GET(error_, ChatResponseBody::Error) };
    inline ChatResponseBody& setError(const ChatResponseBody::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline ChatResponseBody& setError(ChatResponseBody::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline     const Darabonba::Json & getErrorCode() const { DARABONBA_GET(errorCode_) };
    Darabonba::Json & getErrorCode() { DARABONBA_GET(errorCode_) };
    inline ChatResponseBody& setErrorCode(const Darabonba::Json & errorCode) { DARABONBA_SET_VALUE(errorCode_, errorCode) };
    inline ChatResponseBody& setErrorCode(Darabonba::Json && errorCode) { DARABONBA_SET_RVALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ChatResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 开通 HTTP 音频输出后，完整 JSON 可在 audioFrames 中返回音频帧。type 为 audio 时，data 为 Base64 音频数据，last 为布尔末帧标识。type 为 error 时可含 code、requestId 和 message。无音频时可为空或省略。
    shared_ptr<vector<ChatResponseBody::AudioFrames>> audioFrames_ {};
    // 用于关联响应帧与原业务请求和会话的信息。
    shared_ptr<ChatResponseBody::Communication> communication_ {};
    // 可选业务对象，字段按实际响应出现。单帧 HTTP 音频响应的 data 也可能直接为 Base64 字符串；多态音频完整形状见接口说明。客户端不得假定固定字段全部存在。
    shared_ptr<ChatResponseBody::Data> data_ {};
    // 可选错误对象，出现时按失败处理。准备阶段可用错误HTTP状态+JSON返回；已识别业务错误可保留HTTP200，SSE首帧提交后用错误终帧表达。优先结合HTTP X-Request-Id关联。
    shared_ptr<ChatResponseBody::Error> error_ {};
    // 可选字符串或数值，成功业务响应可为数字0；非零或失败码按错误处理。未返回本字段不自动判失败，须综合 error、HTTP 和流终帧。
    Darabonba::Json errorCode_ {};
    // 与响应顶层业务状态码对应的说明。
    shared_ptr<string> errorMsg_ {};
    // 响应顶层可选的业务请求关联号。POP 请求号由响应头 x-acs-request-id 提供。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
