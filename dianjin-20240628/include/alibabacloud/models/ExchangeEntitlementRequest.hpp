// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXCHANGEENTITLEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXCHANGEENTITLEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class ExchangeEntitlementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExchangeEntitlementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(externalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(keyHash, keyHash_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ExchangeEntitlementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(externalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(keyHash, keyHash_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    ExchangeEntitlementRequest() = default ;
    ExchangeEntitlementRequest(const ExchangeEntitlementRequest &) = default ;
    ExchangeEntitlementRequest(ExchangeEntitlementRequest &&) = default ;
    ExchangeEntitlementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExchangeEntitlementRequest() = default ;
    ExchangeEntitlementRequest& operator=(const ExchangeEntitlementRequest &) = default ;
    ExchangeEntitlementRequest& operator=(ExchangeEntitlementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUserId_ == nullptr
        && this->keyHash_ == nullptr && this->requestId_ == nullptr && this->templateId_ == nullptr && this->userName_ == nullptr; };
    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ExchangeEntitlementRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // keyHash Field Functions 
    bool hasKeyHash() const { return this->keyHash_ != nullptr;};
    void deleteKeyHash() { this->keyHash_ = nullptr;};
    inline string getKeyHash() const { DARABONBA_PTR_GET_DEFAULT(keyHash_, "") };
    inline ExchangeEntitlementRequest& setKeyHash(string keyHash) { DARABONBA_PTR_SET_VALUE(keyHash_, keyHash) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExchangeEntitlementRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ExchangeEntitlementRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ExchangeEntitlementRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    shared_ptr<string> externalUserId_ {};
    shared_ptr<string> keyHash_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
