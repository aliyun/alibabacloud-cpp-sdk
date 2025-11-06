// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBENEBULAAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBENEBULAAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteMcubeNebulaAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeNebulaAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteMcubeNebulaAppResult, deleteMcubeNebulaAppResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeNebulaAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteMcubeNebulaAppResult, deleteMcubeNebulaAppResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    DeleteMcubeNebulaAppResponseBody() = default ;
    DeleteMcubeNebulaAppResponseBody(const DeleteMcubeNebulaAppResponseBody &) = default ;
    DeleteMcubeNebulaAppResponseBody(DeleteMcubeNebulaAppResponseBody &&) = default ;
    DeleteMcubeNebulaAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeNebulaAppResponseBody() = default ;
    DeleteMcubeNebulaAppResponseBody& operator=(const DeleteMcubeNebulaAppResponseBody &) = default ;
    DeleteMcubeNebulaAppResponseBody& operator=(DeleteMcubeNebulaAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteMcubeNebulaAppResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // deleteMcubeNebulaAppResult Field Functions 
    bool hasDeleteMcubeNebulaAppResult() const { return this->deleteMcubeNebulaAppResult_ != nullptr;};
    void deleteDeleteMcubeNebulaAppResult() { this->deleteMcubeNebulaAppResult_ = nullptr;};
    inline const DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult & deleteMcubeNebulaAppResult() const { DARABONBA_PTR_GET_CONST(deleteMcubeNebulaAppResult_, DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult) };
    inline DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult deleteMcubeNebulaAppResult() { DARABONBA_PTR_GET(deleteMcubeNebulaAppResult_, DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult) };
    inline DeleteMcubeNebulaAppResponseBody& setDeleteMcubeNebulaAppResult(const DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult & deleteMcubeNebulaAppResult) { DARABONBA_PTR_SET_VALUE(deleteMcubeNebulaAppResult_, deleteMcubeNebulaAppResult) };
    inline DeleteMcubeNebulaAppResponseBody& setDeleteMcubeNebulaAppResult(DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult && deleteMcubeNebulaAppResult) { DARABONBA_PTR_SET_RVALUE(deleteMcubeNebulaAppResult_, deleteMcubeNebulaAppResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMcubeNebulaAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DeleteMcubeNebulaAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DeleteMcubeNebulaAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<DeleteMcubeNebulaAppResponseBodyDeleteMcubeNebulaAppResult> deleteMcubeNebulaAppResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
