// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLIERINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLIERINFORMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSupplierInformationResponseBodyDeliverySettings.hpp>
#include <vector>
#include <alibabacloud/models/GetSupplierInformationResponseBodySupportContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetSupplierInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplierInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcrNamespace, acrNamespace_);
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(EnableReseller, enableReseller_);
      DARABONBA_PTR_TO_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_TO_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplierInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrNamespace, acrNamespace_);
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(EnableReseller, enableReseller_);
      DARABONBA_PTR_FROM_JSON(OperationIp, operationIp_);
      DARABONBA_PTR_FROM_JSON(OperationMfaPresent, operationMfaPresent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
    };
    GetSupplierInformationResponseBody() = default ;
    GetSupplierInformationResponseBody(const GetSupplierInformationResponseBody &) = default ;
    GetSupplierInformationResponseBody(GetSupplierInformationResponseBody &&) = default ;
    GetSupplierInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplierInformationResponseBody() = default ;
    GetSupplierInformationResponseBody& operator=(const GetSupplierInformationResponseBody &) = default ;
    GetSupplierInformationResponseBody& operator=(GetSupplierInformationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acrNamespace_ != nullptr
        && this->deliverySettings_ != nullptr && this->enableReseller_ != nullptr && this->operationIp_ != nullptr && this->operationMfaPresent_ != nullptr && this->requestId_ != nullptr
        && this->supplierDesc_ != nullptr && this->supplierLogo_ != nullptr && this->supplierName_ != nullptr && this->supplierUrl_ != nullptr && this->supportContacts_ != nullptr; };
    // acrNamespace Field Functions 
    bool hasAcrNamespace() const { return this->acrNamespace_ != nullptr;};
    void deleteAcrNamespace() { this->acrNamespace_ = nullptr;};
    inline string acrNamespace() const { DARABONBA_PTR_GET_DEFAULT(acrNamespace_, "") };
    inline GetSupplierInformationResponseBody& setAcrNamespace(string acrNamespace) { DARABONBA_PTR_SET_VALUE(acrNamespace_, acrNamespace) };


    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const GetSupplierInformationResponseBodyDeliverySettings & deliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, GetSupplierInformationResponseBodyDeliverySettings) };
    inline GetSupplierInformationResponseBodyDeliverySettings deliverySettings() { DARABONBA_PTR_GET(deliverySettings_, GetSupplierInformationResponseBodyDeliverySettings) };
    inline GetSupplierInformationResponseBody& setDeliverySettings(const GetSupplierInformationResponseBodyDeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline GetSupplierInformationResponseBody& setDeliverySettings(GetSupplierInformationResponseBodyDeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // enableReseller Field Functions 
    bool hasEnableReseller() const { return this->enableReseller_ != nullptr;};
    void deleteEnableReseller() { this->enableReseller_ = nullptr;};
    inline bool enableReseller() const { DARABONBA_PTR_GET_DEFAULT(enableReseller_, false) };
    inline GetSupplierInformationResponseBody& setEnableReseller(bool enableReseller) { DARABONBA_PTR_SET_VALUE(enableReseller_, enableReseller) };


    // operationIp Field Functions 
    bool hasOperationIp() const { return this->operationIp_ != nullptr;};
    void deleteOperationIp() { this->operationIp_ = nullptr;};
    inline string operationIp() const { DARABONBA_PTR_GET_DEFAULT(operationIp_, "") };
    inline GetSupplierInformationResponseBody& setOperationIp(string operationIp) { DARABONBA_PTR_SET_VALUE(operationIp_, operationIp) };


    // operationMfaPresent Field Functions 
    bool hasOperationMfaPresent() const { return this->operationMfaPresent_ != nullptr;};
    void deleteOperationMfaPresent() { this->operationMfaPresent_ = nullptr;};
    inline bool operationMfaPresent() const { DARABONBA_PTR_GET_DEFAULT(operationMfaPresent_, false) };
    inline GetSupplierInformationResponseBody& setOperationMfaPresent(bool operationMfaPresent) { DARABONBA_PTR_SET_VALUE(operationMfaPresent_, operationMfaPresent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupplierInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string supplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline GetSupplierInformationResponseBody& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string supplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline GetSupplierInformationResponseBody& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline GetSupplierInformationResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline GetSupplierInformationResponseBody& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<GetSupplierInformationResponseBodySupportContacts> & supportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<GetSupplierInformationResponseBodySupportContacts>) };
    inline vector<GetSupplierInformationResponseBodySupportContacts> supportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<GetSupplierInformationResponseBodySupportContacts>) };
    inline GetSupplierInformationResponseBody& setSupportContacts(const vector<GetSupplierInformationResponseBodySupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline GetSupplierInformationResponseBody& setSupportContacts(vector<GetSupplierInformationResponseBodySupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


  protected:
    // Acr container namespace
    std::shared_ptr<string> acrNamespace_ = nullptr;
    // The delivery settings.
    std::shared_ptr<GetSupplierInformationResponseBodyDeliverySettings> deliverySettings_ = nullptr;
    // Whether to enable reseller
    std::shared_ptr<bool> enableReseller_ = nullptr;
    // The Ip of the operation.
    std::shared_ptr<string> operationIp_ = nullptr;
    // The MFA of the operation.
    std::shared_ptr<bool> operationMfaPresent_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The description of service provider.
    std::shared_ptr<string> supplierDesc_ = nullptr;
    // The Logo of service provider.
    std::shared_ptr<string> supplierLogo_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // Contact information of the service provider
    std::shared_ptr<vector<GetSupplierInformationResponseBodySupportContacts>> supportContacts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
