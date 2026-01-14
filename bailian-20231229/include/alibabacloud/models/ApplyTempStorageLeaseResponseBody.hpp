// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyTempStorageLeaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTempStorageLeaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTempStorageLeaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ApplyTempStorageLeaseResponseBody() = default ;
    ApplyTempStorageLeaseResponseBody(const ApplyTempStorageLeaseResponseBody &) = default ;
    ApplyTempStorageLeaseResponseBody(ApplyTempStorageLeaseResponseBody &&) = default ;
    ApplyTempStorageLeaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTempStorageLeaseResponseBody() = default ;
    ApplyTempStorageLeaseResponseBody& operator=(const ApplyTempStorageLeaseResponseBody &) = default ;
    ApplyTempStorageLeaseResponseBody& operator=(ApplyTempStorageLeaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Param, param_);
        DARABONBA_PTR_TO_JSON(TempStorageLeaseId, tempStorageLeaseId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Param, param_);
        DARABONBA_PTR_FROM_JSON(TempStorageLeaseId, tempStorageLeaseId_);
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
      class Param : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Param& obj) { 
          DARABONBA_ANY_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Param& obj) { 
          DARABONBA_ANY_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Param() = default ;
        Param(const Param &) = default ;
        Param(Param &&) = default ;
        Param(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Param() = default ;
        Param& operator=(const Param &) = default ;
        Param& operator=(Param &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->headers_ == nullptr
        && this->method_ == nullptr && this->url_ == nullptr; };
        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline         const Darabonba::Json & getHeaders() const { DARABONBA_GET(headers_) };
        Darabonba::Json & getHeaders() { DARABONBA_GET(headers_) };
        inline Param& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
        inline Param& setHeaders(Darabonba::Json && headers) { DARABONBA_SET_RVALUE(headers_, headers) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Param& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Param& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // K-V fields to be included in the Header; both Key and Value are strings.
        Darabonba::Json headers_ {};
        // HTTP method for the call. Valid values: PUT POST
        shared_ptr<string> method_ {};
        // Authorized URL for the file upload.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->param_ == nullptr
        && this->tempStorageLeaseId_ == nullptr; };
      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline const Data::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, Data::Param) };
      inline Data::Param getParam() { DARABONBA_PTR_GET(param_, Data::Param) };
      inline Data& setParam(const Data::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
      inline Data& setParam(Data::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


      // tempStorageLeaseId Field Functions 
      bool hasTempStorageLeaseId() const { return this->tempStorageLeaseId_ != nullptr;};
      void deleteTempStorageLeaseId() { this->tempStorageLeaseId_ = nullptr;};
      inline string getTempStorageLeaseId() const { DARABONBA_PTR_GET_DEFAULT(tempStorageLeaseId_, "") };
      inline Data& setTempStorageLeaseId(string tempStorageLeaseId) { DARABONBA_PTR_SET_VALUE(tempStorageLeaseId_, tempStorageLeaseId) };


    protected:
      // HTTP parameters used for uploading the file.
      shared_ptr<Data::Param> param_ {};
      // Unique lease ID. This parameter is required when retrieving the uploaded file within the application later.
      shared_ptr<string> tempStorageLeaseId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyTempStorageLeaseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ApplyTempStorageLeaseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ApplyTempStorageLeaseResponseBody::Data) };
    inline ApplyTempStorageLeaseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ApplyTempStorageLeaseResponseBody::Data) };
    inline ApplyTempStorageLeaseResponseBody& setData(const ApplyTempStorageLeaseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ApplyTempStorageLeaseResponseBody& setData(ApplyTempStorageLeaseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyTempStorageLeaseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyTempStorageLeaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ApplyTempStorageLeaseResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyTempStorageLeaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data fields.
    shared_ptr<ApplyTempStorageLeaseResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code returned.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
