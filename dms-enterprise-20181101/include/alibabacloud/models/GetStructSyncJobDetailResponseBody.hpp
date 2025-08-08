// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStructSyncJobDetailResponseBodyStructSyncJobDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncJobDetail, structSyncJobDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncJobDetail, structSyncJobDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncJobDetailResponseBody() = default ;
    GetStructSyncJobDetailResponseBody(const GetStructSyncJobDetailResponseBody &) = default ;
    GetStructSyncJobDetailResponseBody(GetStructSyncJobDetailResponseBody &&) = default ;
    GetStructSyncJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobDetailResponseBody() = default ;
    GetStructSyncJobDetailResponseBody& operator=(const GetStructSyncJobDetailResponseBody &) = default ;
    GetStructSyncJobDetailResponseBody& operator=(GetStructSyncJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->structSyncJobDetail_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncJobDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncJobDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncJobDetail Field Functions 
    bool hasStructSyncJobDetail() const { return this->structSyncJobDetail_ != nullptr;};
    void deleteStructSyncJobDetail() { this->structSyncJobDetail_ = nullptr;};
    inline const GetStructSyncJobDetailResponseBodyStructSyncJobDetail & structSyncJobDetail() const { DARABONBA_PTR_GET_CONST(structSyncJobDetail_, GetStructSyncJobDetailResponseBodyStructSyncJobDetail) };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail structSyncJobDetail() { DARABONBA_PTR_GET(structSyncJobDetail_, GetStructSyncJobDetailResponseBodyStructSyncJobDetail) };
    inline GetStructSyncJobDetailResponseBody& setStructSyncJobDetail(const GetStructSyncJobDetailResponseBodyStructSyncJobDetail & structSyncJobDetail) { DARABONBA_PTR_SET_VALUE(structSyncJobDetail_, structSyncJobDetail) };
    inline GetStructSyncJobDetailResponseBody& setStructSyncJobDetail(GetStructSyncJobDetailResponseBodyStructSyncJobDetail && structSyncJobDetail) { DARABONBA_PTR_SET_RVALUE(structSyncJobDetail_, structSyncJobDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the schema synchronization task.
    std::shared_ptr<GetStructSyncJobDetailResponseBodyStructSyncJobDetail> structSyncJobDetail_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
