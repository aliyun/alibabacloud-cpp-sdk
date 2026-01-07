// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEBROADCASTNEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEBROADCASTNEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GenerateBroadcastNewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateBroadcastNewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateBroadcastNewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GenerateBroadcastNewsResponseBody() = default ;
    GenerateBroadcastNewsResponseBody(const GenerateBroadcastNewsResponseBody &) = default ;
    GenerateBroadcastNewsResponseBody(GenerateBroadcastNewsResponseBody &&) = default ;
    GenerateBroadcastNewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateBroadcastNewsResponseBody() = default ;
    GenerateBroadcastNewsResponseBody& operator=(const GenerateBroadcastNewsResponseBody &) = default ;
    GenerateBroadcastNewsResponseBody& operator=(GenerateBroadcastNewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(hotTopicSummaries, hotTopicSummaries_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(text, text_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(hotTopicSummaries, hotTopicSummaries_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(text, text_);
        DARABONBA_PTR_FROM_JSON(usage, usage_);
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
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
        shared_ptr<int64_t> totalTokens_ {};
      };

      class HotTopicSummaries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotTopicSummaries& obj) { 
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(hotTopic, hotTopic_);
          DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
          DARABONBA_PTR_TO_JSON(hotValue, hotValue_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(images, images_);
          DARABONBA_PTR_TO_JSON(textSummary, textSummary_);
        };
        friend void from_json(const Darabonba::Json& j, HotTopicSummaries& obj) { 
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(hotTopic, hotTopic_);
          DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
          DARABONBA_PTR_FROM_JSON(hotValue, hotValue_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(images, images_);
          DARABONBA_PTR_FROM_JSON(textSummary, textSummary_);
        };
        HotTopicSummaries() = default ;
        HotTopicSummaries(const HotTopicSummaries &) = default ;
        HotTopicSummaries(HotTopicSummaries &&) = default ;
        HotTopicSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotTopicSummaries() = default ;
        HotTopicSummaries& operator=(const HotTopicSummaries &) = default ;
        HotTopicSummaries& operator=(HotTopicSummaries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Images : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Images& obj) { 
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Images& obj) { 
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          Images() = default ;
          Images(const Images &) = default ;
          Images(Images &&) = default ;
          Images(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Images() = default ;
          Images& operator=(const Images &) = default ;
          Images& operator=(Images &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->url_ == nullptr; };
          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->hotTopic_ == nullptr && this->hotTopicVersion_ == nullptr && this->hotValue_ == nullptr && this->id_ == nullptr && this->images_ == nullptr
        && this->textSummary_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline HotTopicSummaries& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // hotTopic Field Functions 
        bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
        void deleteHotTopic() { this->hotTopic_ = nullptr;};
        inline string getHotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
        inline HotTopicSummaries& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


        // hotTopicVersion Field Functions 
        bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
        void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
        inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
        inline HotTopicSummaries& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


        // hotValue Field Functions 
        bool hasHotValue() const { return this->hotValue_ != nullptr;};
        void deleteHotValue() { this->hotValue_ = nullptr;};
        inline double getHotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
        inline HotTopicSummaries& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline HotTopicSummaries& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // images Field Functions 
        bool hasImages() const { return this->images_ != nullptr;};
        void deleteImages() { this->images_ = nullptr;};
        inline const vector<HotTopicSummaries::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<HotTopicSummaries::Images>) };
        inline vector<HotTopicSummaries::Images> getImages() { DARABONBA_PTR_GET(images_, vector<HotTopicSummaries::Images>) };
        inline HotTopicSummaries& setImages(const vector<HotTopicSummaries::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
        inline HotTopicSummaries& setImages(vector<HotTopicSummaries::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


        // textSummary Field Functions 
        bool hasTextSummary() const { return this->textSummary_ != nullptr;};
        void deleteTextSummary() { this->textSummary_ = nullptr;};
        inline string getTextSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
        inline HotTopicSummaries& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> hotTopic_ {};
        shared_ptr<string> hotTopicVersion_ {};
        shared_ptr<double> hotValue_ {};
        shared_ptr<string> id_ {};
        shared_ptr<vector<HotTopicSummaries::Images>> images_ {};
        shared_ptr<string> textSummary_ {};
      };

      virtual bool empty() const override { return this->hotTopicSummaries_ == nullptr
        && this->sessionId_ == nullptr && this->taskId_ == nullptr && this->text_ == nullptr && this->usage_ == nullptr; };
      // hotTopicSummaries Field Functions 
      bool hasHotTopicSummaries() const { return this->hotTopicSummaries_ != nullptr;};
      void deleteHotTopicSummaries() { this->hotTopicSummaries_ = nullptr;};
      inline const vector<Data::HotTopicSummaries> & getHotTopicSummaries() const { DARABONBA_PTR_GET_CONST(hotTopicSummaries_, vector<Data::HotTopicSummaries>) };
      inline vector<Data::HotTopicSummaries> getHotTopicSummaries() { DARABONBA_PTR_GET(hotTopicSummaries_, vector<Data::HotTopicSummaries>) };
      inline Data& setHotTopicSummaries(const vector<Data::HotTopicSummaries> & hotTopicSummaries) { DARABONBA_PTR_SET_VALUE(hotTopicSummaries_, hotTopicSummaries) };
      inline Data& setHotTopicSummaries(vector<Data::HotTopicSummaries> && hotTopicSummaries) { DARABONBA_PTR_SET_RVALUE(hotTopicSummaries_, hotTopicSummaries) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<vector<Data::HotTopicSummaries>> hotTopicSummaries_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> text_ {};
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateBroadcastNewsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateBroadcastNewsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateBroadcastNewsResponseBody::Data) };
    inline GenerateBroadcastNewsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateBroadcastNewsResponseBody::Data) };
    inline GenerateBroadcastNewsResponseBody& setData(const GenerateBroadcastNewsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateBroadcastNewsResponseBody& setData(GenerateBroadcastNewsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GenerateBroadcastNewsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateBroadcastNewsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateBroadcastNewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GenerateBroadcastNewsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GenerateBroadcastNewsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
