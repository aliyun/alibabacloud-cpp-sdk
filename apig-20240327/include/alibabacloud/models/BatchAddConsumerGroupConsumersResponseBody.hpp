// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDCONSUMERGROUPCONSUMERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDCONSUMERGROUPCONSUMERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchAddConsumerGroupConsumersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddConsumerGroupConsumersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddConsumerGroupConsumersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    BatchAddConsumerGroupConsumersResponseBody() = default ;
    BatchAddConsumerGroupConsumersResponseBody(const BatchAddConsumerGroupConsumersResponseBody &) = default ;
    BatchAddConsumerGroupConsumersResponseBody(BatchAddConsumerGroupConsumersResponseBody &&) = default ;
    BatchAddConsumerGroupConsumersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddConsumerGroupConsumersResponseBody() = default ;
    BatchAddConsumerGroupConsumersResponseBody& operator=(const BatchAddConsumerGroupConsumersResponseBody &) = default ;
    BatchAddConsumerGroupConsumersResponseBody& operator=(BatchAddConsumerGroupConsumersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(failedConsumerIds, failedConsumerIds_);
        DARABONBA_PTR_TO_JSON(skippedConsumerIds, skippedConsumerIds_);
        DARABONBA_PTR_TO_JSON(successConsumerIds, successConsumerIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(failedConsumerIds, failedConsumerIds_);
        DARABONBA_PTR_FROM_JSON(skippedConsumerIds, skippedConsumerIds_);
        DARABONBA_PTR_FROM_JSON(successConsumerIds, successConsumerIds_);
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
      virtual bool empty() const override { return this->failedConsumerIds_ == nullptr
        && this->skippedConsumerIds_ == nullptr && this->successConsumerIds_ == nullptr; };
      // failedConsumerIds Field Functions 
      bool hasFailedConsumerIds() const { return this->failedConsumerIds_ != nullptr;};
      void deleteFailedConsumerIds() { this->failedConsumerIds_ = nullptr;};
      inline const vector<string> & getFailedConsumerIds() const { DARABONBA_PTR_GET_CONST(failedConsumerIds_, vector<string>) };
      inline vector<string> getFailedConsumerIds() { DARABONBA_PTR_GET(failedConsumerIds_, vector<string>) };
      inline Data& setFailedConsumerIds(const vector<string> & failedConsumerIds) { DARABONBA_PTR_SET_VALUE(failedConsumerIds_, failedConsumerIds) };
      inline Data& setFailedConsumerIds(vector<string> && failedConsumerIds) { DARABONBA_PTR_SET_RVALUE(failedConsumerIds_, failedConsumerIds) };


      // skippedConsumerIds Field Functions 
      bool hasSkippedConsumerIds() const { return this->skippedConsumerIds_ != nullptr;};
      void deleteSkippedConsumerIds() { this->skippedConsumerIds_ = nullptr;};
      inline const vector<string> & getSkippedConsumerIds() const { DARABONBA_PTR_GET_CONST(skippedConsumerIds_, vector<string>) };
      inline vector<string> getSkippedConsumerIds() { DARABONBA_PTR_GET(skippedConsumerIds_, vector<string>) };
      inline Data& setSkippedConsumerIds(const vector<string> & skippedConsumerIds) { DARABONBA_PTR_SET_VALUE(skippedConsumerIds_, skippedConsumerIds) };
      inline Data& setSkippedConsumerIds(vector<string> && skippedConsumerIds) { DARABONBA_PTR_SET_RVALUE(skippedConsumerIds_, skippedConsumerIds) };


      // successConsumerIds Field Functions 
      bool hasSuccessConsumerIds() const { return this->successConsumerIds_ != nullptr;};
      void deleteSuccessConsumerIds() { this->successConsumerIds_ = nullptr;};
      inline const vector<string> & getSuccessConsumerIds() const { DARABONBA_PTR_GET_CONST(successConsumerIds_, vector<string>) };
      inline vector<string> getSuccessConsumerIds() { DARABONBA_PTR_GET(successConsumerIds_, vector<string>) };
      inline Data& setSuccessConsumerIds(const vector<string> & successConsumerIds) { DARABONBA_PTR_SET_VALUE(successConsumerIds_, successConsumerIds) };
      inline Data& setSuccessConsumerIds(vector<string> && successConsumerIds) { DARABONBA_PTR_SET_RVALUE(successConsumerIds_, successConsumerIds) };


    protected:
      shared_ptr<vector<string>> failedConsumerIds_ {};
      shared_ptr<vector<string>> skippedConsumerIds_ {};
      shared_ptr<vector<string>> successConsumerIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchAddConsumerGroupConsumersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchAddConsumerGroupConsumersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchAddConsumerGroupConsumersResponseBody::Data) };
    inline BatchAddConsumerGroupConsumersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchAddConsumerGroupConsumersResponseBody::Data) };
    inline BatchAddConsumerGroupConsumersResponseBody& setData(const BatchAddConsumerGroupConsumersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchAddConsumerGroupConsumersResponseBody& setData(BatchAddConsumerGroupConsumersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchAddConsumerGroupConsumersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchAddConsumerGroupConsumersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<BatchAddConsumerGroupConsumersResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
