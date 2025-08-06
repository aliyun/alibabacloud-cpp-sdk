// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERDEFINITIONSPARAMETERDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERDEFINITIONSPARAMETERDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(PatternRegex, patternRegex_);
      DARABONBA_PTR_TO_JSON(PossibleValues, possibleValues_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(PatternRegex, patternRegex_);
      DARABONBA_PTR_FROM_JSON(PossibleValues, possibleValues_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition(const DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition(DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition &&) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& operator=(const DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& operator=(DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->description_ != nullptr && this->parameterName_ != nullptr && this->patternRegex_ != nullptr && this->possibleValues_ != nullptr && this->required_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // patternRegex Field Functions 
    bool hasPatternRegex() const { return this->patternRegex_ != nullptr;};
    void deletePatternRegex() { this->patternRegex_ = nullptr;};
    inline string patternRegex() const { DARABONBA_PTR_GET_DEFAULT(patternRegex_, "") };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setPatternRegex(string patternRegex) { DARABONBA_PTR_SET_VALUE(patternRegex_, patternRegex) };


    // possibleValues Field Functions 
    bool hasPossibleValues() const { return this->possibleValues_ != nullptr;};
    void deletePossibleValues() { this->possibleValues_ = nullptr;};
    inline const Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues & possibleValues() const { DARABONBA_PTR_GET_CONST(possibleValues_, Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues) };
    inline Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues possibleValues() { DARABONBA_PTR_GET(possibleValues_, Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setPossibleValues(const Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues & possibleValues) { DARABONBA_PTR_SET_VALUE(possibleValues_, possibleValues) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setPossibleValues(Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues && possibleValues) { DARABONBA_PTR_SET_RVALUE(possibleValues_, possibleValues) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinition& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // The default value of the custom parameter.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The description of the custom parameter.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the custom parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The regular expression of the custom parameter.
    std::shared_ptr<string> patternRegex_ = nullptr;
    // The valid values of the custom parameter of the enumeration type.
    std::shared_ptr<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitionsParameterDefinitionPossibleValues> possibleValues_ = nullptr;
    // Indicates whether the custom parameter is required. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
