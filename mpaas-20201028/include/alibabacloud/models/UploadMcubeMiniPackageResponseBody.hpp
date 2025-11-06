// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadMcubeMiniPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(UploadMiniPackageResult, uploadMiniPackageResult_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(UploadMiniPackageResult, uploadMiniPackageResult_);
    };
    UploadMcubeMiniPackageResponseBody() = default ;
    UploadMcubeMiniPackageResponseBody(const UploadMcubeMiniPackageResponseBody &) = default ;
    UploadMcubeMiniPackageResponseBody(UploadMcubeMiniPackageResponseBody &&) = default ;
    UploadMcubeMiniPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMcubeMiniPackageResponseBody() = default ;
    UploadMcubeMiniPackageResponseBody& operator=(const UploadMcubeMiniPackageResponseBody &) = default ;
    UploadMcubeMiniPackageResponseBody& operator=(UploadMcubeMiniPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr && return this->uploadMiniPackageResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadMcubeMiniPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline UploadMcubeMiniPackageResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline UploadMcubeMiniPackageResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // uploadMiniPackageResult Field Functions 
    bool hasUploadMiniPackageResult() const { return this->uploadMiniPackageResult_ != nullptr;};
    void deleteUploadMiniPackageResult() { this->uploadMiniPackageResult_ = nullptr;};
    inline const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult & uploadMiniPackageResult() const { DARABONBA_PTR_GET_CONST(uploadMiniPackageResult_, UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult) };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult uploadMiniPackageResult() { DARABONBA_PTR_GET(uploadMiniPackageResult_, UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult) };
    inline UploadMcubeMiniPackageResponseBody& setUploadMiniPackageResult(const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult & uploadMiniPackageResult) { DARABONBA_PTR_SET_VALUE(uploadMiniPackageResult_, uploadMiniPackageResult) };
    inline UploadMcubeMiniPackageResponseBody& setUploadMiniPackageResult(UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult && uploadMiniPackageResult) { DARABONBA_PTR_SET_RVALUE(uploadMiniPackageResult_, uploadMiniPackageResult) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
    std::shared_ptr<UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult> uploadMiniPackageResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
