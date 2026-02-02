// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTELEMENTVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTELEMENTVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{
namespace Models
{
  class EntElementVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntElementVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, EntElementVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    EntElementVerifyResponseBody() = default ;
    EntElementVerifyResponseBody(const EntElementVerifyResponseBody &) = default ;
    EntElementVerifyResponseBody(EntElementVerifyResponseBody &&) = default ;
    EntElementVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntElementVerifyResponseBody() = default ;
    EntElementVerifyResponseBody& operator=(const EntElementVerifyResponseBody &) = default ;
    EntElementVerifyResponseBody& operator=(EntElementVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(OpenTime, openTime_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(ReasonDetail, reasonDetail_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(OpenTime, openTime_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(ReasonDetail, reasonDetail_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->openTime_ == nullptr && this->reasonCode_ == nullptr && this->reasonDetail_ == nullptr && this->status_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline Result& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // openTime Field Functions 
      bool hasOpenTime() const { return this->openTime_ != nullptr;};
      void deleteOpenTime() { this->openTime_ = nullptr;};
      inline string getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, "") };
      inline Result& setOpenTime(string openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline Result& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // reasonDetail Field Functions 
      bool hasReasonDetail() const { return this->reasonDetail_ != nullptr;};
      void deleteReasonDetail() { this->reasonDetail_ = nullptr;};
      inline string getReasonDetail() const { DARABONBA_PTR_GET_DEFAULT(reasonDetail_, "") };
      inline Result& setReasonDetail(string reasonDetail) { DARABONBA_PTR_SET_VALUE(reasonDetail_, reasonDetail) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Verification result code.
      // - 1: Verification consistent
      // - 2: Verification inconsistent
      // - 3: Not found
      shared_ptr<string> bizCode_ {};
      // Operating period: start and end time of operations.
      // - Format: yyyy-MM-dd/yyyy-MM-dd.
      // - Example: 2018-09-25/9999-09-09.
      shared_ptr<string> openTime_ {};
      // ReasonCode explanation:
      // 
      // - 100: Verification consistent
      // 
      // - 201: Inconsistent between person and enterprise
      // 
      // - 202: Inconsistent in two elements of the enterprise
      // 
      // - 301: No enterprise found, unable to verify
      // 
      // - 302: Legal representative does not exist in the database
      // >Warning: This field will be discontinued on June 15, 2023. Existing customers are not affected.
      shared_ptr<string> reasonCode_ {};
      // Details of inconsistencies, multiple inconsistencies will be separated by commas.
      // - LegalPersonNameFlag: Inconsistent legal representative name
      // - LegalPersonCertNoFlag: Inconsistent legal representative ID number
      // - EntNameFlag: Inconsistent enterprise name
      // - LicenseNoFlag: Inconsistent business license number
      shared_ptr<string> reasonDetail_ {};
      // Enterprise operating status.
      // - 1: In operation (open)
      // - 2: Relocated
      // - 3: Deregistered
      // - 4: Revoked
      // - 5: Canceled
      // - 6: Suspended
      // - 0: Other
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EntElementVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EntElementVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EntElementVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const EntElementVerifyResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, EntElementVerifyResponseBody::Result) };
    inline EntElementVerifyResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, EntElementVerifyResponseBody::Result) };
    inline EntElementVerifyResponseBody& setResult(const EntElementVerifyResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline EntElementVerifyResponseBody& setResult(EntElementVerifyResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Error message
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Result
    shared_ptr<EntElementVerifyResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
