// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNUMBERBINDINGSOFINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNUMBERBINDINGSOFINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListNumberBindingsOfInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNumberBindingsOfInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListNumberBindingsOfInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListNumberBindingsOfInstanceResponseBody() = default ;
    ListNumberBindingsOfInstanceResponseBody(const ListNumberBindingsOfInstanceResponseBody &) = default ;
    ListNumberBindingsOfInstanceResponseBody(ListNumberBindingsOfInstanceResponseBody &&) = default ;
    ListNumberBindingsOfInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNumberBindingsOfInstanceResponseBody() = default ;
    ListNumberBindingsOfInstanceResponseBody& operator=(const ListNumberBindingsOfInstanceResponseBody &) = default ;
    ListNumberBindingsOfInstanceResponseBody& operator=(ListNumberBindingsOfInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bound, bound_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(SipTrunkId, sipTrunkId_);
        DARABONBA_PTR_TO_JSON(SipTrunkName, sipTrunkName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bound, bound_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(SipTrunkId, sipTrunkId_);
        DARABONBA_PTR_FROM_JSON(SipTrunkName, sipTrunkName_);
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
      virtual bool empty() const override { return this->bound_ == nullptr
        && this->number_ == nullptr && this->sipTrunkId_ == nullptr && this->sipTrunkName_ == nullptr; };
      // bound Field Functions 
      bool hasBound() const { return this->bound_ != nullptr;};
      void deleteBound() { this->bound_ = nullptr;};
      inline bool getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, false) };
      inline Data& setBound(bool bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Data& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // sipTrunkId Field Functions 
      bool hasSipTrunkId() const { return this->sipTrunkId_ != nullptr;};
      void deleteSipTrunkId() { this->sipTrunkId_ = nullptr;};
      inline string getSipTrunkId() const { DARABONBA_PTR_GET_DEFAULT(sipTrunkId_, "") };
      inline Data& setSipTrunkId(string sipTrunkId) { DARABONBA_PTR_SET_VALUE(sipTrunkId_, sipTrunkId) };


      // sipTrunkName Field Functions 
      bool hasSipTrunkName() const { return this->sipTrunkName_ != nullptr;};
      void deleteSipTrunkName() { this->sipTrunkName_ = nullptr;};
      inline string getSipTrunkName() const { DARABONBA_PTR_GET_DEFAULT(sipTrunkName_, "") };
      inline Data& setSipTrunkName(string sipTrunkName) { DARABONBA_PTR_SET_VALUE(sipTrunkName_, sipTrunkName) };


    protected:
      // Indicates whether the number is bound to the instance specified in the request.
      shared_ptr<bool> bound_ {};
      // The bound number.
      shared_ptr<string> number_ {};
      // The SIP trunk ID.
      shared_ptr<string> sipTrunkId_ {};
      // The SIP trunk name.
      shared_ptr<string> sipTrunkName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNumberBindingsOfInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListNumberBindingsOfInstanceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListNumberBindingsOfInstanceResponseBody::Data>) };
    inline vector<ListNumberBindingsOfInstanceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListNumberBindingsOfInstanceResponseBody::Data>) };
    inline ListNumberBindingsOfInstanceResponseBody& setData(const vector<ListNumberBindingsOfInstanceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNumberBindingsOfInstanceResponseBody& setData(vector<ListNumberBindingsOfInstanceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListNumberBindingsOfInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNumberBindingsOfInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNumberBindingsOfInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNumberBindingsOfInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The list of number binding information.
    shared_ptr<vector<ListNumberBindingsOfInstanceResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned by the API operation.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
