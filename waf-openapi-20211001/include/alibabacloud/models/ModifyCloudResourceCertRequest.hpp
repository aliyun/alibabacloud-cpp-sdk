// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTREQUEST_HPP_
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
  class ModifyCloudResourceCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
    };
    ModifyCloudResourceCertRequest() = default ;
    ModifyCloudResourceCertRequest(const ModifyCloudResourceCertRequest &) = default ;
    ModifyCloudResourceCertRequest(ModifyCloudResourceCertRequest &&) = default ;
    ModifyCloudResourceCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceCertRequest() = default ;
    ModifyCloudResourceCertRequest& operator=(const ModifyCloudResourceCertRequest &) = default ;
    ModifyCloudResourceCertRequest& operator=(ModifyCloudResourceCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
        DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      };
      friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
        DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
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
      virtual bool empty() const override { return this->appliedType_ == nullptr
        && this->certificateId_ == nullptr; };
      // appliedType Field Functions 
      bool hasAppliedType() const { return this->appliedType_ != nullptr;};
      void deleteAppliedType() { this->appliedType_ = nullptr;};
      inline string getAppliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
      inline Certificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline Certificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    protected:
      // This parameter is required.
      shared_ptr<string> appliedType_ {};
      // This parameter is required.
      shared_ptr<string> certificateId_ {};
    };

    virtual bool empty() const override { return this->certificates_ == nullptr
        && this->cloudResourceId_ == nullptr && this->instanceId_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->resourceInstanceId_ == nullptr
        && this->resourceProduct_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<ModifyCloudResourceCertRequest::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<ModifyCloudResourceCertRequest::Certificates>) };
    inline vector<ModifyCloudResourceCertRequest::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<ModifyCloudResourceCertRequest::Certificates>) };
    inline ModifyCloudResourceCertRequest& setCertificates(const vector<ModifyCloudResourceCertRequest::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ModifyCloudResourceCertRequest& setCertificates(vector<ModifyCloudResourceCertRequest::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // cloudResourceId Field Functions 
    bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
    void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
    inline string getCloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
    inline ModifyCloudResourceCertRequest& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCloudResourceCertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyCloudResourceCertRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudResourceCertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline ModifyCloudResourceCertRequest& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline ModifyCloudResourceCertRequest& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


  protected:
    // This parameter is required.
    shared_ptr<vector<ModifyCloudResourceCertRequest::Certificates>> certificates_ {};
    shared_ptr<string> cloudResourceId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> port_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceInstanceId_ {};
    shared_ptr<string> resourceProduct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
