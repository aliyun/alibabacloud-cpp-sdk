// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDomainResponseBody() = default ;
    ModifyDomainResponseBody(const ModifyDomainResponseBody &) = default ;
    ModifyDomainResponseBody(ModifyDomainResponseBody &&) = default ;
    ModifyDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDomainResponseBody() = default ;
    ModifyDomainResponseBody& operator=(const ModifyDomainResponseBody &) = default ;
    ModifyDomainResponseBody& operator=(ModifyDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      };
      friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      };
      DomainInfo() = default ;
      DomainInfo(const DomainInfo &) = default ;
      DomainInfo(DomainInfo &&) = default ;
      DomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainInfo() = default ;
      DomainInfo& operator=(const DomainInfo &) = default ;
      DomainInfo& operator=(DomainInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cname_ == nullptr
        && this->domain_ == nullptr && this->domainId_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline DomainInfo& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline DomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    protected:
      // The CNAME that is assigned by WAF to the domain name.
      shared_ptr<string> cname_ {};
      // The domain name whose access configurations you modified.
      shared_ptr<string> domain_ {};
      // The ID of the domain name.
      shared_ptr<string> domainId_ {};
    };

    virtual bool empty() const override { return this->domainInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const ModifyDomainResponseBody::DomainInfo & getDomainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, ModifyDomainResponseBody::DomainInfo) };
    inline ModifyDomainResponseBody::DomainInfo getDomainInfo() { DARABONBA_PTR_GET(domainInfo_, ModifyDomainResponseBody::DomainInfo) };
    inline ModifyDomainResponseBody& setDomainInfo(const ModifyDomainResponseBody::DomainInfo & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline ModifyDomainResponseBody& setDomainInfo(ModifyDomainResponseBody::DomainInfo && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the domain name.
    shared_ptr<ModifyDomainResponseBody::DomainInfo> domainInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
