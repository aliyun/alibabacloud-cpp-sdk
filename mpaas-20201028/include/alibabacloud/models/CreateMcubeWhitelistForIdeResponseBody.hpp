// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTFORIDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTFORIDERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeWhitelistForIdeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeWhitelistForIdeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateWhitelistForIdeResult, createWhitelistForIdeResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeWhitelistForIdeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateWhitelistForIdeResult, createWhitelistForIdeResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeWhitelistForIdeResponseBody() = default ;
    CreateMcubeWhitelistForIdeResponseBody(const CreateMcubeWhitelistForIdeResponseBody &) = default ;
    CreateMcubeWhitelistForIdeResponseBody(CreateMcubeWhitelistForIdeResponseBody &&) = default ;
    CreateMcubeWhitelistForIdeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeWhitelistForIdeResponseBody() = default ;
    CreateMcubeWhitelistForIdeResponseBody& operator=(const CreateMcubeWhitelistForIdeResponseBody &) = default ;
    CreateMcubeWhitelistForIdeResponseBody& operator=(CreateMcubeWhitelistForIdeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createWhitelistForIdeResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createWhitelistForIdeResult Field Functions 
    bool hasCreateWhitelistForIdeResult() const { return this->createWhitelistForIdeResult_ != nullptr;};
    void deleteCreateWhitelistForIdeResult() { this->createWhitelistForIdeResult_ = nullptr;};
    inline const CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult & createWhitelistForIdeResult() const { DARABONBA_PTR_GET_CONST(createWhitelistForIdeResult_, CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult) };
    inline CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult createWhitelistForIdeResult() { DARABONBA_PTR_GET(createWhitelistForIdeResult_, CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult) };
    inline CreateMcubeWhitelistForIdeResponseBody& setCreateWhitelistForIdeResult(const CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult & createWhitelistForIdeResult) { DARABONBA_PTR_SET_VALUE(createWhitelistForIdeResult_, createWhitelistForIdeResult) };
    inline CreateMcubeWhitelistForIdeResponseBody& setCreateWhitelistForIdeResult(CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult && createWhitelistForIdeResult) { DARABONBA_PTR_SET_RVALUE(createWhitelistForIdeResult_, createWhitelistForIdeResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeWhitelistForIdeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeWhitelistForIdeResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeWhitelistForIdeResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult> createWhitelistForIdeResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
