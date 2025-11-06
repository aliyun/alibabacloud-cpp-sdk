// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXISTMCUBERSAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXISTMCUBERSAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExistMcubeRsaKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExistMcubeRsaKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRsaKeyResult, checkRsaKeyResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ExistMcubeRsaKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRsaKeyResult, checkRsaKeyResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ExistMcubeRsaKeyResponseBody() = default ;
    ExistMcubeRsaKeyResponseBody(const ExistMcubeRsaKeyResponseBody &) = default ;
    ExistMcubeRsaKeyResponseBody(ExistMcubeRsaKeyResponseBody &&) = default ;
    ExistMcubeRsaKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExistMcubeRsaKeyResponseBody() = default ;
    ExistMcubeRsaKeyResponseBody& operator=(const ExistMcubeRsaKeyResponseBody &) = default ;
    ExistMcubeRsaKeyResponseBody& operator=(ExistMcubeRsaKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRsaKeyResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // checkRsaKeyResult Field Functions 
    bool hasCheckRsaKeyResult() const { return this->checkRsaKeyResult_ != nullptr;};
    void deleteCheckRsaKeyResult() { this->checkRsaKeyResult_ = nullptr;};
    inline const ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult & checkRsaKeyResult() const { DARABONBA_PTR_GET_CONST(checkRsaKeyResult_, ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult) };
    inline ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult checkRsaKeyResult() { DARABONBA_PTR_GET(checkRsaKeyResult_, ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult) };
    inline ExistMcubeRsaKeyResponseBody& setCheckRsaKeyResult(const ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult & checkRsaKeyResult) { DARABONBA_PTR_SET_VALUE(checkRsaKeyResult_, checkRsaKeyResult) };
    inline ExistMcubeRsaKeyResponseBody& setCheckRsaKeyResult(ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult && checkRsaKeyResult) { DARABONBA_PTR_SET_RVALUE(checkRsaKeyResult_, checkRsaKeyResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExistMcubeRsaKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ExistMcubeRsaKeyResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ExistMcubeRsaKeyResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ExistMcubeRsaKeyResponseBodyCheckRsaKeyResult> checkRsaKeyResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
