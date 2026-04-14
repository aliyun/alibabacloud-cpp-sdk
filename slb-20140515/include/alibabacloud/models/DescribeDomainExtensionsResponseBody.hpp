// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeDomainExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainExtensions, domainExtensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainExtensions, domainExtensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainExtensionsResponseBody() = default ;
    DescribeDomainExtensionsResponseBody(const DescribeDomainExtensionsResponseBody &) = default ;
    DescribeDomainExtensionsResponseBody(DescribeDomainExtensionsResponseBody &&) = default ;
    DescribeDomainExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainExtensionsResponseBody() = default ;
    DescribeDomainExtensionsResponseBody& operator=(const DescribeDomainExtensionsResponseBody &) = default ;
    DescribeDomainExtensionsResponseBody& operator=(DescribeDomainExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainExtensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainExtensions& obj) { 
        DARABONBA_PTR_TO_JSON(DomainExtension, domainExtension_);
      };
      friend void from_json(const Darabonba::Json& j, DomainExtensions& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainExtension, domainExtension_);
      };
      DomainExtensions() = default ;
      DomainExtensions(const DomainExtensions &) = default ;
      DomainExtensions(DomainExtensions &&) = default ;
      DomainExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainExtensions() = default ;
      DomainExtensions& operator=(const DomainExtensions &) = default ;
      DomainExtensions& operator=(DomainExtensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainExtension : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainExtension& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(DomainExtensionId, domainExtensionId_);
          DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainExtension& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(DomainExtensionId, domainExtensionId_);
          DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
        };
        DomainExtension() = default ;
        DomainExtension(const DomainExtension &) = default ;
        DomainExtension(DomainExtension &&) = default ;
        DomainExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainExtension() = default ;
        DomainExtension& operator=(const DomainExtension &) = default ;
        DomainExtension& operator=(DomainExtension &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->domainExtensionId_ == nullptr && this->serverCertificateId_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DomainExtension& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // domainExtensionId Field Functions 
        bool hasDomainExtensionId() const { return this->domainExtensionId_ != nullptr;};
        void deleteDomainExtensionId() { this->domainExtensionId_ = nullptr;};
        inline string getDomainExtensionId() const { DARABONBA_PTR_GET_DEFAULT(domainExtensionId_, "") };
        inline DomainExtension& setDomainExtensionId(string domainExtensionId) { DARABONBA_PTR_SET_VALUE(domainExtensionId_, domainExtensionId) };


        // serverCertificateId Field Functions 
        bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
        void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
        inline string getServerCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
        inline DomainExtension& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


      protected:
        shared_ptr<string> domain_ {};
        shared_ptr<string> domainExtensionId_ {};
        shared_ptr<string> serverCertificateId_ {};
      };

      virtual bool empty() const override { return this->domainExtension_ == nullptr; };
      // domainExtension Field Functions 
      bool hasDomainExtension() const { return this->domainExtension_ != nullptr;};
      void deleteDomainExtension() { this->domainExtension_ = nullptr;};
      inline const vector<DomainExtensions::DomainExtension> & getDomainExtension() const { DARABONBA_PTR_GET_CONST(domainExtension_, vector<DomainExtensions::DomainExtension>) };
      inline vector<DomainExtensions::DomainExtension> getDomainExtension() { DARABONBA_PTR_GET(domainExtension_, vector<DomainExtensions::DomainExtension>) };
      inline DomainExtensions& setDomainExtension(const vector<DomainExtensions::DomainExtension> & domainExtension) { DARABONBA_PTR_SET_VALUE(domainExtension_, domainExtension) };
      inline DomainExtensions& setDomainExtension(vector<DomainExtensions::DomainExtension> && domainExtension) { DARABONBA_PTR_SET_RVALUE(domainExtension_, domainExtension) };


    protected:
      shared_ptr<vector<DomainExtensions::DomainExtension>> domainExtension_ {};
    };

    virtual bool empty() const override { return this->domainExtensions_ == nullptr
        && this->requestId_ == nullptr; };
    // domainExtensions Field Functions 
    bool hasDomainExtensions() const { return this->domainExtensions_ != nullptr;};
    void deleteDomainExtensions() { this->domainExtensions_ = nullptr;};
    inline const DescribeDomainExtensionsResponseBody::DomainExtensions & getDomainExtensions() const { DARABONBA_PTR_GET_CONST(domainExtensions_, DescribeDomainExtensionsResponseBody::DomainExtensions) };
    inline DescribeDomainExtensionsResponseBody::DomainExtensions getDomainExtensions() { DARABONBA_PTR_GET(domainExtensions_, DescribeDomainExtensionsResponseBody::DomainExtensions) };
    inline DescribeDomainExtensionsResponseBody& setDomainExtensions(const DescribeDomainExtensionsResponseBody::DomainExtensions & domainExtensions) { DARABONBA_PTR_SET_VALUE(domainExtensions_, domainExtensions) };
    inline DescribeDomainExtensionsResponseBody& setDomainExtensions(DescribeDomainExtensionsResponseBody::DomainExtensions && domainExtensions) { DARABONBA_PTR_SET_RVALUE(domainExtensions_, domainExtensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDomainExtensionsResponseBody::DomainExtensions> domainExtensions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
