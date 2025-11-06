// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEFILETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEFILETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeFileTokenResponseBodyGetFileTokenResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeFileTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeFileTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetFileTokenResult, getFileTokenResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeFileTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetFileTokenResult, getFileTokenResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeFileTokenResponseBody() = default ;
    GetMcubeFileTokenResponseBody(const GetMcubeFileTokenResponseBody &) = default ;
    GetMcubeFileTokenResponseBody(GetMcubeFileTokenResponseBody &&) = default ;
    GetMcubeFileTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeFileTokenResponseBody() = default ;
    GetMcubeFileTokenResponseBody& operator=(const GetMcubeFileTokenResponseBody &) = default ;
    GetMcubeFileTokenResponseBody& operator=(GetMcubeFileTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->getFileTokenResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // getFileTokenResult Field Functions 
    bool hasGetFileTokenResult() const { return this->getFileTokenResult_ != nullptr;};
    void deleteGetFileTokenResult() { this->getFileTokenResult_ = nullptr;};
    inline const GetMcubeFileTokenResponseBodyGetFileTokenResult & getFileTokenResult() const { DARABONBA_PTR_GET_CONST(getFileTokenResult_, GetMcubeFileTokenResponseBodyGetFileTokenResult) };
    inline GetMcubeFileTokenResponseBodyGetFileTokenResult getFileTokenResult() { DARABONBA_PTR_GET(getFileTokenResult_, GetMcubeFileTokenResponseBodyGetFileTokenResult) };
    inline GetMcubeFileTokenResponseBody& setGetFileTokenResult(const GetMcubeFileTokenResponseBodyGetFileTokenResult & getFileTokenResult) { DARABONBA_PTR_SET_VALUE(getFileTokenResult_, getFileTokenResult) };
    inline GetMcubeFileTokenResponseBody& setGetFileTokenResult(GetMcubeFileTokenResponseBodyGetFileTokenResult && getFileTokenResult) { DARABONBA_PTR_SET_RVALUE(getFileTokenResult_, getFileTokenResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeFileTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeFileTokenResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeFileTokenResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<GetMcubeFileTokenResponseBodyGetFileTokenResult> getFileTokenResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
