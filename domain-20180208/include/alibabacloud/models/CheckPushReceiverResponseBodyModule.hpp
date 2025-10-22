// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPUSHRECEIVERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CHECKPUSHRECEIVERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CheckPushReceiverResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPushReceiverResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(CanReceivePush, canReceivePush_);
      DARABONBA_PTR_TO_JSON(MaskedMobile, maskedMobile_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPushReceiverResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(CanReceivePush, canReceivePush_);
      DARABONBA_PTR_FROM_JSON(MaskedMobile, maskedMobile_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
    };
    CheckPushReceiverResponseBodyModule() = default ;
    CheckPushReceiverResponseBodyModule(const CheckPushReceiverResponseBodyModule &) = default ;
    CheckPushReceiverResponseBodyModule(CheckPushReceiverResponseBodyModule &&) = default ;
    CheckPushReceiverResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPushReceiverResponseBodyModule() = default ;
    CheckPushReceiverResponseBodyModule& operator=(const CheckPushReceiverResponseBodyModule &) = default ;
    CheckPushReceiverResponseBodyModule& operator=(CheckPushReceiverResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canReceivePush_ == nullptr
        && return this->maskedMobile_ == nullptr && return this->reasonCode_ == nullptr; };
    // canReceivePush Field Functions 
    bool hasCanReceivePush() const { return this->canReceivePush_ != nullptr;};
    void deleteCanReceivePush() { this->canReceivePush_ = nullptr;};
    inline bool canReceivePush() const { DARABONBA_PTR_GET_DEFAULT(canReceivePush_, false) };
    inline CheckPushReceiverResponseBodyModule& setCanReceivePush(bool canReceivePush) { DARABONBA_PTR_SET_VALUE(canReceivePush_, canReceivePush) };


    // maskedMobile Field Functions 
    bool hasMaskedMobile() const { return this->maskedMobile_ != nullptr;};
    void deleteMaskedMobile() { this->maskedMobile_ = nullptr;};
    inline string maskedMobile() const { DARABONBA_PTR_GET_DEFAULT(maskedMobile_, "") };
    inline CheckPushReceiverResponseBodyModule& setMaskedMobile(string maskedMobile) { DARABONBA_PTR_SET_VALUE(maskedMobile_, maskedMobile) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline CheckPushReceiverResponseBodyModule& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


  protected:
    std::shared_ptr<bool> canReceivePush_ = nullptr;
    std::shared_ptr<string> maskedMobile_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
