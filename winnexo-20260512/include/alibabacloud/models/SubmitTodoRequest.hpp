// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTODOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTODOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SubmitTodoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTodoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(answers, answers_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTodoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(answers, answers_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    SubmitTodoRequest() = default ;
    SubmitTodoRequest(const SubmitTodoRequest &) = default ;
    SubmitTodoRequest(SubmitTodoRequest &&) = default ;
    SubmitTodoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTodoRequest() = default ;
    SubmitTodoRequest& operator=(const SubmitTodoRequest &) = default ;
    SubmitTodoRequest& operator=(SubmitTodoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Answers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Answers& obj) { 
        DARABONBA_PTR_TO_JSON(answer, answer_);
        DARABONBA_PTR_TO_JSON(question, question_);
      };
      friend void from_json(const Darabonba::Json& j, Answers& obj) { 
        DARABONBA_PTR_FROM_JSON(answer, answer_);
        DARABONBA_PTR_FROM_JSON(question, question_);
      };
      Answers() = default ;
      Answers(const Answers &) = default ;
      Answers(Answers &&) = default ;
      Answers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Answers() = default ;
      Answers& operator=(const Answers &) = default ;
      Answers& operator=(Answers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->answer_ == nullptr
        && this->question_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline const vector<string> & getAnswer() const { DARABONBA_PTR_GET_CONST(answer_, vector<string>) };
      inline vector<string> getAnswer() { DARABONBA_PTR_GET(answer_, vector<string>) };
      inline Answers& setAnswer(const vector<string> & answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };
      inline Answers& setAnswer(vector<string> && answer) { DARABONBA_PTR_SET_RVALUE(answer_, answer) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Answers& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    protected:
      // The array of answer values.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> answer_ {};
      // The original text that corresponds to questions[].question.
      // 
      // This parameter is required.
      shared_ptr<string> question_ {};
    };

    virtual bool empty() const override { return this->answers_ == nullptr
        && this->tenantId_ == nullptr && this->todoId_ == nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline const vector<SubmitTodoRequest::Answers> & getAnswers() const { DARABONBA_PTR_GET_CONST(answers_, vector<SubmitTodoRequest::Answers>) };
    inline vector<SubmitTodoRequest::Answers> getAnswers() { DARABONBA_PTR_GET(answers_, vector<SubmitTodoRequest::Answers>) };
    inline SubmitTodoRequest& setAnswers(const vector<SubmitTodoRequest::Answers> & answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };
    inline SubmitTodoRequest& setAnswers(vector<SubmitTodoRequest::Answers> && answers) { DARABONBA_PTR_SET_RVALUE(answers_, answers) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SubmitTodoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline SubmitTodoRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // The array of answers. The original text of the question must match the to-do question.
    // 
    // This parameter is required.
    shared_ptr<vector<SubmitTodoRequest::Answers>> answers_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the to-do item.
    // 
    // This parameter is required.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
