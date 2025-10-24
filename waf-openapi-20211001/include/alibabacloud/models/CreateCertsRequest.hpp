// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateCertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertContent, certContent_);
      DARABONBA_PTR_TO_JSON(CertKey, certKey_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertContent, certContent_);
      DARABONBA_PTR_FROM_JSON(CertKey, certKey_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    CreateCertsRequest() = default ;
    CreateCertsRequest(const CreateCertsRequest &) = default ;
    CreateCertsRequest(CreateCertsRequest &&) = default ;
    CreateCertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertsRequest() = default ;
    CreateCertsRequest& operator=(const CreateCertsRequest &) = default ;
    CreateCertsRequest& operator=(CreateCertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certContent_ == nullptr
        && return this->certKey_ == nullptr && return this->certName_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // certContent Field Functions 
    bool hasCertContent() const { return this->certContent_ != nullptr;};
    void deleteCertContent() { this->certContent_ = nullptr;};
    inline string certContent() const { DARABONBA_PTR_GET_DEFAULT(certContent_, "") };
    inline CreateCertsRequest& setCertContent(string certContent) { DARABONBA_PTR_SET_VALUE(certContent_, certContent) };


    // certKey Field Functions 
    bool hasCertKey() const { return this->certKey_ != nullptr;};
    void deleteCertKey() { this->certKey_ = nullptr;};
    inline string certKey() const { DARABONBA_PTR_GET_DEFAULT(certKey_, "") };
    inline CreateCertsRequest& setCertKey(string certKey) { DARABONBA_PTR_SET_VALUE(certKey_, certKey) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline CreateCertsRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCertsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCertsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateCertsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The content of the certificate.
    std::shared_ptr<string> certContent_ = nullptr;
    // The private key that corresponds to the certificate.
    std::shared_ptr<string> certKey_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
