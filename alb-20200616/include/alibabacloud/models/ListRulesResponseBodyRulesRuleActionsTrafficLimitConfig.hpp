// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSTRAFFICLIMITCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSTRAFFICLIMITCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PerIpQps, perIpQps_);
      DARABONBA_PTR_TO_JSON(QPS, QPS_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PerIpQps, perIpQps_);
      DARABONBA_PTR_FROM_JSON(QPS, QPS_);
    };
    ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig(const ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig(ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig &&) = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig& operator=(const ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig& operator=(ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->perIpQps_ != nullptr
        && this->QPS_ != nullptr; };
    // perIpQps Field Functions 
    bool hasPerIpQps() const { return this->perIpQps_ != nullptr;};
    void deletePerIpQps() { this->perIpQps_ = nullptr;};
    inline int32_t perIpQps() const { DARABONBA_PTR_GET_DEFAULT(perIpQps_, 0) };
    inline ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig& setPerIpQps(int32_t perIpQps) { DARABONBA_PTR_SET_VALUE(perIpQps_, perIpQps) };


    // QPS Field Functions 
    bool hasQPS() const { return this->QPS_ != nullptr;};
    void deleteQPS() { this->QPS_ = nullptr;};
    inline int32_t QPS() const { DARABONBA_PTR_GET_DEFAULT(QPS_, 0) };
    inline ListRulesResponseBodyRulesRuleActionsTrafficLimitConfig& setQPS(int32_t QPS) { DARABONBA_PTR_SET_VALUE(QPS_, QPS) };


  protected:
    // The number of requests per IP address. Valid values: **1 to 100000**.
    // 
    // >  If both the **QPS** and **PerIpQps** parameters are specified, the value of the **QPS** parameter is smaller than the value of the PerIpQps parameter.
    std::shared_ptr<int32_t> perIpQps_ = nullptr;
    // The number of queries per second (QPS). Valid values: **1** to **100000**.
    std::shared_ptr<int32_t> QPS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
