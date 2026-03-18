// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAITEACHERENGLISHCOMPOSITIONTUTORINGWORKFLOWRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAITEACHERENGLISHCOMPOSITIONTUTORINGWORKFLOWRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(essayOutline, essayOutline_);
      DARABONBA_PTR_TO_JSON(essayRequirements, essayRequirements_);
      DARABONBA_PTR_TO_JSON(essayTopic, essayTopic_);
      DARABONBA_PTR_TO_JSON(essayType, essayType_);
      DARABONBA_PTR_TO_JSON(essayWordCount, essayWordCount_);
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(responseMode, responseMode_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(essayOutline, essayOutline_);
      DARABONBA_PTR_FROM_JSON(essayRequirements, essayRequirements_);
      DARABONBA_PTR_FROM_JSON(essayTopic, essayTopic_);
      DARABONBA_PTR_FROM_JSON(essayType, essayType_);
      DARABONBA_PTR_FROM_JSON(essayWordCount, essayWordCount_);
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(responseMode, responseMode_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest() = default ;
    ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest(const ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &) = default ;
    ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest(ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &&) = default ;
    ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest() = default ;
    ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& operator=(const ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &) = default ;
    ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& operator=(ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->essayOutline_ == nullptr
        && this->essayRequirements_ == nullptr && this->essayTopic_ == nullptr && this->essayType_ == nullptr && this->essayWordCount_ == nullptr && this->grade_ == nullptr
        && this->responseMode_ == nullptr && this->userId_ == nullptr; };
    // essayOutline Field Functions 
    bool hasEssayOutline() const { return this->essayOutline_ != nullptr;};
    void deleteEssayOutline() { this->essayOutline_ = nullptr;};
    inline string getEssayOutline() const { DARABONBA_PTR_GET_DEFAULT(essayOutline_, "") };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setEssayOutline(string essayOutline) { DARABONBA_PTR_SET_VALUE(essayOutline_, essayOutline) };


    // essayRequirements Field Functions 
    bool hasEssayRequirements() const { return this->essayRequirements_ != nullptr;};
    void deleteEssayRequirements() { this->essayRequirements_ = nullptr;};
    inline string getEssayRequirements() const { DARABONBA_PTR_GET_DEFAULT(essayRequirements_, "") };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setEssayRequirements(string essayRequirements) { DARABONBA_PTR_SET_VALUE(essayRequirements_, essayRequirements) };


    // essayTopic Field Functions 
    bool hasEssayTopic() const { return this->essayTopic_ != nullptr;};
    void deleteEssayTopic() { this->essayTopic_ = nullptr;};
    inline string getEssayTopic() const { DARABONBA_PTR_GET_DEFAULT(essayTopic_, "") };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setEssayTopic(string essayTopic) { DARABONBA_PTR_SET_VALUE(essayTopic_, essayTopic) };


    // essayType Field Functions 
    bool hasEssayType() const { return this->essayType_ != nullptr;};
    void deleteEssayType() { this->essayType_ = nullptr;};
    inline string getEssayType() const { DARABONBA_PTR_GET_DEFAULT(essayType_, "") };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setEssayType(string essayType) { DARABONBA_PTR_SET_VALUE(essayType_, essayType) };


    // essayWordCount Field Functions 
    bool hasEssayWordCount() const { return this->essayWordCount_ != nullptr;};
    void deleteEssayWordCount() { this->essayWordCount_ = nullptr;};
    inline int64_t getEssayWordCount() const { DARABONBA_PTR_GET_DEFAULT(essayWordCount_, 0L) };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setEssayWordCount(int64_t essayWordCount) { DARABONBA_PTR_SET_VALUE(essayWordCount_, essayWordCount) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline int64_t getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, 0L) };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setGrade(int64_t grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // responseMode Field Functions 
    bool hasResponseMode() const { return this->responseMode_ != nullptr;};
    void deleteResponseMode() { this->responseMode_ = nullptr;};
    inline string getResponseMode() const { DARABONBA_PTR_GET_DEFAULT(responseMode_, "") };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setResponseMode(string responseMode) { DARABONBA_PTR_SET_VALUE(responseMode_, responseMode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> essayOutline_ {};
    // This parameter is required.
    shared_ptr<string> essayRequirements_ {};
    // This parameter is required.
    shared_ptr<string> essayTopic_ {};
    // This parameter is required.
    shared_ptr<string> essayType_ {};
    shared_ptr<int64_t> essayWordCount_ {};
    // This parameter is required.
    shared_ptr<int64_t> grade_ {};
    // This parameter is required.
    shared_ptr<string> responseMode_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
