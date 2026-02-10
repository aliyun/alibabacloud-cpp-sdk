// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitOperationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitOperationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitOperationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
    };
    SubmitOperationTaskResponseBody() = default ;
    SubmitOperationTaskResponseBody(const SubmitOperationTaskResponseBody &) = default ;
    SubmitOperationTaskResponseBody(SubmitOperationTaskResponseBody &&) = default ;
    SubmitOperationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitOperationTaskResponseBody() = default ;
    SubmitOperationTaskResponseBody& operator=(const SubmitOperationTaskResponseBody &) = default ;
    SubmitOperationTaskResponseBody& operator=(SubmitOperationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateCode_ == nullptr
        && this->requestId_ == nullptr && this->rootTaskId_ == nullptr; };
    // operateCode Field Functions 
    bool hasOperateCode() const { return this->operateCode_ != nullptr;};
    void deleteOperateCode() { this->operateCode_ = nullptr;};
    inline string getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
    inline SubmitOperationTaskResponseBody& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitOperationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline SubmitOperationTaskResponseBody& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


  protected:
    // The handling result code. Valid values:
    // 
    // *   Insufficient authorization: AuthorizationExhaust
    // *   Unauthorized: ActionTrialUnauthorized
    shared_ptr<string> operateCode_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The main task ID that is returned when the task is submitted.
    shared_ptr<string> rootTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
