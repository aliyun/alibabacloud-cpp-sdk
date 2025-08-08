// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCorrectTaskDetail, dataCorrectTaskDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCorrectTaskDetail, dataCorrectTaskDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCorrectTaskDetailResponseBody() = default ;
    GetDataCorrectTaskDetailResponseBody(const GetDataCorrectTaskDetailResponseBody &) = default ;
    GetDataCorrectTaskDetailResponseBody(GetDataCorrectTaskDetailResponseBody &&) = default ;
    GetDataCorrectTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectTaskDetailResponseBody() = default ;
    GetDataCorrectTaskDetailResponseBody& operator=(const GetDataCorrectTaskDetailResponseBody &) = default ;
    GetDataCorrectTaskDetailResponseBody& operator=(GetDataCorrectTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataCorrectTaskDetail_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dataCorrectTaskDetail Field Functions 
    bool hasDataCorrectTaskDetail() const { return this->dataCorrectTaskDetail_ != nullptr;};
    void deleteDataCorrectTaskDetail() { this->dataCorrectTaskDetail_ = nullptr;};
    inline const GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail & dataCorrectTaskDetail() const { DARABONBA_PTR_GET_CONST(dataCorrectTaskDetail_, GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail) };
    inline GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail dataCorrectTaskDetail() { DARABONBA_PTR_GET(dataCorrectTaskDetail_, GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail) };
    inline GetDataCorrectTaskDetailResponseBody& setDataCorrectTaskDetail(const GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail & dataCorrectTaskDetail) { DARABONBA_PTR_SET_VALUE(dataCorrectTaskDetail_, dataCorrectTaskDetail) };
    inline GetDataCorrectTaskDetailResponseBody& setDataCorrectTaskDetail(GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail && dataCorrectTaskDetail) { DARABONBA_PTR_SET_RVALUE(dataCorrectTaskDetail_, dataCorrectTaskDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCorrectTaskDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCorrectTaskDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCorrectTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCorrectTaskDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data change task.
    std::shared_ptr<GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail> dataCorrectTaskDetail_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
