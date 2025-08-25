// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBEMINIAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBEMINIAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMcubeMiniAppResponseBodyDeleteMiniResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class DeleteMcubeMiniAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeMiniAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteMiniResult, deleteMiniResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeMiniAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteMiniResult, deleteMiniResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    DeleteMcubeMiniAppResponseBody() = default ;
    DeleteMcubeMiniAppResponseBody(const DeleteMcubeMiniAppResponseBody &) = default ;
    DeleteMcubeMiniAppResponseBody(DeleteMcubeMiniAppResponseBody &&) = default ;
    DeleteMcubeMiniAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeMiniAppResponseBody() = default ;
    DeleteMcubeMiniAppResponseBody& operator=(const DeleteMcubeMiniAppResponseBody &) = default ;
    DeleteMcubeMiniAppResponseBody& operator=(DeleteMcubeMiniAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteMiniResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // deleteMiniResult Field Functions 
    bool hasDeleteMiniResult() const { return this->deleteMiniResult_ != nullptr;};
    void deleteDeleteMiniResult() { this->deleteMiniResult_ = nullptr;};
    inline const DeleteMcubeMiniAppResponseBodyDeleteMiniResult & deleteMiniResult() const { DARABONBA_PTR_GET_CONST(deleteMiniResult_, DeleteMcubeMiniAppResponseBodyDeleteMiniResult) };
    inline DeleteMcubeMiniAppResponseBodyDeleteMiniResult deleteMiniResult() { DARABONBA_PTR_GET(deleteMiniResult_, DeleteMcubeMiniAppResponseBodyDeleteMiniResult) };
    inline DeleteMcubeMiniAppResponseBody& setDeleteMiniResult(const DeleteMcubeMiniAppResponseBodyDeleteMiniResult & deleteMiniResult) { DARABONBA_PTR_SET_VALUE(deleteMiniResult_, deleteMiniResult) };
    inline DeleteMcubeMiniAppResponseBody& setDeleteMiniResult(DeleteMcubeMiniAppResponseBodyDeleteMiniResult && deleteMiniResult) { DARABONBA_PTR_SET_RVALUE(deleteMiniResult_, deleteMiniResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMcubeMiniAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DeleteMcubeMiniAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DeleteMcubeMiniAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<DeleteMcubeMiniAppResponseBodyDeleteMiniResult> deleteMiniResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
