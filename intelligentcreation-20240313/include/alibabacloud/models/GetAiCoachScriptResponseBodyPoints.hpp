// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPointsAnswerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyPoints& obj) { 
      DARABONBA_PTR_TO_JSON(answerList, answerList_);
      DARABONBA_PTR_TO_JSON(knowledgeList, knowledgeList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pointId, pointId_);
      DARABONBA_PTR_TO_JSON(questionDescription, questionDescription_);
      DARABONBA_PTR_TO_JSON(sortNo, sortNo_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(answerList, answerList_);
      DARABONBA_PTR_FROM_JSON(knowledgeList, knowledgeList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pointId, pointId_);
      DARABONBA_PTR_FROM_JSON(questionDescription, questionDescription_);
      DARABONBA_PTR_FROM_JSON(sortNo, sortNo_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    GetAICoachScriptResponseBodyPoints() = default ;
    GetAICoachScriptResponseBodyPoints(const GetAICoachScriptResponseBodyPoints &) = default ;
    GetAICoachScriptResponseBodyPoints(GetAICoachScriptResponseBodyPoints &&) = default ;
    GetAICoachScriptResponseBodyPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyPoints() = default ;
    GetAICoachScriptResponseBodyPoints& operator=(const GetAICoachScriptResponseBodyPoints &) = default ;
    GetAICoachScriptResponseBodyPoints& operator=(GetAICoachScriptResponseBodyPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerList_ == nullptr
        && return this->knowledgeList_ == nullptr && return this->name_ == nullptr && return this->pointId_ == nullptr && return this->questionDescription_ == nullptr && return this->sortNo_ == nullptr
        && return this->weight_ == nullptr; };
    // answerList Field Functions 
    bool hasAnswerList() const { return this->answerList_ != nullptr;};
    void deleteAnswerList() { this->answerList_ = nullptr;};
    inline const vector<Models::GetAICoachScriptResponseBodyPointsAnswerList> & answerList() const { DARABONBA_PTR_GET_CONST(answerList_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerList>) };
    inline vector<Models::GetAICoachScriptResponseBodyPointsAnswerList> answerList() { DARABONBA_PTR_GET(answerList_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerList>) };
    inline GetAICoachScriptResponseBodyPoints& setAnswerList(const vector<Models::GetAICoachScriptResponseBodyPointsAnswerList> & answerList) { DARABONBA_PTR_SET_VALUE(answerList_, answerList) };
    inline GetAICoachScriptResponseBodyPoints& setAnswerList(vector<Models::GetAICoachScriptResponseBodyPointsAnswerList> && answerList) { DARABONBA_PTR_SET_RVALUE(answerList_, answerList) };


    // knowledgeList Field Functions 
    bool hasKnowledgeList() const { return this->knowledgeList_ != nullptr;};
    void deleteKnowledgeList() { this->knowledgeList_ = nullptr;};
    inline const vector<string> & knowledgeList() const { DARABONBA_PTR_GET_CONST(knowledgeList_, vector<string>) };
    inline vector<string> knowledgeList() { DARABONBA_PTR_GET(knowledgeList_, vector<string>) };
    inline GetAICoachScriptResponseBodyPoints& setKnowledgeList(const vector<string> & knowledgeList) { DARABONBA_PTR_SET_VALUE(knowledgeList_, knowledgeList) };
    inline GetAICoachScriptResponseBodyPoints& setKnowledgeList(vector<string> && knowledgeList) { DARABONBA_PTR_SET_RVALUE(knowledgeList_, knowledgeList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBodyPoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pointId Field Functions 
    bool hasPointId() const { return this->pointId_ != nullptr;};
    void deletePointId() { this->pointId_ = nullptr;};
    inline string pointId() const { DARABONBA_PTR_GET_DEFAULT(pointId_, "") };
    inline GetAICoachScriptResponseBodyPoints& setPointId(string pointId) { DARABONBA_PTR_SET_VALUE(pointId_, pointId) };


    // questionDescription Field Functions 
    bool hasQuestionDescription() const { return this->questionDescription_ != nullptr;};
    void deleteQuestionDescription() { this->questionDescription_ = nullptr;};
    inline string questionDescription() const { DARABONBA_PTR_GET_DEFAULT(questionDescription_, "") };
    inline GetAICoachScriptResponseBodyPoints& setQuestionDescription(string questionDescription) { DARABONBA_PTR_SET_VALUE(questionDescription_, questionDescription) };


    // sortNo Field Functions 
    bool hasSortNo() const { return this->sortNo_ != nullptr;};
    void deleteSortNo() { this->sortNo_ = nullptr;};
    inline int32_t sortNo() const { DARABONBA_PTR_GET_DEFAULT(sortNo_, 0) };
    inline GetAICoachScriptResponseBodyPoints& setSortNo(int32_t sortNo) { DARABONBA_PTR_SET_VALUE(sortNo_, sortNo) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline GetAICoachScriptResponseBodyPoints& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<vector<Models::GetAICoachScriptResponseBodyPointsAnswerList>> answerList_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeList_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pointId_ = nullptr;
    std::shared_ptr<string> questionDescription_ = nullptr;
    std::shared_ptr<int32_t> sortNo_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
