// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINEXTENSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINEXTENSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateDomainExtensionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainExtensionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainExtensionId, domainExtensionId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainExtensionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainExtensionId, domainExtensionId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDomainExtensionResponseBody() = default ;
    CreateDomainExtensionResponseBody(const CreateDomainExtensionResponseBody &) = default ;
    CreateDomainExtensionResponseBody(CreateDomainExtensionResponseBody &&) = default ;
    CreateDomainExtensionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainExtensionResponseBody() = default ;
    CreateDomainExtensionResponseBody& operator=(const CreateDomainExtensionResponseBody &) = default ;
    CreateDomainExtensionResponseBody& operator=(CreateDomainExtensionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainExtensionId_ == nullptr
        && return this->listenerPort_ == nullptr && return this->requestId_ == nullptr; };
    // domainExtensionId Field Functions 
    bool hasDomainExtensionId() const { return this->domainExtensionId_ != nullptr;};
    void deleteDomainExtensionId() { this->domainExtensionId_ = nullptr;};
    inline string domainExtensionId() const { DARABONBA_PTR_GET_DEFAULT(domainExtensionId_, "") };
    inline CreateDomainExtensionResponseBody& setDomainExtensionId(string domainExtensionId) { DARABONBA_PTR_SET_VALUE(domainExtensionId_, domainExtensionId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateDomainExtensionResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDomainExtensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the additional domain name.
    std::shared_ptr<string> domainExtensionId_ = nullptr;
    // The frontend port that is used by the SLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
