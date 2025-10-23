// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODYIPSIPEXT_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODYIPSIPEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpListResponseBodyIpsIpExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpListResponseBodyIpsIpExt& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(HasSendMail, hasSendMail_);
      DARABONBA_PTR_TO_JSON(LastWarmUpTypeChangedTime, lastWarmUpTypeChangedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpListResponseBodyIpsIpExt& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(HasSendMail, hasSendMail_);
      DARABONBA_PTR_FROM_JSON(LastWarmUpTypeChangedTime, lastWarmUpTypeChangedTime_);
    };
    DedicatedIpListResponseBodyIpsIpExt() = default ;
    DedicatedIpListResponseBodyIpsIpExt(const DedicatedIpListResponseBodyIpsIpExt &) = default ;
    DedicatedIpListResponseBodyIpsIpExt(DedicatedIpListResponseBodyIpsIpExt &&) = default ;
    DedicatedIpListResponseBodyIpsIpExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpListResponseBodyIpsIpExt() = default ;
    DedicatedIpListResponseBodyIpsIpExt& operator=(const DedicatedIpListResponseBodyIpsIpExt &) = default ;
    DedicatedIpListResponseBodyIpsIpExt& operator=(DedicatedIpListResponseBodyIpsIpExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && return this->hasSendMail_ == nullptr && return this->lastWarmUpTypeChangedTime_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline DedicatedIpListResponseBodyIpsIpExt& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // hasSendMail Field Functions 
    bool hasHasSendMail() const { return this->hasSendMail_ != nullptr;};
    void deleteHasSendMail() { this->hasSendMail_ = nullptr;};
    inline bool hasSendMail() const { DARABONBA_PTR_GET_DEFAULT(hasSendMail_, false) };
    inline DedicatedIpListResponseBodyIpsIpExt& setHasSendMail(bool hasSendMail) { DARABONBA_PTR_SET_VALUE(hasSendMail_, hasSendMail) };


    // lastWarmUpTypeChangedTime Field Functions 
    bool hasLastWarmUpTypeChangedTime() const { return this->lastWarmUpTypeChangedTime_ != nullptr;};
    void deleteLastWarmUpTypeChangedTime() { this->lastWarmUpTypeChangedTime_ = nullptr;};
    inline string lastWarmUpTypeChangedTime() const { DARABONBA_PTR_GET_DEFAULT(lastWarmUpTypeChangedTime_, "") };
    inline DedicatedIpListResponseBodyIpsIpExt& setLastWarmUpTypeChangedTime(string lastWarmUpTypeChangedTime) { DARABONBA_PTR_SET_VALUE(lastWarmUpTypeChangedTime_, lastWarmUpTypeChangedTime) };


  protected:
    // Whether auto-renewal is enabled
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    // Whether an email has been sent
    std::shared_ptr<bool> hasSendMail_ = nullptr;
    std::shared_ptr<string> lastWarmUpTypeChangedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
