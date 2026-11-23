// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STREAMVOICE_MODELS_VOICECOMMAND_HPP_
#define ALIBABACLOUD_STREAMVOICE_MODELS_VOICECOMMAND_HPP_
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
  class VoiceCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceCommand& obj) { 
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
    };
    VoiceCommand() = default ;
    VoiceCommand(const VoiceCommand &) = default ;
    VoiceCommand(VoiceCommand &&) = default ;
    VoiceCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceCommand() = default ;
    VoiceCommand& operator=(const VoiceCommand &) = default ;
    VoiceCommand& operator=(VoiceCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(taskGroup, taskGroup_);
        DARABONBA_PTR_TO_JSON(task, task_);
        DARABONBA_PTR_TO_JSON(retryOf, retryOf_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(input, input_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(taskGroup, taskGroup_);
        DARABONBA_PTR_FROM_JSON(task, task_);
        DARABONBA_PTR_FROM_JSON(retryOf, retryOf_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(input, input_);
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
      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(context, context_);
          DARABONBA_PTR_TO_JSON(history, history_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(context, context_);
          DARABONBA_PTR_FROM_JSON(history, history_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class History : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const History& obj) { 
            DARABONBA_PTR_TO_JSON(role, role_);
            DARABONBA_ANY_TO_JSON(content, content_);
          };
          friend void from_json(const Darabonba::Json& j, History& obj) { 
            DARABONBA_PTR_FROM_JSON(role, role_);
            DARABONBA_ANY_FROM_JSON(content, content_);
          };
          History() = default ;
          History(const History &) = default ;
          History(History &&) = default ;
          History(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~History() = default ;
          History& operator=(const History &) = default ;
          History& operator=(History &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->role_ == nullptr
        && this->content_ == nullptr; };
          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline History& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline           const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
          Darabonba::Json & getContent() { DARABONBA_GET(content_) };
          inline History& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
          inline History& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


        protected:
          // 历史条目必填字符串，只接受 user 或 assistant，按 user、assistant 成对交替并以 assistant 结束。
          // 
          // This parameter is required.
          shared_ptr<string> role_ {};
          // 纯文本可直接传 JSON 字符串；多个内容块按照输入顺序组成数组。文本块仅含 type=text 和 text。图片块填写 type=image_url；imageUrl 可直接传字符串，也可传仅含 url 的对象。imageUrl.url 支持服务可访问的 HTTPS 图片 URL 或完整 Base64 Data URL，例如 data:image/png;base64, 后接 PNG 文件的标准 Base64，JPEG 使用 data:image/jpeg;base64, 前缀。前缀所声明的 MIME 应与图片内容一致。 每个块只含 type 和对应内容字段，引用对象只含 url；assistant 历史只传文本。 历史条目必填，为非空字符串或非空内容块数组。user 历史支持文本/图片，assistant 历史只接受文本；内容块格式沿用 Chat。 CLIENT 历史 user 的图片可使用 type=image_url 或 image 对应形态；历史 assistant 只传文本。
          // 
          // This parameter is required.
          Darabonba::Json content_ {};
        };

        class Context : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Context& obj) { 
            DARABONBA_PTR_TO_JSON(role, role_);
            DARABONBA_PTR_TO_JSON(content, content_);
          };
          friend void from_json(const Darabonba::Json& j, Context& obj) { 
            DARABONBA_PTR_FROM_JSON(role, role_);
            DARABONBA_PTR_FROM_JSON(content, content_);
          };
          Context() = default ;
          Context(const Context &) = default ;
          Context(Context &&) = default ;
          Context(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Context() = default ;
          Context& operator=(const Context &) = default ;
          Context& operator=(Context &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Content : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Content& obj) { 
              DARABONBA_PTR_TO_JSON(type, type_);
              DARABONBA_PTR_TO_JSON(text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Content& obj) { 
              DARABONBA_PTR_FROM_JSON(type, type_);
              DARABONBA_PTR_FROM_JSON(text, text_);
            };
            Content() = default ;
            Content(const Content &) = default ;
            Content(Content &&) = default ;
            Content(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Content() = default ;
            Content& operator=(const Content &) = default ;
            Content& operator=(Content &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->type_ == nullptr
        && this->text_ == nullptr; };
            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          protected:
            // 上下文内容块必填字符串；user 消息固定 input_text，assistant 消息固定 text。
            // 
            // This parameter is required.
            shared_ptr<string> type_ {};
            // 上下文内容块必填的非空文本，用于辅助识别；计入该条消息合计 400 个 UTF-16 代码单元限制。
            // 
            // This parameter is required.
            shared_ptr<string> text_ {};
          };

          virtual bool empty() const override { return this->role_ == nullptr
        && this->content_ == nullptr; };
          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Context& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline const vector<Context::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Context::Content>) };
          inline vector<Context::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Context::Content>) };
          inline Context& setContent(const vector<Context::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
          inline Context& setContent(vector<Context::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        protected:
          // 上下文条目必填字符串，只接受 user 或 assistant，区分大小写；assistant 必须紧跟同一轮 user。
          // 
          // This parameter is required.
          shared_ptr<string> role_ {};
          // 上下文条目必填的非空数组，同一条消息的各文本块按顺序合并后用于识别。
          // 
          // This parameter is required.
          shared_ptr<vector<Context::Content>> content_ {};
        };

        virtual bool empty() const override { return this->context_ == nullptr
        && this->history_ == nullptr; };
        // context Field Functions 
        bool hasContext() const { return this->context_ != nullptr;};
        void deleteContext() { this->context_ = nullptr;};
        inline const vector<Input::Context> & getContext() const { DARABONBA_PTR_GET_CONST(context_, vector<Input::Context>) };
        inline vector<Input::Context> getContext() { DARABONBA_PTR_GET(context_, vector<Input::Context>) };
        inline Input& setContext(const vector<Input::Context> & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
        inline Input& setContext(vector<Input::Context> && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


        // history Field Functions 
        bool hasHistory() const { return this->history_ != nullptr;};
        void deleteHistory() { this->history_ = nullptr;};
        inline const vector<Input::History> & getHistory() const { DARABONBA_PTR_GET_CONST(history_, vector<Input::History>) };
        inline vector<Input::History> getHistory() { DARABONBA_PTR_GET(history_, vector<Input::History>) };
        inline Input& setHistory(const vector<Input::History> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
        inline Input& setHistory(vector<Input::History> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


      protected:
        // 可选数组，省略为无 ASR 上下文。最多 10 条，user/assistant 各最多 5 条，assistant 必须紧跟 user。每条 content 文本块顺序合并后最多 400 个 UTF-16 代码单元。
        shared_ptr<vector<Input::Context>> context_ {};
        // CLIENT 模式可选历史数组，省略或空数组为无历史；仅含此前完整 user/assistant 对，交替并以 assistant 结束，不含本轮问题。GATEWAY 模式不能提交非空历史。本轮附加图文放 data.messages，音频走二进制帧。
        shared_ptr<vector<Input::History>> history_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(asr, asr_);
          DARABONBA_PTR_TO_JSON(tts, tts_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(asr, asr_);
          DARABONBA_PTR_FROM_JSON(tts, tts_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tts& obj) { 
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(sampleRate, sampleRate_);
            DARABONBA_PTR_TO_JSON(voice, voice_);
            DARABONBA_PTR_TO_JSON(volume, volume_);
            DARABONBA_PTR_TO_JSON(rate, rate_);
          };
          friend void from_json(const Darabonba::Json& j, Tts& obj) { 
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(sampleRate, sampleRate_);
            DARABONBA_PTR_FROM_JSON(voice, voice_);
            DARABONBA_PTR_FROM_JSON(volume, volume_);
            DARABONBA_PTR_FROM_JSON(rate, rate_);
          };
          Tts() = default ;
          Tts(const Tts &) = default ;
          Tts(Tts &&) = default ;
          Tts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tts() = default ;
          Tts& operator=(const Tts &) = default ;
          Tts& operator=(Tts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->format_ == nullptr
        && this->sampleRate_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr && this->rate_ == nullptr; };
          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Tts& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // sampleRate Field Functions 
          bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
          void deleteSampleRate() { this->sampleRate_ = nullptr;};
          inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
          inline Tts& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


          // voice Field Functions 
          bool hasVoice() const { return this->voice_ != nullptr;};
          void deleteVoice() { this->voice_ = nullptr;};
          inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
          inline Tts& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


          // volume Field Functions 
          bool hasVolume() const { return this->volume_ != nullptr;};
          void deleteVolume() { this->volume_ = nullptr;};
          inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
          inline Tts& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline float getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
          inline Tts& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        protected:
          // 可选字符串，仅接受 mp3 或 pcm。省略时默认 mp3，显式 null 会被拒绝。客户端按本轮选定的格式解码下行音频。
          shared_ptr<string> format_ {};
          // 可选整数，单位 Hz，允许 8000、16000、22050、24000、44100、48000。省略或传 null 时为 22050。客户端按本轮格式及采样率解码音频。
          shared_ptr<int32_t> sampleRate_ {};
          // 可选非空白字符串，最多 128 个 UTF-16 代码单元，须为租户许可的音色。省略或传 null 时使用租户默认音色。
          shared_ptr<string> voice_ {};
          // 可选整数，范围 0–100（含端点）。省略或传 null 时为 50。
          shared_ptr<int32_t> volume_ {};
          // 可选数值，表示语速倍率，范围 0.5–2.0（含端点）。省略时为 1.0，显式 null 会被拒绝。
          shared_ptr<float> rate_ {};
        };

        class Asr : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Asr& obj) { 
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(sampleRate, sampleRate_);
            DARABONBA_PTR_TO_JSON(languageHints, languageHints_);
          };
          friend void from_json(const Darabonba::Json& j, Asr& obj) { 
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(sampleRate, sampleRate_);
            DARABONBA_PTR_FROM_JSON(languageHints, languageHints_);
          };
          Asr() = default ;
          Asr(const Asr &) = default ;
          Asr(Asr &&) = default ;
          Asr(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Asr() = default ;
          Asr& operator=(const Asr &) = default ;
          Asr& operator=(Asr &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->format_ == nullptr
        && this->sampleRate_ == nullptr && this->languageHints_ == nullptr; };
          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Asr& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // sampleRate Field Functions 
          bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
          void deleteSampleRate() { this->sampleRate_ = nullptr;};
          inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
          inline Asr& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


          // languageHints Field Functions 
          bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
          void deleteLanguageHints() { this->languageHints_ = nullptr;};
          inline const vector<string> & getLanguageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
          inline vector<string> getLanguageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
          inline Asr& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
          inline Asr& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


        protected:
          // ASR 必填字符串，无默认值；支持 pcm、wav 或 opus，具体值须符合租户许可。音频实际编码须与声明一致，不能用文件后缀代替编码。
          shared_ptr<string> format_ {};
          // ASR 必填正整数，单位 Hz，无默认值；须为租户许可的采样率并与实际音频一致，例如 16000。
          shared_ptr<int32_t> sampleRate_ {};
          // 可省略，默认空数组。显式传入时为字符串数组，最多 4 项，每项为非空白字符串且最多 16 个 UTF-16 代码单元。用于辅助识别。
          shared_ptr<vector<string>> languageHints_ {};
        };

        virtual bool empty() const override { return this->asr_ == nullptr
        && this->tts_ == nullptr; };
        // asr Field Functions 
        bool hasAsr() const { return this->asr_ != nullptr;};
        void deleteAsr() { this->asr_ = nullptr;};
        inline const Parameters::Asr & getAsr() const { DARABONBA_PTR_GET_CONST(asr_, Parameters::Asr) };
        inline Parameters::Asr getAsr() { DARABONBA_PTR_GET(asr_, Parameters::Asr) };
        inline Parameters& setAsr(const Parameters::Asr & asr) { DARABONBA_PTR_SET_VALUE(asr_, asr) };
        inline Parameters& setAsr(Parameters::Asr && asr) { DARABONBA_PTR_SET_RVALUE(asr_, asr) };


        // tts Field Functions 
        bool hasTts() const { return this->tts_ != nullptr;};
        void deleteTts() { this->tts_ = nullptr;};
        inline const Parameters::Tts & getTts() const { DARABONBA_PTR_GET_CONST(tts_, Parameters::Tts) };
        inline Parameters::Tts getTts() { DARABONBA_PTR_GET(tts_, Parameters::Tts) };
        inline Parameters& setTts(const Parameters::Tts & tts) { DARABONBA_PTR_SET_VALUE(tts_, tts) };
        inline Parameters& setTts(Parameters::Tts && tts) { DARABONBA_PTR_SET_RVALUE(tts_, tts) };


      protected:
        // 普通 run-task 必填对象；format 和 sampleRate 必填且无默认值，languageHints 可选。上传与这些参数匹配的音频二进制帧，不使用 Base64 JSON 音频字段。
        shared_ptr<Parameters::Asr> asr_ {};
        // 可选对象，可省略或传 null，使用默认合成设置。默认 format=mp3、sampleRate=22050、volume=50、rate=1.0，voice 使用租户默认音色；显式字段仍须符合租户许可。
        shared_ptr<Parameters::Tts> tts_ {};
      };

      virtual bool empty() const override { return this->taskGroup_ == nullptr
        && this->task_ == nullptr && this->retryOf_ == nullptr && this->parameters_ == nullptr && this->input_ == nullptr; };
      // taskGroup Field Functions 
      bool hasTaskGroup() const { return this->taskGroup_ != nullptr;};
      void deleteTaskGroup() { this->taskGroup_ = nullptr;};
      inline string getTaskGroup() const { DARABONBA_PTR_GET_DEFAULT(taskGroup_, "") };
      inline Payload& setTaskGroup(string taskGroup) { DARABONBA_PTR_SET_VALUE(taskGroup_, taskGroup) };


      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
      inline Payload& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


      // retryOf Field Functions 
      bool hasRetryOf() const { return this->retryOf_ != nullptr;};
      void deleteRetryOf() { this->retryOf_ = nullptr;};
      inline string getRetryOf() const { DARABONBA_PTR_GET_DEFAULT(retryOf_, "") };
      inline Payload& setRetryOf(string retryOf) { DARABONBA_PTR_SET_VALUE(retryOf_, retryOf) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const Payload::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, Payload::Parameters) };
      inline Payload::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, Payload::Parameters) };
      inline Payload& setParameters(const Payload::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Payload& setParameters(Payload::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const Payload::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Payload::Input) };
      inline Payload::Input getInput() { DARABONBA_PTR_GET(input_, Payload::Input) };
      inline Payload& setInput(const Payload::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Payload& setInput(Payload::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    protected:
      // run-task 必填字符串，固定为 audio，区分大小写，无默认值。
      shared_ptr<string> taskGroup_ {};
      // run-task 必填字符串，固定为 voice，区分大小写，无默认值。
      shared_ptr<string> task_ {};
      // 可选的保留字段，字符串格式为 [A-Za-z0-9._:-]{1,128}。当前不支持引用先前请求重试；即使值符合格式，也返回 RETRY_EXPIRED，不会重试音频或继续之前的任务。正常调用请省略，不要用于自动续传。
      shared_ptr<string> retryOf_ {};
      // 普通 run-task 必填对象，只包含 asr 和可选 tts。asr 无默认值；tts 可省略或 null，使用默认合成设置。
      shared_ptr<Payload::Parameters> parameters_ {};
      // 可选对象，可省略或 null；只包含 context 和 history。context 辅助 ASR，history 是 Agent 业务历史，两者用途不同。
      shared_ptr<Payload::Input> input_ {};
    };

    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
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
      virtual bool empty() const override { return this->action_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Header& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    protected:
      // 所有控制帧必填，区分大小写。run-task 开始一轮，收到 task-started 后可上传音频。finish-audio 结束本轮上行音频发送，继续接收下行事件；cancel-task 取消本轮。Ping/Pong 使用 WebSocket 原生控制帧。
      // 
      // This parameter is required.
      shared_ptr<string> action_ {};
    };

    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(directAgent, directAgent_);
        DARABONBA_PTR_TO_JSON(deepthink, deepthink_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(directAgent, directAgent_);
        DARABONBA_PTR_FROM_JSON(deepthink, deepthink_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->directAgent_ == nullptr
        && this->deepthink_ == nullptr; };
      // directAgent Field Functions 
      bool hasDirectAgent() const { return this->directAgent_ != nullptr;};
      void deleteDirectAgent() { this->directAgent_ = nullptr;};
      inline string getDirectAgent() const { DARABONBA_PTR_GET_DEFAULT(directAgent_, "") };
      inline Params& setDirectAgent(string directAgent) { DARABONBA_PTR_SET_VALUE(directAgent_, directAgent) };


      // deepthink Field Functions 
      bool hasDeepthink() const { return this->deepthink_ != nullptr;};
      void deleteDeepthink() { this->deepthink_ = nullptr;};
      inline string getDeepthink() const { DARABONBA_PTR_GET_DEFAULT(deepthink_, "") };
      inline Params& setDeepthink(string deepthink) { DARABONBA_PTR_SET_VALUE(deepthink_, deepthink) };


    protected:
      // 语音使用服务已配置的 Agent 路由，请省略此字段。
      shared_ptr<string> directAgent_ {};
      // 可选的 Agent 参数，无统一网关默认值。对支持此参数的 Agent，使用 JSON 字符串 "true" 开启。网关按原始 JSON 类型转发，其他取值和省略行为按所接入 Agent 的约定。
      shared_ptr<string> deepthink_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(messages, messages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_ANY_TO_JSON(content, content_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_ANY_FROM_JSON(content, content_);
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
        virtual bool empty() const override { return this->role_ == nullptr
        && this->content_ == nullptr; };
        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline         const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
        Darabonba::Json & getContent() { DARABONBA_GET(content_) };
        inline Messages& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
        inline Messages& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


      protected:
        // 本轮消息的角色，传 user。CLIENT 托管的历史消息放在 payload.input.history。
        shared_ptr<string> role_ {};
        // 纯文本可直接传 JSON 字符串；多个内容块按照输入顺序组成数组。文本块仅含 type=text 和 text。图片块填写 type=image_url；imageUrl 可直接传字符串，也可传仅含 url 的对象。imageUrl.url 支持服务可访问的 HTTPS 图片 URL 或完整 Base64 Data URL，例如 data:image/png;base64, 后接 PNG 文件的标准 Base64，JPEG 使用 data:image/jpeg;base64, 前缀。前缀所声明的 MIME 应与图片内容一致。 每个块只含 type 和对应内容字段，引用对象只含 url；assistant 历史只传文本。 本轮 user 消息的 content 可省略或传 null，此时仍以语音转写作为本轮内容；有值时可传字符串或所用 Agent 支持的内容块数组。语音音频使用独立的 WSS 二进制帧。 已开通媒体的通用引用字段包括 image、fileUrl、file、audioRef、audio、videoRef、video。使用与 type 对应的字段。对象形式只包含 url。
        Darabonba::Json content_ {};
      };

      virtual bool empty() const override { return this->messages_ == nullptr; };
      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    protected:
      // run-task 可选，省略或空数组表示没有附加图文消息。传入时只包含本轮一条 user 消息，历史放入 payload.input.history；不要重复提交音频转写。
      shared_ptr<vector<Data::Messages>> messages_ {};
    };

    class Communication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Communication& obj) { 
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(historyOwner, historyOwner_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Communication& obj) { 
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(historyOwner, historyOwner_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
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
        && this->sessionId_ == nullptr && this->appId_ == nullptr && this->historyOwner_ == nullptr && this->userId_ == nullptr; };
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


      // historyOwner Field Functions 
      bool hasHistoryOwner() const { return this->historyOwner_ != nullptr;};
      void deleteHistoryOwner() { this->historyOwner_ = nullptr;};
      inline string getHistoryOwner() const { DARABONBA_PTR_GET_DEFAULT(historyOwner_, "") };
      inline Communication& setHistoryOwner(string historyOwner) { DARABONBA_PTR_SET_VALUE(historyOwner_, historyOwner) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Communication& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // run-task 必填，本轮客户业务请求 ID，匹配 [A-Za-z0-9._:-]{1,128}。不能使用 gw-ingress- 保留前缀。下一轮需新建连接，建议换一个业务 ID。复用 ID 仍会执行新一轮；finish-audio/cancel-task 沿用当前轮次且不另传 communication。与可选握手 X-Request-Id 不同。
      shared_ptr<string> requestId_ {};
      // 每个 run-task 必填。客户会话 ID，匹配 [A-Za-z0-9._-]{1,128}，同一会话续聊时复用；用于会话历史关联，不是订单号或业务请求 ID。
      shared_ptr<string> sessionId_ {};
      // 每个 run-task 必填的业务应用 ID，不从握手 query 读取。须符合业务网关凭据的应用绑定或委托配置；每条连接只接受一个 run-task；下一轮需新建连接，即使复用 sessionId 也要提供本字段。非空，最多 128 个 UTF-16 代码单元，无首尾空白、控制字符或非法 Unicode。
      shared_ptr<string> appId_ {};
      // 每个 run-task 必填，区分大小写，只能是 CLIENT 或 GATEWAY，无默认值。须与该会话首次调用一致。CLIENT 历史放在 payload.input.history；GATEWAY 由服务端托管，不接受客户提交非空历史。
      shared_ptr<string> historyOwner_ {};
      // 可选，无默认用户。省略时匿名，不启用用户记忆；即使凭据绑定固定用户也不要求必须传入。若显式传入，须符合固定绑定；必须为非空字符串，最多 256 个 UTF-16 代码单元，无首尾空白、控制字符或非法 Unicode。不能为 null。
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->communication_ == nullptr
        && this->data_ == nullptr && this->params_ == nullptr && this->header_ == nullptr && this->payload_ == nullptr; };
    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const VoiceCommand::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, VoiceCommand::Communication) };
    inline VoiceCommand::Communication getCommunication() { DARABONBA_PTR_GET(communication_, VoiceCommand::Communication) };
    inline VoiceCommand& setCommunication(const VoiceCommand::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline VoiceCommand& setCommunication(VoiceCommand::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VoiceCommand::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VoiceCommand::Data) };
    inline VoiceCommand::Data getData() { DARABONBA_PTR_GET(data_, VoiceCommand::Data) };
    inline VoiceCommand& setData(const VoiceCommand::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VoiceCommand& setData(VoiceCommand::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const VoiceCommand::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, VoiceCommand::Params) };
    inline VoiceCommand::Params getParams() { DARABONBA_PTR_GET(params_, VoiceCommand::Params) };
    inline VoiceCommand& setParams(const VoiceCommand::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline VoiceCommand& setParams(VoiceCommand::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const VoiceCommand::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, VoiceCommand::Header) };
    inline VoiceCommand::Header getHeader() { DARABONBA_PTR_GET(header_, VoiceCommand::Header) };
    inline VoiceCommand& setHeader(const VoiceCommand::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline VoiceCommand& setHeader(VoiceCommand::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const VoiceCommand::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, VoiceCommand::Payload) };
    inline VoiceCommand::Payload getPayload() { DARABONBA_PTR_GET(payload_, VoiceCommand::Payload) };
    inline VoiceCommand& setPayload(const VoiceCommand::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline VoiceCommand& setPayload(VoiceCommand::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    // 本轮语音交互的请求关联号、会话及应用和用户身份信息。
    shared_ptr<VoiceCommand::Communication> communication_ {};
    // run-task 可选对象，无默认值；传入时只支持 messages，不能为 null。供 Agent 使用的业务输入，语音音频另通过二进制帧上传。
    shared_ptr<VoiceCommand::Data> data_ {};
    // run-task 可选 JSON 对象，省略时无客户扩展。对支持深思的 Agent 使用字符串 deepthink；其他扩展由网关保留 JSON 值类型并转发，启用条件、取值及省略行为由所用 Agent 决定。语音请省略保留字段 directAgent。语音参数放在 payload.parameters，历史托管方放在 communication.historyOwner。语音固定关闭图文混排输出。
    shared_ptr<VoiceCommand::Params> params_ {};
    // 控制帧头，包含客户端要执行的语音交互动作。
    // 
    // This parameter is required.
    shared_ptr<VoiceCommand::Header> header_ {};
    // run-task 必须提供 taskGroup=audio、task=voice 和 parameters.asr（除兼容保留的 retryOf 分支，该分支当前不可用）。finish-audio/cancel-task 的 payload 可省略、为 null 或空对象。
    shared_ptr<VoiceCommand::Payload> payload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
} // namespace StreamVoice
#endif
