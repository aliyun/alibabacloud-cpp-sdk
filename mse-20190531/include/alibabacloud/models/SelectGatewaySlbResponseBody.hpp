// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTGATEWAYSLBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTGATEWAYSLBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class SelectGatewaySlbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectGatewaySlbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SelectGatewaySlbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SelectGatewaySlbResponseBody() = default ;
    SelectGatewaySlbResponseBody(const SelectGatewaySlbResponseBody &) = default ;
    SelectGatewaySlbResponseBody(SelectGatewaySlbResponseBody &&) = default ;
    SelectGatewaySlbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectGatewaySlbResponseBody() = default ;
    SelectGatewaySlbResponseBody& operator=(const SelectGatewaySlbResponseBody &) = default ;
    SelectGatewaySlbResponseBody& operator=(SelectGatewaySlbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SlbId, slbId_);
        DARABONBA_PTR_TO_JSON(SlbName, slbName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
        DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
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
      virtual bool empty() const override { return this->slbId_ == nullptr
        && this->slbName_ == nullptr; };
      // slbId Field Functions 
      bool hasSlbId() const { return this->slbId_ != nullptr;};
      void deleteSlbId() { this->slbId_ = nullptr;};
      inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
      inline Data& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


      // slbName Field Functions 
      bool hasSlbName() const { return this->slbName_ != nullptr;};
      void deleteSlbName() { this->slbName_ = nullptr;};
      inline string getSlbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
      inline Data& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    protected:
      // The ID of the SLB instance.
      shared_ptr<string> slbId_ {};
      // The name of the SLB instance.
      shared_ptr<string> slbName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SelectGatewaySlbResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SelectGatewaySlbResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SelectGatewaySlbResponseBody::Data>) };
    inline vector<SelectGatewaySlbResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SelectGatewaySlbResponseBody::Data>) };
    inline SelectGatewaySlbResponseBody& setData(const vector<SelectGatewaySlbResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SelectGatewaySlbResponseBody& setData(vector<SelectGatewaySlbResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SelectGatewaySlbResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SelectGatewaySlbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectGatewaySlbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SelectGatewaySlbResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The data structure.
    shared_ptr<vector<SelectGatewaySlbResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
