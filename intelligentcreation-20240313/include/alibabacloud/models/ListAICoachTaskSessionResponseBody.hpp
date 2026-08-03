// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHTASKSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHTASKSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachTaskSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachTaskSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionList, sessionList_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachTaskSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionList, sessionList_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListAICoachTaskSessionResponseBody() = default ;
    ListAICoachTaskSessionResponseBody(const ListAICoachTaskSessionResponseBody &) = default ;
    ListAICoachTaskSessionResponseBody(ListAICoachTaskSessionResponseBody &&) = default ;
    ListAICoachTaskSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachTaskSessionResponseBody() = default ;
    ListAICoachTaskSessionResponseBody& operator=(const ListAICoachTaskSessionResponseBody &) = default ;
    ListAICoachTaskSessionResponseBody& operator=(ListAICoachTaskSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionList& obj) { 
        DARABONBA_PTR_TO_JSON(sessionCreateTime, sessionCreateTime_);
        DARABONBA_PTR_TO_JSON(sessionDuration, sessionDuration_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(sessionStatus, sessionStatus_);
      };
      friend void from_json(const Darabonba::Json& j, SessionList& obj) { 
        DARABONBA_PTR_FROM_JSON(sessionCreateTime, sessionCreateTime_);
        DARABONBA_PTR_FROM_JSON(sessionDuration, sessionDuration_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(sessionStatus, sessionStatus_);
      };
      SessionList() = default ;
      SessionList(const SessionList &) = default ;
      SessionList(SessionList &&) = default ;
      SessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionList() = default ;
      SessionList& operator=(const SessionList &) = default ;
      SessionList& operator=(SessionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sessionCreateTime_ == nullptr
        && this->sessionDuration_ == nullptr && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr; };
      // sessionCreateTime Field Functions 
      bool hasSessionCreateTime() const { return this->sessionCreateTime_ != nullptr;};
      void deleteSessionCreateTime() { this->sessionCreateTime_ = nullptr;};
      inline string getSessionCreateTime() const { DARABONBA_PTR_GET_DEFAULT(sessionCreateTime_, "") };
      inline SessionList& setSessionCreateTime(string sessionCreateTime) { DARABONBA_PTR_SET_VALUE(sessionCreateTime_, sessionCreateTime) };


      // sessionDuration Field Functions 
      bool hasSessionDuration() const { return this->sessionDuration_ != nullptr;};
      void deleteSessionDuration() { this->sessionDuration_ = nullptr;};
      inline int64_t getSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionDuration_, 0L) };
      inline SessionList& setSessionDuration(int64_t sessionDuration) { DARABONBA_PTR_SET_VALUE(sessionDuration_, sessionDuration) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline SessionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline int32_t getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, 0) };
      inline SessionList& setSessionStatus(int32_t sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    protected:
      shared_ptr<string> sessionCreateTime_ {};
      shared_ptr<int64_t> sessionDuration_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<int32_t> sessionStatus_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->sessionList_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAICoachTaskSessionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAICoachTaskSessionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAICoachTaskSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionList Field Functions 
    bool hasSessionList() const { return this->sessionList_ != nullptr;};
    void deleteSessionList() { this->sessionList_ = nullptr;};
    inline const vector<ListAICoachTaskSessionResponseBody::SessionList> & getSessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<ListAICoachTaskSessionResponseBody::SessionList>) };
    inline vector<ListAICoachTaskSessionResponseBody::SessionList> getSessionList() { DARABONBA_PTR_GET(sessionList_, vector<ListAICoachTaskSessionResponseBody::SessionList>) };
    inline ListAICoachTaskSessionResponseBody& setSessionList(const vector<ListAICoachTaskSessionResponseBody::SessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
    inline ListAICoachTaskSessionResponseBody& setSessionList(vector<ListAICoachTaskSessionResponseBody::SessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAICoachTaskSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListAICoachTaskSessionResponseBody::SessionList>> sessionList_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
