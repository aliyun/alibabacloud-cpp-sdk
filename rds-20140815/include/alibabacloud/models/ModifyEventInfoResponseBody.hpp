// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEVENTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEVENTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyEventInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEventInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorEventId, errorEventId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SuccessEventId, successEventId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEventInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorEventId, errorEventId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SuccessEventId, successEventId_);
    };
    ModifyEventInfoResponseBody() = default ;
    ModifyEventInfoResponseBody(const ModifyEventInfoResponseBody &) = default ;
    ModifyEventInfoResponseBody(ModifyEventInfoResponseBody &&) = default ;
    ModifyEventInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEventInfoResponseBody() = default ;
    ModifyEventInfoResponseBody& operator=(const ModifyEventInfoResponseBody &) = default ;
    ModifyEventInfoResponseBody& operator=(ModifyEventInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorEventId_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->successEventId_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ModifyEventInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorEventId Field Functions 
    bool hasErrorEventId() const { return this->errorEventId_ != nullptr;};
    void deleteErrorEventId() { this->errorEventId_ = nullptr;};
    inline string getErrorEventId() const { DARABONBA_PTR_GET_DEFAULT(errorEventId_, "") };
    inline ModifyEventInfoResponseBody& setErrorEventId(string errorEventId) { DARABONBA_PTR_SET_VALUE(errorEventId_, errorEventId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyEventInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline ModifyEventInfoResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successEventId Field Functions 
    bool hasSuccessEventId() const { return this->successEventId_ != nullptr;};
    void deleteSuccessEventId() { this->successEventId_ = nullptr;};
    inline string getSuccessEventId() const { DARABONBA_PTR_GET_DEFAULT(successEventId_, "") };
    inline ModifyEventInfoResponseBody& setSuccessEventId(string successEventId) { DARABONBA_PTR_SET_VALUE(successEventId_, successEventId) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error ID.
    shared_ptr<string> errorEventId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of successful records.
    shared_ptr<int32_t> successCount_ {};
    // The ID of the successful event.
    shared_ptr<string> successEventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
