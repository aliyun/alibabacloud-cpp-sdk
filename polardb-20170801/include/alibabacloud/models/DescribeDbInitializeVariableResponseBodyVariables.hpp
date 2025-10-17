// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODYVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODYVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInitializeVariableResponseBodyVariablesVariable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBInitializeVariableResponseBodyVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInitializeVariableResponseBodyVariables& obj) { 
      DARABONBA_PTR_TO_JSON(Variable, variable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInitializeVariableResponseBodyVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(Variable, variable_);
    };
    DescribeDBInitializeVariableResponseBodyVariables() = default ;
    DescribeDBInitializeVariableResponseBodyVariables(const DescribeDBInitializeVariableResponseBodyVariables &) = default ;
    DescribeDBInitializeVariableResponseBodyVariables(DescribeDBInitializeVariableResponseBodyVariables &&) = default ;
    DescribeDBInitializeVariableResponseBodyVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInitializeVariableResponseBodyVariables() = default ;
    DescribeDBInitializeVariableResponseBodyVariables& operator=(const DescribeDBInitializeVariableResponseBodyVariables &) = default ;
    DescribeDBInitializeVariableResponseBodyVariables& operator=(DescribeDBInitializeVariableResponseBodyVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variable_ == nullptr; };
    // variable Field Functions 
    bool hasVariable() const { return this->variable_ != nullptr;};
    void deleteVariable() { this->variable_ = nullptr;};
    inline const vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable> & variable() const { DARABONBA_PTR_GET_CONST(variable_, vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable>) };
    inline vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable> variable() { DARABONBA_PTR_GET(variable_, vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable>) };
    inline DescribeDBInitializeVariableResponseBodyVariables& setVariable(const vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable> & variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };
    inline DescribeDBInitializeVariableResponseBodyVariables& setVariable(vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable> && variable) { DARABONBA_PTR_SET_RVALUE(variable_, variable) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInitializeVariableResponseBodyVariablesVariable>> variable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
