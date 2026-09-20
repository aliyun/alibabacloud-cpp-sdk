// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ConvertInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
    };
    ConvertInstanceRequest() = default ;
    ConvertInstanceRequest(const ConvertInstanceRequest &) = default ;
    ConvertInstanceRequest(ConvertInstanceRequest &&) = default ;
    ConvertInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertInstanceRequest() = default ;
    ConvertInstanceRequest& operator=(const ConvertInstanceRequest &) = default ;
    ConvertInstanceRequest& operator=(ConvertInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->duration_ == nullptr && this->payType_ == nullptr && this->pricingCycle_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ConvertInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ConvertInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ConvertInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline ConvertInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The subscription duration. Valid values:
    // - If PricingCycle is set to year, the value ranges from 1 to 3.
    // - If PricingCycle is set to month, the value ranges from 1 to 9.
    shared_ptr<int32_t> duration_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **Prepaid**: subscription.
    // - **Postpaid**: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The unit of the subscription period. Valid values:
    // - year: year.
    // - month: month.
    shared_ptr<string> pricingCycle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
