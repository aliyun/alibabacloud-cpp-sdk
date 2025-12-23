// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPAYORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_PREPAYORDERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class PrepayOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepayOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
    };
    friend void from_json(const Darabonba::Json& j, PrepayOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
    };
    PrepayOrderInfo() = default ;
    PrepayOrderInfo(const PrepayOrderInfo &) = default ;
    PrepayOrderInfo(PrepayOrderInfo &&) = default ;
    PrepayOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepayOrderInfo() = default ;
    PrepayOrderInfo& operator=(const PrepayOrderInfo &) = default ;
    PrepayOrderInfo& operator=(PrepayOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->duration_ == nullptr && return this->pricingCycle_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline PrepayOrderInfo& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline PrepayOrderInfo& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline PrepayOrderInfo& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
