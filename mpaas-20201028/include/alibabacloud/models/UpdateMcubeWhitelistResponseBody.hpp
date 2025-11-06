// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMcubeWhitelistResponseBodyAddWhitelistResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UpdateMcubeWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddWhitelistResult, addWhitelistResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcubeWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWhitelistResult, addWhitelistResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    UpdateMcubeWhitelistResponseBody() = default ;
    UpdateMcubeWhitelistResponseBody(const UpdateMcubeWhitelistResponseBody &) = default ;
    UpdateMcubeWhitelistResponseBody(UpdateMcubeWhitelistResponseBody &&) = default ;
    UpdateMcubeWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcubeWhitelistResponseBody() = default ;
    UpdateMcubeWhitelistResponseBody& operator=(const UpdateMcubeWhitelistResponseBody &) = default ;
    UpdateMcubeWhitelistResponseBody& operator=(UpdateMcubeWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addWhitelistResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // addWhitelistResult Field Functions 
    bool hasAddWhitelistResult() const { return this->addWhitelistResult_ != nullptr;};
    void deleteAddWhitelistResult() { this->addWhitelistResult_ = nullptr;};
    inline const UpdateMcubeWhitelistResponseBodyAddWhitelistResult & addWhitelistResult() const { DARABONBA_PTR_GET_CONST(addWhitelistResult_, UpdateMcubeWhitelistResponseBodyAddWhitelistResult) };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResult addWhitelistResult() { DARABONBA_PTR_GET(addWhitelistResult_, UpdateMcubeWhitelistResponseBodyAddWhitelistResult) };
    inline UpdateMcubeWhitelistResponseBody& setAddWhitelistResult(const UpdateMcubeWhitelistResponseBodyAddWhitelistResult & addWhitelistResult) { DARABONBA_PTR_SET_VALUE(addWhitelistResult_, addWhitelistResult) };
    inline UpdateMcubeWhitelistResponseBody& setAddWhitelistResult(UpdateMcubeWhitelistResponseBodyAddWhitelistResult && addWhitelistResult) { DARABONBA_PTR_SET_RVALUE(addWhitelistResult_, addWhitelistResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMcubeWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline UpdateMcubeWhitelistResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline UpdateMcubeWhitelistResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<UpdateMcubeWhitelistResponseBodyAddWhitelistResult> addWhitelistResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
