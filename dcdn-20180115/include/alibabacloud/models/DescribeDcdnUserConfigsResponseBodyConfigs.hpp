// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserConfigsResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ArgName, argName_);
      DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgName, argName_);
      DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    DescribeDcdnUserConfigsResponseBodyConfigs() = default ;
    DescribeDcdnUserConfigsResponseBodyConfigs(const DescribeDcdnUserConfigsResponseBodyConfigs &) = default ;
    DescribeDcdnUserConfigsResponseBodyConfigs(DescribeDcdnUserConfigsResponseBodyConfigs &&) = default ;
    DescribeDcdnUserConfigsResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserConfigsResponseBodyConfigs() = default ;
    DescribeDcdnUserConfigsResponseBodyConfigs& operator=(const DescribeDcdnUserConfigsResponseBodyConfigs &) = default ;
    DescribeDcdnUserConfigsResponseBodyConfigs& operator=(DescribeDcdnUserConfigsResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argName_ != nullptr
        && this->argValue_ != nullptr && this->functionName_ != nullptr; };
    // argName Field Functions 
    bool hasArgName() const { return this->argName_ != nullptr;};
    void deleteArgName() { this->argName_ = nullptr;};
    inline string argName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
    inline DescribeDcdnUserConfigsResponseBodyConfigs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


    // argValue Field Functions 
    bool hasArgValue() const { return this->argValue_ != nullptr;};
    void deleteArgValue() { this->argValue_ = nullptr;};
    inline string argValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
    inline DescribeDcdnUserConfigsResponseBodyConfigs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeDcdnUserConfigsResponseBodyConfigs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The name of the configuration.
    // 
    // The configuration is specified by enterprise users and public service sectors.
    std::shared_ptr<string> argName_ = nullptr;
    // The value of the configuration. Valid values:
    // 
    // *   cc_rule: HTTP flood protection
    // *   ddos_dispatch: DDoS mitigation
    // *   edge_safe: application security on points of presence (POPs)
    // *   blocked_regions: region blacklist
    // *   http_acl_policy: precise access control
    // *   bot_manager: bot traffic management
    // *   ip_reputation: IP reputation library
    std::shared_ptr<string> argValue_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
