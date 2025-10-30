// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCloudResourceCertRequestCertificates.hpp>
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
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
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
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->instanceId_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr && return this->resourceInstanceId_ == nullptr && return this->resourceProduct_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<ModifyCloudResourceCertRequestCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<ModifyCloudResourceCertRequestCertificates>) };
    inline vector<ModifyCloudResourceCertRequestCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<ModifyCloudResourceCertRequestCertificates>) };
    inline ModifyCloudResourceCertRequest& setCertificates(const vector<ModifyCloudResourceCertRequestCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ModifyCloudResourceCertRequest& setCertificates(vector<ModifyCloudResourceCertRequestCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCloudResourceCertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyCloudResourceCertRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudResourceCertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline ModifyCloudResourceCertRequest& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string resourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline ModifyCloudResourceCertRequest& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<ModifyCloudResourceCertRequestCertificates>> certificates_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceProduct_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
