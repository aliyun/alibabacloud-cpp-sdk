// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEEMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEEMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ValidateEmailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateEmailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainPart, domainPart_);
      DARABONBA_PTR_TO_JSON(IsFreeMail, isFreeMail_);
      DARABONBA_PTR_TO_JSON(LocalPart, localPart_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateEmailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainPart, domainPart_);
      DARABONBA_PTR_FROM_JSON(IsFreeMail, isFreeMail_);
      DARABONBA_PTR_FROM_JSON(LocalPart, localPart_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
    };
    ValidateEmailResponseBody() = default ;
    ValidateEmailResponseBody(const ValidateEmailResponseBody &) = default ;
    ValidateEmailResponseBody(ValidateEmailResponseBody &&) = default ;
    ValidateEmailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateEmailResponseBody() = default ;
    ValidateEmailResponseBody& operator=(const ValidateEmailResponseBody &) = default ;
    ValidateEmailResponseBody& operator=(ValidateEmailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainPart_ == nullptr
        && this->isFreeMail_ == nullptr && this->localPart_ == nullptr && this->provider_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->subStatus_ == nullptr; };
    // domainPart Field Functions 
    bool hasDomainPart() const { return this->domainPart_ != nullptr;};
    void deleteDomainPart() { this->domainPart_ = nullptr;};
    inline string getDomainPart() const { DARABONBA_PTR_GET_DEFAULT(domainPart_, "") };
    inline ValidateEmailResponseBody& setDomainPart(string domainPart) { DARABONBA_PTR_SET_VALUE(domainPart_, domainPart) };


    // isFreeMail Field Functions 
    bool hasIsFreeMail() const { return this->isFreeMail_ != nullptr;};
    void deleteIsFreeMail() { this->isFreeMail_ = nullptr;};
    inline bool getIsFreeMail() const { DARABONBA_PTR_GET_DEFAULT(isFreeMail_, false) };
    inline ValidateEmailResponseBody& setIsFreeMail(bool isFreeMail) { DARABONBA_PTR_SET_VALUE(isFreeMail_, isFreeMail) };


    // localPart Field Functions 
    bool hasLocalPart() const { return this->localPart_ != nullptr;};
    void deleteLocalPart() { this->localPart_ = nullptr;};
    inline string getLocalPart() const { DARABONBA_PTR_GET_DEFAULT(localPart_, "") };
    inline ValidateEmailResponseBody& setLocalPart(string localPart) { DARABONBA_PTR_SET_VALUE(localPart_, localPart) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ValidateEmailResponseBody& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateEmailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ValidateEmailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline ValidateEmailResponseBody& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


  protected:
    shared_ptr<string> domainPart_ {};
    shared_ptr<bool> isFreeMail_ {};
    shared_ptr<string> localPart_ {};
    shared_ptr<string> provider_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
    // This parameter is required.
    shared_ptr<string> subStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
