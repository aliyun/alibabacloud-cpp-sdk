// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDOMAINPROXYTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDOMAINPROXYTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableDomainProxyTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDomainProxyTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainProxyTokenId, domainProxyTokenId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDomainProxyTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainProxyTokenId, domainProxyTokenId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EnableDomainProxyTokenRequest() = default ;
    EnableDomainProxyTokenRequest(const EnableDomainProxyTokenRequest &) = default ;
    EnableDomainProxyTokenRequest(EnableDomainProxyTokenRequest &&) = default ;
    EnableDomainProxyTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDomainProxyTokenRequest() = default ;
    EnableDomainProxyTokenRequest& operator=(const EnableDomainProxyTokenRequest &) = default ;
    EnableDomainProxyTokenRequest& operator=(EnableDomainProxyTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && return this->domainProxyTokenId_ == nullptr && return this->instanceId_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline EnableDomainProxyTokenRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainProxyTokenId Field Functions 
    bool hasDomainProxyTokenId() const { return this->domainProxyTokenId_ != nullptr;};
    void deleteDomainProxyTokenId() { this->domainProxyTokenId_ = nullptr;};
    inline string domainProxyTokenId() const { DARABONBA_PTR_GET_DEFAULT(domainProxyTokenId_, "") };
    inline EnableDomainProxyTokenRequest& setDomainProxyTokenId(string domainProxyTokenId) { DARABONBA_PTR_SET_VALUE(domainProxyTokenId_, domainProxyTokenId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableDomainProxyTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainId_ = nullptr;
    // The ID of the proxy token of the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainProxyTokenId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
