// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeNebulaTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeNebulaTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetMcubeNebulaTaskDetailResult, getMcubeNebulaTaskDetailResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeNebulaTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetMcubeNebulaTaskDetailResult, getMcubeNebulaTaskDetailResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeNebulaTaskDetailResponseBody() = default ;
    GetMcubeNebulaTaskDetailResponseBody(const GetMcubeNebulaTaskDetailResponseBody &) = default ;
    GetMcubeNebulaTaskDetailResponseBody(GetMcubeNebulaTaskDetailResponseBody &&) = default ;
    GetMcubeNebulaTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeNebulaTaskDetailResponseBody() = default ;
    GetMcubeNebulaTaskDetailResponseBody& operator=(const GetMcubeNebulaTaskDetailResponseBody &) = default ;
    GetMcubeNebulaTaskDetailResponseBody& operator=(GetMcubeNebulaTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->getMcubeNebulaTaskDetailResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // getMcubeNebulaTaskDetailResult Field Functions 
    bool hasGetMcubeNebulaTaskDetailResult() const { return this->getMcubeNebulaTaskDetailResult_ != nullptr;};
    void deleteGetMcubeNebulaTaskDetailResult() { this->getMcubeNebulaTaskDetailResult_ = nullptr;};
    inline const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult & getMcubeNebulaTaskDetailResult() const { DARABONBA_PTR_GET_CONST(getMcubeNebulaTaskDetailResult_, GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult getMcubeNebulaTaskDetailResult() { DARABONBA_PTR_GET(getMcubeNebulaTaskDetailResult_, GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult) };
    inline GetMcubeNebulaTaskDetailResponseBody& setGetMcubeNebulaTaskDetailResult(const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult & getMcubeNebulaTaskDetailResult) { DARABONBA_PTR_SET_VALUE(getMcubeNebulaTaskDetailResult_, getMcubeNebulaTaskDetailResult) };
    inline GetMcubeNebulaTaskDetailResponseBody& setGetMcubeNebulaTaskDetailResult(GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult && getMcubeNebulaTaskDetailResult) { DARABONBA_PTR_SET_RVALUE(getMcubeNebulaTaskDetailResult_, getMcubeNebulaTaskDetailResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeNebulaTaskDetailResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeNebulaTaskDetailResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResult> getMcubeNebulaTaskDetailResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
