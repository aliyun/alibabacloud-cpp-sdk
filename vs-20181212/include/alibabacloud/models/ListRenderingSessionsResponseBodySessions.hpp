// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSRESPONSEBODYSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSRESPONSEBODYSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingSessionsResponseBodySessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingSessionsResponseBodySessions& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListRenderingSessionsResponseBodySessions() = default ;
    ListRenderingSessionsResponseBodySessions(const ListRenderingSessionsResponseBodySessions &) = default ;
    ListRenderingSessionsResponseBodySessions(ListRenderingSessionsResponseBodySessions &&) = default ;
    ListRenderingSessionsResponseBodySessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingSessionsResponseBodySessions() = default ;
    ListRenderingSessionsResponseBodySessions& operator=(const ListRenderingSessionsResponseBodySessions &) = default ;
    ListRenderingSessionsResponseBodySessions& operator=(ListRenderingSessionsResponseBodySessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->clientId_ != nullptr && this->patchId_ != nullptr && this->renderingInstanceId_ != nullptr && this->sessionId_ != nullptr && this->startTime_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListRenderingSessionsResponseBodySessions& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ListRenderingSessionsResponseBodySessions& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string patchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline ListRenderingSessionsResponseBodySessions& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListRenderingSessionsResponseBodySessions& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListRenderingSessionsResponseBodySessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListRenderingSessionsResponseBodySessions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> patchId_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
