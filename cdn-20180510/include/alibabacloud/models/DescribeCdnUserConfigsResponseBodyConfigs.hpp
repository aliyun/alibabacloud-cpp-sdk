// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERCONFIGSRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERCONFIGSRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserConfigsResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ArgName, argName_);
      DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgName, argName_);
      DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    DescribeCdnUserConfigsResponseBodyConfigs() = default ;
    DescribeCdnUserConfigsResponseBodyConfigs(const DescribeCdnUserConfigsResponseBodyConfigs &) = default ;
    DescribeCdnUserConfigsResponseBodyConfigs(DescribeCdnUserConfigsResponseBodyConfigs &&) = default ;
    DescribeCdnUserConfigsResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserConfigsResponseBodyConfigs() = default ;
    DescribeCdnUserConfigsResponseBodyConfigs& operator=(const DescribeCdnUserConfigsResponseBodyConfigs &) = default ;
    DescribeCdnUserConfigsResponseBodyConfigs& operator=(DescribeCdnUserConfigsResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->argName_ == nullptr
        && return this->argValue_ == nullptr && return this->functionName_ == nullptr; };
    // argName Field Functions 
    bool hasArgName() const { return this->argName_ != nullptr;};
    void deleteArgName() { this->argName_ = nullptr;};
    inline string argName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
    inline DescribeCdnUserConfigsResponseBodyConfigs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


    // argValue Field Functions 
    bool hasArgValue() const { return this->argValue_ != nullptr;};
    void deleteArgValue() { this->argValue_ = nullptr;};
    inline string argValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
    inline DescribeCdnUserConfigsResponseBodyConfigs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeCdnUserConfigsResponseBodyConfigs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The name of the configuration.
    // 
    // The configuration is specified by enterprise users and public service sectors.
    std::shared_ptr<string> argName_ = nullptr;
    // The value of the configuration. Valid values:
    // 
    // *   **cc_rule**: HTTP flood protection rules
    // *   **ddos_dispatch**: integration with Anti-DDoS
    // *   **edge_safe**: application security settings on POPs
    // *   **blocked_regions**: blocked regions
    // *   **http_acl_policy**: access control list (ACL) rules
    // *   **bot_manager**: bot traffic management
    // *   **ip_reputation**: IP reputation library
    std::shared_ptr<string> argValue_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
