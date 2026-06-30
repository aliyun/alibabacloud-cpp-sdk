// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEADDITIONALCERTIFICATESWITHLISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEADDITIONALCERTIFICATESWITHLISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class AssociateAdditionalCertificatesWithListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAdditionalCertificatesWithListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAdditionalCertificatesWithListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateAdditionalCertificatesWithListenerRequest() = default ;
    AssociateAdditionalCertificatesWithListenerRequest(const AssociateAdditionalCertificatesWithListenerRequest &) = default ;
    AssociateAdditionalCertificatesWithListenerRequest(AssociateAdditionalCertificatesWithListenerRequest &&) = default ;
    AssociateAdditionalCertificatesWithListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAdditionalCertificatesWithListenerRequest() = default ;
    AssociateAdditionalCertificatesWithListenerRequest& operator=(const AssociateAdditionalCertificatesWithListenerRequest &) = default ;
    AssociateAdditionalCertificatesWithListenerRequest& operator=(AssociateAdditionalCertificatesWithListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      Certificates() = default ;
      Certificates(const Certificates &) = default ;
      Certificates(Certificates &&) = default ;
      Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificates() = default ;
      Certificates& operator=(const Certificates &) = default ;
      Certificates& operator=(Certificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->id_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Certificates& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Certificates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The domain name for which the certificate takes effect. Each domain name can be bound to only one additional certificate.
      // 
      // You can specify up to 10 domain names at a time.
      // 
      // This parameter is required.
      shared_ptr<string> domain_ {};
      // The certificate ID. Only server certificates are supported.
      // 
      // You can specify up to 10 certificate IDs at a time.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->certificates_ == nullptr && this->clientToken_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates>) };
    inline vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates>) };
    inline AssociateAdditionalCertificatesWithListenerRequest& setCertificates(const vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline AssociateAdditionalCertificatesWithListenerRequest& setCertificates(vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID of the Alibaba Cloud Global Accelerator (GA).
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The list of additional certificates.
    // 
    // You can specify up to 10 certificates at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<AssociateAdditionalCertificatesWithListenerRequest::Certificates>> certificates_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to ensure uniqueness across different requests. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The instance ID of the listener. Only HTTPS listeners are supported.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The region ID of the Alibaba Cloud Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
