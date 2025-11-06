// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeWhitelistResponseBodyCreateWhitelistResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateWhitelistResult, createWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateWhitelistResult, createWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeWhitelistResponseBody() = default ;
    CreateMcubeWhitelistResponseBody(const CreateMcubeWhitelistResponseBody &) = default ;
    CreateMcubeWhitelistResponseBody(CreateMcubeWhitelistResponseBody &&) = default ;
    CreateMcubeWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeWhitelistResponseBody() = default ;
    CreateMcubeWhitelistResponseBody& operator=(const CreateMcubeWhitelistResponseBody &) = default ;
    CreateMcubeWhitelistResponseBody& operator=(CreateMcubeWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createWhitelistResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createWhitelistResult Field Functions 
    bool hasCreateWhitelistResult() const { return this->createWhitelistResult_ != nullptr;};
    void deleteCreateWhitelistResult() { this->createWhitelistResult_ = nullptr;};
    inline const CreateMcubeWhitelistResponseBodyCreateWhitelistResult & createWhitelistResult() const { DARABONBA_PTR_GET_CONST(createWhitelistResult_, CreateMcubeWhitelistResponseBodyCreateWhitelistResult) };
    inline CreateMcubeWhitelistResponseBodyCreateWhitelistResult createWhitelistResult() { DARABONBA_PTR_GET(createWhitelistResult_, CreateMcubeWhitelistResponseBodyCreateWhitelistResult) };
    inline CreateMcubeWhitelistResponseBody& setCreateWhitelistResult(const CreateMcubeWhitelistResponseBodyCreateWhitelistResult & createWhitelistResult) { DARABONBA_PTR_SET_VALUE(createWhitelistResult_, createWhitelistResult) };
    inline CreateMcubeWhitelistResponseBody& setCreateWhitelistResult(CreateMcubeWhitelistResponseBodyCreateWhitelistResult && createWhitelistResult) { DARABONBA_PTR_SET_RVALUE(createWhitelistResult_, createWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeWhitelistResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeWhitelistResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeWhitelistResponseBodyCreateWhitelistResult> createWhitelistResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
