// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSBillingMode, DDoSBillingMode_);
      DARABONBA_PTR_TO_JSON(DDoSBurstableDomesticProtection, DDoSBurstableDomesticProtection_);
      DARABONBA_PTR_TO_JSON(DDoSBurstableOverseasProtection, DDoSBurstableOverseasProtection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSBillingMode, DDoSBillingMode_);
      DARABONBA_PTR_FROM_JSON(DDoSBurstableDomesticProtection, DDoSBurstableDomesticProtection_);
      DARABONBA_PTR_FROM_JSON(DDoSBurstableOverseasProtection, DDoSBurstableOverseasProtection_);
    };
    DescribeDDoSPriceRequest() = default ;
    DescribeDDoSPriceRequest(const DescribeDDoSPriceRequest &) = default ;
    DescribeDDoSPriceRequest(DescribeDDoSPriceRequest &&) = default ;
    DescribeDDoSPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSPriceRequest() = default ;
    DescribeDDoSPriceRequest& operator=(const DescribeDDoSPriceRequest &) = default ;
    DescribeDDoSPriceRequest& operator=(DescribeDDoSPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DDoSBillingMode_ == nullptr
        && this->DDoSBurstableDomesticProtection_ == nullptr && this->DDoSBurstableOverseasProtection_ == nullptr; };
    // DDoSBillingMode Field Functions 
    bool hasDDoSBillingMode() const { return this->DDoSBillingMode_ != nullptr;};
    void deleteDDoSBillingMode() { this->DDoSBillingMode_ = nullptr;};
    inline string getDDoSBillingMode() const { DARABONBA_PTR_GET_DEFAULT(DDoSBillingMode_, "") };
    inline DescribeDDoSPriceRequest& setDDoSBillingMode(string DDoSBillingMode) { DARABONBA_PTR_SET_VALUE(DDoSBillingMode_, DDoSBillingMode) };


    // DDoSBurstableDomesticProtection Field Functions 
    bool hasDDoSBurstableDomesticProtection() const { return this->DDoSBurstableDomesticProtection_ != nullptr;};
    void deleteDDoSBurstableDomesticProtection() { this->DDoSBurstableDomesticProtection_ = nullptr;};
    inline string getDDoSBurstableDomesticProtection() const { DARABONBA_PTR_GET_DEFAULT(DDoSBurstableDomesticProtection_, "") };
    inline DescribeDDoSPriceRequest& setDDoSBurstableDomesticProtection(string DDoSBurstableDomesticProtection) { DARABONBA_PTR_SET_VALUE(DDoSBurstableDomesticProtection_, DDoSBurstableDomesticProtection) };


    // DDoSBurstableOverseasProtection Field Functions 
    bool hasDDoSBurstableOverseasProtection() const { return this->DDoSBurstableOverseasProtection_ != nullptr;};
    void deleteDDoSBurstableOverseasProtection() { this->DDoSBurstableOverseasProtection_ = nullptr;};
    inline string getDDoSBurstableOverseasProtection() const { DARABONBA_PTR_GET_DEFAULT(DDoSBurstableOverseasProtection_, "") };
    inline DescribeDDoSPriceRequest& setDDoSBurstableOverseasProtection(string DDoSBurstableOverseasProtection) { DARABONBA_PTR_SET_VALUE(DDoSBurstableOverseasProtection_, DDoSBurstableOverseasProtection) };


  protected:
    // The billing method.
    // 
    // This parameter is required.
    shared_ptr<string> DDoSBillingMode_ {};
    // The instance specifications for the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> DDoSBurstableDomesticProtection_ {};
    // The instance specifications for regions outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> DDoSBurstableOverseasProtection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
