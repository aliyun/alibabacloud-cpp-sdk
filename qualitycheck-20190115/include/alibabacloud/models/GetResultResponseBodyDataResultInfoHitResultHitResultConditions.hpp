// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditions() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditions(const GetResultResponseBodyDataResultInfoHitResultHitResultConditions &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditions(GetResultResponseBodyDataResultInfoHitResultHitResultConditions &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditions() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditions& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditions &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditions& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions>) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditions& setConditions(const vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditions& setConditions(vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions>> conditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
