// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBWMMIGRATIONWORKFLOWSUBMITSTARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBWMMIGRATIONWORKFLOWSUBMITSTARTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetBwmMigrationWorkflowSubmitStartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBwmMigrationWorkflowSubmitStartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBwmMigrationWorkflowSubmitStartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetBwmMigrationWorkflowSubmitStartResponseBody() = default ;
    GetBwmMigrationWorkflowSubmitStartResponseBody(const GetBwmMigrationWorkflowSubmitStartResponseBody &) = default ;
    GetBwmMigrationWorkflowSubmitStartResponseBody(GetBwmMigrationWorkflowSubmitStartResponseBody &&) = default ;
    GetBwmMigrationWorkflowSubmitStartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBwmMigrationWorkflowSubmitStartResponseBody() = default ;
    GetBwmMigrationWorkflowSubmitStartResponseBody& operator=(const GetBwmMigrationWorkflowSubmitStartResponseBody &) = default ;
    GetBwmMigrationWorkflowSubmitStartResponseBody& operator=(GetBwmMigrationWorkflowSubmitStartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t getData() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline GetBwmMigrationWorkflowSubmitStartResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetBwmMigrationWorkflowSubmitStartResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetBwmMigrationWorkflowSubmitStartResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBwmMigrationWorkflowSubmitStartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBwmMigrationWorkflowSubmitStartResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response data.
    shared_ptr<int64_t> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, troubleshoot the issue based on errCode and errMessage.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
