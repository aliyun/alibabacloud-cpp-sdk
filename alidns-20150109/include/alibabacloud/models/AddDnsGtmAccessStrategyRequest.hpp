// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMACCESSSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMACCESSSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDnsGtmAccessStrategyRequestDefaultAddrPool.hpp>
#include <alibabacloud/models/AddDnsGtmAccessStrategyRequestFailoverAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsGtmAccessStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmAccessStrategyRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmAccessStrategyRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    AddDnsGtmAccessStrategyRequest() = default ;
    AddDnsGtmAccessStrategyRequest(const AddDnsGtmAccessStrategyRequest &) = default ;
    AddDnsGtmAccessStrategyRequest(AddDnsGtmAccessStrategyRequest &&) = default ;
    AddDnsGtmAccessStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmAccessStrategyRequest() = default ;
    AddDnsGtmAccessStrategyRequest& operator=(const AddDnsGtmAccessStrategyRequest &) = default ;
    AddDnsGtmAccessStrategyRequest& operator=(AddDnsGtmAccessStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultAddrPool_ != nullptr
        && this->defaultAddrPoolType_ != nullptr && this->defaultLatencyOptimization_ != nullptr && this->defaultLbaStrategy_ != nullptr && this->defaultMaxReturnAddrNum_ != nullptr && this->defaultMinAvailableAddrNum_ != nullptr
        && this->failoverAddrPool_ != nullptr && this->failoverAddrPoolType_ != nullptr && this->failoverLatencyOptimization_ != nullptr && this->failoverLbaStrategy_ != nullptr && this->failoverMaxReturnAddrNum_ != nullptr
        && this->failoverMinAvailableAddrNum_ != nullptr && this->instanceId_ != nullptr && this->lang_ != nullptr && this->lines_ != nullptr && this->strategyMode_ != nullptr
        && this->strategyName_ != nullptr; };
    // defaultAddrPool Field Functions 
    bool hasDefaultAddrPool() const { return this->defaultAddrPool_ != nullptr;};
    void deleteDefaultAddrPool() { this->defaultAddrPool_ = nullptr;};
    inline const vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool> & defaultAddrPool() const { DARABONBA_PTR_GET_CONST(defaultAddrPool_, vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool>) };
    inline vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool> defaultAddrPool() { DARABONBA_PTR_GET(defaultAddrPool_, vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool>) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultAddrPool(const vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool> & defaultAddrPool) { DARABONBA_PTR_SET_VALUE(defaultAddrPool_, defaultAddrPool) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultAddrPool(vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool> && defaultAddrPool) { DARABONBA_PTR_SET_RVALUE(defaultAddrPool_, defaultAddrPool) };


    // defaultAddrPoolType Field Functions 
    bool hasDefaultAddrPoolType() const { return this->defaultAddrPoolType_ != nullptr;};
    void deleteDefaultAddrPoolType() { this->defaultAddrPoolType_ = nullptr;};
    inline string defaultAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolType_, "") };
    inline AddDnsGtmAccessStrategyRequest& setDefaultAddrPoolType(string defaultAddrPoolType) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolType_, defaultAddrPoolType) };


    // defaultLatencyOptimization Field Functions 
    bool hasDefaultLatencyOptimization() const { return this->defaultLatencyOptimization_ != nullptr;};
    void deleteDefaultLatencyOptimization() { this->defaultLatencyOptimization_ = nullptr;};
    inline string defaultLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(defaultLatencyOptimization_, "") };
    inline AddDnsGtmAccessStrategyRequest& setDefaultLatencyOptimization(string defaultLatencyOptimization) { DARABONBA_PTR_SET_VALUE(defaultLatencyOptimization_, defaultLatencyOptimization) };


    // defaultLbaStrategy Field Functions 
    bool hasDefaultLbaStrategy() const { return this->defaultLbaStrategy_ != nullptr;};
    void deleteDefaultLbaStrategy() { this->defaultLbaStrategy_ = nullptr;};
    inline string defaultLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(defaultLbaStrategy_, "") };
    inline AddDnsGtmAccessStrategyRequest& setDefaultLbaStrategy(string defaultLbaStrategy) { DARABONBA_PTR_SET_VALUE(defaultLbaStrategy_, defaultLbaStrategy) };


    // defaultMaxReturnAddrNum Field Functions 
    bool hasDefaultMaxReturnAddrNum() const { return this->defaultMaxReturnAddrNum_ != nullptr;};
    void deleteDefaultMaxReturnAddrNum() { this->defaultMaxReturnAddrNum_ = nullptr;};
    inline int32_t defaultMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMaxReturnAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultMaxReturnAddrNum(int32_t defaultMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMaxReturnAddrNum_, defaultMaxReturnAddrNum) };


    // defaultMinAvailableAddrNum Field Functions 
    bool hasDefaultMinAvailableAddrNum() const { return this->defaultMinAvailableAddrNum_ != nullptr;};
    void deleteDefaultMinAvailableAddrNum() { this->defaultMinAvailableAddrNum_ = nullptr;};
    inline int32_t defaultMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMinAvailableAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultMinAvailableAddrNum(int32_t defaultMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMinAvailableAddrNum_, defaultMinAvailableAddrNum) };


    // failoverAddrPool Field Functions 
    bool hasFailoverAddrPool() const { return this->failoverAddrPool_ != nullptr;};
    void deleteFailoverAddrPool() { this->failoverAddrPool_ = nullptr;};
    inline const vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool> & failoverAddrPool() const { DARABONBA_PTR_GET_CONST(failoverAddrPool_, vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool>) };
    inline vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool> failoverAddrPool() { DARABONBA_PTR_GET(failoverAddrPool_, vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool>) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverAddrPool(const vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool> & failoverAddrPool) { DARABONBA_PTR_SET_VALUE(failoverAddrPool_, failoverAddrPool) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverAddrPool(vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool> && failoverAddrPool) { DARABONBA_PTR_SET_RVALUE(failoverAddrPool_, failoverAddrPool) };


    // failoverAddrPoolType Field Functions 
    bool hasFailoverAddrPoolType() const { return this->failoverAddrPoolType_ != nullptr;};
    void deleteFailoverAddrPoolType() { this->failoverAddrPoolType_ = nullptr;};
    inline string failoverAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolType_, "") };
    inline AddDnsGtmAccessStrategyRequest& setFailoverAddrPoolType(string failoverAddrPoolType) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolType_, failoverAddrPoolType) };


    // failoverLatencyOptimization Field Functions 
    bool hasFailoverLatencyOptimization() const { return this->failoverLatencyOptimization_ != nullptr;};
    void deleteFailoverLatencyOptimization() { this->failoverLatencyOptimization_ = nullptr;};
    inline string failoverLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(failoverLatencyOptimization_, "") };
    inline AddDnsGtmAccessStrategyRequest& setFailoverLatencyOptimization(string failoverLatencyOptimization) { DARABONBA_PTR_SET_VALUE(failoverLatencyOptimization_, failoverLatencyOptimization) };


    // failoverLbaStrategy Field Functions 
    bool hasFailoverLbaStrategy() const { return this->failoverLbaStrategy_ != nullptr;};
    void deleteFailoverLbaStrategy() { this->failoverLbaStrategy_ = nullptr;};
    inline string failoverLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(failoverLbaStrategy_, "") };
    inline AddDnsGtmAccessStrategyRequest& setFailoverLbaStrategy(string failoverLbaStrategy) { DARABONBA_PTR_SET_VALUE(failoverLbaStrategy_, failoverLbaStrategy) };


    // failoverMaxReturnAddrNum Field Functions 
    bool hasFailoverMaxReturnAddrNum() const { return this->failoverMaxReturnAddrNum_ != nullptr;};
    void deleteFailoverMaxReturnAddrNum() { this->failoverMaxReturnAddrNum_ = nullptr;};
    inline int32_t failoverMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMaxReturnAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverMaxReturnAddrNum(int32_t failoverMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMaxReturnAddrNum_, failoverMaxReturnAddrNum) };


    // failoverMinAvailableAddrNum Field Functions 
    bool hasFailoverMinAvailableAddrNum() const { return this->failoverMinAvailableAddrNum_ != nullptr;};
    void deleteFailoverMinAvailableAddrNum() { this->failoverMinAvailableAddrNum_ = nullptr;};
    inline int32_t failoverMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMinAvailableAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverMinAvailableAddrNum(int32_t failoverMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMinAvailableAddrNum_, failoverMinAvailableAddrNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDnsGtmAccessStrategyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsGtmAccessStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline string lines() const { DARABONBA_PTR_GET_DEFAULT(lines_, "") };
    inline AddDnsGtmAccessStrategyRequest& setLines(string lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string strategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline AddDnsGtmAccessStrategyRequest& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline AddDnsGtmAccessStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The address pools in the primary address pool set.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddDnsGtmAccessStrategyRequestDefaultAddrPool>> defaultAddrPool_ = nullptr;
    // The type of the primary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    // 
    // This parameter is required.
    std::shared_ptr<string> defaultAddrPoolType_ = nullptr;
    // Specifies whether to enable DNS resolution with optimal latency for the primary address pool set. Valid values:
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
    std::shared_ptr<vector<AddDnsGtmAccessStrategyRequestFailoverAddrPool>> failoverAddrPool_ = nullptr;
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
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the values for specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // The Domain Name System (DNS) request source. For example: `["default", "drpeng"]` indicates Global and Dr. Peng Group.
    std::shared_ptr<string> lines_ = nullptr;
    // The type of the access policy. Valid values:
    // 
    // *   GEO: geographical location-based access policy
    // *   LATENCY: latency-based access policy
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyMode_ = nullptr;
    // The name of the access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
