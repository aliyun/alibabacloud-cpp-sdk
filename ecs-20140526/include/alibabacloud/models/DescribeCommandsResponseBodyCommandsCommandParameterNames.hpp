// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERNAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDPARAMETERNAMES_HPP_
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
  class DescribeCommandsResponseBodyCommandsCommandParameterNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommandsCommandParameterNames& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommandsCommandParameterNames& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    DescribeCommandsResponseBodyCommandsCommandParameterNames() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterNames(const DescribeCommandsResponseBodyCommandsCommandParameterNames &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterNames(DescribeCommandsResponseBodyCommandsCommandParameterNames &&) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommandsCommandParameterNames() = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterNames& operator=(const DescribeCommandsResponseBodyCommandsCommandParameterNames &) = default ;
    DescribeCommandsResponseBodyCommandsCommandParameterNames& operator=(DescribeCommandsResponseBodyCommandsCommandParameterNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterName_ == nullptr; };
    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline const vector<string> & parameterName() const { DARABONBA_PTR_GET_CONST(parameterName_, vector<string>) };
    inline vector<string> parameterName() { DARABONBA_PTR_GET(parameterName_, vector<string>) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterNames& setParameterName(const vector<string> & parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };
    inline DescribeCommandsResponseBodyCommandsCommandParameterNames& setParameterName(vector<string> && parameterName) { DARABONBA_PTR_SET_RVALUE(parameterName_, parameterName) };


  protected:
    std::shared_ptr<vector<string>> parameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
