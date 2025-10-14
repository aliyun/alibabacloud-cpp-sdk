// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateAlidingAssistantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlidingAssistantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alidingAssistantId, alidingAssistantId_);
      DARABONBA_PTR_TO_JSON(appCode, appCode_);
      DARABONBA_PTR_TO_JSON(jumpUrl, jumpUrl_);
      DARABONBA_PTR_TO_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlidingAssistantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alidingAssistantId, alidingAssistantId_);
      DARABONBA_PTR_FROM_JSON(appCode, appCode_);
      DARABONBA_PTR_FROM_JSON(jumpUrl, jumpUrl_);
      DARABONBA_PTR_FROM_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    CreateAlidingAssistantResponseBody() = default ;
    CreateAlidingAssistantResponseBody(const CreateAlidingAssistantResponseBody &) = default ;
    CreateAlidingAssistantResponseBody(CreateAlidingAssistantResponseBody &&) = default ;
    CreateAlidingAssistantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlidingAssistantResponseBody() = default ;
    CreateAlidingAssistantResponseBody& operator=(const CreateAlidingAssistantResponseBody &) = default ;
    CreateAlidingAssistantResponseBody& operator=(CreateAlidingAssistantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alidingAssistantId_ == nullptr
        && return this->appCode_ == nullptr && return this->jumpUrl_ == nullptr && return this->processInstanceId_ == nullptr && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr
        && return this->vendorType_ == nullptr; };
    // alidingAssistantId Field Functions 
    bool hasAlidingAssistantId() const { return this->alidingAssistantId_ != nullptr;};
    void deleteAlidingAssistantId() { this->alidingAssistantId_ = nullptr;};
    inline string alidingAssistantId() const { DARABONBA_PTR_GET_DEFAULT(alidingAssistantId_, "") };
    inline CreateAlidingAssistantResponseBody& setAlidingAssistantId(string alidingAssistantId) { DARABONBA_PTR_SET_VALUE(alidingAssistantId_, alidingAssistantId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline CreateAlidingAssistantResponseBody& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // jumpUrl Field Functions 
    bool hasJumpUrl() const { return this->jumpUrl_ != nullptr;};
    void deleteJumpUrl() { this->jumpUrl_ = nullptr;};
    inline string jumpUrl() const { DARABONBA_PTR_GET_DEFAULT(jumpUrl_, "") };
    inline CreateAlidingAssistantResponseBody& setJumpUrl(string jumpUrl) { DARABONBA_PTR_SET_VALUE(jumpUrl_, jumpUrl) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline CreateAlidingAssistantResponseBody& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlidingAssistantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline CreateAlidingAssistantResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline CreateAlidingAssistantResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> alidingAssistantId_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> jumpUrl_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
