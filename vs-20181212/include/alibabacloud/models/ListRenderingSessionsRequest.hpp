// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListRenderingSessionsRequest() = default ;
    ListRenderingSessionsRequest(const ListRenderingSessionsRequest &) = default ;
    ListRenderingSessionsRequest(ListRenderingSessionsRequest &&) = default ;
    ListRenderingSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingSessionsRequest() = default ;
    ListRenderingSessionsRequest& operator=(const ListRenderingSessionsRequest &) = default ;
    ListRenderingSessionsRequest& operator=(ListRenderingSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientId_ == nullptr && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->patchId_ == nullptr
        && this->projectId_ == nullptr && this->renderingInstanceId_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListRenderingSessionsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ListRenderingSessionsRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListRenderingSessionsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRenderingSessionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRenderingSessionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline ListRenderingSessionsRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListRenderingSessionsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListRenderingSessionsRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListRenderingSessionsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListRenderingSessionsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListRenderingSessionsRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> clientId_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> patchId_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
