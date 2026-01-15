// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHICHINADOMAINDNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHICHINADOMAINDNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OriginalDnsServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginalDnsServers& obj) { 
        DARABONBA_PTR_TO_JSON(DnsServer, dnsServer_);
      };
      friend void from_json(const Darabonba::Json& j, OriginalDnsServers& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsServer, dnsServer_);
      };
      OriginalDnsServers() = default ;
      OriginalDnsServers(const OriginalDnsServers &) = default ;
      OriginalDnsServers(OriginalDnsServers &&) = default ;
      OriginalDnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginalDnsServers() = default ;
      OriginalDnsServers& operator=(const OriginalDnsServers &) = default ;
      OriginalDnsServers& operator=(OriginalDnsServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsServer_ == nullptr; };
      // dnsServer Field Functions 
      bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
      void deleteDnsServer() { this->dnsServer_ = nullptr;};
      inline const vector<string> & getDnsServer() const { DARABONBA_PTR_GET_CONST(dnsServer_, vector<string>) };
      inline vector<string> getDnsServer() { DARABONBA_PTR_GET(dnsServer_, vector<string>) };
      inline OriginalDnsServers& setDnsServer(const vector<string> & dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };
      inline OriginalDnsServers& setDnsServer(vector<string> && dnsServer) { DARABONBA_PTR_SET_RVALUE(dnsServer_, dnsServer) };


    protected:
      shared_ptr<vector<string>> dnsServer_ {};
    };

    class NewDnsServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NewDnsServers& obj) { 
        DARABONBA_PTR_TO_JSON(DnsServer, dnsServer_);
      };
      friend void from_json(const Darabonba::Json& j, NewDnsServers& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsServer, dnsServer_);
      };
      NewDnsServers() = default ;
      NewDnsServers(const NewDnsServers &) = default ;
      NewDnsServers(NewDnsServers &&) = default ;
      NewDnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NewDnsServers() = default ;
      NewDnsServers& operator=(const NewDnsServers &) = default ;
      NewDnsServers& operator=(NewDnsServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsServer_ == nullptr; };
      // dnsServer Field Functions 
      bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
      void deleteDnsServer() { this->dnsServer_ = nullptr;};
      inline const vector<string> & getDnsServer() const { DARABONBA_PTR_GET_CONST(dnsServer_, vector<string>) };
      inline vector<string> getDnsServer() { DARABONBA_PTR_GET(dnsServer_, vector<string>) };
      inline NewDnsServers& setDnsServer(const vector<string> & dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };
      inline NewDnsServers& setDnsServer(vector<string> && dnsServer) { DARABONBA_PTR_SET_RVALUE(dnsServer_, dnsServer) };


    protected:
      shared_ptr<vector<string>> dnsServer_ {};
    };

    virtual bool empty() const override { return this->newDnsServers_ == nullptr
        && this->originalDnsServers_ == nullptr && this->requestId_ == nullptr; };
    // newDnsServers Field Functions 
    bool hasNewDnsServers() const { return this->newDnsServers_ != nullptr;};
    void deleteNewDnsServers() { this->newDnsServers_ = nullptr;};
    inline const ModifyHichinaDomainDNSResponseBody::NewDnsServers & getNewDnsServers() const { DARABONBA_PTR_GET_CONST(newDnsServers_, ModifyHichinaDomainDNSResponseBody::NewDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody::NewDnsServers getNewDnsServers() { DARABONBA_PTR_GET(newDnsServers_, ModifyHichinaDomainDNSResponseBody::NewDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setNewDnsServers(const ModifyHichinaDomainDNSResponseBody::NewDnsServers & newDnsServers) { DARABONBA_PTR_SET_VALUE(newDnsServers_, newDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setNewDnsServers(ModifyHichinaDomainDNSResponseBody::NewDnsServers && newDnsServers) { DARABONBA_PTR_SET_RVALUE(newDnsServers_, newDnsServers) };


    // originalDnsServers Field Functions 
    bool hasOriginalDnsServers() const { return this->originalDnsServers_ != nullptr;};
    void deleteOriginalDnsServers() { this->originalDnsServers_ = nullptr;};
    inline const ModifyHichinaDomainDNSResponseBody::OriginalDnsServers & getOriginalDnsServers() const { DARABONBA_PTR_GET_CONST(originalDnsServers_, ModifyHichinaDomainDNSResponseBody::OriginalDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody::OriginalDnsServers getOriginalDnsServers() { DARABONBA_PTR_GET(originalDnsServers_, ModifyHichinaDomainDNSResponseBody::OriginalDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setOriginalDnsServers(const ModifyHichinaDomainDNSResponseBody::OriginalDnsServers & originalDnsServers) { DARABONBA_PTR_SET_VALUE(originalDnsServers_, originalDnsServers) };
    inline ModifyHichinaDomainDNSResponseBody& setOriginalDnsServers(ModifyHichinaDomainDNSResponseBody::OriginalDnsServers && originalDnsServers) { DARABONBA_PTR_SET_RVALUE(originalDnsServers_, originalDnsServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyHichinaDomainDNSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The DNS server names after modification.
    shared_ptr<ModifyHichinaDomainDNSResponseBody::NewDnsServers> newDnsServers_ {};
    // The DNS server names before modification.
    shared_ptr<ModifyHichinaDomainDNSResponseBody::OriginalDnsServers> originalDnsServers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
