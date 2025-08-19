// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONATTRIBUTESRESPONSEBODYDATATENANTRATELIMITPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONATTRIBUTESRESPONSEBODYDATATENANTRATELIMITPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
    };
    GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy() = default ;
    GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy(const GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy &) = default ;
    GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy(GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy &&) = default ;
    GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy() = default ;
    GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy& operator=(const GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy &) = default ;
    GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy& operator=(GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->maxReceivesPerSecond_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // maxReceivesPerSecond Field Functions 
    bool hasMaxReceivesPerSecond() const { return this->maxReceivesPerSecond_ != nullptr;};
    void deleteMaxReceivesPerSecond() { this->maxReceivesPerSecond_ = nullptr;};
    inline int32_t maxReceivesPerSecond() const { DARABONBA_PTR_GET_DEFAULT(maxReceivesPerSecond_, 0) };
    inline GetSubscriptionAttributesResponseBodyDataTenantRateLimitPolicy& setMaxReceivesPerSecond(int32_t maxReceivesPerSecond) { DARABONBA_PTR_SET_VALUE(maxReceivesPerSecond_, maxReceivesPerSecond) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int32_t> maxReceivesPerSecond_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
