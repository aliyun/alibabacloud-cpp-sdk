// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPHONENOAREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPHONENOAREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePhoneNoAReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePhoneNoAReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePhoneNoAReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePhoneNoAReportResponseBody() = default ;
    CreatePhoneNoAReportResponseBody(const CreatePhoneNoAReportResponseBody &) = default ;
    CreatePhoneNoAReportResponseBody(CreatePhoneNoAReportResponseBody &&) = default ;
    CreatePhoneNoAReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePhoneNoAReportResponseBody() = default ;
    CreatePhoneNoAReportResponseBody& operator=(const CreatePhoneNoAReportResponseBody &) = default ;
    CreatePhoneNoAReportResponseBody& operator=(CreatePhoneNoAReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
        DARABONBA_PTR_TO_JSON(FailType, failType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
        DARABONBA_PTR_FROM_JSON(FailType, failType_);
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
      virtual bool empty() const override { return this->createResult_ == nullptr
        && this->failType_ == nullptr; };
      // createResult Field Functions 
      bool hasCreateResult() const { return this->createResult_ != nullptr;};
      void deleteCreateResult() { this->createResult_ = nullptr;};
      inline bool getCreateResult() const { DARABONBA_PTR_GET_DEFAULT(createResult_, false) };
      inline Data& setCreateResult(bool createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };


      // failType Field Functions 
      bool hasFailType() const { return this->failType_ != nullptr;};
      void deleteFailType() { this->failType_ = nullptr;};
      inline int64_t getFailType() const { DARABONBA_PTR_GET_DEFAULT(failType_, 0L) };
      inline Data& setFailType(int64_t failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


    protected:
      // Creation result. Valid values:
      // 
      // - true: Succeeded.
      // 
      // - false: Failed.
      shared_ptr<bool> createResult_ {};
      // Enumeration of creation types. A value of 1 indicates success, and negative values indicate creation failure. Valid values:
      // 
      // - 1: Succeeded.
      // 
      // - -1: The mobile phone number has already been submitted for filing; no need to submit again.
      // 
      // - -2: The mobile phone number has already been successfully filed; no need to file again.
      shared_ptr<int64_t> failType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreatePhoneNoAReportResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePhoneNoAReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePhoneNoAReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePhoneNoAReportResponseBody::Data) };
    inline CreatePhoneNoAReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePhoneNoAReportResponseBody::Data) };
    inline CreatePhoneNoAReportResponseBody& setData(const CreatePhoneNoAReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePhoneNoAReportResponseBody& setData(CreatePhoneNoAReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePhoneNoAReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePhoneNoAReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreatePhoneNoAReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Details of denied access.
    shared_ptr<string> accessDeniedDetail_ {};
    // Request status code.
    shared_ptr<string> code_ {};
    // The struct of the A-number filing result.
    shared_ptr<CreatePhoneNoAReportResponseBody::Data> data_ {};
    // Error message for failure.
    shared_ptr<string> message_ {};
    // The returned ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded. Valid values:
    // 
    // - true: Succeeded.
    // 
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
