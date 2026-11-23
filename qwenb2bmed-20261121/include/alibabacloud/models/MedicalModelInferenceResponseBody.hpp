// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALMODELINFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEDICALMODELINFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BMed20261121
{
namespace Models
{
  class MedicalModelInferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalModelInferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audioFrames, audioFrames_);
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_ANY_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalModelInferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audioFrames, audioFrames_);
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_ANY_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    MedicalModelInferenceResponseBody() = default ;
    MedicalModelInferenceResponseBody(const MedicalModelInferenceResponseBody &) = default ;
    MedicalModelInferenceResponseBody(MedicalModelInferenceResponseBody &&) = default ;
    MedicalModelInferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalModelInferenceResponseBody() = default ;
    MedicalModelInferenceResponseBody& operator=(const MedicalModelInferenceResponseBody &) = default ;
    MedicalModelInferenceResponseBody& operator=(MedicalModelInferenceResponseBody &&) = default ;
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
      // 业务错误码，客户端可根据此字段判断错误类型。
      Darabonba::Json code_ {};
      // 错误原因的文字说明，便于排查后调整请求。
      shared_ptr<string> message_ {};
      // 失败请求的业务请求 ID，联系支持时可一并提供。
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
            // 可选 JSON 内容，结构随实际附加项类型变化，不保证存在固定业务卡片。
            Darabonba::Json content_ {};
            // 可选的附加项关联标识，存在时按实际值解释。
            shared_ptr<string> sourceSeq_ {};
            // 可选的附加项类型，遇到未识别类型可忽略该附加项。
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
          // 可选的消息附加标题，存在时按实际值使用。
          shared_ptr<string> barTitle_ {};
          // 可选元数据内容，按实际返回类型解释。当前医疗模型不保证返回进度模块。
          Darabonba::Json content_ {};
          // 为兼容已有响应形状保留的可选列表，可为空或省略；当前医疗模型不保证生成 Agent 业务卡片。
          shared_ptr<vector<MetaData::MultiLoad>> multiLoad_ {};
          // 可选的消息关联标识，存在时按实际值使用；本模型接口不保证返回。
          shared_ptr<string> sourceSeq_ {};
          // 可选元数据类型，存在时按实际类型解释；不据此推断模型提供 Agent 过程能力。
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
        // 消息正文，具体结构随 mimeType 变化。流式快照可能包含到当前为止的完整正文，收到新快照时更新原内容，避免重复拼接。
        Darabonba::Json content_ {};
        // 可选消息附加信息，按实际返回处理。当前医疗模型不承诺返回医疗 Agent 的检索进度、资料来源或业务卡片。
        shared_ptr<Messages::MetaData> metaData_ {};
        // 该消息的内容类型，用于选择解析和展示方式。multi_load/iframe 表示正文；遇到应用不支持的类型，可跳过该消息。
        shared_ptr<string> mimeType_ {};
        // 当前消息的处理状态。complete 表示这条消息已完成；流式请求是否结束以 SSE 结束事件为准。
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
          // 原请求本轮 content 数组的索引，从 0 开始。文本块也占用索引。
          shared_ptr<int32_t> contentIndex_ {};
          // 上游提供时返回资源文件名。
          shared_ptr<string> fileName_ {};
          // 返回的输入资源标识，存在时可用于在业务记录中引用该资源。
          shared_ptr<string> resourceId_ {};
          // 资源类型，例如图片引用。
          shared_ptr<string> type_ {};
          // 返回的资源访问地址。客户端按实际返回值使用。
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
        // 可选的资源信息数组，通过 contentIndex 与请求中的内容块对应。未返回资源信息时可省略。
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
      // 可选业务调试信息，可为任意 JSON 值（含 null）。是否返回、返回时机和内容按实际执行结果，不保证每轮或结束事件必有；不用于判断业务完成。
      Darabonba::Json debug_ {};
      // 响应的可选补充信息。使用图片等资源时可读取 inputResources 中返回的对应资源信息。
      shared_ptr<Data::ExtraInfo> extraInfo_ {};
      // 当前响应中的消息列表。读取消息的 mimeType、status 和 content。完整正文可通过 mimeType=multi_load/iframe 且 status=complete 的消息取得。
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
      // 对应请求中的 communication.requestId，便于匹配并发请求。
      shared_ptr<string> requestId_ {};
      // 业务响应帧标识。一次完整 JSON 聚合时可为 0。SSE 按事件到达顺序处理，responseId 无需连续。
      shared_ptr<int64_t> responseId_ {};
      // 对应请求中的 communication.sessionId。
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
    inline const vector<MedicalModelInferenceResponseBody::AudioFrames> & getAudioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, vector<MedicalModelInferenceResponseBody::AudioFrames>) };
    inline vector<MedicalModelInferenceResponseBody::AudioFrames> getAudioFrames() { DARABONBA_PTR_GET(audioFrames_, vector<MedicalModelInferenceResponseBody::AudioFrames>) };
    inline MedicalModelInferenceResponseBody& setAudioFrames(const vector<MedicalModelInferenceResponseBody::AudioFrames> & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
    inline MedicalModelInferenceResponseBody& setAudioFrames(vector<MedicalModelInferenceResponseBody::AudioFrames> && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const MedicalModelInferenceResponseBody::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, MedicalModelInferenceResponseBody::Communication) };
    inline MedicalModelInferenceResponseBody::Communication getCommunication() { DARABONBA_PTR_GET(communication_, MedicalModelInferenceResponseBody::Communication) };
    inline MedicalModelInferenceResponseBody& setCommunication(const MedicalModelInferenceResponseBody::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline MedicalModelInferenceResponseBody& setCommunication(MedicalModelInferenceResponseBody::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MedicalModelInferenceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MedicalModelInferenceResponseBody::Data) };
    inline MedicalModelInferenceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MedicalModelInferenceResponseBody::Data) };
    inline MedicalModelInferenceResponseBody& setData(const MedicalModelInferenceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MedicalModelInferenceResponseBody& setData(MedicalModelInferenceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const MedicalModelInferenceResponseBody::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, MedicalModelInferenceResponseBody::Error) };
    inline MedicalModelInferenceResponseBody::Error getError() { DARABONBA_PTR_GET(error_, MedicalModelInferenceResponseBody::Error) };
    inline MedicalModelInferenceResponseBody& setError(const MedicalModelInferenceResponseBody::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline MedicalModelInferenceResponseBody& setError(MedicalModelInferenceResponseBody::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline     const Darabonba::Json & getErrorCode() const { DARABONBA_GET(errorCode_) };
    Darabonba::Json & getErrorCode() { DARABONBA_GET(errorCode_) };
    inline MedicalModelInferenceResponseBody& setErrorCode(const Darabonba::Json & errorCode) { DARABONBA_SET_VALUE(errorCode_, errorCode) };
    inline MedicalModelInferenceResponseBody& setErrorCode(Darabonba::Json && errorCode) { DARABONBA_SET_RVALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline MedicalModelInferenceResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MedicalModelInferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 可选的聚合音频帧列表。若返回音频，正常帧可含 type=audio、Base64 字符串 data 和布尔值 last，正常末帧的 data 可为空字符串。失败帧可含 type=error、code、requestId、last 和可选 message。各帧字段依类型而定。
    shared_ptr<vector<MedicalModelInferenceResponseBody::AudioFrames>> audioFrames_ {};
    // 关联原请求及会话的标识。
    shared_ptr<MedicalModelInferenceResponseBody::Communication> communication_ {};
    // 本次应答的业务数据，正文位于 messages。
    shared_ptr<MedicalModelInferenceResponseBody::Data> data_ {};
    // 可选的结构化错误信息。返回时读取 code、message 和 requestId。
    shared_ptr<MedicalModelInferenceResponseBody::Error> error_ {};
    // 业务状态码。0 表示业务成功，非 0 时结合 errorMsg 或 error 查看原因。流式还应处理 event:error。
    Darabonba::Json errorCode_ {};
    // 业务状态的文字说明。失败时用于辅助排查，程序分支应依据状态码。
    shared_ptr<string> errorMsg_ {};
    // 可选的业务请求 ID。联系支持时可同时提供响应头 x-acs-request-id 中的阿里云请求 ID。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261121
#endif
