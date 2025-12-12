// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator> & _operator() const { DARABONBA_PTR_GET_CONST(operator_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator> _operator() { DARABONBA_PTR_GET(operator_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator>) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators& setOperator(const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator> & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators& setOperator(vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator> && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator>> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
