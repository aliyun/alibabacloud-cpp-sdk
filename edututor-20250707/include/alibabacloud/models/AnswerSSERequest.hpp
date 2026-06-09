// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERSSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANSWERSSEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EduTutor20250707
{
namespace Models
{
  class AnswerSSERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnswerSSERequest& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AnswerSSERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    AnswerSSERequest() = default ;
    AnswerSSERequest(const AnswerSSERequest &) = default ;
    AnswerSSERequest(AnswerSSERequest &&) = default ;
    AnswerSSERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnswerSSERequest() = default ;
    AnswerSSERequest& operator=(const AnswerSSERequest &) = default ;
    AnswerSSERequest& operator=(AnswerSSERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(grade, grade_);
        DARABONBA_PTR_TO_JSON(stage, stage_);
        DARABONBA_PTR_TO_JSON(subject, subject_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(grade, grade_);
        DARABONBA_PTR_FROM_JSON(stage, stage_);
        DARABONBA_PTR_FROM_JSON(subject, subject_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->grade_ == nullptr
        && this->stage_ == nullptr && this->subject_ == nullptr; };
      // grade Field Functions 
      bool hasGrade() const { return this->grade_ != nullptr;};
      void deleteGrade() { this->grade_ = nullptr;};
      inline int32_t getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, 0) };
      inline Parameters& setGrade(int32_t grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline Parameters& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline Parameters& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    protected:
      shared_ptr<int32_t> grade_ {};
      shared_ptr<string> stage_ {};
      shared_ptr<string> subject_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<map<string, string>> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<map<string, string>>) };
      inline vector<map<string, string>> getContent() { DARABONBA_PTR_GET(content_, vector<map<string, string>>) };
      inline Messages& setContent(const vector<map<string, string>> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Messages& setContent(vector<map<string, string>> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<vector<map<string, string>>> content_ {};
      // This parameter is required.
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->parameters_ == nullptr && this->workspaceId_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<AnswerSSERequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<AnswerSSERequest::Messages>) };
    inline vector<AnswerSSERequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<AnswerSSERequest::Messages>) };
    inline AnswerSSERequest& setMessages(const vector<AnswerSSERequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AnswerSSERequest& setMessages(vector<AnswerSSERequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const AnswerSSERequest::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, AnswerSSERequest::Parameters) };
    inline AnswerSSERequest::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, AnswerSSERequest::Parameters) };
    inline AnswerSSERequest& setParameters(const AnswerSSERequest::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline AnswerSSERequest& setParameters(AnswerSSERequest::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AnswerSSERequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<AnswerSSERequest::Messages>> messages_ {};
    shared_ptr<AnswerSSERequest::Parameters> parameters_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EduTutor20250707
#endif
