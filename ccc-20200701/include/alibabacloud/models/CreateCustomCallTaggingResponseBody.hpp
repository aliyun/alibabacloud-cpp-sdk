// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCALLTAGGINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCALLTAGGINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCustomCallTaggingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCallTaggingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCallTaggingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomCallTaggingResponseBody() = default ;
    CreateCustomCallTaggingResponseBody(const CreateCustomCallTaggingResponseBody &) = default ;
    CreateCustomCallTaggingResponseBody(CreateCustomCallTaggingResponseBody &&) = default ;
    CreateCustomCallTaggingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCallTaggingResponseBody() = default ;
    CreateCustomCallTaggingResponseBody& operator=(const CreateCustomCallTaggingResponseBody &) = default ;
    CreateCustomCallTaggingResponseBody& operator=(CreateCustomCallTaggingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
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
      virtual bool empty() const override { return this->item_ == nullptr
        && this->reason_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline Data& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      shared_ptr<string> item_ {};
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCustomCallTaggingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CreateCustomCallTaggingResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CreateCustomCallTaggingResponseBody::Data>) };
    inline vector<CreateCustomCallTaggingResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CreateCustomCallTaggingResponseBody::Data>) };
    inline CreateCustomCallTaggingResponseBody& setData(const vector<CreateCustomCallTaggingResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCustomCallTaggingResponseBody& setData(vector<CreateCustomCallTaggingResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateCustomCallTaggingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCustomCallTaggingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomCallTaggingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<CreateCustomCallTaggingResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
