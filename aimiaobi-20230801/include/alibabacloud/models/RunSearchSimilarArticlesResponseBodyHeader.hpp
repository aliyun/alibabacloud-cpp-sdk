// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODYHEADER_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODYHEADER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesResponseBodyHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesResponseBodyHeader& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesResponseBodyHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RunSearchSimilarArticlesResponseBodyHeader() = default ;
    RunSearchSimilarArticlesResponseBodyHeader(const RunSearchSimilarArticlesResponseBodyHeader &) = default ;
    RunSearchSimilarArticlesResponseBodyHeader(RunSearchSimilarArticlesResponseBodyHeader &&) = default ;
    RunSearchSimilarArticlesResponseBodyHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesResponseBodyHeader() = default ;
    RunSearchSimilarArticlesResponseBodyHeader& operator=(const RunSearchSimilarArticlesResponseBodyHeader &) = default ;
    RunSearchSimilarArticlesResponseBodyHeader& operator=(RunSearchSimilarArticlesResponseBodyHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->event_ != nullptr && this->sessionId_ != nullptr && this->taskId_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RunSearchSimilarArticlesResponseBodyHeader& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline RunSearchSimilarArticlesResponseBodyHeader& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline RunSearchSimilarArticlesResponseBodyHeader& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunSearchSimilarArticlesResponseBodyHeader& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunSearchSimilarArticlesResponseBodyHeader& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
