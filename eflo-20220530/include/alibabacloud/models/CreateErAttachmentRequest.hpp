// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEERATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
      DARABONBA_PTR_TO_JSON(ErAttachmentName, erAttachmentName_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
      DARABONBA_PTR_FROM_JSON(ErAttachmentName, erAttachmentName_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
    };
    CreateErAttachmentRequest() = default ;
    CreateErAttachmentRequest(const CreateErAttachmentRequest &) = default ;
    CreateErAttachmentRequest(CreateErAttachmentRequest &&) = default ;
    CreateErAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErAttachmentRequest() = default ;
    CreateErAttachmentRequest& operator=(const CreateErAttachmentRequest &) = default ;
    CreateErAttachmentRequest& operator=(CreateErAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoReceiveAllRoute_ == nullptr
        && return this->erAttachmentName_ == nullptr && return this->erId_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceTenantId_ == nullptr; };
    // autoReceiveAllRoute Field Functions 
    bool hasAutoReceiveAllRoute() const { return this->autoReceiveAllRoute_ != nullptr;};
    void deleteAutoReceiveAllRoute() { this->autoReceiveAllRoute_ = nullptr;};
    inline bool autoReceiveAllRoute() const { DARABONBA_PTR_GET_DEFAULT(autoReceiveAllRoute_, false) };
    inline CreateErAttachmentRequest& setAutoReceiveAllRoute(bool autoReceiveAllRoute) { DARABONBA_PTR_SET_VALUE(autoReceiveAllRoute_, autoReceiveAllRoute) };


    // erAttachmentName Field Functions 
    bool hasErAttachmentName() const { return this->erAttachmentName_ != nullptr;};
    void deleteErAttachmentName() { this->erAttachmentName_ = nullptr;};
    inline string erAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentName_, "") };
    inline CreateErAttachmentRequest& setErAttachmentName(string erAttachmentName) { DARABONBA_PTR_SET_VALUE(erAttachmentName_, erAttachmentName) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline CreateErAttachmentRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateErAttachmentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateErAttachmentRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateErAttachmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string resourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline CreateErAttachmentRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


  protected:
    // Indicates whether to automatically receive all routes from all instances under the Lingjun HUB. Valid values:
    // 
    // *   **true**: received automatically.
    // *   **false**: Not received.
    // 
    // This parameter is required.
    std::shared_ptr<bool> autoReceiveAllRoute_ = nullptr;
    // The name of the network instance connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> erAttachmentName_ = nullptr;
    // Lingjun HUB ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    // The ID of the network instance. Valid values: **VPD** and **VCC**.
    // 
    // For more information, see [What is Lingjun?](https://help.aliyun.com/document_detail/444430.html)
    // 
    // You can query **Lingjun CIDR Block** and **Lingjun Connection** by [ListVpds](https://help.aliyun.com/document_detail/2331077.html) and [ListVccs](https://help.aliyun.com/document_detail/2399526.html?) respectively.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The category of the instance. Valid values:
    // 
    // *   **VPD**: indicates the Lingjun CIDR block.
    // *   **VCC**: indicates a Lingjun connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the tenant to which the resource belongs. This parameter is required for cross-account resources.
    std::shared_ptr<string> resourceTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
