// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINBOUNDNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDINBOUNDNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddInboundNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInboundNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddInboundNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddInboundNumberResponseBody() = default ;
    AddInboundNumberResponseBody(const AddInboundNumberResponseBody &) = default ;
    AddInboundNumberResponseBody(AddInboundNumberResponseBody &&) = default ;
    AddInboundNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInboundNumberResponseBody() = default ;
    AddInboundNumberResponseBody& operator=(const AddInboundNumberResponseBody &) = default ;
    AddInboundNumberResponseBody& operator=(AddInboundNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InboundNumber, inboundNumber_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InboundNumber, inboundNumber_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      virtual bool empty() const override { return this->inboundNumber_ == nullptr
        && this->message_ == nullptr && this->result_ == nullptr; };
      // inboundNumber Field Functions 
      bool hasInboundNumber() const { return this->inboundNumber_ != nullptr;};
      void deleteInboundNumber() { this->inboundNumber_ = nullptr;};
      inline string getInboundNumber() const { DARABONBA_PTR_GET_DEFAULT(inboundNumber_, "") };
      inline Data& setInboundNumber(string inboundNumber) { DARABONBA_PTR_SET_VALUE(inboundNumber_, inboundNumber) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
      inline Data& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      // The inbound number.
      shared_ptr<string> inboundNumber_ {};
      // The error description.
      shared_ptr<string> message_ {};
      // Indicates whether the number was added successfully. `true` indicates success, and `false` indicates failure.
      shared_ptr<bool> result_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline AddInboundNumberResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddInboundNumberResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<AddInboundNumberResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<AddInboundNumberResponseBody::Data>) };
    inline vector<AddInboundNumberResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<AddInboundNumberResponseBody::Data>) };
    inline AddInboundNumberResponseBody& setData(const vector<AddInboundNumberResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddInboundNumberResponseBody& setData(vector<AddInboundNumberResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddInboundNumberResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddInboundNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddInboundNumberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Details about why access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<AddInboundNumberResponseBody::Data>> data_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call succeeded.
    // 
    // - **true**: The call succeeded.
    // 
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
