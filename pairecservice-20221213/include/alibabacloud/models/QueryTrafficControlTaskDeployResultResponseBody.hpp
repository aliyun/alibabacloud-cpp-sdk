// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKDEPLOYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKDEPLOYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTaskDeployResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTaskDeployResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployMessage, deployMessage_);
      DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(DraftMessage, draftMessage_);
      DARABONBA_PTR_TO_JSON(DraftStatus, draftStatus_);
      DARABONBA_PTR_TO_JSON(PrepareMessage, prepareMessage_);
      DARABONBA_PTR_TO_JSON(PrepareStatus, prepareStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartMessage, startMessage_);
      DARABONBA_PTR_TO_JSON(StartStatus, startStatus_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskId, trafficControlTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTaskDeployResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployMessage, deployMessage_);
      DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(DraftMessage, draftMessage_);
      DARABONBA_PTR_FROM_JSON(DraftStatus, draftStatus_);
      DARABONBA_PTR_FROM_JSON(PrepareMessage, prepareMessage_);
      DARABONBA_PTR_FROM_JSON(PrepareStatus, prepareStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartMessage, startMessage_);
      DARABONBA_PTR_FROM_JSON(StartStatus, startStatus_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskId, trafficControlTaskId_);
    };
    QueryTrafficControlTaskDeployResultResponseBody() = default ;
    QueryTrafficControlTaskDeployResultResponseBody(const QueryTrafficControlTaskDeployResultResponseBody &) = default ;
    QueryTrafficControlTaskDeployResultResponseBody(QueryTrafficControlTaskDeployResultResponseBody &&) = default ;
    QueryTrafficControlTaskDeployResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTaskDeployResultResponseBody() = default ;
    QueryTrafficControlTaskDeployResultResponseBody& operator=(const QueryTrafficControlTaskDeployResultResponseBody &) = default ;
    QueryTrafficControlTaskDeployResultResponseBody& operator=(QueryTrafficControlTaskDeployResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployMessage_ == nullptr
        && this->deployStatus_ == nullptr && this->draftMessage_ == nullptr && this->draftStatus_ == nullptr && this->prepareMessage_ == nullptr && this->prepareStatus_ == nullptr
        && this->requestId_ == nullptr && this->startMessage_ == nullptr && this->startStatus_ == nullptr && this->trafficControlTaskId_ == nullptr; };
    // deployMessage Field Functions 
    bool hasDeployMessage() const { return this->deployMessage_ != nullptr;};
    void deleteDeployMessage() { this->deployMessage_ = nullptr;};
    inline string getDeployMessage() const { DARABONBA_PTR_GET_DEFAULT(deployMessage_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setDeployMessage(string deployMessage) { DARABONBA_PTR_SET_VALUE(deployMessage_, deployMessage) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // draftMessage Field Functions 
    bool hasDraftMessage() const { return this->draftMessage_ != nullptr;};
    void deleteDraftMessage() { this->draftMessage_ = nullptr;};
    inline string getDraftMessage() const { DARABONBA_PTR_GET_DEFAULT(draftMessage_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setDraftMessage(string draftMessage) { DARABONBA_PTR_SET_VALUE(draftMessage_, draftMessage) };


    // draftStatus Field Functions 
    bool hasDraftStatus() const { return this->draftStatus_ != nullptr;};
    void deleteDraftStatus() { this->draftStatus_ = nullptr;};
    inline string getDraftStatus() const { DARABONBA_PTR_GET_DEFAULT(draftStatus_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setDraftStatus(string draftStatus) { DARABONBA_PTR_SET_VALUE(draftStatus_, draftStatus) };


    // prepareMessage Field Functions 
    bool hasPrepareMessage() const { return this->prepareMessage_ != nullptr;};
    void deletePrepareMessage() { this->prepareMessage_ = nullptr;};
    inline string getPrepareMessage() const { DARABONBA_PTR_GET_DEFAULT(prepareMessage_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setPrepareMessage(string prepareMessage) { DARABONBA_PTR_SET_VALUE(prepareMessage_, prepareMessage) };


    // prepareStatus Field Functions 
    bool hasPrepareStatus() const { return this->prepareStatus_ != nullptr;};
    void deletePrepareStatus() { this->prepareStatus_ = nullptr;};
    inline string getPrepareStatus() const { DARABONBA_PTR_GET_DEFAULT(prepareStatus_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setPrepareStatus(string prepareStatus) { DARABONBA_PTR_SET_VALUE(prepareStatus_, prepareStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startMessage Field Functions 
    bool hasStartMessage() const { return this->startMessage_ != nullptr;};
    void deleteStartMessage() { this->startMessage_ = nullptr;};
    inline string getStartMessage() const { DARABONBA_PTR_GET_DEFAULT(startMessage_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setStartMessage(string startMessage) { DARABONBA_PTR_SET_VALUE(startMessage_, startMessage) };


    // startStatus Field Functions 
    bool hasStartStatus() const { return this->startStatus_ != nullptr;};
    void deleteStartStatus() { this->startStatus_ = nullptr;};
    inline string getStartStatus() const { DARABONBA_PTR_GET_DEFAULT(startStatus_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setStartStatus(string startStatus) { DARABONBA_PTR_SET_VALUE(startStatus_, startStatus) };


    // trafficControlTaskId Field Functions 
    bool hasTrafficControlTaskId() const { return this->trafficControlTaskId_ != nullptr;};
    void deleteTrafficControlTaskId() { this->trafficControlTaskId_ = nullptr;};
    inline string getTrafficControlTaskId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskId_, "") };
    inline QueryTrafficControlTaskDeployResultResponseBody& setTrafficControlTaskId(string trafficControlTaskId) { DARABONBA_PTR_SET_VALUE(trafficControlTaskId_, trafficControlTaskId) };


  protected:
    shared_ptr<string> deployMessage_ {};
    shared_ptr<string> deployStatus_ {};
    shared_ptr<string> draftMessage_ {};
    shared_ptr<string> draftStatus_ {};
    shared_ptr<string> prepareMessage_ {};
    shared_ptr<string> prepareStatus_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startMessage_ {};
    shared_ptr<string> startStatus_ {};
    shared_ptr<string> trafficControlTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
