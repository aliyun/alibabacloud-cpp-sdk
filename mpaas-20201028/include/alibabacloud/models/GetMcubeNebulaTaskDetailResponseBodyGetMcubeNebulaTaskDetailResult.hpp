// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODYGETMCUBENEBULATASKDETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODYGETMCUBENEBULATASKDETAILRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(NebulaTaskDetail, nebulaTaskDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(NebulaTaskDetail, nebulaTaskDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult() = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult(const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult &) = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult(GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult &&) = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult() = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& operator=(const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult &) = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& operator=(GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->nebulaTaskDetail_ != nullptr && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // nebulaTaskDetail Field Functions 
    bool hasNebulaTaskDetail() const { return this->nebulaTaskDetail_ != nullptr;};
    void deleteNebulaTaskDetail() { this->nebulaTaskDetail_ = nullptr;};
    inline const Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail & nebulaTaskDetail() const { DARABONBA_PTR_GET_CONST(nebulaTaskDetail_, Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail) };
    inline Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail nebulaTaskDetail() { DARABONBA_PTR_GET(nebulaTaskDetail_, Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& setNebulaTaskDetail(const Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail & nebulaTaskDetail) { DARABONBA_PTR_SET_VALUE(nebulaTaskDetail_, nebulaTaskDetail) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& setNebulaTaskDetail(Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail && nebulaTaskDetail) { DARABONBA_PTR_SET_RVALUE(nebulaTaskDetail_, nebulaTaskDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail> nebulaTaskDetail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
