// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradeTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetTaskResult, getTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetTaskResult, getTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeUpgradeTaskInfoResponseBody() = default ;
    GetMcubeUpgradeTaskInfoResponseBody(const GetMcubeUpgradeTaskInfoResponseBody &) = default ;
    GetMcubeUpgradeTaskInfoResponseBody(GetMcubeUpgradeTaskInfoResponseBody &&) = default ;
    GetMcubeUpgradeTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradeTaskInfoResponseBody() = default ;
    GetMcubeUpgradeTaskInfoResponseBody& operator=(const GetMcubeUpgradeTaskInfoResponseBody &) = default ;
    GetMcubeUpgradeTaskInfoResponseBody& operator=(GetMcubeUpgradeTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->getTaskResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // getTaskResult Field Functions 
    bool hasGetTaskResult() const { return this->getTaskResult_ != nullptr;};
    void deleteGetTaskResult() { this->getTaskResult_ = nullptr;};
    inline const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult & getTaskResult() const { DARABONBA_PTR_GET_CONST(getTaskResult_, GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult getTaskResult() { DARABONBA_PTR_GET(getTaskResult_, GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult) };
    inline GetMcubeUpgradeTaskInfoResponseBody& setGetTaskResult(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult & getTaskResult) { DARABONBA_PTR_SET_VALUE(getTaskResult_, getTaskResult) };
    inline GetMcubeUpgradeTaskInfoResponseBody& setGetTaskResult(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult && getTaskResult) { DARABONBA_PTR_SET_RVALUE(getTaskResult_, getTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult> getTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
