// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsResponseBodyCommandsCommandParameterDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommandsCommandParameterDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterDefinition, parameterDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommandsCommandParameterDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterDefinition, parameterDefinition_);
    };
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitions() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitions(const DescribeCommandsResponseBodyCommandsCommandParameterDefinitions &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitions(DescribeCommandsResponseBodyCommandsCommandParameterDefinitions &&) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommandsCommandParameterDefinitions() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitions& operator=(const DescribeCommandsResponseBodyCommandsCommandParameterDefinitions &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitions& operator=(DescribeCommandsResponseBodyCommandsCommandParameterDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterDefinition_ != nullptr; };
    // parameterDefinition Field Functions 
    bool hasParameterDefinition() const { return this->parameterDefinition_ != nullptr;};
    void deleteParameterDefinition() { this->parameterDefinition_ = nullptr;};
    inline const vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition> & parameterDefinition() const { DARABONBA_PTR_GET_CONST(parameterDefinition_, vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition>) };
    inline vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition> parameterDefinition() { DARABONBA_PTR_GET(parameterDefinition_, vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition>) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitions& setParameterDefinition(const vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition> & parameterDefinition) { DARABONBA_PTR_SET_VALUE(parameterDefinition_, parameterDefinition) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitions& setParameterDefinition(vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition> && parameterDefinition) { DARABONBA_PTR_SET_RVALUE(parameterDefinition_, parameterDefinition) };


  protected:
    std::shared_ptr<vector<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition>> parameterDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
