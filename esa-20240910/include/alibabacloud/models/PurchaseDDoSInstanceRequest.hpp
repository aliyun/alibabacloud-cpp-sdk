// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEDDOSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEDDOSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurchaseDDoSInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseDDoSInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSBillingMode, DDoSBillingMode_);
      DARABONBA_PTR_TO_JSON(DDoSBurstableDomesticProtection, DDoSBurstableDomesticProtection_);
      DARABONBA_PTR_TO_JSON(DDoSBurstableOverseasProtection, DDoSBurstableOverseasProtection_);
      DARABONBA_PTR_TO_JSON(SiteInstanceId, siteInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseDDoSInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSBillingMode, DDoSBillingMode_);
      DARABONBA_PTR_FROM_JSON(DDoSBurstableDomesticProtection, DDoSBurstableDomesticProtection_);
      DARABONBA_PTR_FROM_JSON(DDoSBurstableOverseasProtection, DDoSBurstableOverseasProtection_);
      DARABONBA_PTR_FROM_JSON(SiteInstanceId, siteInstanceId_);
    };
    PurchaseDDoSInstanceRequest() = default ;
    PurchaseDDoSInstanceRequest(const PurchaseDDoSInstanceRequest &) = default ;
    PurchaseDDoSInstanceRequest(PurchaseDDoSInstanceRequest &&) = default ;
    PurchaseDDoSInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseDDoSInstanceRequest() = default ;
    PurchaseDDoSInstanceRequest& operator=(const PurchaseDDoSInstanceRequest &) = default ;
    PurchaseDDoSInstanceRequest& operator=(PurchaseDDoSInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DDoSBillingMode_ == nullptr
        && this->DDoSBurstableDomesticProtection_ == nullptr && this->DDoSBurstableOverseasProtection_ == nullptr && this->siteInstanceId_ == nullptr; };
    // DDoSBillingMode Field Functions 
    bool hasDDoSBillingMode() const { return this->DDoSBillingMode_ != nullptr;};
    void deleteDDoSBillingMode() { this->DDoSBillingMode_ = nullptr;};
    inline string getDDoSBillingMode() const { DARABONBA_PTR_GET_DEFAULT(DDoSBillingMode_, "") };
    inline PurchaseDDoSInstanceRequest& setDDoSBillingMode(string DDoSBillingMode) { DARABONBA_PTR_SET_VALUE(DDoSBillingMode_, DDoSBillingMode) };


    // DDoSBurstableDomesticProtection Field Functions 
    bool hasDDoSBurstableDomesticProtection() const { return this->DDoSBurstableDomesticProtection_ != nullptr;};
    void deleteDDoSBurstableDomesticProtection() { this->DDoSBurstableDomesticProtection_ = nullptr;};
    inline string getDDoSBurstableDomesticProtection() const { DARABONBA_PTR_GET_DEFAULT(DDoSBurstableDomesticProtection_, "") };
    inline PurchaseDDoSInstanceRequest& setDDoSBurstableDomesticProtection(string DDoSBurstableDomesticProtection) { DARABONBA_PTR_SET_VALUE(DDoSBurstableDomesticProtection_, DDoSBurstableDomesticProtection) };


    // DDoSBurstableOverseasProtection Field Functions 
    bool hasDDoSBurstableOverseasProtection() const { return this->DDoSBurstableOverseasProtection_ != nullptr;};
    void deleteDDoSBurstableOverseasProtection() { this->DDoSBurstableOverseasProtection_ = nullptr;};
    inline string getDDoSBurstableOverseasProtection() const { DARABONBA_PTR_GET_DEFAULT(DDoSBurstableOverseasProtection_, "") };
    inline PurchaseDDoSInstanceRequest& setDDoSBurstableOverseasProtection(string DDoSBurstableOverseasProtection) { DARABONBA_PTR_SET_VALUE(DDoSBurstableOverseasProtection_, DDoSBurstableOverseasProtection) };


    // siteInstanceId Field Functions 
    bool hasSiteInstanceId() const { return this->siteInstanceId_ != nullptr;};
    void deleteSiteInstanceId() { this->siteInstanceId_ = nullptr;};
    inline string getSiteInstanceId() const { DARABONBA_PTR_GET_DEFAULT(siteInstanceId_, "") };
    inline PurchaseDDoSInstanceRequest& setSiteInstanceId(string siteInstanceId) { DARABONBA_PTR_SET_VALUE(siteInstanceId_, siteInstanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DDoSBillingMode_ {};
    // This parameter is required.
    shared_ptr<string> DDoSBurstableDomesticProtection_ {};
    // This parameter is required.
    shared_ptr<string> DDoSBurstableOverseasProtection_ {};
    // This parameter is required.
    shared_ptr<string> siteInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
