// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDYIKEUSERCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDYIKEUSERCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class AddYikeUserCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddYikeUserCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, AddYikeUserCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    AddYikeUserCreditResponseBody() = default ;
    AddYikeUserCreditResponseBody(const AddYikeUserCreditResponseBody &) = default ;
    AddYikeUserCreditResponseBody(AddYikeUserCreditResponseBody &&) = default ;
    AddYikeUserCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddYikeUserCreditResponseBody() = default ;
    AddYikeUserCreditResponseBody& operator=(const AddYikeUserCreditResponseBody &) = default ;
    AddYikeUserCreditResponseBody& operator=(AddYikeUserCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AddYikeUserCreditResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddYikeUserCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline AddYikeUserCreditResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The error code returned when the increase fails. Valid values:
    // - NOT_ENOUGH_ALLOCATE_CREDIT_QUOTA: The primary account does not have sufficient credit balance.
    shared_ptr<string> errorCode_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    // Indicates whether the credits were increased successfully.
    shared_ptr<bool> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
