// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListEffectiveAssetsResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListEffectiveAssetsResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(ProcessMethod, processMethod_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(SuspiciousEventCount, suspiciousEventCount_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListEffectiveAssetsResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(ProcessMethod, processMethod_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(SuspiciousEventCount, suspiciousEventCount_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeWhiteListEffectiveAssetsResponseBodyAssets() = default ;
    DescribeWhiteListEffectiveAssetsResponseBodyAssets(const DescribeWhiteListEffectiveAssetsResponseBodyAssets &) = default ;
    DescribeWhiteListEffectiveAssetsResponseBodyAssets(DescribeWhiteListEffectiveAssetsResponseBodyAssets &&) = default ;
    DescribeWhiteListEffectiveAssetsResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListEffectiveAssetsResponseBodyAssets() = default ;
    DescribeWhiteListEffectiveAssetsResponseBodyAssets& operator=(const DescribeWhiteListEffectiveAssetsResponseBodyAssets &) = default ;
    DescribeWhiteListEffectiveAssetsResponseBodyAssets& operator=(DescribeWhiteListEffectiveAssetsResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->machineName_ == nullptr && return this->processMethod_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr
        && return this->suspiciousEventCount_ == nullptr && return this->uuid_ == nullptr; };
    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // processMethod Field Functions 
    bool hasProcessMethod() const { return this->processMethod_ != nullptr;};
    void deleteProcessMethod() { this->processMethod_ = nullptr;};
    inline int32_t processMethod() const { DARABONBA_PTR_GET_DEFAULT(processMethod_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setProcessMethod(int32_t processMethod) { DARABONBA_PTR_SET_VALUE(processMethod_, processMethod) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // suspiciousEventCount Field Functions 
    bool hasSuspiciousEventCount() const { return this->suspiciousEventCount_ != nullptr;};
    void deleteSuspiciousEventCount() { this->suspiciousEventCount_ = nullptr;};
    inline int32_t suspiciousEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventCount_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setSuspiciousEventCount(int32_t suspiciousEventCount) { DARABONBA_PTR_SET_VALUE(suspiciousEventCount_, suspiciousEventCount) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBodyAssets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> machineName_ = nullptr;
    // The exception handling mode. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: alerted
    // *   **2**: blocked
    std::shared_ptr<int32_t> processMethod_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The number of **untrusted programs** on the server.
    std::shared_ptr<int32_t> suspiciousEventCount_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
