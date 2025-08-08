// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBENEBULARESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBENEBULARESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeNebulaResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeNebulaResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetNebulaResourceResult, getNebulaResourceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeNebulaResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetNebulaResourceResult, getNebulaResourceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeNebulaResourceResponseBody() = default ;
    GetMcubeNebulaResourceResponseBody(const GetMcubeNebulaResourceResponseBody &) = default ;
    GetMcubeNebulaResourceResponseBody(GetMcubeNebulaResourceResponseBody &&) = default ;
    GetMcubeNebulaResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeNebulaResourceResponseBody() = default ;
    GetMcubeNebulaResourceResponseBody& operator=(const GetMcubeNebulaResourceResponseBody &) = default ;
    GetMcubeNebulaResourceResponseBody& operator=(GetMcubeNebulaResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->getNebulaResourceResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // getNebulaResourceResult Field Functions 
    bool hasGetNebulaResourceResult() const { return this->getNebulaResourceResult_ != nullptr;};
    void deleteGetNebulaResourceResult() { this->getNebulaResourceResult_ = nullptr;};
    inline const GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult & getNebulaResourceResult() const { DARABONBA_PTR_GET_CONST(getNebulaResourceResult_, GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult) };
    inline GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult getNebulaResourceResult() { DARABONBA_PTR_GET(getNebulaResourceResult_, GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult) };
    inline GetMcubeNebulaResourceResponseBody& setGetNebulaResourceResult(const GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult & getNebulaResourceResult) { DARABONBA_PTR_SET_VALUE(getNebulaResourceResult_, getNebulaResourceResult) };
    inline GetMcubeNebulaResourceResponseBody& setGetNebulaResourceResult(GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult && getNebulaResourceResult) { DARABONBA_PTR_SET_RVALUE(getNebulaResourceResult_, getNebulaResourceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeNebulaResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeNebulaResourceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeNebulaResourceResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<GetMcubeNebulaResourceResponseBodyGetNebulaResourceResult> getNebulaResourceResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
