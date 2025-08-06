// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERDEFINITIONSPARAMETERDEFINITIONPOSSIBLEVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERDEFINITIONSPARAMETERDEFINITIONPOSSIBLEVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues& obj) { 
      DARABONBA_PTR_TO_JSON(PossibleValue, possibleValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PossibleValue, possibleValue_);
    };
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues(const DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues(DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues &&) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues& operator=(const DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues& operator=(DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->possibleValue_ != nullptr; };
    // possibleValue Field Functions 
    bool hasPossibleValue() const { return this->possibleValue_ != nullptr;};
    void deletePossibleValue() { this->possibleValue_ = nullptr;};
    inline const vector<string> & possibleValue() const { DARABONBA_PTR_GET_CONST(possibleValue_, vector<string>) };
    inline vector<string> possibleValue() { DARABONBA_PTR_GET(possibleValue_, vector<string>) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues& setPossibleValue(const vector<string> & possibleValue) { DARABONBA_PTR_SET_VALUE(possibleValue_, possibleValue) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues& setPossibleValue(vector<string> && possibleValue) { DARABONBA_PTR_SET_RVALUE(possibleValue_, possibleValue) };


  protected:
    std::shared_ptr<vector<string>> possibleValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
