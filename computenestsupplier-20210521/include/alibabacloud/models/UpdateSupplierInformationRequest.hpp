// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUPPLIERINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUPPLIERINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSupplierInformationRequestDeliverySettings.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSupplierInformationRequestSupportContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateSupplierInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSupplierInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_TO_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSupplierInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_FROM_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
    };
    UpdateSupplierInformationRequest() = default ;
    UpdateSupplierInformationRequest(const UpdateSupplierInformationRequest &) = default ;
    UpdateSupplierInformationRequest(UpdateSupplierInformationRequest &&) = default ;
    UpdateSupplierInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSupplierInformationRequest() = default ;
    UpdateSupplierInformationRequest& operator=(const UpdateSupplierInformationRequest &) = default ;
    UpdateSupplierInformationRequest& operator=(UpdateSupplierInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverySettings_ != nullptr
        && this->operationIp_ != nullptr && this->operationMfaPresent_ != nullptr && this->regionId_ != nullptr && this->supplierDesc_ != nullptr && this->supplierLogo_ != nullptr
        && this->supplierUrl_ != nullptr && this->supportContacts_ != nullptr; };
    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const UpdateSupplierInformationRequestDeliverySettings & deliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, UpdateSupplierInformationRequestDeliverySettings) };
    inline UpdateSupplierInformationRequestDeliverySettings deliverySettings() { DARABONBA_PTR_GET(deliverySettings_, UpdateSupplierInformationRequestDeliverySettings) };
    inline UpdateSupplierInformationRequest& setDeliverySettings(const UpdateSupplierInformationRequestDeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline UpdateSupplierInformationRequest& setDeliverySettings(UpdateSupplierInformationRequestDeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // operationIp Field Functions 
    bool hasOperationIp() const { return this->operationIp_ != nullptr;};
    void deleteOperationIp() { this->operationIp_ = nullptr;};
    inline string operationIp() const { DARABONBA_PTR_GET_DEFAULT(operationIp_, "") };
    inline UpdateSupplierInformationRequest& setOperationIp(string operationIp) { DARABONBA_PTR_SET_VALUE(operationIp_, operationIp) };


    // operationMfaPresent Field Functions 
    bool hasOperationMfaPresent() const { return this->operationMfaPresent_ != nullptr;};
    void deleteOperationMfaPresent() { this->operationMfaPresent_ = nullptr;};
    inline bool operationMfaPresent() const { DARABONBA_PTR_GET_DEFAULT(operationMfaPresent_, false) };
    inline UpdateSupplierInformationRequest& setOperationMfaPresent(bool operationMfaPresent) { DARABONBA_PTR_SET_VALUE(operationMfaPresent_, operationMfaPresent) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSupplierInformationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string supplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline UpdateSupplierInformationRequest& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string supplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline UpdateSupplierInformationRequest& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline UpdateSupplierInformationRequest& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<UpdateSupplierInformationRequestSupportContacts> & supportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<UpdateSupplierInformationRequestSupportContacts>) };
    inline vector<UpdateSupplierInformationRequestSupportContacts> supportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<UpdateSupplierInformationRequestSupportContacts>) };
    inline UpdateSupplierInformationRequest& setSupportContacts(const vector<UpdateSupplierInformationRequestSupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline UpdateSupplierInformationRequest& setSupportContacts(vector<UpdateSupplierInformationRequestSupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


  protected:
    // The delivery settings.
    std::shared_ptr<UpdateSupplierInformationRequestDeliverySettings> deliverySettings_ = nullptr;
    // The Ip of operation.
    std::shared_ptr<string> operationIp_ = nullptr;
    // The MFA of operation.
    std::shared_ptr<bool> operationMfaPresent_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of service provider.
    std::shared_ptr<string> supplierDesc_ = nullptr;
    // The Logo of service provider.
    std::shared_ptr<string> supplierLogo_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // Contact information of the service provider
    std::shared_ptr<vector<UpdateSupplierInformationRequestSupportContacts>> supportContacts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
