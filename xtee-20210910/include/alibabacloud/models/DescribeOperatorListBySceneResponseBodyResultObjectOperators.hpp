// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODYRESULTOBJECTOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYSCENERESPONSEBODYRESULTOBJECTOPERATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListBySceneResponseBodyResultObjectOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListBySceneResponseBodyResultObjectOperators& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasRightVariable, hasRightVariable_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(rightVariables, rightVariables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListBySceneResponseBodyResultObjectOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasRightVariable, hasRightVariable_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(rightVariables, rightVariables_);
    };
    DescribeOperatorListBySceneResponseBodyResultObjectOperators() = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperators(const DescribeOperatorListBySceneResponseBodyResultObjectOperators &) = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperators(DescribeOperatorListBySceneResponseBodyResultObjectOperators &&) = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListBySceneResponseBodyResultObjectOperators() = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperators& operator=(const DescribeOperatorListBySceneResponseBodyResultObjectOperators &) = default ;
    DescribeOperatorListBySceneResponseBodyResultObjectOperators& operator=(DescribeOperatorListBySceneResponseBodyResultObjectOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->hasRightVariable_ != nullptr && this->memo_ != nullptr && this->name_ != nullptr && this->rightVariables_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperators& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasRightVariable Field Functions 
    bool hasHasRightVariable() const { return this->hasRightVariable_ != nullptr;};
    void deleteHasRightVariable() { this->hasRightVariable_ = nullptr;};
    inline bool hasRightVariable() const { DARABONBA_PTR_GET_DEFAULT(hasRightVariable_, false) };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperators& setHasRightVariable(bool hasRightVariable) { DARABONBA_PTR_SET_VALUE(hasRightVariable_, hasRightVariable) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperators& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rightVariables Field Functions 
    bool hasRightVariables() const { return this->rightVariables_ != nullptr;};
    void deleteRightVariables() { this->rightVariables_ = nullptr;};
    inline const vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables> & rightVariables() const { DARABONBA_PTR_GET_CONST(rightVariables_, vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables>) };
    inline vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables> rightVariables() { DARABONBA_PTR_GET(rightVariables_, vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables>) };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperators& setRightVariables(const vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables> & rightVariables) { DARABONBA_PTR_SET_VALUE(rightVariables_, rightVariables) };
    inline DescribeOperatorListBySceneResponseBodyResultObjectOperators& setRightVariables(vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables> && rightVariables) { DARABONBA_PTR_SET_RVALUE(rightVariables_, rightVariables) };


  protected:
    // Operator code
    std::shared_ptr<string> code_ = nullptr;
    // Whether it contains a right variable
    std::shared_ptr<bool> hasRightVariable_ = nullptr;
    // Description
    std::shared_ptr<string> memo_ = nullptr;
    // Operator name
    std::shared_ptr<string> name_ = nullptr;
    // Right variable object
    std::shared_ptr<vector<Models::DescribeOperatorListBySceneResponseBodyResultObjectOperatorsRightVariables>> rightVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
