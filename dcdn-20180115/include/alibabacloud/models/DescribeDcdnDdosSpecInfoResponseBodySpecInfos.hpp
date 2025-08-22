// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODYSPECINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODYSPECINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDdosSpecInfoResponseBodySpecInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDdosSpecInfoResponseBodySpecInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDdosSpecInfoResponseBodySpecInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeDcdnDdosSpecInfoResponseBodySpecInfos() = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfos(const DescribeDcdnDdosSpecInfoResponseBodySpecInfos &) = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfos(DescribeDcdnDdosSpecInfoResponseBodySpecInfos &&) = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDdosSpecInfoResponseBodySpecInfos() = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfos& operator=(const DescribeDcdnDdosSpecInfoResponseBodySpecInfos &) = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfos& operator=(DescribeDcdnDdosSpecInfoResponseBodySpecInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->rule_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs>) };
    inline vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs>) };
    inline DescribeDcdnDdosSpecInfoResponseBodySpecInfos& setConfigs(const vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeDcdnDdosSpecInfoResponseBodySpecInfos& setConfigs(vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBodySpecInfos& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


  protected:
    // The configurations of the version rule.
    std::shared_ptr<vector<Models::DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs>> configs_ = nullptr;
    // The version rule. Valid values:
    // 
    // *   **version_defense_num**: the rule for the number of version mitigation sessions
    // *   **domain_num**: the rule for the limit on the number of domain names
    // *   **defence_package_num**: the rule for extra mitigation session plans
    std::shared_ptr<string> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
