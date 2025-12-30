// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMACCESSSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMACCESSSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class FailoverAddrPool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailoverAddrPool& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      };
      friend void from_json(const Darabonba::Json& j, FailoverAddrPool& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      };
      FailoverAddrPool() = default ;
      FailoverAddrPool(const FailoverAddrPool &) = default ;
      FailoverAddrPool(FailoverAddrPool &&) = default ;
      FailoverAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailoverAddrPool() = default ;
      FailoverAddrPool& operator=(const FailoverAddrPool &) = default ;
      FailoverAddrPool& operator=(FailoverAddrPool &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->lbaWeight_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline FailoverAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lbaWeight Field Functions 
      bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
      void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
      inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
      inline FailoverAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    protected:
      // The ID of the address pool in the secondary address pool set.
      shared_ptr<string> id_ {};
      // The weight of the address pool in the secondary address pool set.
      shared_ptr<int32_t> lbaWeight_ {};
    };

    class DefaultAddrPool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultAddrPool& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultAddrPool& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      };
      DefaultAddrPool() = default ;
      DefaultAddrPool(const DefaultAddrPool &) = default ;
      DefaultAddrPool(DefaultAddrPool &&) = default ;
      DefaultAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultAddrPool() = default ;
      DefaultAddrPool& operator=(const DefaultAddrPool &) = default ;
      DefaultAddrPool& operator=(DefaultAddrPool &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->lbaWeight_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DefaultAddrPool& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lbaWeight Field Functions 
      bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
      void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
      inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
      inline DefaultAddrPool& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    protected:
      // The ID of the address pool in the primary address pool set.
      shared_ptr<string> id_ {};
      // The weight of the address pool in the primary address pool set.
      shared_ptr<int32_t> lbaWeight_ {};
    };

    virtual bool empty() const override { return this->defaultAddrPool_ == nullptr
        && this->defaultAddrPoolType_ == nullptr && this->defaultLatencyOptimization_ == nullptr && this->defaultLbaStrategy_ == nullptr && this->defaultMaxReturnAddrNum_ == nullptr && this->defaultMinAvailableAddrNum_ == nullptr
        && this->failoverAddrPool_ == nullptr && this->failoverAddrPoolType_ == nullptr && this->failoverLatencyOptimization_ == nullptr && this->failoverLbaStrategy_ == nullptr && this->failoverMaxReturnAddrNum_ == nullptr
        && this->failoverMinAvailableAddrNum_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->lines_ == nullptr && this->strategyMode_ == nullptr
        && this->strategyName_ == nullptr; };
    // defaultAddrPool Field Functions 
    bool hasDefaultAddrPool() const { return this->defaultAddrPool_ != nullptr;};
    void deleteDefaultAddrPool() { this->defaultAddrPool_ = nullptr;};
    inline const vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool> & getDefaultAddrPool() const { DARABONBA_PTR_GET_CONST(defaultAddrPool_, vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool>) };
    inline vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool> getDefaultAddrPool() { DARABONBA_PTR_GET(defaultAddrPool_, vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool>) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultAddrPool(const vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool> & defaultAddrPool) { DARABONBA_PTR_SET_VALUE(defaultAddrPool_, defaultAddrPool) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultAddrPool(vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool> && defaultAddrPool) { DARABONBA_PTR_SET_RVALUE(defaultAddrPool_, defaultAddrPool) };


    // defaultAddrPoolType Field Functions 
    bool hasDefaultAddrPoolType() const { return this->defaultAddrPoolType_ != nullptr;};
    void deleteDefaultAddrPoolType() { this->defaultAddrPoolType_ = nullptr;};
    inline string getDefaultAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolType_, "") };
    inline AddDnsGtmAccessStrategyRequest& setDefaultAddrPoolType(string defaultAddrPoolType) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolType_, defaultAddrPoolType) };


    // defaultLatencyOptimization Field Functions 
    bool hasDefaultLatencyOptimization() const { return this->defaultLatencyOptimization_ != nullptr;};
    void deleteDefaultLatencyOptimization() { this->defaultLatencyOptimization_ = nullptr;};
    inline string getDefaultLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(defaultLatencyOptimization_, "") };
    inline AddDnsGtmAccessStrategyRequest& setDefaultLatencyOptimization(string defaultLatencyOptimization) { DARABONBA_PTR_SET_VALUE(defaultLatencyOptimization_, defaultLatencyOptimization) };


    // defaultLbaStrategy Field Functions 
    bool hasDefaultLbaStrategy() const { return this->defaultLbaStrategy_ != nullptr;};
    void deleteDefaultLbaStrategy() { this->defaultLbaStrategy_ = nullptr;};
    inline string getDefaultLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(defaultLbaStrategy_, "") };
    inline AddDnsGtmAccessStrategyRequest& setDefaultLbaStrategy(string defaultLbaStrategy) { DARABONBA_PTR_SET_VALUE(defaultLbaStrategy_, defaultLbaStrategy) };


    // defaultMaxReturnAddrNum Field Functions 
    bool hasDefaultMaxReturnAddrNum() const { return this->defaultMaxReturnAddrNum_ != nullptr;};
    void deleteDefaultMaxReturnAddrNum() { this->defaultMaxReturnAddrNum_ = nullptr;};
    inline int32_t getDefaultMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMaxReturnAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultMaxReturnAddrNum(int32_t defaultMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMaxReturnAddrNum_, defaultMaxReturnAddrNum) };


    // defaultMinAvailableAddrNum Field Functions 
    bool hasDefaultMinAvailableAddrNum() const { return this->defaultMinAvailableAddrNum_ != nullptr;};
    void deleteDefaultMinAvailableAddrNum() { this->defaultMinAvailableAddrNum_ = nullptr;};
    inline int32_t getDefaultMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMinAvailableAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setDefaultMinAvailableAddrNum(int32_t defaultMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMinAvailableAddrNum_, defaultMinAvailableAddrNum) };


    // failoverAddrPool Field Functions 
    bool hasFailoverAddrPool() const { return this->failoverAddrPool_ != nullptr;};
    void deleteFailoverAddrPool() { this->failoverAddrPool_ = nullptr;};
    inline const vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool> & getFailoverAddrPool() const { DARABONBA_PTR_GET_CONST(failoverAddrPool_, vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool>) };
    inline vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool> getFailoverAddrPool() { DARABONBA_PTR_GET(failoverAddrPool_, vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool>) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverAddrPool(const vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool> & failoverAddrPool) { DARABONBA_PTR_SET_VALUE(failoverAddrPool_, failoverAddrPool) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverAddrPool(vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool> && failoverAddrPool) { DARABONBA_PTR_SET_RVALUE(failoverAddrPool_, failoverAddrPool) };


    // failoverAddrPoolType Field Functions 
    bool hasFailoverAddrPoolType() const { return this->failoverAddrPoolType_ != nullptr;};
    void deleteFailoverAddrPoolType() { this->failoverAddrPoolType_ = nullptr;};
    inline string getFailoverAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolType_, "") };
    inline AddDnsGtmAccessStrategyRequest& setFailoverAddrPoolType(string failoverAddrPoolType) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolType_, failoverAddrPoolType) };


    // failoverLatencyOptimization Field Functions 
    bool hasFailoverLatencyOptimization() const { return this->failoverLatencyOptimization_ != nullptr;};
    void deleteFailoverLatencyOptimization() { this->failoverLatencyOptimization_ = nullptr;};
    inline string getFailoverLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(failoverLatencyOptimization_, "") };
    inline AddDnsGtmAccessStrategyRequest& setFailoverLatencyOptimization(string failoverLatencyOptimization) { DARABONBA_PTR_SET_VALUE(failoverLatencyOptimization_, failoverLatencyOptimization) };


    // failoverLbaStrategy Field Functions 
    bool hasFailoverLbaStrategy() const { return this->failoverLbaStrategy_ != nullptr;};
    void deleteFailoverLbaStrategy() { this->failoverLbaStrategy_ = nullptr;};
    inline string getFailoverLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(failoverLbaStrategy_, "") };
    inline AddDnsGtmAccessStrategyRequest& setFailoverLbaStrategy(string failoverLbaStrategy) { DARABONBA_PTR_SET_VALUE(failoverLbaStrategy_, failoverLbaStrategy) };


    // failoverMaxReturnAddrNum Field Functions 
    bool hasFailoverMaxReturnAddrNum() const { return this->failoverMaxReturnAddrNum_ != nullptr;};
    void deleteFailoverMaxReturnAddrNum() { this->failoverMaxReturnAddrNum_ = nullptr;};
    inline int32_t getFailoverMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMaxReturnAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverMaxReturnAddrNum(int32_t failoverMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMaxReturnAddrNum_, failoverMaxReturnAddrNum) };


    // failoverMinAvailableAddrNum Field Functions 
    bool hasFailoverMinAvailableAddrNum() const { return this->failoverMinAvailableAddrNum_ != nullptr;};
    void deleteFailoverMinAvailableAddrNum() { this->failoverMinAvailableAddrNum_ = nullptr;};
    inline int32_t getFailoverMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMinAvailableAddrNum_, 0) };
    inline AddDnsGtmAccessStrategyRequest& setFailoverMinAvailableAddrNum(int32_t failoverMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMinAvailableAddrNum_, failoverMinAvailableAddrNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDnsGtmAccessStrategyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsGtmAccessStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline string getLines() const { DARABONBA_PTR_GET_DEFAULT(lines_, "") };
    inline AddDnsGtmAccessStrategyRequest& setLines(string lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string getStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline AddDnsGtmAccessStrategyRequest& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline AddDnsGtmAccessStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The address pools in the primary address pool set.
    // 
    // This parameter is required.
    shared_ptr<vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool>> defaultAddrPool_ {};
    // The type of the primary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    // 
    // This parameter is required.
    shared_ptr<string> defaultAddrPoolType_ {};
    // Specifies whether to enable DNS resolution with optimal latency for the primary address pool set. Valid values:
    // 
    // *   OPEN
    // *   CLOSE
    shared_ptr<string> defaultLatencyOptimization_ {};
    // The load balancing policy of the primary address pool set. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    shared_ptr<string> defaultLbaStrategy_ {};
    // The maximum number of addresses returned from the primary address pool set.
    shared_ptr<int32_t> defaultMaxReturnAddrNum_ {};
    // The minimum number of available addresses in the primary address pool set.
    // 
    // This parameter is required.
    shared_ptr<int32_t> defaultMinAvailableAddrNum_ {};
    // The address pools in the secondary address pool set. If no address pool exists in the secondary address pool set, set this parameter to EMPTY.
    shared_ptr<vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool>> failoverAddrPool_ {};
    // The type of the secondary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    shared_ptr<string> failoverAddrPoolType_ {};
    // Specifies whether to enable DNS resolution with optimal latency for the secondary address pool set. Valid values:
    // 
    // *   OPEN
    // *   CLOSE
    shared_ptr<string> failoverLatencyOptimization_ {};
    // The load balancing policy of the secondary address pool set. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    shared_ptr<string> failoverLbaStrategy_ {};
    // The maximum number of addresses returned from the secondary address pool set.
    shared_ptr<int32_t> failoverMaxReturnAddrNum_ {};
    // The minimum number of available addresses in the secondary address pool set.
    shared_ptr<int32_t> failoverMinAvailableAddrNum_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the values for specific response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The Domain Name System (DNS) request source. For example: `["default", "drpeng"]` indicates Global and Dr. Peng Group.
    shared_ptr<string> lines_ {};
    // The type of the access policy. Valid values:
    // 
    // *   GEO: geographical location-based access policy
    // *   LATENCY: latency-based access policy
    // 
    // This parameter is required.
    shared_ptr<string> strategyMode_ {};
    // The name of the access policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
