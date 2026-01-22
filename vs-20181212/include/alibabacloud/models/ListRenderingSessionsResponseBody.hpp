// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingSessionsResponseBody() = default ;
    ListRenderingSessionsResponseBody(const ListRenderingSessionsResponseBody &) = default ;
    ListRenderingSessionsResponseBody(ListRenderingSessionsResponseBody &&) = default ;
    ListRenderingSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingSessionsResponseBody() = default ;
    ListRenderingSessionsResponseBody& operator=(const ListRenderingSessionsResponseBody &) = default ;
    ListRenderingSessionsResponseBody& operator=(ListRenderingSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(PatchId, patchId_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientId_ == nullptr && this->patchId_ == nullptr && this->renderingInstanceId_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Sessions& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Sessions& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // patchId Field Functions 
      bool hasPatchId() const { return this->patchId_ != nullptr;};
      void deletePatchId() { this->patchId_ = nullptr;};
      inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
      inline Sessions& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline Sessions& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Sessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Sessions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> patchId_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessions_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<ListRenderingSessionsResponseBody::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<ListRenderingSessionsResponseBody::Sessions>) };
    inline vector<ListRenderingSessionsResponseBody::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<ListRenderingSessionsResponseBody::Sessions>) };
    inline ListRenderingSessionsResponseBody& setSessions(const vector<ListRenderingSessionsResponseBody::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline ListRenderingSessionsResponseBody& setSessions(vector<ListRenderingSessionsResponseBody::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingSessionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListRenderingSessionsResponseBody::Sessions>> sessions_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
