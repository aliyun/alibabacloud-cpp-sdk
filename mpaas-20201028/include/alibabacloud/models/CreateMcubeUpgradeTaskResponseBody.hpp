// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeUpgradeTaskResponseBodyCreateTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeUpgradeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeUpgradeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTaskResult, createTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeUpgradeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTaskResult, createTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeUpgradeTaskResponseBody() = default ;
    CreateMcubeUpgradeTaskResponseBody(const CreateMcubeUpgradeTaskResponseBody &) = default ;
    CreateMcubeUpgradeTaskResponseBody(CreateMcubeUpgradeTaskResponseBody &&) = default ;
    CreateMcubeUpgradeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeUpgradeTaskResponseBody() = default ;
    CreateMcubeUpgradeTaskResponseBody& operator=(const CreateMcubeUpgradeTaskResponseBody &) = default ;
    CreateMcubeUpgradeTaskResponseBody& operator=(CreateMcubeUpgradeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTaskResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createTaskResult Field Functions 
    bool hasCreateTaskResult() const { return this->createTaskResult_ != nullptr;};
    void deleteCreateTaskResult() { this->createTaskResult_ = nullptr;};
    inline const CreateMcubeUpgradeTaskResponseBodyCreateTaskResult & createTaskResult() const { DARABONBA_PTR_GET_CONST(createTaskResult_, CreateMcubeUpgradeTaskResponseBodyCreateTaskResult) };
    inline CreateMcubeUpgradeTaskResponseBodyCreateTaskResult createTaskResult() { DARABONBA_PTR_GET(createTaskResult_, CreateMcubeUpgradeTaskResponseBodyCreateTaskResult) };
    inline CreateMcubeUpgradeTaskResponseBody& setCreateTaskResult(const CreateMcubeUpgradeTaskResponseBodyCreateTaskResult & createTaskResult) { DARABONBA_PTR_SET_VALUE(createTaskResult_, createTaskResult) };
    inline CreateMcubeUpgradeTaskResponseBody& setCreateTaskResult(CreateMcubeUpgradeTaskResponseBodyCreateTaskResult && createTaskResult) { DARABONBA_PTR_SET_RVALUE(createTaskResult_, createTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeUpgradeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeUpgradeTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeUpgradeTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeUpgradeTaskResponseBodyCreateTaskResult> createTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
