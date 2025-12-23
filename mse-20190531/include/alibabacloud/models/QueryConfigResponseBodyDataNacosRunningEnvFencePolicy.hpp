// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODYDATANACOSRUNNINGENVFENCEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODYDATANACOSRUNNINGENVFENCEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryConfigResponseBodyDataNacosRunningEnvFencePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(enabledModules, enabledModules_);
      DARABONBA_PTR_TO_JSON(interceptPolicy, interceptPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(enabledModules, enabledModules_);
      DARABONBA_PTR_FROM_JSON(interceptPolicy, interceptPolicy_);
    };
    QueryConfigResponseBodyDataNacosRunningEnvFencePolicy() = default ;
    QueryConfigResponseBodyDataNacosRunningEnvFencePolicy(const QueryConfigResponseBodyDataNacosRunningEnvFencePolicy &) = default ;
    QueryConfigResponseBodyDataNacosRunningEnvFencePolicy(QueryConfigResponseBodyDataNacosRunningEnvFencePolicy &&) = default ;
    QueryConfigResponseBodyDataNacosRunningEnvFencePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConfigResponseBodyDataNacosRunningEnvFencePolicy() = default ;
    QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& operator=(const QueryConfigResponseBodyDataNacosRunningEnvFencePolicy &) = default ;
    QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& operator=(QueryConfigResponseBodyDataNacosRunningEnvFencePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabledModules_ == nullptr
        && return this->interceptPolicy_ == nullptr; };
    // enabledModules Field Functions 
    bool hasEnabledModules() const { return this->enabledModules_ != nullptr;};
    void deleteEnabledModules() { this->enabledModules_ = nullptr;};
    inline const vector<string> & enabledModules() const { DARABONBA_PTR_GET_CONST(enabledModules_, vector<string>) };
    inline vector<string> enabledModules() { DARABONBA_PTR_GET(enabledModules_, vector<string>) };
    inline QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& setEnabledModules(const vector<string> & enabledModules) { DARABONBA_PTR_SET_VALUE(enabledModules_, enabledModules) };
    inline QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& setEnabledModules(vector<string> && enabledModules) { DARABONBA_PTR_SET_RVALUE(enabledModules_, enabledModules) };


    // interceptPolicy Field Functions 
    bool hasInterceptPolicy() const { return this->interceptPolicy_ != nullptr;};
    void deleteInterceptPolicy() { this->interceptPolicy_ = nullptr;};
    inline const map<string, string> & interceptPolicy() const { DARABONBA_PTR_GET_CONST(interceptPolicy_, map<string, string>) };
    inline map<string, string> interceptPolicy() { DARABONBA_PTR_GET(interceptPolicy_, map<string, string>) };
    inline QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& setInterceptPolicy(const map<string, string> & interceptPolicy) { DARABONBA_PTR_SET_VALUE(interceptPolicy_, interceptPolicy) };
    inline QueryConfigResponseBodyDataNacosRunningEnvFencePolicy& setInterceptPolicy(map<string, string> && interceptPolicy) { DARABONBA_PTR_SET_RVALUE(interceptPolicy_, interceptPolicy) };


  protected:
    std::shared_ptr<vector<string>> enabledModules_ = nullptr;
    std::shared_ptr<map<string, string>> interceptPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
