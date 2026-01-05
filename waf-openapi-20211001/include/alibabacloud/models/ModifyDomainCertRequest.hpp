// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDOMAINCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDOMAINCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDomainCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDomainCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDomainCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
    };
    ModifyDomainCertRequest() = default ;
    ModifyDomainCertRequest(const ModifyDomainCertRequest &) = default ;
    ModifyDomainCertRequest(ModifyDomainCertRequest &&) = default ;
    ModifyDomainCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDomainCertRequest() = default ;
    ModifyDomainCertRequest& operator=(const ModifyDomainCertRequest &) = default ;
    ModifyDomainCertRequest& operator=(ModifyDomainCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->cipherSuite_ == nullptr && this->customCiphers_ == nullptr && this->domain_ == nullptr && this->enableTLSv3_ == nullptr && this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->TLSVersion_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline ModifyDomainCertRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline string getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, "") };
    inline ModifyDomainCertRequest& setCipherSuite(string cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & getCustomCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> getCustomCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline ModifyDomainCertRequest& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline ModifyDomainCertRequest& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyDomainCertRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool getEnableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline ModifyDomainCertRequest& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDomainCertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDomainCertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline ModifyDomainCertRequest& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> certId_ {};
    shared_ptr<string> cipherSuite_ {};
    shared_ptr<vector<string>> customCiphers_ {};
    // This parameter is required.
    shared_ptr<string> domain_ {};
    shared_ptr<bool> enableTLSv3_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> TLSVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
