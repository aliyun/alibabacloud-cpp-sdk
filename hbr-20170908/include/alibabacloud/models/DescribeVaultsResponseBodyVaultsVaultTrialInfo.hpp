// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTTRIALINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTTRIALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVaultTrialInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVaultTrialInfo& obj) { 
      DARABONBA_PTR_TO_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
      DARABONBA_PTR_TO_JSON(TrialExpireTime, trialExpireTime_);
      DARABONBA_PTR_TO_JSON(TrialStartTime, trialStartTime_);
      DARABONBA_PTR_TO_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVaultTrialInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
      DARABONBA_PTR_FROM_JSON(TrialExpireTime, trialExpireTime_);
      DARABONBA_PTR_FROM_JSON(TrialStartTime, trialStartTime_);
      DARABONBA_PTR_FROM_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
    };
    DescribeVaultsResponseBodyVaultsVaultTrialInfo() = default ;
    DescribeVaultsResponseBodyVaultsVaultTrialInfo(const DescribeVaultsResponseBodyVaultsVaultTrialInfo &) = default ;
    DescribeVaultsResponseBodyVaultsVaultTrialInfo(DescribeVaultsResponseBodyVaultsVaultTrialInfo &&) = default ;
    DescribeVaultsResponseBodyVaultsVaultTrialInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVaultTrialInfo() = default ;
    DescribeVaultsResponseBodyVaultsVaultTrialInfo& operator=(const DescribeVaultsResponseBodyVaultsVaultTrialInfo &) = default ;
    DescribeVaultsResponseBodyVaultsVaultTrialInfo& operator=(DescribeVaultsResponseBodyVaultsVaultTrialInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keepAfterTrialExpiration_ == nullptr
        && return this->trialExpireTime_ == nullptr && return this->trialStartTime_ == nullptr && return this->trialVaultReleaseTime_ == nullptr; };
    // keepAfterTrialExpiration Field Functions 
    bool hasKeepAfterTrialExpiration() const { return this->keepAfterTrialExpiration_ != nullptr;};
    void deleteKeepAfterTrialExpiration() { this->keepAfterTrialExpiration_ = nullptr;};
    inline bool keepAfterTrialExpiration() const { DARABONBA_PTR_GET_DEFAULT(keepAfterTrialExpiration_, false) };
    inline DescribeVaultsResponseBodyVaultsVaultTrialInfo& setKeepAfterTrialExpiration(bool keepAfterTrialExpiration) { DARABONBA_PTR_SET_VALUE(keepAfterTrialExpiration_, keepAfterTrialExpiration) };


    // trialExpireTime Field Functions 
    bool hasTrialExpireTime() const { return this->trialExpireTime_ != nullptr;};
    void deleteTrialExpireTime() { this->trialExpireTime_ = nullptr;};
    inline int64_t trialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(trialExpireTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVaultTrialInfo& setTrialExpireTime(int64_t trialExpireTime) { DARABONBA_PTR_SET_VALUE(trialExpireTime_, trialExpireTime) };


    // trialStartTime Field Functions 
    bool hasTrialStartTime() const { return this->trialStartTime_ != nullptr;};
    void deleteTrialStartTime() { this->trialStartTime_ = nullptr;};
    inline int64_t trialStartTime() const { DARABONBA_PTR_GET_DEFAULT(trialStartTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVaultTrialInfo& setTrialStartTime(int64_t trialStartTime) { DARABONBA_PTR_SET_VALUE(trialStartTime_, trialStartTime) };


    // trialVaultReleaseTime Field Functions 
    bool hasTrialVaultReleaseTime() const { return this->trialVaultReleaseTime_ != nullptr;};
    void deleteTrialVaultReleaseTime() { this->trialVaultReleaseTime_ = nullptr;};
    inline int64_t trialVaultReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(trialVaultReleaseTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVaultTrialInfo& setTrialVaultReleaseTime(int64_t trialVaultReleaseTime) { DARABONBA_PTR_SET_VALUE(trialVaultReleaseTime_, trialVaultReleaseTime) };


  protected:
    // Indicates whether you are billed based on the pay-as-you-go method after the free trial ends.
    std::shared_ptr<bool> keepAfterTrialExpiration_ = nullptr;
    // The expiration time of the free trial.
    std::shared_ptr<int64_t> trialExpireTime_ = nullptr;
    // The start time of the free trial.
    std::shared_ptr<int64_t> trialStartTime_ = nullptr;
    // The time when the free-trial backup vault is released.
    std::shared_ptr<int64_t> trialVaultReleaseTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
