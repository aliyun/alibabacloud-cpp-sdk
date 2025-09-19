// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPRESPONSEBODYCLIENTCONF_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPRESPONSEBODYCLIENTCONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfSetupResponseBodyClientConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfSetupResponseBodyClientConf& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(StrategyTag, strategyTag_);
      DARABONBA_PTR_TO_JSON(StrategyTagValue, strategyTagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfSetupResponseBodyClientConf& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(StrategyTag, strategyTag_);
      DARABONBA_PTR_FROM_JSON(StrategyTagValue, strategyTagValue_);
    };
    DescribeClientConfSetupResponseBodyClientConf() = default ;
    DescribeClientConfSetupResponseBodyClientConf(const DescribeClientConfSetupResponseBodyClientConf &) = default ;
    DescribeClientConfSetupResponseBodyClientConf(DescribeClientConfSetupResponseBodyClientConf &&) = default ;
    DescribeClientConfSetupResponseBodyClientConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfSetupResponseBodyClientConf() = default ;
    DescribeClientConfSetupResponseBodyClientConf& operator=(const DescribeClientConfSetupResponseBodyClientConf &) = default ;
    DescribeClientConfSetupResponseBodyClientConf& operator=(DescribeClientConfSetupResponseBodyClientConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->strategyTag_ != nullptr && this->strategyTagValue_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeClientConfSetupResponseBodyClientConf& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // strategyTag Field Functions 
    bool hasStrategyTag() const { return this->strategyTag_ != nullptr;};
    void deleteStrategyTag() { this->strategyTag_ = nullptr;};
    inline string strategyTag() const { DARABONBA_PTR_GET_DEFAULT(strategyTag_, "") };
    inline DescribeClientConfSetupResponseBodyClientConf& setStrategyTag(string strategyTag) { DARABONBA_PTR_SET_VALUE(strategyTag_, strategyTag) };


    // strategyTagValue Field Functions 
    bool hasStrategyTagValue() const { return this->strategyTagValue_ != nullptr;};
    void deleteStrategyTagValue() { this->strategyTagValue_ = nullptr;};
    inline string strategyTagValue() const { DARABONBA_PTR_GET_DEFAULT(strategyTagValue_, "") };
    inline DescribeClientConfSetupResponseBodyClientConf& setStrategyTagValue(string strategyTagValue) { DARABONBA_PTR_SET_VALUE(strategyTagValue_, strategyTagValue) };


  protected:
    // The configurations of the usage for the Security Center agent.
    std::shared_ptr<string> config_ = nullptr;
    // The tag that is added to the configuration.
    std::shared_ptr<string> strategyTag_ = nullptr;
    // The value of the tag. Valid values:
    // 
    // *   major
    // *   advanced
    // *   basic
    std::shared_ptr<string> strategyTagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
