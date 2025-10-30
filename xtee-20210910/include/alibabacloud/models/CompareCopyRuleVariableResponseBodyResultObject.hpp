// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObjectCustVariableList.hpp>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObjectEventVariableList.hpp>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList.hpp>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList.hpp>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList.hpp>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareCopyRuleVariableResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareCopyRuleVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CustVariableList, custVariableList_);
      DARABONBA_PTR_TO_JSON(EventVariableList, eventVariableList_);
      DARABONBA_PTR_TO_JSON(ExpressionVariableList, expressionVariableList_);
      DARABONBA_PTR_TO_JSON(NameListVariableList, nameListVariableList_);
      DARABONBA_PTR_TO_JSON(QueryExpressionVariableList, queryExpressionVariableList_);
      DARABONBA_PTR_TO_JSON(SystemVariableList, systemVariableList_);
    };
    friend void from_json(const Darabonba::Json& j, CompareCopyRuleVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CustVariableList, custVariableList_);
      DARABONBA_PTR_FROM_JSON(EventVariableList, eventVariableList_);
      DARABONBA_PTR_FROM_JSON(ExpressionVariableList, expressionVariableList_);
      DARABONBA_PTR_FROM_JSON(NameListVariableList, nameListVariableList_);
      DARABONBA_PTR_FROM_JSON(QueryExpressionVariableList, queryExpressionVariableList_);
      DARABONBA_PTR_FROM_JSON(SystemVariableList, systemVariableList_);
    };
    CompareCopyRuleVariableResponseBodyResultObject() = default ;
    CompareCopyRuleVariableResponseBodyResultObject(const CompareCopyRuleVariableResponseBodyResultObject &) = default ;
    CompareCopyRuleVariableResponseBodyResultObject(CompareCopyRuleVariableResponseBodyResultObject &&) = default ;
    CompareCopyRuleVariableResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareCopyRuleVariableResponseBodyResultObject() = default ;
    CompareCopyRuleVariableResponseBodyResultObject& operator=(const CompareCopyRuleVariableResponseBodyResultObject &) = default ;
    CompareCopyRuleVariableResponseBodyResultObject& operator=(CompareCopyRuleVariableResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custVariableList_ == nullptr
        && return this->eventVariableList_ == nullptr && return this->expressionVariableList_ == nullptr && return this->nameListVariableList_ == nullptr && return this->queryExpressionVariableList_ == nullptr && return this->systemVariableList_ == nullptr; };
    // custVariableList Field Functions 
    bool hasCustVariableList() const { return this->custVariableList_ != nullptr;};
    void deleteCustVariableList() { this->custVariableList_ = nullptr;};
    inline const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList> & custVariableList() const { DARABONBA_PTR_GET_CONST(custVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList>) };
    inline vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList> custVariableList() { DARABONBA_PTR_GET(custVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList>) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setCustVariableList(const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList> & custVariableList) { DARABONBA_PTR_SET_VALUE(custVariableList_, custVariableList) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setCustVariableList(vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList> && custVariableList) { DARABONBA_PTR_SET_RVALUE(custVariableList_, custVariableList) };


    // eventVariableList Field Functions 
    bool hasEventVariableList() const { return this->eventVariableList_ != nullptr;};
    void deleteEventVariableList() { this->eventVariableList_ = nullptr;};
    inline const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList> & eventVariableList() const { DARABONBA_PTR_GET_CONST(eventVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList>) };
    inline vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList> eventVariableList() { DARABONBA_PTR_GET(eventVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList>) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setEventVariableList(const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList> & eventVariableList) { DARABONBA_PTR_SET_VALUE(eventVariableList_, eventVariableList) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setEventVariableList(vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList> && eventVariableList) { DARABONBA_PTR_SET_RVALUE(eventVariableList_, eventVariableList) };


    // expressionVariableList Field Functions 
    bool hasExpressionVariableList() const { return this->expressionVariableList_ != nullptr;};
    void deleteExpressionVariableList() { this->expressionVariableList_ = nullptr;};
    inline const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList> & expressionVariableList() const { DARABONBA_PTR_GET_CONST(expressionVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList>) };
    inline vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList> expressionVariableList() { DARABONBA_PTR_GET(expressionVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList>) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setExpressionVariableList(const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList> & expressionVariableList) { DARABONBA_PTR_SET_VALUE(expressionVariableList_, expressionVariableList) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setExpressionVariableList(vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList> && expressionVariableList) { DARABONBA_PTR_SET_RVALUE(expressionVariableList_, expressionVariableList) };


    // nameListVariableList Field Functions 
    bool hasNameListVariableList() const { return this->nameListVariableList_ != nullptr;};
    void deleteNameListVariableList() { this->nameListVariableList_ = nullptr;};
    inline const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList> & nameListVariableList() const { DARABONBA_PTR_GET_CONST(nameListVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList>) };
    inline vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList> nameListVariableList() { DARABONBA_PTR_GET(nameListVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList>) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setNameListVariableList(const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList> & nameListVariableList) { DARABONBA_PTR_SET_VALUE(nameListVariableList_, nameListVariableList) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setNameListVariableList(vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList> && nameListVariableList) { DARABONBA_PTR_SET_RVALUE(nameListVariableList_, nameListVariableList) };


    // queryExpressionVariableList Field Functions 
    bool hasQueryExpressionVariableList() const { return this->queryExpressionVariableList_ != nullptr;};
    void deleteQueryExpressionVariableList() { this->queryExpressionVariableList_ = nullptr;};
    inline const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList> & queryExpressionVariableList() const { DARABONBA_PTR_GET_CONST(queryExpressionVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList>) };
    inline vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList> queryExpressionVariableList() { DARABONBA_PTR_GET(queryExpressionVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList>) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setQueryExpressionVariableList(const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList> & queryExpressionVariableList) { DARABONBA_PTR_SET_VALUE(queryExpressionVariableList_, queryExpressionVariableList) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setQueryExpressionVariableList(vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList> && queryExpressionVariableList) { DARABONBA_PTR_SET_RVALUE(queryExpressionVariableList_, queryExpressionVariableList) };


    // systemVariableList Field Functions 
    bool hasSystemVariableList() const { return this->systemVariableList_ != nullptr;};
    void deleteSystemVariableList() { this->systemVariableList_ = nullptr;};
    inline const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList> & systemVariableList() const { DARABONBA_PTR_GET_CONST(systemVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList>) };
    inline vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList> systemVariableList() { DARABONBA_PTR_GET(systemVariableList_, vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList>) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setSystemVariableList(const vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList> & systemVariableList) { DARABONBA_PTR_SET_VALUE(systemVariableList_, systemVariableList) };
    inline CompareCopyRuleVariableResponseBodyResultObject& setSystemVariableList(vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList> && systemVariableList) { DARABONBA_PTR_SET_RVALUE(systemVariableList_, systemVariableList) };


  protected:
    // Cumulative variable list
    std::shared_ptr<vector<Models::CompareCopyRuleVariableResponseBodyResultObjectCustVariableList>> custVariableList_ = nullptr;
    // Event field variables
    std::shared_ptr<vector<Models::CompareCopyRuleVariableResponseBodyResultObjectEventVariableList>> eventVariableList_ = nullptr;
    // Custom variable list
    std::shared_ptr<vector<Models::CompareCopyRuleVariableResponseBodyResultObjectExpressionVariableList>> expressionVariableList_ = nullptr;
    // Name list variables
    std::shared_ptr<vector<Models::CompareCopyRuleVariableResponseBodyResultObjectNameListVariableList>> nameListVariableList_ = nullptr;
    // Custom Query Variable List
    std::shared_ptr<vector<Models::CompareCopyRuleVariableResponseBodyResultObjectQueryExpressionVariableList>> queryExpressionVariableList_ = nullptr;
    // System variable list
    std::shared_ptr<vector<Models::CompareCopyRuleVariableResponseBodyResultObjectSystemVariableList>> systemVariableList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
