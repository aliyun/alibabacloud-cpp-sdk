// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBEUPGRADERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBEUPGRADERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMcubeUpgradeResourceResponseBodyDeleteResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteMcubeUpgradeResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeUpgradeResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeUpgradeResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    DeleteMcubeUpgradeResourceResponseBody() = default ;
    DeleteMcubeUpgradeResourceResponseBody(const DeleteMcubeUpgradeResourceResponseBody &) = default ;
    DeleteMcubeUpgradeResourceResponseBody(DeleteMcubeUpgradeResourceResponseBody &&) = default ;
    DeleteMcubeUpgradeResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeUpgradeResourceResponseBody() = default ;
    DeleteMcubeUpgradeResourceResponseBody& operator=(const DeleteMcubeUpgradeResourceResponseBody &) = default ;
    DeleteMcubeUpgradeResourceResponseBody& operator=(DeleteMcubeUpgradeResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // deleteResult Field Functions 
    bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
    void deleteDeleteResult() { this->deleteResult_ = nullptr;};
    inline const DeleteMcubeUpgradeResourceResponseBodyDeleteResult & deleteResult() const { DARABONBA_PTR_GET_CONST(deleteResult_, DeleteMcubeUpgradeResourceResponseBodyDeleteResult) };
    inline DeleteMcubeUpgradeResourceResponseBodyDeleteResult deleteResult() { DARABONBA_PTR_GET(deleteResult_, DeleteMcubeUpgradeResourceResponseBodyDeleteResult) };
    inline DeleteMcubeUpgradeResourceResponseBody& setDeleteResult(const DeleteMcubeUpgradeResourceResponseBodyDeleteResult & deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };
    inline DeleteMcubeUpgradeResourceResponseBody& setDeleteResult(DeleteMcubeUpgradeResourceResponseBodyDeleteResult && deleteResult) { DARABONBA_PTR_SET_RVALUE(deleteResult_, deleteResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMcubeUpgradeResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DeleteMcubeUpgradeResourceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DeleteMcubeUpgradeResourceResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<DeleteMcubeUpgradeResourceResponseBodyDeleteResult> deleteResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
