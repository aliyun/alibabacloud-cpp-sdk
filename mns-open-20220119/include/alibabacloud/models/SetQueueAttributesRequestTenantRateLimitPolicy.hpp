// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETQUEUEATTRIBUTESREQUESTTENANTRATELIMITPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SETQUEUEATTRIBUTESREQUESTTENANTRATELIMITPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetQueueAttributesRequestTenantRateLimitPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetQueueAttributesRequestTenantRateLimitPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
    };
    friend void from_json(const Darabonba::Json& j, SetQueueAttributesRequestTenantRateLimitPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
    };
    SetQueueAttributesRequestTenantRateLimitPolicy() = default ;
    SetQueueAttributesRequestTenantRateLimitPolicy(const SetQueueAttributesRequestTenantRateLimitPolicy &) = default ;
    SetQueueAttributesRequestTenantRateLimitPolicy(SetQueueAttributesRequestTenantRateLimitPolicy &&) = default ;
    SetQueueAttributesRequestTenantRateLimitPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetQueueAttributesRequestTenantRateLimitPolicy() = default ;
    SetQueueAttributesRequestTenantRateLimitPolicy& operator=(const SetQueueAttributesRequestTenantRateLimitPolicy &) = default ;
    SetQueueAttributesRequestTenantRateLimitPolicy& operator=(SetQueueAttributesRequestTenantRateLimitPolicy &&) = default ;
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
    inline SetQueueAttributesRequestTenantRateLimitPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // maxReceivesPerSecond Field Functions 
    bool hasMaxReceivesPerSecond() const { return this->maxReceivesPerSecond_ != nullptr;};
    void deleteMaxReceivesPerSecond() { this->maxReceivesPerSecond_ = nullptr;};
    inline int32_t maxReceivesPerSecond() const { DARABONBA_PTR_GET_DEFAULT(maxReceivesPerSecond_, 0) };
    inline SetQueueAttributesRequestTenantRateLimitPolicy& setMaxReceivesPerSecond(int32_t maxReceivesPerSecond) { DARABONBA_PTR_SET_VALUE(maxReceivesPerSecond_, maxReceivesPerSecond) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int32_t> maxReceivesPerSecond_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
