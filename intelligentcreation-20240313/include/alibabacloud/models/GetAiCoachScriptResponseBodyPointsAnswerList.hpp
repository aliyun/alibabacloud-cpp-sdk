// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPointsAnswerListAnswerValues.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPointsAnswerListParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyPointsAnswerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyPointsAnswerList& obj) { 
      DARABONBA_PTR_TO_JSON(answerValues, answerValues_);
      DARABONBA_PTR_TO_JSON(enabledKeyword, enabledKeyword_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameList, nameList_);
      DARABONBA_PTR_TO_JSON(operators, operators_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyPointsAnswerList& obj) { 
      DARABONBA_PTR_FROM_JSON(answerValues, answerValues_);
      DARABONBA_PTR_FROM_JSON(enabledKeyword, enabledKeyword_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameList, nameList_);
      DARABONBA_PTR_FROM_JSON(operators, operators_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    GetAICoachScriptResponseBodyPointsAnswerList() = default ;
    GetAICoachScriptResponseBodyPointsAnswerList(const GetAICoachScriptResponseBodyPointsAnswerList &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerList(GetAICoachScriptResponseBodyPointsAnswerList &&) = default ;
    GetAICoachScriptResponseBodyPointsAnswerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyPointsAnswerList() = default ;
    GetAICoachScriptResponseBodyPointsAnswerList& operator=(const GetAICoachScriptResponseBodyPointsAnswerList &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerList& operator=(GetAICoachScriptResponseBodyPointsAnswerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerValues_ == nullptr
        && return this->enabledKeyword_ == nullptr && return this->name_ == nullptr && return this->nameList_ == nullptr && return this->operators_ == nullptr && return this->parameters_ == nullptr
        && return this->type_ == nullptr && return this->weight_ == nullptr; };
    // answerValues Field Functions 
    bool hasAnswerValues() const { return this->answerValues_ != nullptr;};
    void deleteAnswerValues() { this->answerValues_ = nullptr;};
    inline const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues> & answerValues() const { DARABONBA_PTR_GET_CONST(answerValues_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues>) };
    inline vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues> answerValues() { DARABONBA_PTR_GET(answerValues_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues>) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setAnswerValues(const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues> & answerValues) { DARABONBA_PTR_SET_VALUE(answerValues_, answerValues) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setAnswerValues(vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues> && answerValues) { DARABONBA_PTR_SET_RVALUE(answerValues_, answerValues) };


    // enabledKeyword Field Functions 
    bool hasEnabledKeyword() const { return this->enabledKeyword_ != nullptr;};
    void deleteEnabledKeyword() { this->enabledKeyword_ = nullptr;};
    inline bool enabledKeyword() const { DARABONBA_PTR_GET_DEFAULT(enabledKeyword_, false) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setEnabledKeyword(bool enabledKeyword) { DARABONBA_PTR_SET_VALUE(enabledKeyword_, enabledKeyword) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline string operators() const { DARABONBA_PTR_GET_DEFAULT(operators_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setOperators(string operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters>) };
    inline vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters>) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setParameters(const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setParameters(vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline GetAICoachScriptResponseBodyPointsAnswerList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValues>> answerValues_ = nullptr;
    std::shared_ptr<bool> enabledKeyword_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    std::shared_ptr<string> operators_ = nullptr;
    std::shared_ptr<vector<Models::GetAICoachScriptResponseBodyPointsAnswerListParameters>> parameters_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
