// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserConfigsResponseBody() = default ;
    DescribeDcdnUserConfigsResponseBody(const DescribeDcdnUserConfigsResponseBody &) = default ;
    DescribeDcdnUserConfigsResponseBody(DescribeDcdnUserConfigsResponseBody &&) = default ;
    DescribeDcdnUserConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserConfigsResponseBody() = default ;
    DescribeDcdnUserConfigsResponseBody& operator=(const DescribeDcdnUserConfigsResponseBody &) = default ;
    DescribeDcdnUserConfigsResponseBody& operator=(DescribeDcdnUserConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(ArgName, argName_);
        DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(ArgName, argName_);
        DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->argName_ == nullptr
        && this->argValue_ == nullptr && this->functionName_ == nullptr; };
      // argName Field Functions 
      bool hasArgName() const { return this->argName_ != nullptr;};
      void deleteArgName() { this->argName_ = nullptr;};
      inline string getArgName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
      inline Configs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


      // argValue Field Functions 
      bool hasArgValue() const { return this->argValue_ != nullptr;};
      void deleteArgValue() { this->argValue_ = nullptr;};
      inline string getArgValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
      inline Configs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Configs& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    protected:
      // The name of the configuration.
      // 
      // The configuration is specified by enterprise users and public service sectors.
      shared_ptr<string> argName_ {};
      // The value of the configuration. Valid values:
      // 
      // *   cc_rule: HTTP flood protection
      // *   ddos_dispatch: DDoS mitigation
      // *   edge_safe: application security on points of presence (POPs)
      // *   blocked_regions: region blacklist
      // *   http_acl_policy: precise access control
      // *   bot_manager: bot traffic management
      // *   ip_reputation: IP reputation library
      shared_ptr<string> argValue_ {};
      // The name of the feature.
      shared_ptr<string> functionName_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->requestId_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<DescribeDcdnUserConfigsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<DescribeDcdnUserConfigsResponseBody::Configs>) };
    inline vector<DescribeDcdnUserConfigsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<DescribeDcdnUserConfigsResponseBody::Configs>) };
    inline DescribeDcdnUserConfigsResponseBody& setConfigs(const vector<DescribeDcdnUserConfigsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeDcdnUserConfigsResponseBody& setConfigs(vector<DescribeDcdnUserConfigsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The user configurations.
    shared_ptr<vector<DescribeDcdnUserConfigsResponseBody::Configs>> configs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
