// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETETOPICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETETOPICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class BatchDeleteTopicsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteTopicsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteTopicsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchDeleteTopicsResponseBody() = default ;
    BatchDeleteTopicsResponseBody(const BatchDeleteTopicsResponseBody &) = default ;
    BatchDeleteTopicsResponseBody(BatchDeleteTopicsResponseBody &&) = default ;
    BatchDeleteTopicsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteTopicsResponseBody() = default ;
    BatchDeleteTopicsResponseBody& operator=(const BatchDeleteTopicsResponseBody &) = default ;
    BatchDeleteTopicsResponseBody& operator=(BatchDeleteTopicsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(TopicDeleteResultItemVO, topicDeleteResultItemVO_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(TopicDeleteResultItemVO, topicDeleteResultItemVO_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TopicDeleteResultItemVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TopicDeleteResultItemVO& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
            DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Success, success_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
          };
          friend void from_json(const Darabonba::Json& j, TopicDeleteResultItemVO& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
            DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Success, success_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
          };
          TopicDeleteResultItemVO() = default ;
          TopicDeleteResultItemVO(const TopicDeleteResultItemVO &) = default ;
          TopicDeleteResultItemVO(TopicDeleteResultItemVO &&) = default ;
          TopicDeleteResultItemVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TopicDeleteResultItemVO() = default ;
          TopicDeleteResultItemVO& operator=(const TopicDeleteResultItemVO &) = default ;
          TopicDeleteResultItemVO& operator=(TopicDeleteResultItemVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->success_ == nullptr
        && this->topic_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
          inline TopicDeleteResultItemVO& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // dynamicCode Field Functions 
          bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
          void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
          inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
          inline TopicDeleteResultItemVO& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


          // dynamicMessage Field Functions 
          bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
          void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
          inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
          inline TopicDeleteResultItemVO& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline TopicDeleteResultItemVO& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline TopicDeleteResultItemVO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // success Field Functions 
          bool hasSuccess() const { return this->success_ != nullptr;};
          void deleteSuccess() { this->success_ = nullptr;};
          inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
          inline TopicDeleteResultItemVO& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline TopicDeleteResultItemVO& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        protected:
          shared_ptr<int32_t> code_ {};
          shared_ptr<string> dynamicCode_ {};
          shared_ptr<string> dynamicMessage_ {};
          shared_ptr<string> message_ {};
          shared_ptr<string> status_ {};
          shared_ptr<bool> success_ {};
          shared_ptr<string> topic_ {};
        };

        virtual bool empty() const override { return this->topicDeleteResultItemVO_ == nullptr; };
        // topicDeleteResultItemVO Field Functions 
        bool hasTopicDeleteResultItemVO() const { return this->topicDeleteResultItemVO_ != nullptr;};
        void deleteTopicDeleteResultItemVO() { this->topicDeleteResultItemVO_ = nullptr;};
        inline const vector<Results::TopicDeleteResultItemVO> & getTopicDeleteResultItemVO() const { DARABONBA_PTR_GET_CONST(topicDeleteResultItemVO_, vector<Results::TopicDeleteResultItemVO>) };
        inline vector<Results::TopicDeleteResultItemVO> getTopicDeleteResultItemVO() { DARABONBA_PTR_GET(topicDeleteResultItemVO_, vector<Results::TopicDeleteResultItemVO>) };
        inline Results& setTopicDeleteResultItemVO(const vector<Results::TopicDeleteResultItemVO> & topicDeleteResultItemVO) { DARABONBA_PTR_SET_VALUE(topicDeleteResultItemVO_, topicDeleteResultItemVO) };
        inline Results& setTopicDeleteResultItemVO(vector<Results::TopicDeleteResultItemVO> && topicDeleteResultItemVO) { DARABONBA_PTR_SET_RVALUE(topicDeleteResultItemVO_, topicDeleteResultItemVO) };


      protected:
        shared_ptr<vector<Results::TopicDeleteResultItemVO>> topicDeleteResultItemVO_ {};
      };

      virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->results_ == nullptr && this->successCount_ == nullptr && this->total_ == nullptr; };
      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline Data& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const Data::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, Data::Results) };
      inline Data::Results getResults() { DARABONBA_PTR_GET(results_, Data::Results) };
      inline Data& setResults(const Data::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(Data::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> failedCount_ {};
      shared_ptr<Data::Results> results_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline BatchDeleteTopicsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchDeleteTopicsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchDeleteTopicsResponseBody::Data) };
    inline BatchDeleteTopicsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchDeleteTopicsResponseBody::Data) };
    inline BatchDeleteTopicsResponseBody& setData(const BatchDeleteTopicsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchDeleteTopicsResponseBody& setData(BatchDeleteTopicsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchDeleteTopicsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeleteTopicsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchDeleteTopicsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<BatchDeleteTopicsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
