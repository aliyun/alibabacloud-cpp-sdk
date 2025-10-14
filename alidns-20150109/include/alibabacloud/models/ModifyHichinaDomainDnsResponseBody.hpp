// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHICHINADOMAINDNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHICHINADOMAINDNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyHichinaDomainDNSResponseBodyNewDnsServers.hpp>
#include <alibabacloud/models/ModifyHichinaDomainDNSResponseBodyOriginalDnsServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ModifyHichinaDomainDNSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHichinaDomainDNSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NewDnsServers, newDnsServers_);
      DARABONBA_PTR_TO_JSON(OriginalDnsServers, originalDnsServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHichinaDomainDNSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NewDnsServers, newDnsServers_);
      DARABONBA_PTR_FROM_JSON(OriginalDnsServers, originalDnsServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyHichinaDomainDNSResponseBody() = default ;
    ModifyHichinaDomainDNSResponseBody(const ModifyHichinaDomainDNSResponseBody &) = default ;
    ModifyHichinaDomainDNSResponseBody(ModifyHichinaDomainDNSResponseBody &&) = default ;
    ModifyHichinaDomainDNSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHichinaDomainDNSResponseBody() = default ;
    ModifyHichinaDomainDNSResponseBody& operator=(const ModifyHichinaDomainDNSResponseBody &) = default ;
    ModifyHichinaDomainDNSResponseBody& operator=(ModifyHichinaDomainDNSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newDnsServers_ == nullptr
        && return this->originalDnsServers_ == nullptr && return this->requestId_ == nullptr; };
    // newDnsServers Field Functions 
    bool hasNewDnsServers() const { return this->newDnsServers_ != nullptr;};
    void deleteNewDnsServers() { this->newDnsServers_ = nullptr;};
    inline const ModifyHichinaDomainDNSResponseBodyNewDnsServers & newDnsServers() const { DARABONBA_PTR_GET_CONST(newDnsServers_, ModifyHichinaDomainDNSResponseBodyNewDnsServers) };
    inline ModifyHichinaDomainDNSResponseBodyNewDnsServers newDnsServers() { DARABONBA_PTR_GET(newDnsServers_, ModifyHichinaDomainDNSResponseBodyNewDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setNewDnsServers(const ModifyHichinaDomainDNSResponseBodyNewDnsServers & newDnsServers) { DARABONBA_PTR_SET_VALUE(newDnsServers_, newDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setNewDnsServers(ModifyHichinaDomainDNSResponseBodyNewDnsServers && newDnsServers) { DARABONBA_PTR_SET_RVALUE(newDnsServers_, newDnsServers) };


    // originalDnsServers Field Functions 
    bool hasOriginalDnsServers() const { return this->originalDnsServers_ != nullptr;};
    void deleteOriginalDnsServers() { this->originalDnsServers_ = nullptr;};
    inline const ModifyHichinaDomainDNSResponseBodyOriginalDnsServers & originalDnsServers() const { DARABONBA_PTR_GET_CONST(originalDnsServers_, ModifyHichinaDomainDNSResponseBodyOriginalDnsServers) };
    inline ModifyHichinaDomainDNSResponseBodyOriginalDnsServers originalDnsServers() { DARABONBA_PTR_GET(originalDnsServers_, ModifyHichinaDomainDNSResponseBodyOriginalDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setOriginalDnsServers(const ModifyHichinaDomainDNSResponseBodyOriginalDnsServers & originalDnsServers) { DARABONBA_PTR_SET_VALUE(originalDnsServers_, originalDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setOriginalDnsServers(ModifyHichinaDomainDNSResponseBodyOriginalDnsServers && originalDnsServers) { DARABONBA_PTR_SET_RVALUE(originalDnsServers_, originalDnsServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyHichinaDomainDNSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The DNS server names after modification.
    std::shared_ptr<ModifyHichinaDomainDNSResponseBodyNewDnsServers> newDnsServers_ = nullptr;
    // The DNS server names before modification.
    std::shared_ptr<ModifyHichinaDomainDNSResponseBodyOriginalDnsServers> originalDnsServers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
