// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDCASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPENDCASESRESPONSEBODY_HPP_
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
  class AppendCasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendCasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AppendCasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AppendCasesResponseBody() = default ;
    AppendCasesResponseBody(const AppendCasesResponseBody &) = default ;
    AppendCasesResponseBody(AppendCasesResponseBody &&) = default ;
    AppendCasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendCasesResponseBody() = default ;
    AppendCasesResponseBody& operator=(const AppendCasesResponseBody &) = default ;
    AppendCasesResponseBody& operator=(AppendCasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
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
      virtual bool empty() const override { return this->customVariables_ == nullptr
        && this->phoneNumber_ == nullptr && this->referenceId_ == nullptr; };
      // customVariables Field Functions 
      bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
      void deleteCustomVariables() { this->customVariables_ = nullptr;};
      inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
      inline Data& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Data& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    protected:
      shared_ptr<string> customVariables_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<string> referenceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AppendCasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<AppendCasesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<AppendCasesResponseBody::Data>) };
    inline vector<AppendCasesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<AppendCasesResponseBody::Data>) };
    inline AppendCasesResponseBody& setData(const vector<AppendCasesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AppendCasesResponseBody& setData(vector<AppendCasesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline AppendCasesResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AppendCasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AppendCasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<AppendCasesResponseBody::Data>> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
