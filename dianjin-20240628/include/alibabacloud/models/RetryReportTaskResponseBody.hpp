// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYREPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYREPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RetryReportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryReportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(outRequestNo, outRequestNo_);
      DARABONBA_PTR_TO_JSON(retryAvailable, retryAvailable_);
      DARABONBA_PTR_TO_JSON(retryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, RetryReportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(outRequestNo, outRequestNo_);
      DARABONBA_PTR_FROM_JSON(retryAvailable, retryAvailable_);
      DARABONBA_PTR_FROM_JSON(retryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    RetryReportTaskResponseBody() = default ;
    RetryReportTaskResponseBody(const RetryReportTaskResponseBody &) = default ;
    RetryReportTaskResponseBody(RetryReportTaskResponseBody &&) = default ;
    RetryReportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryReportTaskResponseBody() = default ;
    RetryReportTaskResponseBody& operator=(const RetryReportTaskResponseBody &) = default ;
    RetryReportTaskResponseBody& operator=(RetryReportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->outRequestNo_ == nullptr && this->retryAvailable_ == nullptr && this->retryCount_ == nullptr && this->taskStatus_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RetryReportTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline RetryReportTaskResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // outRequestNo Field Functions 
    bool hasOutRequestNo() const { return this->outRequestNo_ != nullptr;};
    void deleteOutRequestNo() { this->outRequestNo_ = nullptr;};
    inline string getOutRequestNo() const { DARABONBA_PTR_GET_DEFAULT(outRequestNo_, "") };
    inline RetryReportTaskResponseBody& setOutRequestNo(string outRequestNo) { DARABONBA_PTR_SET_VALUE(outRequestNo_, outRequestNo) };


    // retryAvailable Field Functions 
    bool hasRetryAvailable() const { return this->retryAvailable_ != nullptr;};
    void deleteRetryAvailable() { this->retryAvailable_ = nullptr;};
    inline bool getRetryAvailable() const { DARABONBA_PTR_GET_DEFAULT(retryAvailable_, false) };
    inline RetryReportTaskResponseBody& setRetryAvailable(bool retryAvailable) { DARABONBA_PTR_SET_VALUE(retryAvailable_, retryAvailable) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline RetryReportTaskResponseBody& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline RetryReportTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> outRequestNo_ {};
    shared_ptr<bool> retryAvailable_ {};
    shared_ptr<int32_t> retryCount_ {};
    shared_ptr<string> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
