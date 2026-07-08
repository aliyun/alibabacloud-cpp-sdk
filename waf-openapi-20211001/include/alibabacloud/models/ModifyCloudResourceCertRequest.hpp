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
      // The type of the certificate for the HTTPS protocol. Valid values:
      // 
      // - **default**: the default certificate.
      // 
      // - **extension**: the additional certificate.
      // 
      // This parameter is required.
      shared_ptr<string> appliedType_ {};
      // The ID of the certificate.
      // 
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
    // The list of certificates.
    // 
    // > Enter all certificate IDs. This includes the default certificate and all additional certificates. After you submit the request, WAF compares the submitted IDs with the existing ones. WAF adds new certificates and deletes certificates that are not in your list. Deleting a certificate may affect related services.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyCloudResourceCertRequest::Certificates>> certificates_ {};
    // The ID of the resource that is added to WAF. WAF automatically generates this ID when you add the resource in cloud native mode.
    // 
    // > Call the [CreateCloudResource](https://help.aliyun.com/document_detail/2839876.html) operation to add a resource. Then, view the resource ID in the response.
    shared_ptr<string> cloudResourceId_ {};
    // The ID of the WAF instance.
    // 
    // > Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The port of the cloud product that is added to WAF.
    shared_ptr<int32_t> port_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the cloud product instance.
    shared_ptr<string> resourceInstanceId_ {};
    // The type of the cloud product. Valid values:
    // 
    // - **ecs**: Elastic Compute Service (ECS).
    // 
    // - **clb4**: Layer 4 Classic Load Balancer (CLB).
    // 
    // - **nlb**: Network Load Balancer (NLB).
    shared_ptr<string> resourceProduct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
