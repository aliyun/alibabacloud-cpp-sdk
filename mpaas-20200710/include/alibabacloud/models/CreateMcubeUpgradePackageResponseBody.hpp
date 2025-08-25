// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class CreateMcubeUpgradePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeUpgradePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateUpgradePackageResult, createUpgradePackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeUpgradePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateUpgradePackageResult, createUpgradePackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeUpgradePackageResponseBody() = default ;
    CreateMcubeUpgradePackageResponseBody(const CreateMcubeUpgradePackageResponseBody &) = default ;
    CreateMcubeUpgradePackageResponseBody(CreateMcubeUpgradePackageResponseBody &&) = default ;
    CreateMcubeUpgradePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeUpgradePackageResponseBody() = default ;
    CreateMcubeUpgradePackageResponseBody& operator=(const CreateMcubeUpgradePackageResponseBody &) = default ;
    CreateMcubeUpgradePackageResponseBody& operator=(CreateMcubeUpgradePackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createUpgradePackageResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // createUpgradePackageResult Field Functions 
    bool hasCreateUpgradePackageResult() const { return this->createUpgradePackageResult_ != nullptr;};
    void deleteCreateUpgradePackageResult() { this->createUpgradePackageResult_ = nullptr;};
    inline const CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult & createUpgradePackageResult() const { DARABONBA_PTR_GET_CONST(createUpgradePackageResult_, CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult) };
    inline CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult createUpgradePackageResult() { DARABONBA_PTR_GET(createUpgradePackageResult_, CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult) };
    inline CreateMcubeUpgradePackageResponseBody& setCreateUpgradePackageResult(const CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult & createUpgradePackageResult) { DARABONBA_PTR_SET_VALUE(createUpgradePackageResult_, createUpgradePackageResult) };
    inline CreateMcubeUpgradePackageResponseBody& setCreateUpgradePackageResult(CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult && createUpgradePackageResult) { DARABONBA_PTR_SET_RVALUE(createUpgradePackageResult_, createUpgradePackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeUpgradePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeUpgradePackageResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeUpgradePackageResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeUpgradePackageResponseBodyCreateUpgradePackageResult> createUpgradePackageResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
