// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOUTBOUNDCALLNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOUTBOUNDCALLNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyOutboundCallNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOutboundCallNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(OutboundCallNumberId, outboundCallNumberId_);
      DARABONBA_PTR_TO_JSON(RateLimitCount, rateLimitCount_);
      DARABONBA_PTR_TO_JSON(RateLimitPeriod, rateLimitPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOutboundCallNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(OutboundCallNumberId, outboundCallNumberId_);
      DARABONBA_PTR_FROM_JSON(RateLimitCount, rateLimitCount_);
      DARABONBA_PTR_FROM_JSON(RateLimitPeriod, rateLimitPeriod_);
    };
    ModifyOutboundCallNumberRequest() = default ;
    ModifyOutboundCallNumberRequest(const ModifyOutboundCallNumberRequest &) = default ;
    ModifyOutboundCallNumberRequest(ModifyOutboundCallNumberRequest &&) = default ;
    ModifyOutboundCallNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOutboundCallNumberRequest() = default ;
    ModifyOutboundCallNumberRequest& operator=(const ModifyOutboundCallNumberRequest &) = default ;
    ModifyOutboundCallNumberRequest& operator=(ModifyOutboundCallNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->number_ == nullptr && return this->outboundCallNumberId_ == nullptr && return this->rateLimitCount_ == nullptr && return this->rateLimitPeriod_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyOutboundCallNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ModifyOutboundCallNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // outboundCallNumberId Field Functions 
    bool hasOutboundCallNumberId() const { return this->outboundCallNumberId_ != nullptr;};
    void deleteOutboundCallNumberId() { this->outboundCallNumberId_ = nullptr;};
    inline string outboundCallNumberId() const { DARABONBA_PTR_GET_DEFAULT(outboundCallNumberId_, "") };
    inline ModifyOutboundCallNumberRequest& setOutboundCallNumberId(string outboundCallNumberId) { DARABONBA_PTR_SET_VALUE(outboundCallNumberId_, outboundCallNumberId) };


    // rateLimitCount Field Functions 
    bool hasRateLimitCount() const { return this->rateLimitCount_ != nullptr;};
    void deleteRateLimitCount() { this->rateLimitCount_ = nullptr;};
    inline int32_t rateLimitCount() const { DARABONBA_PTR_GET_DEFAULT(rateLimitCount_, 0) };
    inline ModifyOutboundCallNumberRequest& setRateLimitCount(int32_t rateLimitCount) { DARABONBA_PTR_SET_VALUE(rateLimitCount_, rateLimitCount) };


    // rateLimitPeriod Field Functions 
    bool hasRateLimitPeriod() const { return this->rateLimitPeriod_ != nullptr;};
    void deleteRateLimitPeriod() { this->rateLimitPeriod_ = nullptr;};
    inline int32_t rateLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(rateLimitPeriod_, 0) };
    inline ModifyOutboundCallNumberRequest& setRateLimitPeriod(int32_t rateLimitPeriod) { DARABONBA_PTR_SET_VALUE(rateLimitPeriod_, rateLimitPeriod) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> number_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outboundCallNumberId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> rateLimitCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> rateLimitPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
