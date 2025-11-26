// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSRESPONSEBODYGLOBALQUESTIONSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSRESPONSEBODYGLOBALQUESTIONSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListGlobalQuestionsResponseBodyGlobalQuestionsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalQuestionsResponseBodyGlobalQuestionsList& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answers_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionId, globalQuestionId_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionName, globalQuestionName_);
      DARABONBA_PTR_TO_JSON(GlobalQuestionType, globalQuestionType_);
      DARABONBA_PTR_TO_JSON(Questions, questions_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalQuestionsResponseBodyGlobalQuestionsList& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answers_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionId, globalQuestionId_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionName, globalQuestionName_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestionType, globalQuestionType_);
      DARABONBA_PTR_FROM_JSON(Questions, questions_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ListGlobalQuestionsResponseBodyGlobalQuestionsList() = default ;
    ListGlobalQuestionsResponseBodyGlobalQuestionsList(const ListGlobalQuestionsResponseBodyGlobalQuestionsList &) = default ;
    ListGlobalQuestionsResponseBodyGlobalQuestionsList(ListGlobalQuestionsResponseBodyGlobalQuestionsList &&) = default ;
    ListGlobalQuestionsResponseBodyGlobalQuestionsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalQuestionsResponseBodyGlobalQuestionsList() = default ;
    ListGlobalQuestionsResponseBodyGlobalQuestionsList& operator=(const ListGlobalQuestionsResponseBodyGlobalQuestionsList &) = default ;
    ListGlobalQuestionsResponseBodyGlobalQuestionsList& operator=(ListGlobalQuestionsResponseBodyGlobalQuestionsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answers_ == nullptr
        && return this->globalQuestionId_ == nullptr && return this->globalQuestionName_ == nullptr && return this->globalQuestionType_ == nullptr && return this->questions_ == nullptr && return this->scriptId_ == nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline string answers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
    inline ListGlobalQuestionsResponseBodyGlobalQuestionsList& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


    // globalQuestionId Field Functions 
    bool hasGlobalQuestionId() const { return this->globalQuestionId_ != nullptr;};
    void deleteGlobalQuestionId() { this->globalQuestionId_ = nullptr;};
    inline string globalQuestionId() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionId_, "") };
    inline ListGlobalQuestionsResponseBodyGlobalQuestionsList& setGlobalQuestionId(string globalQuestionId) { DARABONBA_PTR_SET_VALUE(globalQuestionId_, globalQuestionId) };


    // globalQuestionName Field Functions 
    bool hasGlobalQuestionName() const { return this->globalQuestionName_ != nullptr;};
    void deleteGlobalQuestionName() { this->globalQuestionName_ = nullptr;};
    inline string globalQuestionName() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionName_, "") };
    inline ListGlobalQuestionsResponseBodyGlobalQuestionsList& setGlobalQuestionName(string globalQuestionName) { DARABONBA_PTR_SET_VALUE(globalQuestionName_, globalQuestionName) };


    // globalQuestionType Field Functions 
    bool hasGlobalQuestionType() const { return this->globalQuestionType_ != nullptr;};
    void deleteGlobalQuestionType() { this->globalQuestionType_ = nullptr;};
    inline string globalQuestionType() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionType_, "") };
    inline ListGlobalQuestionsResponseBodyGlobalQuestionsList& setGlobalQuestionType(string globalQuestionType) { DARABONBA_PTR_SET_VALUE(globalQuestionType_, globalQuestionType) };


    // questions Field Functions 
    bool hasQuestions() const { return this->questions_ != nullptr;};
    void deleteQuestions() { this->questions_ = nullptr;};
    inline string questions() const { DARABONBA_PTR_GET_DEFAULT(questions_, "") };
    inline ListGlobalQuestionsResponseBodyGlobalQuestionsList& setQuestions(string questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListGlobalQuestionsResponseBodyGlobalQuestionsList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    std::shared_ptr<string> answers_ = nullptr;
    std::shared_ptr<string> globalQuestionId_ = nullptr;
    std::shared_ptr<string> globalQuestionName_ = nullptr;
    std::shared_ptr<string> globalQuestionType_ = nullptr;
    std::shared_ptr<string> questions_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
