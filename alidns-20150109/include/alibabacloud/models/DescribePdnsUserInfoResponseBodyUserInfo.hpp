// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSUSERINFORESPONSEBODYUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSUSERINFORESPONSEBODYUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsUserInfoResponseBodyUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsUserInfoResponseBodyUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAccessSecurityType, availableAccessSecurityType_);
      DARABONBA_PTR_TO_JSON(AvailableService, availableService_);
      DARABONBA_PTR_TO_JSON(PdnsId, pdnsId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StatisticSwitchStatus, statisticSwitchStatus_);
      DARABONBA_PTR_TO_JSON(StoppedService, stoppedService_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsUserInfoResponseBodyUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAccessSecurityType, availableAccessSecurityType_);
      DARABONBA_PTR_FROM_JSON(AvailableService, availableService_);
      DARABONBA_PTR_FROM_JSON(PdnsId, pdnsId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StatisticSwitchStatus, statisticSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(StoppedService, stoppedService_);
    };
    DescribePdnsUserInfoResponseBodyUserInfo() = default ;
    DescribePdnsUserInfoResponseBodyUserInfo(const DescribePdnsUserInfoResponseBodyUserInfo &) = default ;
    DescribePdnsUserInfoResponseBodyUserInfo(DescribePdnsUserInfoResponseBodyUserInfo &&) = default ;
    DescribePdnsUserInfoResponseBodyUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsUserInfoResponseBodyUserInfo() = default ;
    DescribePdnsUserInfoResponseBodyUserInfo& operator=(const DescribePdnsUserInfoResponseBodyUserInfo &) = default ;
    DescribePdnsUserInfoResponseBodyUserInfo& operator=(DescribePdnsUserInfoResponseBodyUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAccessSecurityType_ == nullptr
        && return this->availableService_ == nullptr && return this->pdnsId_ == nullptr && return this->secretKey_ == nullptr && return this->serviceType_ == nullptr && return this->state_ == nullptr
        && return this->statisticSwitchStatus_ == nullptr && return this->stoppedService_ == nullptr; };
    // availableAccessSecurityType Field Functions 
    bool hasAvailableAccessSecurityType() const { return this->availableAccessSecurityType_ != nullptr;};
    void deleteAvailableAccessSecurityType() { this->availableAccessSecurityType_ = nullptr;};
    inline string availableAccessSecurityType() const { DARABONBA_PTR_GET_DEFAULT(availableAccessSecurityType_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setAvailableAccessSecurityType(string availableAccessSecurityType) { DARABONBA_PTR_SET_VALUE(availableAccessSecurityType_, availableAccessSecurityType) };


    // availableService Field Functions 
    bool hasAvailableService() const { return this->availableService_ != nullptr;};
    void deleteAvailableService() { this->availableService_ = nullptr;};
    inline string availableService() const { DARABONBA_PTR_GET_DEFAULT(availableService_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setAvailableService(string availableService) { DARABONBA_PTR_SET_VALUE(availableService_, availableService) };


    // pdnsId Field Functions 
    bool hasPdnsId() const { return this->pdnsId_ != nullptr;};
    void deletePdnsId() { this->pdnsId_ = nullptr;};
    inline int64_t pdnsId() const { DARABONBA_PTR_GET_DEFAULT(pdnsId_, 0L) };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setPdnsId(int64_t pdnsId) { DARABONBA_PTR_SET_VALUE(pdnsId_, pdnsId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statisticSwitchStatus Field Functions 
    bool hasStatisticSwitchStatus() const { return this->statisticSwitchStatus_ != nullptr;};
    void deleteStatisticSwitchStatus() { this->statisticSwitchStatus_ = nullptr;};
    inline string statisticSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(statisticSwitchStatus_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setStatisticSwitchStatus(string statisticSwitchStatus) { DARABONBA_PTR_SET_VALUE(statisticSwitchStatus_, statisticSwitchStatus) };


    // stoppedService Field Functions 
    bool hasStoppedService() const { return this->stoppedService_ != nullptr;};
    void deleteStoppedService() { this->stoppedService_ = nullptr;};
    inline string stoppedService() const { DARABONBA_PTR_GET_DEFAULT(stoppedService_, "") };
    inline DescribePdnsUserInfoResponseBodyUserInfo& setStoppedService(string stoppedService) { DARABONBA_PTR_SET_VALUE(stoppedService_, stoppedService) };


  protected:
    // The enabled access security types.
    std::shared_ptr<string> availableAccessSecurityType_ = nullptr;
    // The enabled public recursive DNS service.
    std::shared_ptr<string> availableService_ = nullptr;
    // The configuration ID of the users in public recursive DNS.
    std::shared_ptr<int64_t> pdnsId_ = nullptr;
    // The SecretKey configured for a UDP-based CIDR block.
    std::shared_ptr<string> secretKey_ = nullptr;
    // The type of the public recursive DNS service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The status of the public recursive DNS service.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the traffic analysis switch for the user in public recursive DNS service.
    std::shared_ptr<string> statisticSwitchStatus_ = nullptr;
    // The disabled public recursive DNS service.
    std::shared_ptr<string> stoppedService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
