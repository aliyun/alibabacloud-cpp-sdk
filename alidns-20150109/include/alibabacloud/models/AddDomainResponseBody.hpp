// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddDomainResponseBodyDnsServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDomainResponseBody() = default ;
    AddDomainResponseBody(const AddDomainResponseBody &) = default ;
    AddDomainResponseBody(AddDomainResponseBody &&) = default ;
    AddDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDomainResponseBody() = default ;
    AddDomainResponseBody& operator=(const AddDomainResponseBody &) = default ;
    AddDomainResponseBody& operator=(AddDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsServers_ == nullptr
        && return this->domainId_ == nullptr && return this->domainName_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->punyCode_ == nullptr
        && return this->requestId_ == nullptr; };
    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const AddDomainResponseBodyDnsServers & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, AddDomainResponseBodyDnsServers) };
    inline AddDomainResponseBodyDnsServers dnsServers() { DARABONBA_PTR_GET(dnsServers_, AddDomainResponseBodyDnsServers) };
    inline AddDomainResponseBody& setDnsServers(const AddDomainResponseBodyDnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline AddDomainResponseBody& setDnsServers(AddDomainResponseBodyDnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline AddDomainResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AddDomainResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddDomainResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // punyCode Field Functions 
    bool hasPunyCode() const { return this->punyCode_ != nullptr;};
    void deletePunyCode() { this->punyCode_ = nullptr;};
    inline string punyCode() const { DARABONBA_PTR_GET_DEFAULT(punyCode_, "") };
    inline AddDomainResponseBody& setPunyCode(string punyCode) { DARABONBA_PTR_SET_VALUE(punyCode_, punyCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Domain Name System (DNS) servers configured for the domain name.
    std::shared_ptr<AddDomainResponseBodyDnsServers> dnsServers_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the domain name group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the domain name group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The Punycode for the domain name. This parameter is returned only for Chinese domain names.
    std::shared_ptr<string> punyCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
