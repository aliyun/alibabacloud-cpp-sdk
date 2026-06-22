// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TurnId, turnId_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TurnId, turnId_);
    };
    KopilotFeedbackRequest() = default ;
    KopilotFeedbackRequest(const KopilotFeedbackRequest &) = default ;
    KopilotFeedbackRequest(KopilotFeedbackRequest &&) = default ;
    KopilotFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotFeedbackRequest() = default ;
    KopilotFeedbackRequest& operator=(const KopilotFeedbackRequest &) = default ;
    KopilotFeedbackRequest& operator=(KopilotFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->feedback_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr && this->turnId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline KopilotFeedbackRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline KopilotFeedbackRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline KopilotFeedbackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline KopilotFeedbackRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // turnId Field Functions 
    bool hasTurnId() const { return this->turnId_ != nullptr;};
    void deleteTurnId() { this->turnId_ = nullptr;};
    inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
    inline KopilotFeedbackRequest& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<string> feedback_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> turnId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
