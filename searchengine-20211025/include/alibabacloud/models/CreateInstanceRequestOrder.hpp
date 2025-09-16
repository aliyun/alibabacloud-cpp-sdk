// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTORDER_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateInstanceRequestOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestOrder& obj) { 
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
    };
    CreateInstanceRequestOrder() = default ;
    CreateInstanceRequestOrder(const CreateInstanceRequestOrder &) = default ;
    CreateInstanceRequestOrder(CreateInstanceRequestOrder &&) = default ;
    CreateInstanceRequestOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestOrder() = default ;
    CreateInstanceRequestOrder& operator=(const CreateInstanceRequestOrder &) = default ;
    CreateInstanceRequestOrder& operator=(CreateInstanceRequestOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->duration_ != nullptr && this->pricingCycle_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceRequestOrder& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateInstanceRequestOrder& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInstanceRequestOrder& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


  protected:
    // Specifies whether to enable auto-renewal. Valid values: true and false.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The billing duration. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, and 12.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The unit of the billing duration. Valid values: Month and Year.
    std::shared_ptr<string> pricingCycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
