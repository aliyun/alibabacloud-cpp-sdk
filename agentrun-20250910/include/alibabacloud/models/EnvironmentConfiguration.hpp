// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnvironmentVariable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class EnvironmentConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    EnvironmentConfiguration() = default ;
    EnvironmentConfiguration(const EnvironmentConfiguration &) = default ;
    EnvironmentConfiguration(EnvironmentConfiguration &&) = default ;
    EnvironmentConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentConfiguration() = default ;
    EnvironmentConfiguration& operator=(const EnvironmentConfiguration &) = default ;
    EnvironmentConfiguration& operator=(EnvironmentConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<EnvironmentVariable> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<EnvironmentVariable>) };
    inline vector<EnvironmentVariable> getVariables() { DARABONBA_PTR_GET(variables_, vector<EnvironmentVariable>) };
    inline EnvironmentConfiguration& setVariables(const vector<EnvironmentVariable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline EnvironmentConfiguration& setVariables(vector<EnvironmentVariable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // 环境变量条目列表，每个条目包含 name、value 和可选 description
    // 
    // This parameter is required.
    shared_ptr<vector<EnvironmentVariable>> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
