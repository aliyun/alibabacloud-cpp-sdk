// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorTaskId, errorTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorTaskId, errorTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    ModifyTaskInfoResponseBody() = default ;
    ModifyTaskInfoResponseBody(const ModifyTaskInfoResponseBody &) = default ;
    ModifyTaskInfoResponseBody(ModifyTaskInfoResponseBody &&) = default ;
    ModifyTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTaskInfoResponseBody() = default ;
    ModifyTaskInfoResponseBody& operator=(const ModifyTaskInfoResponseBody &) = default ;
    ModifyTaskInfoResponseBody& operator=(ModifyTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorTaskId_ == nullptr && return this->requestId_ == nullptr && return this->successCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ModifyTaskInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorTaskId Field Functions 
    bool hasErrorTaskId() const { return this->errorTaskId_ != nullptr;};
    void deleteErrorTaskId() { this->errorTaskId_ = nullptr;};
    inline string errorTaskId() const { DARABONBA_PTR_GET_DEFAULT(errorTaskId_, "") };
    inline ModifyTaskInfoResponseBody& setErrorTaskId(string errorTaskId) { DARABONBA_PTR_SET_VALUE(errorTaskId_, errorTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline string successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, "") };
    inline ModifyTaskInfoResponseBody& setSuccessCount(string successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the failed task. This parameter is returned when a task fails.
    std::shared_ptr<string> errorTaskId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of completed tasks.
    std::shared_ptr<string> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
