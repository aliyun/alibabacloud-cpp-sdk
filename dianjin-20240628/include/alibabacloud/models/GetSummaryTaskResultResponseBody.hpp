// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetSummaryTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetSummaryTaskResultResponseBody() = default ;
    GetSummaryTaskResultResponseBody(const GetSummaryTaskResultResponseBody &) = default ;
    GetSummaryTaskResultResponseBody(GetSummaryTaskResultResponseBody &&) = default ;
    GetSummaryTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryTaskResultResponseBody() = default ;
    GetSummaryTaskResultResponseBody& operator=(const GetSummaryTaskResultResponseBody &) = default ;
    GetSummaryTaskResultResponseBody& operator=(GetSummaryTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(choices, choices_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(time, time_);
        DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(choices, choices_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(time, time_);
        DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
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
          DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
          DARABONBA_PTR_TO_JSON(imageTokens, imageTokens_);
          DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
          DARABONBA_PTR_FROM_JSON(imageTokens, imageTokens_);
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
        virtual bool empty() const override { return this->imageCount_ == nullptr
        && this->imageTokens_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
        // imageCount Field Functions 
        bool hasImageCount() const { return this->imageCount_ != nullptr;};
        void deleteImageCount() { this->imageCount_ = nullptr;};
        inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
        inline Usage& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


        // imageTokens Field Functions 
        bool hasImageTokens() const { return this->imageTokens_ != nullptr;};
        void deleteImageTokens() { this->imageTokens_ = nullptr;};
        inline int32_t getImageTokens() const { DARABONBA_PTR_GET_DEFAULT(imageTokens_, 0) };
        inline Usage& setImageTokens(int32_t imageTokens) { DARABONBA_PTR_SET_VALUE(imageTokens_, imageTokens) };


        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
        inline Usage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
        inline Usage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
        inline Usage& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        shared_ptr<int32_t> imageCount_ {};
        shared_ptr<int32_t> imageTokens_ {};
        shared_ptr<int32_t> inputTokens_ {};
        shared_ptr<int32_t> outputTokens_ {};
        shared_ptr<int32_t> totalTokens_ {};
      };

      class Choices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Choices& obj) { 
          DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Choices& obj) { 
          DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Choices() = default ;
        Choices(const Choices &) = default ;
        Choices(Choices &&) = default ;
        Choices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Choices() = default ;
        Choices& operator=(const Choices &) = default ;
        Choices& operator=(Choices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Message : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Message& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(role, role_);
            DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
          };
          friend void from_json(const Darabonba::Json& j, Message& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(role, role_);
            DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
          };
          Message() = default ;
          Message(const Message &) = default ;
          Message(Message &&) = default ;
          Message(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Message() = default ;
          Message& operator=(const Message &) = default ;
          Message& operator=(Message &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr && this->toolCalls_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Message& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // toolCalls Field Functions 
          bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
          void deleteToolCalls() { this->toolCalls_ = nullptr;};
          inline const vector<Darabonba::Json> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Darabonba::Json>) };
          inline Message& setToolCalls(const vector<Darabonba::Json> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
          inline Message& setToolCalls(vector<Darabonba::Json> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> role_ {};
          shared_ptr<vector<Darabonba::Json>> toolCalls_ {};
        };

        virtual bool empty() const override { return this->finishReason_ == nullptr
        && this->index_ == nullptr && this->message_ == nullptr; };
        // finishReason Field Functions 
        bool hasFinishReason() const { return this->finishReason_ != nullptr;};
        void deleteFinishReason() { this->finishReason_ = nullptr;};
        inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
        inline Choices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline Choices& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline const Choices::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Choices::Message) };
        inline Choices::Message getMessage() { DARABONBA_PTR_GET(message_, Choices::Message) };
        inline Choices& setMessage(const Choices::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
        inline Choices& setMessage(Choices::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


      protected:
        shared_ptr<string> finishReason_ {};
        shared_ptr<int32_t> index_ {};
        shared_ptr<Choices::Message> message_ {};
      };

      virtual bool empty() const override { return this->choices_ == nullptr
        && this->created_ == nullptr && this->id_ == nullptr && this->modelId_ == nullptr && this->requestId_ == nullptr && this->time_ == nullptr
        && this->totalTokens_ == nullptr && this->usage_ == nullptr; };
      // choices Field Functions 
      bool hasChoices() const { return this->choices_ != nullptr;};
      void deleteChoices() { this->choices_ = nullptr;};
      inline const vector<Data::Choices> & getChoices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Data::Choices>) };
      inline vector<Data::Choices> getChoices() { DARABONBA_PTR_GET(choices_, vector<Data::Choices>) };
      inline Data& setChoices(const vector<Data::Choices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
      inline Data& setChoices(vector<Data::Choices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Data& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Data& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Data& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
      inline Data& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<vector<Data::Choices>> choices_ {};
      shared_ptr<int64_t> created_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> modelId_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> time_ {};
      shared_ptr<int32_t> totalTokens_ {};
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetSummaryTaskResultResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSummaryTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSummaryTaskResultResponseBody::Data) };
    inline GetSummaryTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSummaryTaskResultResponseBody::Data) };
    inline GetSummaryTaskResultResponseBody& setData(const GetSummaryTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSummaryTaskResultResponseBody& setData(GetSummaryTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetSummaryTaskResultResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetSummaryTaskResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSummaryTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSummaryTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSummaryTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetSummaryTaskResultResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetSummaryTaskResultResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
