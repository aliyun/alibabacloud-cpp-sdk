// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOUTBOUNDCALLNUMBERRESPONSEBODYOUTBOUNDCALLNUMBER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOUTBOUNDCALLNUMBERRESPONSEBODYOUTBOUNDCALLNUMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyOutboundCallNumberResponseBodyOutboundCallNumber : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOutboundCallNumberResponseBodyOutboundCallNumber& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(OutboundCallNumberId, outboundCallNumberId_);
      DARABONBA_PTR_TO_JSON(RateLimitCount, rateLimitCount_);
      DARABONBA_PTR_TO_JSON(RateLimitPeriod, rateLimitPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOutboundCallNumberResponseBodyOutboundCallNumber& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(OutboundCallNumberId, outboundCallNumberId_);
      DARABONBA_PTR_FROM_JSON(RateLimitCount, rateLimitCount_);
      DARABONBA_PTR_FROM_JSON(RateLimitPeriod, rateLimitPeriod_);
    };
    ModifyOutboundCallNumberResponseBodyOutboundCallNumber() = default ;
    ModifyOutboundCallNumberResponseBodyOutboundCallNumber(const ModifyOutboundCallNumberResponseBodyOutboundCallNumber &) = default ;
    ModifyOutboundCallNumberResponseBodyOutboundCallNumber(ModifyOutboundCallNumberResponseBodyOutboundCallNumber &&) = default ;
    ModifyOutboundCallNumberResponseBodyOutboundCallNumber(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOutboundCallNumberResponseBodyOutboundCallNumber() = default ;
    ModifyOutboundCallNumberResponseBodyOutboundCallNumber& operator=(const ModifyOutboundCallNumberResponseBodyOutboundCallNumber &) = default ;
    ModifyOutboundCallNumberResponseBodyOutboundCallNumber& operator=(ModifyOutboundCallNumberResponseBodyOutboundCallNumber &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr
        && return this->outboundCallNumberId_ == nullptr && return this->rateLimitCount_ == nullptr && return this->rateLimitPeriod_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ModifyOutboundCallNumberResponseBodyOutboundCallNumber& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // outboundCallNumberId Field Functions 
    bool hasOutboundCallNumberId() const { return this->outboundCallNumberId_ != nullptr;};
    void deleteOutboundCallNumberId() { this->outboundCallNumberId_ = nullptr;};
    inline string outboundCallNumberId() const { DARABONBA_PTR_GET_DEFAULT(outboundCallNumberId_, "") };
    inline ModifyOutboundCallNumberResponseBodyOutboundCallNumber& setOutboundCallNumberId(string outboundCallNumberId) { DARABONBA_PTR_SET_VALUE(outboundCallNumberId_, outboundCallNumberId) };


    // rateLimitCount Field Functions 
    bool hasRateLimitCount() const { return this->rateLimitCount_ != nullptr;};
    void deleteRateLimitCount() { this->rateLimitCount_ = nullptr;};
    inline string rateLimitCount() const { DARABONBA_PTR_GET_DEFAULT(rateLimitCount_, "") };
    inline ModifyOutboundCallNumberResponseBodyOutboundCallNumber& setRateLimitCount(string rateLimitCount) { DARABONBA_PTR_SET_VALUE(rateLimitCount_, rateLimitCount) };


    // rateLimitPeriod Field Functions 
    bool hasRateLimitPeriod() const { return this->rateLimitPeriod_ != nullptr;};
    void deleteRateLimitPeriod() { this->rateLimitPeriod_ = nullptr;};
    inline string rateLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(rateLimitPeriod_, "") };
    inline ModifyOutboundCallNumberResponseBodyOutboundCallNumber& setRateLimitPeriod(string rateLimitPeriod) { DARABONBA_PTR_SET_VALUE(rateLimitPeriod_, rateLimitPeriod) };


  protected:
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> outboundCallNumberId_ = nullptr;
    std::shared_ptr<string> rateLimitCount_ = nullptr;
    std::shared_ptr<string> rateLimitPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
