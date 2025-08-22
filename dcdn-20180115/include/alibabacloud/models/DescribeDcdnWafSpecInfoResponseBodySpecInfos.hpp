// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODYSPECINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODYSPECINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafSpecInfoResponseBodySpecInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafSpecInfoResponseBodySpecInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafSpecInfoResponseBodySpecInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
    };
    DescribeDcdnWafSpecInfoResponseBodySpecInfos() = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfos(const DescribeDcdnWafSpecInfoResponseBodySpecInfos &) = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfos(DescribeDcdnWafSpecInfoResponseBodySpecInfos &&) = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafSpecInfoResponseBodySpecInfos() = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfos& operator=(const DescribeDcdnWafSpecInfoResponseBodySpecInfos &) = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfos& operator=(DescribeDcdnWafSpecInfoResponseBodySpecInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->defenseScene_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs>) };
    inline vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs>) };
    inline DescribeDcdnWafSpecInfoResponseBodySpecInfos& setConfigs(const vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeDcdnWafSpecInfoResponseBodySpecInfos& setConfigs(vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafSpecInfoResponseBodySpecInfos& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


  protected:
    // The configuration information of the protection rule.
    std::shared_ptr<vector<Models::DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs>> configs_ = nullptr;
    // The type of the protection policy. Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom
    // *   whitelist: whitelist
    // *   ip_blacklist: IP address blacklist
    // *   region_block: region blacklist
    // *   bot: bot management
    std::shared_ptr<string> defenseScene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
