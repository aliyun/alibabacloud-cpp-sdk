// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOnlineDDLProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineDDLProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OnlineDDLTaskDetail, onlineDDLTaskDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnlineDDLProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OnlineDDLTaskDetail, onlineDDLTaskDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOnlineDDLProgressResponseBody() = default ;
    GetOnlineDDLProgressResponseBody(const GetOnlineDDLProgressResponseBody &) = default ;
    GetOnlineDDLProgressResponseBody(GetOnlineDDLProgressResponseBody &&) = default ;
    GetOnlineDDLProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineDDLProgressResponseBody() = default ;
    GetOnlineDDLProgressResponseBody& operator=(const GetOnlineDDLProgressResponseBody &) = default ;
    GetOnlineDDLProgressResponseBody& operator=(GetOnlineDDLProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->onlineDDLTaskDetail_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOnlineDDLProgressResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOnlineDDLProgressResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // onlineDDLTaskDetail Field Functions 
    bool hasOnlineDDLTaskDetail() const { return this->onlineDDLTaskDetail_ != nullptr;};
    void deleteOnlineDDLTaskDetail() { this->onlineDDLTaskDetail_ = nullptr;};
    inline const GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail & onlineDDLTaskDetail() const { DARABONBA_PTR_GET_CONST(onlineDDLTaskDetail_, GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail onlineDDLTaskDetail() { DARABONBA_PTR_GET(onlineDDLTaskDetail_, GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail) };
    inline GetOnlineDDLProgressResponseBody& setOnlineDDLTaskDetail(const GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail & onlineDDLTaskDetail) { DARABONBA_PTR_SET_VALUE(onlineDDLTaskDetail_, onlineDDLTaskDetail) };
    inline GetOnlineDDLProgressResponseBody& setOnlineDDLTaskDetail(GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail && onlineDDLTaskDetail) { DARABONBA_PTR_SET_RVALUE(onlineDDLTaskDetail_, onlineDDLTaskDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOnlineDDLProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOnlineDDLProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of the task.
    std::shared_ptr<GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail> onlineDDLTaskDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
