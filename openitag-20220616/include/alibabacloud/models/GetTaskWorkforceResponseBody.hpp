// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKWORKFORCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKWORKFORCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Workforce.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetTaskWorkforceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskWorkforceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Workforce, workforce_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskWorkforceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Workforce, workforce_);
    };
    GetTaskWorkforceResponseBody() = default ;
    GetTaskWorkforceResponseBody(const GetTaskWorkforceResponseBody &) = default ;
    GetTaskWorkforceResponseBody(GetTaskWorkforceResponseBody &&) = default ;
    GetTaskWorkforceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskWorkforceResponseBody() = default ;
    GetTaskWorkforceResponseBody& operator=(const GetTaskWorkforceResponseBody &) = default ;
    GetTaskWorkforceResponseBody& operator=(GetTaskWorkforceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->workforce_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTaskWorkforceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline GetTaskWorkforceResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskWorkforceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskWorkforceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskWorkforceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskWorkforceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workforce Field Functions 
    bool hasWorkforce() const { return this->workforce_ != nullptr;};
    void deleteWorkforce() { this->workforce_ = nullptr;};
    inline const vector<Workforce> & getWorkforce() const { DARABONBA_PTR_GET_CONST(workforce_, vector<Workforce>) };
    inline vector<Workforce> getWorkforce() { DARABONBA_PTR_GET(workforce_, vector<Workforce>) };
    inline GetTaskWorkforceResponseBody& setWorkforce(const vector<Workforce> & workforce) { DARABONBA_PTR_SET_VALUE(workforce_, workforce) };
    inline GetTaskWorkforceResponseBody& setWorkforce(vector<Workforce> && workforce) { DARABONBA_PTR_SET_RVALUE(workforce_, workforce) };


  protected:
    // Return encoding. The default value is 0, indicating normal execution.
    shared_ptr<int32_t> code_ {};
    // Details.
    shared_ptr<string> details_ {};
    // Error code.  
    // - When Success is false, returns a business error code.  
    // - When Success is true, returns an empty value.
    shared_ptr<string> errorCode_ {};
    // The response message of the request.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded. Valid values:  
    // - true: Succeeded.  
    // - false: Failed.
    shared_ptr<bool> success_ {};
    // List of workforce.
    shared_ptr<vector<Workforce>> workforce_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
