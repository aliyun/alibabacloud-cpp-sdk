// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkitemRecordResponseBodyWorkitemTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(WorkitemTime, workitemTime_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkitemTime, workitemTime_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateWorkitemRecordResponseBody() = default ;
    CreateWorkitemRecordResponseBody(const CreateWorkitemRecordResponseBody &) = default ;
    CreateWorkitemRecordResponseBody(CreateWorkitemRecordResponseBody &&) = default ;
    CreateWorkitemRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemRecordResponseBody() = default ;
    CreateWorkitemRecordResponseBody& operator=(const CreateWorkitemRecordResponseBody &) = default ;
    CreateWorkitemRecordResponseBody& operator=(CreateWorkitemRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workitemTime_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // workitemTime Field Functions 
    bool hasWorkitemTime() const { return this->workitemTime_ != nullptr;};
    void deleteWorkitemTime() { this->workitemTime_ = nullptr;};
    inline const CreateWorkitemRecordResponseBodyWorkitemTime & workitemTime() const { DARABONBA_PTR_GET_CONST(workitemTime_, CreateWorkitemRecordResponseBodyWorkitemTime) };
    inline CreateWorkitemRecordResponseBodyWorkitemTime workitemTime() { DARABONBA_PTR_GET(workitemTime_, CreateWorkitemRecordResponseBodyWorkitemTime) };
    inline CreateWorkitemRecordResponseBody& setWorkitemTime(const CreateWorkitemRecordResponseBodyWorkitemTime & workitemTime) { DARABONBA_PTR_SET_VALUE(workitemTime_, workitemTime) };
    inline CreateWorkitemRecordResponseBody& setWorkitemTime(CreateWorkitemRecordResponseBodyWorkitemTime && workitemTime) { DARABONBA_PTR_SET_RVALUE(workitemTime_, workitemTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateWorkitemRecordResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreateWorkitemRecordResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkitemRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateWorkitemRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<CreateWorkitemRecordResponseBodyWorkitemTime> workitemTime_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
