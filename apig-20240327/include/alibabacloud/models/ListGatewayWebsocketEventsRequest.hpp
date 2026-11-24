// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYWEBSOCKETEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYWEBSOCKETEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayWebsocketEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayWebsocketEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(connectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(turnId, turnId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayWebsocketEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(connectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(turnId, turnId_);
    };
    ListGatewayWebsocketEventsRequest() = default ;
    ListGatewayWebsocketEventsRequest(const ListGatewayWebsocketEventsRequest &) = default ;
    ListGatewayWebsocketEventsRequest(ListGatewayWebsocketEventsRequest &&) = default ;
    ListGatewayWebsocketEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayWebsocketEventsRequest() = default ;
    ListGatewayWebsocketEventsRequest& operator=(const ListGatewayWebsocketEventsRequest &) = default ;
    ListGatewayWebsocketEventsRequest& operator=(ListGatewayWebsocketEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionId_ == nullptr
        && this->endTime_ == nullptr && this->maxResults_ == nullptr && this->model_ == nullptr && this->nextToken_ == nullptr && this->provider_ == nullptr
        && this->source_ == nullptr && this->startTime_ == nullptr && this->turnId_ == nullptr; };
    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline ListGatewayWebsocketEventsRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListGatewayWebsocketEventsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGatewayWebsocketEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListGatewayWebsocketEventsRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGatewayWebsocketEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListGatewayWebsocketEventsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListGatewayWebsocketEventsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListGatewayWebsocketEventsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // turnId Field Functions 
    bool hasTurnId() const { return this->turnId_ != nullptr;};
    void deleteTurnId() { this->turnId_ = nullptr;};
    inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
    inline ListGatewayWebsocketEventsRequest& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


  protected:
    // The connection identifier.
    shared_ptr<string> connectionId_ {};
    // The end time. The value is a UNIX timestamp in seconds since the UTC epoch. Example: 1793919600.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The maximum number of results per page for cursor-based pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The model.
    shared_ptr<string> model_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The provider.
    shared_ptr<string> provider_ {};
    // The log source.
    shared_ptr<string> source_ {};
    // The start time. The value is a UNIX timestamp in seconds since the UTC epoch. Example: 1793916000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The turn identifier.
    shared_ptr<string> turnId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
