// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STREAMVOICE_MODELS_VOICEEVENT_HPP_
#define ALIBABACLOUD_STREAMVOICE_MODELS_VOICEEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace StreamVoice
{
namespace Models
{
  class VoiceEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceEvent& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(error, error_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(error, error_);
    };
    VoiceEvent() = default ;
    VoiceEvent(const VoiceEvent &) = default ;
    VoiceEvent(VoiceEvent &&) = default ;
    VoiceEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceEvent() = default ;
    VoiceEvent& operator=(const VoiceEvent &) = default ;
    VoiceEvent& operator=(VoiceEvent &&) = default ;
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
      // 业务错误码，可为字符串或数值，具体类型由所用 Agent 的公开接口约定确定。它与 header.errorCode 的语音阶段错误码含义不同，应分别处理。
      Darabonba::Json code_ {};
      // 公开业务错误说明，可读文本；不要依赖固定全文做程序判断。
      shared_ptr<string> message_ {};
      // 失败调用的业务请求关联号，用于排查；不是握手平台 RequestId、订单号或实例 ID。
      shared_ptr<string> requestId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(stage, stage_);
        DARABONBA_PTR_TO_JSON(retryable, retryable_);
        DARABONBA_PTR_TO_JSON(output, output_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(stage, stage_);
        DARABONBA_PTR_FROM_JSON(retryable, retryable_);
        DARABONBA_PTR_FROM_JSON(output, output_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(stage, stage_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(event, event_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(delta, delta_);
          DARABONBA_PTR_TO_JSON(final, final_);
          DARABONBA_PTR_TO_JSON(messages, messages_);
          DARABONBA_PTR_TO_JSON(response, response_);
          DARABONBA_PTR_TO_JSON(sentence, sentence_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(stage, stage_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(event, event_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(delta, delta_);
          DARABONBA_PTR_FROM_JSON(final, final_);
          DARABONBA_PTR_FROM_JSON(messages, messages_);
          DARABONBA_PTR_FROM_JSON(response, response_);
          DARABONBA_PTR_FROM_JSON(sentence, sentence_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Sentence : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sentence& obj) { 
            DARABONBA_PTR_TO_JSON(index, index_);
            DARABONBA_PTR_TO_JSON(text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Sentence& obj) { 
            DARABONBA_PTR_FROM_JSON(index, index_);
            DARABONBA_PTR_FROM_JSON(text, text_);
          };
          Sentence() = default ;
          Sentence(const Sentence &) = default ;
          Sentence(Sentence &&) = default ;
          Sentence(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sentence() = default ;
          Sentence& operator=(const Sentence &) = default ;
          Sentence& operator=(Sentence &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->index_ == nullptr
        && this->text_ == nullptr; };
          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline Sentence& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Sentence& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          // TTS 句子事件返回的整数索引，同一句的多个事件共用该值，用于关联随后音频；不能作为整轮完成标记。
          shared_ptr<int32_t> index_ {};
          // 仅 TTS sentence-begin 返回的待合成文本；sentence-synthesis/sentence-end 不保证存在。
          shared_ptr<string> text_ {};
        };

        class Response : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Response& obj) { 
            DARABONBA_PTR_TO_JSON(requestId, requestId_);
            DARABONBA_PTR_TO_JSON(communication, communication_);
            DARABONBA_PTR_TO_JSON(data, data_);
            DARABONBA_ANY_TO_JSON(errorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
          };
          friend void from_json(const Darabonba::Json& j, Response& obj) { 
            DARABONBA_PTR_FROM_JSON(requestId, requestId_);
            DARABONBA_PTR_FROM_JSON(communication, communication_);
            DARABONBA_PTR_FROM_JSON(data, data_);
            DARABONBA_ANY_FROM_JSON(errorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
          };
          Response() = default ;
          Response(const Response &) = default ;
          Response(Response &&) = default ;
          Response(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Response() = default ;
          Response& operator=(const Response &) = default ;
          Response& operator=(Response &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Data : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Data& obj) { 
              DARABONBA_ANY_TO_JSON(debug, debug_);
              DARABONBA_PTR_TO_JSON(messages, messages_);
              DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_ANY_FROM_JSON(debug, debug_);
              DARABONBA_PTR_FROM_JSON(messages, messages_);
              DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
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
                  DARABONBA_PTR_TO_JSON(type, type_);
                  DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
                  DARABONBA_PTR_TO_JSON(url, url_);
                  DARABONBA_PTR_TO_JSON(fileName, fileName_);
                };
                friend void from_json(const Darabonba::Json& j, InputResources& obj) { 
                  DARABONBA_PTR_FROM_JSON(contentIndex, contentIndex_);
                  DARABONBA_PTR_FROM_JSON(type, type_);
                  DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
                  DARABONBA_PTR_FROM_JSON(url, url_);
                  DARABONBA_PTR_FROM_JSON(fileName, fileName_);
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
        && this->type_ == nullptr && this->resourceId_ == nullptr && this->url_ == nullptr && this->fileName_ == nullptr; };
                // contentIndex Field Functions 
                bool hasContentIndex() const { return this->contentIndex_ != nullptr;};
                void deleteContentIndex() { this->contentIndex_ = nullptr;};
                inline int32_t getContentIndex() const { DARABONBA_PTR_GET_DEFAULT(contentIndex_, 0) };
                inline InputResources& setContentIndex(int32_t contentIndex) { DARABONBA_PTR_SET_VALUE(contentIndex_, contentIndex) };


                // type Field Functions 
                bool hasType() const { return this->type_ != nullptr;};
                void deleteType() { this->type_ = nullptr;};
                inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                inline InputResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                // resourceId Field Functions 
                bool hasResourceId() const { return this->resourceId_ != nullptr;};
                void deleteResourceId() { this->resourceId_ = nullptr;};
                inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
                inline InputResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


                // url Field Functions 
                bool hasUrl() const { return this->url_ != nullptr;};
                void deleteUrl() { this->url_ = nullptr;};
                inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                inline InputResources& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                // fileName Field Functions 
                bool hasFileName() const { return this->fileName_ != nullptr;};
                void deleteFileName() { this->fileName_ = nullptr;};
                inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
                inline InputResources& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


              protected:
                // 以本轮原始 content 数组的顺序计数，从零开始，文本项也计数。
                shared_ptr<int32_t> contentIndex_ {};
                // 用于区分本轮输入资源的类型。
                shared_ptr<string> type_ {};
                // 资源服务返回的标识。
                shared_ptr<string> resourceId_ {};
                // 资源处理成功时返回的文件 URL。
                shared_ptr<string> url_ {};
                // 可选的资源文件名。
                shared_ptr<string> fileName_ {};
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
              // 仅在 Agent 返回资源处理结果时出现。
              shared_ptr<vector<ExtraInfo::InputResources>> inputResources_ {};
            };

            class Messages : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Messages& obj) { 
                DARABONBA_PTR_TO_JSON(mimeType, mimeType_);
                DARABONBA_PTR_TO_JSON(status, status_);
                DARABONBA_ANY_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(metaData, metaData_);
              };
              friend void from_json(const Darabonba::Json& j, Messages& obj) { 
                DARABONBA_PTR_FROM_JSON(mimeType, mimeType_);
                DARABONBA_PTR_FROM_JSON(status, status_);
                DARABONBA_ANY_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(metaData, metaData_);
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
                  DARABONBA_PTR_TO_JSON(sourceSeq, sourceSeq_);
                  DARABONBA_PTR_TO_JSON(type, type_);
                  DARABONBA_PTR_TO_JSON(barTitle, barTitle_);
                  DARABONBA_ANY_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(multiLoad, multiLoad_);
                };
                friend void from_json(const Darabonba::Json& j, MetaData& obj) { 
                  DARABONBA_PTR_FROM_JSON(sourceSeq, sourceSeq_);
                  DARABONBA_PTR_FROM_JSON(type, type_);
                  DARABONBA_PTR_FROM_JSON(barTitle, barTitle_);
                  DARABONBA_ANY_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(multiLoad, multiLoad_);
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
                    DARABONBA_PTR_TO_JSON(type, type_);
                    DARABONBA_PTR_TO_JSON(sourceSeq, sourceSeq_);
                    DARABONBA_ANY_TO_JSON(content, content_);
                  };
                  friend void from_json(const Darabonba::Json& j, MultiLoad& obj) { 
                    DARABONBA_PTR_FROM_JSON(type, type_);
                    DARABONBA_PTR_FROM_JSON(sourceSeq, sourceSeq_);
                    DARABONBA_ANY_FROM_JSON(content, content_);
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
                  virtual bool empty() const override { return this->type_ == nullptr
        && this->sourceSeq_ == nullptr && this->content_ == nullptr; };
                  // type Field Functions 
                  bool hasType() const { return this->type_ != nullptr;};
                  void deleteType() { this->type_ = nullptr;};
                  inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                  inline MultiLoad& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                  // sourceSeq Field Functions 
                  bool hasSourceSeq() const { return this->sourceSeq_ != nullptr;};
                  void deleteSourceSeq() { this->sourceSeq_ = nullptr;};
                  inline string getSourceSeq() const { DARABONBA_PTR_GET_DEFAULT(sourceSeq_, "") };
                  inline MultiLoad& setSourceSeq(string sourceSeq) { DARABONBA_PTR_SET_VALUE(sourceSeq_, sourceSeq) };


                  // content Field Functions 
                  bool hasContent() const { return this->content_ != nullptr;};
                  void deleteContent() { this->content_ = nullptr;};
                  inline                   const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
                  Darabonba::Json & getContent() { DARABONBA_GET(content_) };
                  inline MultiLoad& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
                  inline MultiLoad& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


                protected:
                  // 按类型选择卡片展示组件。
                  shared_ptr<string> type_ {};
                  // 与正文中的卡片占位符关联。sourceSeq 为 image_waterfall_1 时，正文占位符为 [(image_waterfall_1)]。
                  shared_ptr<string> sourceSeq_ {};
                  // 可选，结构随卡片类型变化。图文卡片可含资源列表。
                  Darabonba::Json content_ {};
                };

                virtual bool empty() const override { return this->sourceSeq_ == nullptr
        && this->type_ == nullptr && this->barTitle_ == nullptr && this->content_ == nullptr && this->multiLoad_ == nullptr; };
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


                // barTitle Field Functions 
                bool hasBarTitle() const { return this->barTitle_ != nullptr;};
                void deleteBarTitle() { this->barTitle_ = nullptr;};
                inline string getBarTitle() const { DARABONBA_PTR_GET_DEFAULT(barTitle_, "") };
                inline MetaData& setBarTitle(string barTitle) { DARABONBA_PTR_SET_VALUE(barTitle_, barTitle) };


                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline                 const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
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


              protected:
                // 用于匹配正文中的卡片挂载标记，或关联同一轮的状态栏模块。收到该模块的新快照时替换旧内容。
                shared_ptr<string> sourceSeq_ {};
                // 按所用 Agent 的业务输出提供。常见有 bar_thinking、bar_tool、bar_think_finish、bar_ref_source_inline 和 bar_image_inline。各类型的显示方式见接口说明第 8.2 节。
                shared_ptr<string> type_ {};
                // Agent 返回时可用于展示。
                shared_ptr<string> barTitle_ {};
                // 当前模块的完整业务快照，格式由 metaData.type 决定。过程资料条目由 bar_ref_source_inline 的 docs 提供。
                Darabonba::Json content_ {};
                // 卡片结构随类型变化，按关联标识挂载。
                shared_ptr<vector<MetaData::MultiLoad>> multiLoad_ {};
              };

              virtual bool empty() const override { return this->mimeType_ == nullptr
        && this->status_ == nullptr && this->content_ == nullptr && this->metaData_ == nullptr; };
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


              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline               const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
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


            protected:
              // 例如 multi_load/iframe、bar/progress。
              shared_ptr<string> mimeType_ {};
              // 例如 processing、complete，不代表整轮完成。
              shared_ptr<string> status_ {};
              // 文本或结构化内容，格式由 mimeType 决定。
              Darabonba::Json content_ {};
              // 结构随消息类型变化，可含卡片、状态栏过程信息及关联标识。
              shared_ptr<Messages::MetaData> metaData_ {};
            };

            virtual bool empty() const override { return this->debug_ == nullptr
        && this->messages_ == nullptr && this->extraInfo_ == nullptr; };
            // debug Field Functions 
            bool hasDebug() const { return this->debug_ != nullptr;};
            void deleteDebug() { this->debug_ = nullptr;};
            inline             const Darabonba::Json & getDebug() const { DARABONBA_GET(debug_) };
            Darabonba::Json & getDebug() { DARABONBA_GET(debug_) };
            inline Data& setDebug(const Darabonba::Json & debug) { DARABONBA_SET_VALUE(debug_, debug) };
            inline Data& setDebug(Darabonba::Json && debug) { DARABONBA_SET_RVALUE(debug_, debug) };


            // messages Field Functions 
            bool hasMessages() const { return this->messages_ != nullptr;};
            void deleteMessages() { this->messages_ = nullptr;};
            inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
            inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
            inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
            inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


            // extraInfo Field Functions 
            bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
            void deleteExtraInfo() { this->extraInfo_ = nullptr;};
            inline const Data::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Data::ExtraInfo) };
            inline Data::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, Data::ExtraInfo) };
            inline Data& setExtraInfo(const Data::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
            inline Data& setExtraInfo(Data::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


          protected:
            // 仅在 result-generated 事件的 payload.output.stage=agent 且 type=response 时，完整 Agent 业务包可能提供此字段。按本帧的实际 JSON 值处理，可为 null。语音接口未约定调试开关、固定子字段或返回时机。内部计量字段不会随业务回包返回。
            Darabonba::Json debug_ {};
            // 按 mimeType 区分文字、卡片和状态栏消息。累计文字快照使用新内容替换。同一状态栏模块按 metaData.sourceSeq 更新。
            shared_ptr<vector<Data::Messages>> messages_ {};
            // 可含 inputResources 等资源处理结果。
            shared_ptr<Data::ExtraInfo> extraInfo_ {};
          };

          class Communication : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Communication& obj) { 
              DARABONBA_PTR_TO_JSON(requestId, requestId_);
              DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
              DARABONBA_PTR_TO_JSON(appId, appId_);
              DARABONBA_PTR_TO_JSON(responseId, responseId_);
            };
            friend void from_json(const Darabonba::Json& j, Communication& obj) { 
              DARABONBA_PTR_FROM_JSON(requestId, requestId_);
              DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
              DARABONBA_PTR_FROM_JSON(appId, appId_);
              DARABONBA_PTR_FROM_JSON(responseId, responseId_);
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
        && this->sessionId_ == nullptr && this->appId_ == nullptr && this->responseId_ == nullptr; };
            // requestId Field Functions 
            bool hasRequestId() const { return this->requestId_ != nullptr;};
            void deleteRequestId() { this->requestId_ = nullptr;};
            inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
            inline Communication& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


            // sessionId Field Functions 
            bool hasSessionId() const { return this->sessionId_ != nullptr;};
            void deleteSessionId() { this->sessionId_ = nullptr;};
            inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
            inline Communication& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline Communication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // responseId Field Functions 
            bool hasResponseId() const { return this->responseId_ != nullptr;};
            void deleteResponseId() { this->responseId_ = nullptr;};
            inline int64_t getResponseId() const { DARABONBA_PTR_GET_DEFAULT(responseId_, 0L) };
            inline Communication& setResponseId(int64_t responseId) { DARABONBA_PTR_SET_VALUE(responseId_, responseId) };


          protected:
            // Agent 业务响应关联号。
            shared_ptr<string> requestId_ {};
            // 当前 Agent 响应所属的客户会话。
            shared_ptr<string> sessionId_ {};
            // 当前响应所属的业务应用。
            shared_ptr<string> appId_ {};
            // 该值不代表网关发送帧的顺序。
            shared_ptr<int64_t> responseId_ {};
          };

          virtual bool empty() const override { return this->requestId_ == nullptr
        && this->communication_ == nullptr && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr; };
          // requestId Field Functions 
          bool hasRequestId() const { return this->requestId_ != nullptr;};
          void deleteRequestId() { this->requestId_ = nullptr;};
          inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
          inline Response& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


          // communication Field Functions 
          bool hasCommunication() const { return this->communication_ != nullptr;};
          void deleteCommunication() { this->communication_ = nullptr;};
          inline const Response::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, Response::Communication) };
          inline Response::Communication getCommunication() { DARABONBA_PTR_GET(communication_, Response::Communication) };
          inline Response& setCommunication(const Response::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
          inline Response& setCommunication(Response::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const Response::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Response::Data) };
          inline Response::Data getData() { DARABONBA_PTR_GET(data_, Response::Data) };
          inline Response& setData(const Response::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Response& setData(Response::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline           const Darabonba::Json & getErrorCode() const { DARABONBA_GET(errorCode_) };
          Darabonba::Json & getErrorCode() { DARABONBA_GET(errorCode_) };
          inline Response& setErrorCode(const Darabonba::Json & errorCode) { DARABONBA_SET_VALUE(errorCode_, errorCode) };
          inline Response& setErrorCode(Darabonba::Json && errorCode) { DARABONBA_SET_RVALUE(errorCode_, errorCode) };


          // errorMsg Field Functions 
          bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
          void deleteErrorMsg() { this->errorMsg_ = nullptr;};
          inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
          inline Response& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        protected:
          // 用于关联此 Agent 响应的业务请求。
          shared_ptr<string> requestId_ {};
          // 与外层语音帧的 communication 独立，来自对应 Chat 响应。
          shared_ptr<Response::Communication> communication_ {};
          // 可携带正文快照、图文卡片、过程消息和业务扩展。
          shared_ptr<Response::Data> data_ {};
          // 该 Agent 响应中的业务状态。
          Darabonba::Json errorCode_ {};
          // 与 errorCode 对应的说明。
          shared_ptr<string> errorMsg_ {};
        };

        virtual bool empty() const override { return this->stage_ == nullptr
        && this->type_ == nullptr && this->event_ == nullptr && this->text_ == nullptr && this->delta_ == nullptr && this->final_ == nullptr
        && this->messages_ == nullptr && this->response_ == nullptr && this->sentence_ == nullptr; };
        // stage Field Functions 
        bool hasStage() const { return this->stage_ != nullptr;};
        void deleteStage() { this->stage_ = nullptr;};
        inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
        inline Output& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
        inline Output& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Output& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // delta Field Functions 
        bool hasDelta() const { return this->delta_ != nullptr;};
        void deleteDelta() { this->delta_ = nullptr;};
        inline string getDelta() const { DARABONBA_PTR_GET_DEFAULT(delta_, "") };
        inline Output& setDelta(string delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };


        // final Field Functions 
        bool hasFinal() const { return this->final_ != nullptr;};
        void deleteFinal() { this->final_ = nullptr;};
        inline bool getFinal() const { DARABONBA_PTR_GET_DEFAULT(final_, false) };
        inline Output& setFinal(bool final) { DARABONBA_PTR_SET_VALUE(final_, final) };


        // messages Field Functions 
        bool hasMessages() const { return this->messages_ != nullptr;};
        void deleteMessages() { this->messages_ = nullptr;};
        inline const vector<Darabonba::Json> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getMessages() { DARABONBA_PTR_GET(messages_, vector<Darabonba::Json>) };
        inline Output& setMessages(const vector<Darabonba::Json> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
        inline Output& setMessages(vector<Darabonba::Json> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


        // response Field Functions 
        bool hasResponse() const { return this->response_ != nullptr;};
        void deleteResponse() { this->response_ = nullptr;};
        inline const Output::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Output::Response) };
        inline Output::Response getResponse() { DARABONBA_PTR_GET(response_, Output::Response) };
        inline Output& setResponse(const Output::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
        inline Output& setResponse(Output::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


        // sentence Field Functions 
        bool hasSentence() const { return this->sentence_ != nullptr;};
        void deleteSentence() { this->sentence_ = nullptr;};
        inline const Output::Sentence & getSentence() const { DARABONBA_PTR_GET_CONST(sentence_, Output::Sentence) };
        inline Output::Sentence getSentence() { DARABONBA_PTR_GET(sentence_, Output::Sentence) };
        inline Output& setSentence(const Output::Sentence & sentence) { DARABONBA_PTR_SET_VALUE(sentence_, sentence) };
        inline Output& setSentence(Output::Sentence && sentence) { DARABONBA_PTR_SET_RVALUE(sentence_, sentence) };


      protected:
        // result-generated 的输出阶段，asr=语音识别、agent=Agent 回答、tts=语音合成。字段可用性取决于该阶段及 type。
        shared_ptr<string> stage_ {};
        // 按阶段解释：Agent 完整帧=response、兼容状态进度=progress；TTS 为 sentence-begin/sentence-synthesis/sentence-end。ASR/兼容文字按 text/final 等字段解析；不要假设所有事件都返回全部 output 字段。
        shared_ptr<string> type_ {};
        // 仅 Agent type=response 返回，message 或 complete。complete 仅表示 Agent 流结束，可能仍需等待 TTS 音频；整轮结束以 task-finished 为准。
        shared_ptr<string> event_ {};
        // asr 阶段为最终转写。Agent 兼容终稿使用累计完整回答。
        shared_ptr<string> text_ {};
        // 仅兼容增量事件返回，使用完整 response 的客户端可以忽略本字段。
        shared_ptr<string> delta_ {};
        // ASR 最终转写及兼容 Agent 终稿为 true，兼容 Agent 文字增量为 false。
        shared_ptr<bool> final_ {};
        // type=progress 时返回状态栏消息批次，不拼接到正式回答。结构与 response.data.messages 中的状态栏消息一致。
        shared_ptr<vector<Darabonba::Json>> messages_ {};
        // 仅 Agent type=response 时返回，与 Chat 流式帧一致的响应对象。complete 可携带最终正文，也可以为 {}；还可包含所用 Agent 的公开业务扩展。按字段说明读取正文、消息和错误信息。
        shared_ptr<Output::Response> response_ {};
        // 仅 TTS 句子事件返回的关联对象；同一句 index 一致。sentence-synthesis 后紧跟该句的一帧二进制音频，按本轮 TTS format/sampleRate 解码；句子 text 仅在 sentence-begin 返回。
        shared_ptr<Output::Sentence> sentence_ {};
      };

      virtual bool empty() const override { return this->stage_ == nullptr
        && this->retryable_ == nullptr && this->output_ == nullptr; };
      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline Payload& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // retryable Field Functions 
      bool hasRetryable() const { return this->retryable_ != nullptr;};
      void deleteRetryable() { this->retryable_ = nullptr;};
      inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
      inline Payload& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Payload::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Payload::Output) };
      inline Payload::Output getOutput() { DARABONBA_PTR_GET(output_, Payload::Output) };
      inline Payload& setOutput(const Payload::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Payload& setOutput(Payload::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    protected:
      // 条件返回；task-started 时为 asr，task-failed 时为 request/asr/agent/tts。result-generated 的阶段在 payload.output.stage 中。
      shared_ptr<string> stage_ {};
      // 仅 task-failed 返回。以本次事件的值为准，同一错误码可因失败阶段而不同。值为 true 时可考虑用新连接和新签名发起一轮交互。
      shared_ptr<bool> retryable_ {};
      // 仅 result-generated 返回；读取 payload.output.stage 选择 asr、agent 或 tts，再按 type 选择该阶段的结构。Agent 完整响应和兼容进度可能同时出现；使用 response 作为回答主数据，避免与 text/delta/messages 重复拼接。
      shared_ptr<Payload::Output> output_ {};
    };

    class Communication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Communication& obj) { 
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Communication& obj) { 
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
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
      virtual bool empty() const override { return this->requestId_ == nullptr; };
      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Communication& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // 对应当前 run-task 的 communication.requestId，用于轮次关联；无法解析出合法请求号时，整个 communication 可省略。不能用音频帧或事件数量替代关联号。
      shared_ptr<string> requestId_ {};
    };

    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(event, event_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(event, event_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      };
      Header() = default ;
      Header(const Header &) = default ;
      Header(Header &&) = default ;
      Header(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Header() = default ;
      Header& operator=(const Header &) = default ;
      Header& operator=(Header &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->event_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Header& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Header& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Header& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    protected:
      // 必填事件类型，只可能为 task-started、result-generated、heartbeat、task-finished、task-failed。整轮完成以 task-finished 为准，不以 Agent complete 或单个 TTS 事件代替。
      shared_ptr<string> event_ {};
      // task-failed 时返回的语音阶段错误码，字符串；例如 INVALID_REQUEST、ASR_FAILED、AGENT_FAILED、TTS_FAILED，其他准入/协议错误见接口说明。若同时存在 Agent 业务错误，另看顶层 error.code，分别处理两层错误。
      shared_ptr<string> errorCode_ {};
      // task-failed 时返回的可读失败说明；非失败事件省略，不依赖固定文案做程序判断。
      shared_ptr<string> errorMessage_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->communication_ == nullptr && this->payload_ == nullptr && this->error_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const VoiceEvent::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, VoiceEvent::Header) };
    inline VoiceEvent::Header getHeader() { DARABONBA_PTR_GET(header_, VoiceEvent::Header) };
    inline VoiceEvent& setHeader(const VoiceEvent::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline VoiceEvent& setHeader(VoiceEvent::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const VoiceEvent::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, VoiceEvent::Communication) };
    inline VoiceEvent::Communication getCommunication() { DARABONBA_PTR_GET(communication_, VoiceEvent::Communication) };
    inline VoiceEvent& setCommunication(const VoiceEvent::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline VoiceEvent& setCommunication(VoiceEvent::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const VoiceEvent::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, VoiceEvent::Payload) };
    inline VoiceEvent::Payload getPayload() { DARABONBA_PTR_GET(payload_, VoiceEvent::Payload) };
    inline VoiceEvent& setPayload(const VoiceEvent::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline VoiceEvent& setPayload(VoiceEvent::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const VoiceEvent::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, VoiceEvent::Error) };
    inline VoiceEvent::Error getError() { DARABONBA_PTR_GET(error_, VoiceEvent::Error) };
    inline VoiceEvent& setError(const VoiceEvent::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline VoiceEvent& setError(VoiceEvent::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


  protected:
    // 服务端事件头，包含事件类型及适用时的错误信息。
    shared_ptr<VoiceEvent::Header> header_ {};
    // 服务端事件与当前语音交互的关联信息。
    shared_ptr<VoiceEvent::Communication> communication_ {};
    // 事件数据，按 header.event 区分。task-started 有 stage；result-generated 有 output；task-failed 有 stage/retryable；heartbeat 和 task-finished 的 payload 为 {}。字段未出现不等于其值为 0 或 false。
    shared_ptr<VoiceEvent::Payload> payload_ {};
    // 可选的业务错误详情。发生业务失败时可返回，与 header 中的语音阶段错误信息配合处理；成功事件省略。
    shared_ptr<VoiceEvent::Error> error_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
} // namespace StreamVoice
#endif
