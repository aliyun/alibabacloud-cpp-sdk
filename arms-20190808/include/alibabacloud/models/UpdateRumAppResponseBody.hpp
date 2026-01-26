// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERUMAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERUMAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateRumAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRumAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRumAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateRumAppResponseBody() = default ;
    UpdateRumAppResponseBody(const UpdateRumAppResponseBody &) = default ;
    UpdateRumAppResponseBody(UpdateRumAppResponseBody &&) = default ;
    UpdateRumAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRumAppResponseBody() = default ;
    UpdateRumAppResponseBody& operator=(const UpdateRumAppResponseBody &) = default ;
    UpdateRumAppResponseBody& operator=(UpdateRumAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Limit, limit_);
        DARABONBA_PTR_TO_JSON(Limited, limited_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Limit, limit_);
        DARABONBA_PTR_FROM_JSON(Limited, limited_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
      virtual bool empty() const override { return this->config_ == nullptr
        && this->limit_ == nullptr && this->limited_ == nullptr && this->usage_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
      inline Data& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // limited Field Functions 
      bool hasLimited() const { return this->limited_ != nullptr;};
      void deleteLimited() { this->limited_ = nullptr;};
      inline bool getLimited() const { DARABONBA_PTR_GET_DEFAULT(limited_, false) };
      inline Data& setLimited(bool limited) { DARABONBA_PTR_SET_VALUE(limited_, limited) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline int32_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
      inline Data& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The user configurations. This is a reserved parameter.
      shared_ptr<string> config_ {};
      // The QPS limit. Unit: bytes.
      shared_ptr<int32_t> limit_ {};
      // Indicates whether the request is throttled due to the QPS limit. Valid values: true and false.
      shared_ptr<bool> limited_ {};
      // The usage. Unit: bytes.
      shared_ptr<int32_t> usage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateRumAppResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateRumAppResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateRumAppResponseBody::Data) };
    inline UpdateRumAppResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateRumAppResponseBody::Data) };
    inline UpdateRumAppResponseBody& setData(const UpdateRumAppResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateRumAppResponseBody& setData(UpdateRumAppResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline UpdateRumAppResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateRumAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRumAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateRumAppResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The details of the returned results.
    shared_ptr<UpdateRumAppResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
