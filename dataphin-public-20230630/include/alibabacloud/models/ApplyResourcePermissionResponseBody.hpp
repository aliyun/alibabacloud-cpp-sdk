// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYRESOURCEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYRESOURCEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyResourcePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyResourcePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyResourcePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ApplyResourcePermissionResponseBody() = default ;
    ApplyResourcePermissionResponseBody(const ApplyResourcePermissionResponseBody &) = default ;
    ApplyResourcePermissionResponseBody(ApplyResourcePermissionResponseBody &&) = default ;
    ApplyResourcePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyResourcePermissionResponseBody() = default ;
    ApplyResourcePermissionResponseBody& operator=(const ApplyResourcePermissionResponseBody &) = default ;
    ApplyResourcePermissionResponseBody& operator=(ApplyResourcePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyIds, applyIds_);
        DARABONBA_PTR_TO_JSON(BpmsIds, bpmsIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyIds, applyIds_);
        DARABONBA_PTR_FROM_JSON(BpmsIds, bpmsIds_);
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
      virtual bool empty() const override { return this->applyIds_ == nullptr
        && this->bpmsIds_ == nullptr; };
      // applyIds Field Functions 
      bool hasApplyIds() const { return this->applyIds_ != nullptr;};
      void deleteApplyIds() { this->applyIds_ = nullptr;};
      inline const vector<string> & getApplyIds() const { DARABONBA_PTR_GET_CONST(applyIds_, vector<string>) };
      inline vector<string> getApplyIds() { DARABONBA_PTR_GET(applyIds_, vector<string>) };
      inline Data& setApplyIds(const vector<string> & applyIds) { DARABONBA_PTR_SET_VALUE(applyIds_, applyIds) };
      inline Data& setApplyIds(vector<string> && applyIds) { DARABONBA_PTR_SET_RVALUE(applyIds_, applyIds) };


      // bpmsIds Field Functions 
      bool hasBpmsIds() const { return this->bpmsIds_ != nullptr;};
      void deleteBpmsIds() { this->bpmsIds_ = nullptr;};
      inline const vector<string> & getBpmsIds() const { DARABONBA_PTR_GET_CONST(bpmsIds_, vector<string>) };
      inline vector<string> getBpmsIds() { DARABONBA_PTR_GET(bpmsIds_, vector<string>) };
      inline Data& setBpmsIds(const vector<string> & bpmsIds) { DARABONBA_PTR_SET_VALUE(bpmsIds_, bpmsIds) };
      inline Data& setBpmsIds(vector<string> && bpmsIds) { DARABONBA_PTR_SET_RVALUE(bpmsIds_, bpmsIds) };


    protected:
      // The list of application IDs.
      shared_ptr<vector<string>> applyIds_ {};
      // The list of approval IDs.
      shared_ptr<vector<string>> bpmsIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyResourcePermissionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ApplyResourcePermissionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ApplyResourcePermissionResponseBody::Data) };
    inline ApplyResourcePermissionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ApplyResourcePermissionResponseBody::Data) };
    inline ApplyResourcePermissionResponseBody& setData(const ApplyResourcePermissionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ApplyResourcePermissionResponseBody& setData(ApplyResourcePermissionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ApplyResourcePermissionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyResourcePermissionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyResourcePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyResourcePermissionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code of the request. A value of OK indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The application result.
    shared_ptr<ApplyResourcePermissionResponseBody::Data> data_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message of the request.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
