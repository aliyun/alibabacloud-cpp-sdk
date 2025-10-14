// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMACCESSSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMACCESSSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDnsGtmAccessStrategyRequestDefaultAddrPool.hpp>
#include <alibabacloud/models/UpdateDnsGtmAccessStrategyRequestFailoverAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsGtmAccessStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPool, defaultAddrPool_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolType, defaultAddrPoolType_);
      DARABONBA_PTR_TO_JSON(DefaultLatencyOptimization, defaultLatencyOptimization_);
      DARABONBA_PTR_TO_JSON(DefaultLbaStrategy, defaultLbaStrategy_);
      DARABONBA_PTR_TO_JSON(DefaultMaxReturnAddrNum, defaultMaxReturnAddrNum_);
      DARABONBA_PTR_TO_JSON(DefaultMinAvailableAddrNum, defaultMinAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPool, failoverAddrPool_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolType, failoverAddrPoolType_);
      DARABONBA_PTR_TO_JSON(FailoverLatencyOptimization, failoverLatencyOptimization_);
      DARABONBA_PTR_TO_JSON(FailoverLbaStrategy, failoverLbaStrategy_);
      DARABONBA_PTR_TO_JSON(FailoverMaxReturnAddrNum, failoverMaxReturnAddrNum_);
      DARABONBA_PTR_TO_JSON(FailoverMinAvailableAddrNum, failoverMinAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPool, defaultAddrPool_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolType, defaultAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(DefaultLatencyOptimization, defaultLatencyOptimization_);
      DARABONBA_PTR_FROM_JSON(DefaultLbaStrategy, defaultLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(DefaultMaxReturnAddrNum, defaultMaxReturnAddrNum_);
      DARABONBA_PTR_FROM_JSON(DefaultMinAvailableAddrNum, defaultMinAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPool, failoverAddrPool_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolType, failoverAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(FailoverLatencyOptimization, failoverLatencyOptimization_);
      DARABONBA_PTR_FROM_JSON(FailoverLbaStrategy, failoverLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(FailoverMaxReturnAddrNum, failoverMaxReturnAddrNum_);
      DARABONBA_PTR_FROM_JSON(FailoverMinAvailableAddrNum, failoverMinAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    UpdateDnsGtmAccessStrategyRequest() = default ;
    UpdateDnsGtmAccessStrategyRequest(const UpdateDnsGtmAccessStrategyRequest &) = default ;
    UpdateDnsGtmAccessStrategyRequest(UpdateDnsGtmAccessStrategyRequest &&) = default ;
    UpdateDnsGtmAccessStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmAccessStrategyRequest() = default ;
    UpdateDnsGtmAccessStrategyRequest& operator=(const UpdateDnsGtmAccessStrategyRequest &) = default ;
    UpdateDnsGtmAccessStrategyRequest& operator=(UpdateDnsGtmAccessStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessMode_ == nullptr
        && return this->defaultAddrPool_ == nullptr && return this->defaultAddrPoolType_ == nullptr && return this->defaultLatencyOptimization_ == nullptr && return this->defaultLbaStrategy_ == nullptr && return this->defaultMaxReturnAddrNum_ == nullptr
        && return this->defaultMinAvailableAddrNum_ == nullptr && return this->failoverAddrPool_ == nullptr && return this->failoverAddrPoolType_ == nullptr && return this->failoverLatencyOptimization_ == nullptr && return this->failoverLbaStrategy_ == nullptr
        && return this->failoverMaxReturnAddrNum_ == nullptr && return this->failoverMinAvailableAddrNum_ == nullptr && return this->lang_ == nullptr && return this->lines_ == nullptr && return this->strategyId_ == nullptr
        && return this->strategyName_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // defaultAddrPool Field Functions 
    bool hasDefaultAddrPool() const { return this->defaultAddrPool_ != nullptr;};
    void deleteDefaultAddrPool() { this->defaultAddrPool_ = nullptr;};
    inline const vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool> & defaultAddrPool() const { DARABONBA_PTR_GET_CONST(defaultAddrPool_, vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool>) };
    inline vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool> defaultAddrPool() { DARABONBA_PTR_GET(defaultAddrPool_, vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool>) };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultAddrPool(const vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool> & defaultAddrPool) { DARABONBA_PTR_SET_VALUE(defaultAddrPool_, defaultAddrPool) };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultAddrPool(vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool> && defaultAddrPool) { DARABONBA_PTR_SET_RVALUE(defaultAddrPool_, defaultAddrPool) };


    // defaultAddrPoolType Field Functions 
    bool hasDefaultAddrPoolType() const { return this->defaultAddrPoolType_ != nullptr;};
    void deleteDefaultAddrPoolType() { this->defaultAddrPoolType_ = nullptr;};
    inline string defaultAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolType_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultAddrPoolType(string defaultAddrPoolType) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolType_, defaultAddrPoolType) };


    // defaultLatencyOptimization Field Functions 
    bool hasDefaultLatencyOptimization() const { return this->defaultLatencyOptimization_ != nullptr;};
    void deleteDefaultLatencyOptimization() { this->defaultLatencyOptimization_ = nullptr;};
    inline string defaultLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(defaultLatencyOptimization_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultLatencyOptimization(string defaultLatencyOptimization) { DARABONBA_PTR_SET_VALUE(defaultLatencyOptimization_, defaultLatencyOptimization) };


    // defaultLbaStrategy Field Functions 
    bool hasDefaultLbaStrategy() const { return this->defaultLbaStrategy_ != nullptr;};
    void deleteDefaultLbaStrategy() { this->defaultLbaStrategy_ = nullptr;};
    inline string defaultLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(defaultLbaStrategy_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultLbaStrategy(string defaultLbaStrategy) { DARABONBA_PTR_SET_VALUE(defaultLbaStrategy_, defaultLbaStrategy) };


    // defaultMaxReturnAddrNum Field Functions 
    bool hasDefaultMaxReturnAddrNum() const { return this->defaultMaxReturnAddrNum_ != nullptr;};
    void deleteDefaultMaxReturnAddrNum() { this->defaultMaxReturnAddrNum_ = nullptr;};
    inline int32_t defaultMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMaxReturnAddrNum_, 0) };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultMaxReturnAddrNum(int32_t defaultMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMaxReturnAddrNum_, defaultMaxReturnAddrNum) };


    // defaultMinAvailableAddrNum Field Functions 
    bool hasDefaultMinAvailableAddrNum() const { return this->defaultMinAvailableAddrNum_ != nullptr;};
    void deleteDefaultMinAvailableAddrNum() { this->defaultMinAvailableAddrNum_ = nullptr;};
    inline int32_t defaultMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMinAvailableAddrNum_, 0) };
    inline UpdateDnsGtmAccessStrategyRequest& setDefaultMinAvailableAddrNum(int32_t defaultMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMinAvailableAddrNum_, defaultMinAvailableAddrNum) };


    // failoverAddrPool Field Functions 
    bool hasFailoverAddrPool() const { return this->failoverAddrPool_ != nullptr;};
    void deleteFailoverAddrPool() { this->failoverAddrPool_ = nullptr;};
    inline const vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool> & failoverAddrPool() const { DARABONBA_PTR_GET_CONST(failoverAddrPool_, vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool>) };
    inline vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool> failoverAddrPool() { DARABONBA_PTR_GET(failoverAddrPool_, vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool>) };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverAddrPool(const vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool> & failoverAddrPool) { DARABONBA_PTR_SET_VALUE(failoverAddrPool_, failoverAddrPool) };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverAddrPool(vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool> && failoverAddrPool) { DARABONBA_PTR_SET_RVALUE(failoverAddrPool_, failoverAddrPool) };


    // failoverAddrPoolType Field Functions 
    bool hasFailoverAddrPoolType() const { return this->failoverAddrPoolType_ != nullptr;};
    void deleteFailoverAddrPoolType() { this->failoverAddrPoolType_ = nullptr;};
    inline string failoverAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolType_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverAddrPoolType(string failoverAddrPoolType) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolType_, failoverAddrPoolType) };


    // failoverLatencyOptimization Field Functions 
    bool hasFailoverLatencyOptimization() const { return this->failoverLatencyOptimization_ != nullptr;};
    void deleteFailoverLatencyOptimization() { this->failoverLatencyOptimization_ = nullptr;};
    inline string failoverLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(failoverLatencyOptimization_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverLatencyOptimization(string failoverLatencyOptimization) { DARABONBA_PTR_SET_VALUE(failoverLatencyOptimization_, failoverLatencyOptimization) };


    // failoverLbaStrategy Field Functions 
    bool hasFailoverLbaStrategy() const { return this->failoverLbaStrategy_ != nullptr;};
    void deleteFailoverLbaStrategy() { this->failoverLbaStrategy_ = nullptr;};
    inline string failoverLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(failoverLbaStrategy_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverLbaStrategy(string failoverLbaStrategy) { DARABONBA_PTR_SET_VALUE(failoverLbaStrategy_, failoverLbaStrategy) };


    // failoverMaxReturnAddrNum Field Functions 
    bool hasFailoverMaxReturnAddrNum() const { return this->failoverMaxReturnAddrNum_ != nullptr;};
    void deleteFailoverMaxReturnAddrNum() { this->failoverMaxReturnAddrNum_ = nullptr;};
    inline int32_t failoverMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMaxReturnAddrNum_, 0) };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverMaxReturnAddrNum(int32_t failoverMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMaxReturnAddrNum_, failoverMaxReturnAddrNum) };


    // failoverMinAvailableAddrNum Field Functions 
    bool hasFailoverMinAvailableAddrNum() const { return this->failoverMinAvailableAddrNum_ != nullptr;};
    void deleteFailoverMinAvailableAddrNum() { this->failoverMinAvailableAddrNum_ = nullptr;};
    inline int32_t failoverMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMinAvailableAddrNum_, 0) };
    inline UpdateDnsGtmAccessStrategyRequest& setFailoverMinAvailableAddrNum(int32_t failoverMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMinAvailableAddrNum_, failoverMinAvailableAddrNum) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline string lines() const { DARABONBA_PTR_GET_DEFAULT(lines_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setLines(string lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline UpdateDnsGtmAccessStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The primary/secondary switchover policy for address pool sets. Valid values:
    // 
    // *   AUTO: performs automatic switchover between the primary and secondary address pool sets upon failures.
    // *   DEFAULT: the primary address pool set
    // *   FAILOVER: the secondary address pool set
    std::shared_ptr<string> accessMode_ = nullptr;
    // The address pools in the primary address pool set.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateDnsGtmAccessStrategyRequestDefaultAddrPool>> defaultAddrPool_ = nullptr;
    // The type of the primary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    // 
    // This parameter is required.
    std::shared_ptr<string> defaultAddrPoolType_ = nullptr;
    // Specifies whether to enable Domain Name System (DNS) resolution with optimal latency for the primary address pool set. Valid values:
    // 
    // *   OPEN
    // *   CLOSE
    std::shared_ptr<string> defaultLatencyOptimization_ = nullptr;
    // The load balancing policy of the primary address pool set. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    std::shared_ptr<string> defaultLbaStrategy_ = nullptr;
    // The maximum number of addresses returned from the primary address pool set.
    std::shared_ptr<int32_t> defaultMaxReturnAddrNum_ = nullptr;
    // The minimum number of available addresses in the primary address pool set.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> defaultMinAvailableAddrNum_ = nullptr;
    // The address pools in the secondary address pool set. If no address pool exists in the secondary address pool set, set this parameter to EMPTY.
    std::shared_ptr<vector<UpdateDnsGtmAccessStrategyRequestFailoverAddrPool>> failoverAddrPool_ = nullptr;
    // The type of the secondary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    std::shared_ptr<string> failoverAddrPoolType_ = nullptr;
    // Specifies whether to enable DNS resolution with optimal latency for the secondary address pool set. Valid values:
    // 
    // *   OPEN
    // *   CLOSE
    std::shared_ptr<string> failoverLatencyOptimization_ = nullptr;
    // The load balancing policy of the secondary address pool set. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    std::shared_ptr<string> failoverLbaStrategy_ = nullptr;
    // The maximum number of addresses returned from the secondary address pool set.
    std::shared_ptr<int32_t> failoverMaxReturnAddrNum_ = nullptr;
    // The minimum number of available addresses in the secondary address pool set.
    std::shared_ptr<int32_t> failoverMinAvailableAddrNum_ = nullptr;
    // The language of the values for specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // The line codes of the source regions. Example: `["default", "drpeng"]`, which indicates the global line and Dr. Peng Group line.
    std::shared_ptr<string> lines_ = nullptr;
    // The ID of the access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyId_ = nullptr;
    // The name of the access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
