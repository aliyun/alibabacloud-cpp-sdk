// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCECUSTOMIZEDDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCECUSTOMIZEDDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateInstanceCustomizedDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceCustomizedDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertRegionId, certRegionId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceCustomizedDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertRegionId, certRegionId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    UpdateInstanceCustomizedDomainRequest() = default ;
    UpdateInstanceCustomizedDomainRequest(const UpdateInstanceCustomizedDomainRequest &) = default ;
    UpdateInstanceCustomizedDomainRequest(UpdateInstanceCustomizedDomainRequest &&) = default ;
    UpdateInstanceCustomizedDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceCustomizedDomainRequest() = default ;
    UpdateInstanceCustomizedDomainRequest& operator=(const UpdateInstanceCustomizedDomainRequest &) = default ;
    UpdateInstanceCustomizedDomainRequest& operator=(UpdateInstanceCustomizedDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->certRegionId_ == nullptr && this->domain_ == nullptr && this->instanceId_ == nullptr && this->moduleName_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline UpdateInstanceCustomizedDomainRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certRegionId Field Functions 
    bool hasCertRegionId() const { return this->certRegionId_ != nullptr;};
    void deleteCertRegionId() { this->certRegionId_ = nullptr;};
    inline string getCertRegionId() const { DARABONBA_PTR_GET_DEFAULT(certRegionId_, "") };
    inline UpdateInstanceCustomizedDomainRequest& setCertRegionId(string certRegionId) { DARABONBA_PTR_SET_VALUE(certRegionId_, certRegionId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateInstanceCustomizedDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceCustomizedDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline UpdateInstanceCustomizedDomainRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // This parameter is required.
    shared_ptr<string> certId_ {};
    shared_ptr<string> certRegionId_ {};
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> moduleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
