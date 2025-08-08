// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUBECARDWHITELISTCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECUBECARDWHITELISTCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteCubecardWhitelistContentResponseBodyResultContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteCubecardWhitelistContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCubecardWhitelistContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCubecardWhitelistContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    DeleteCubecardWhitelistContentResponseBody() = default ;
    DeleteCubecardWhitelistContentResponseBody(const DeleteCubecardWhitelistContentResponseBody &) = default ;
    DeleteCubecardWhitelistContentResponseBody(DeleteCubecardWhitelistContentResponseBody &&) = default ;
    DeleteCubecardWhitelistContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCubecardWhitelistContentResponseBody() = default ;
    DeleteCubecardWhitelistContentResponseBody& operator=(const DeleteCubecardWhitelistContentResponseBody &) = default ;
    DeleteCubecardWhitelistContentResponseBody& operator=(DeleteCubecardWhitelistContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultCode_ != nullptr && this->resultContent_ != nullptr && this->resultMessage_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCubecardWhitelistContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DeleteCubecardWhitelistContentResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const DeleteCubecardWhitelistContentResponseBodyResultContent & resultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, DeleteCubecardWhitelistContentResponseBodyResultContent) };
    inline DeleteCubecardWhitelistContentResponseBodyResultContent resultContent() { DARABONBA_PTR_GET(resultContent_, DeleteCubecardWhitelistContentResponseBodyResultContent) };
    inline DeleteCubecardWhitelistContentResponseBody& setResultContent(const DeleteCubecardWhitelistContentResponseBodyResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline DeleteCubecardWhitelistContentResponseBody& setResultContent(DeleteCubecardWhitelistContentResponseBodyResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DeleteCubecardWhitelistContentResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<DeleteCubecardWhitelistContentResponseBodyResultContent> resultContent_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
