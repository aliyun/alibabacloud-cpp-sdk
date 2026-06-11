// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListNetworkServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(networkServices, networkServices_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(queues, queues_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(networkServices, networkServices_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(queues, queues_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListNetworkServicesResponseBody() = default ;
    ListNetworkServicesResponseBody(const ListNetworkServicesResponseBody &) = default ;
    ListNetworkServicesResponseBody(ListNetworkServicesResponseBody &&) = default ;
    ListNetworkServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkServicesResponseBody() = default ;
    ListNetworkServicesResponseBody& operator=(const ListNetworkServicesResponseBody &) = default ;
    ListNetworkServicesResponseBody& operator=(ListNetworkServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Queues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queues& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkServiceId, networkServiceId_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(vswitchIds, vswitchIds_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Queues& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkServiceId, networkServiceId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(vswitchIds, vswitchIds_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Queues() = default ;
      Queues(const Queues &) = default ;
      Queues(Queues &&) = default ;
      Queues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queues() = default ;
      Queues& operator=(const Queues &) = default ;
      Queues& operator=(Queues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StateChangeReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateChangeReason& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, StateChangeReason& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        StateChangeReason() = default ;
        StateChangeReason(const StateChangeReason &) = default ;
        StateChangeReason(StateChangeReason &&) = default ;
        StateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateChangeReason() = default ;
        StateChangeReason& operator=(const StateChangeReason &) = default ;
        StateChangeReason& operator=(StateChangeReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // This parameter is deprecated.
        shared_ptr<string> code_ {};
        // This parameter is deprecated.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->networkServiceId_ == nullptr && this->state_ == nullptr && this->stateChangeReason_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchIds_ == nullptr && this->workspaceId_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Queues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkServiceId Field Functions 
      bool hasNetworkServiceId() const { return this->networkServiceId_ != nullptr;};
      void deleteNetworkServiceId() { this->networkServiceId_ = nullptr;};
      inline string getNetworkServiceId() const { DARABONBA_PTR_GET_DEFAULT(networkServiceId_, "") };
      inline Queues& setNetworkServiceId(string networkServiceId) { DARABONBA_PTR_SET_VALUE(networkServiceId_, networkServiceId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Queues& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const Queues::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, Queues::StateChangeReason) };
      inline Queues::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, Queues::StateChangeReason) };
      inline Queues& setStateChangeReason(const Queues::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline Queues& setStateChangeReason(Queues::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Queues& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Queues& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline Queues& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline Queues& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Queues& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // This parameter is deprecated.
      shared_ptr<string> name_ {};
      // This parameter is deprecated.
      shared_ptr<string> networkServiceId_ {};
      // This parameter is deprecated.
      shared_ptr<string> state_ {};
      // This parameter is deprecated.
      shared_ptr<Queues::StateChangeReason> stateChangeReason_ {};
      // This parameter is deprecated.
      shared_ptr<string> type_ {};
      // This parameter is deprecated.
      shared_ptr<string> vpcId_ {};
      // This parameter is deprecated.
      shared_ptr<vector<string>> vswitchIds_ {};
      // This parameter is deprecated.
      shared_ptr<string> workspaceId_ {};
    };

    class NetworkServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkServices& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkServiceId, networkServiceId_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(vswitchIds, vswitchIds_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkServices& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkServiceId, networkServiceId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(vswitchIds, vswitchIds_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      NetworkServices() = default ;
      NetworkServices(const NetworkServices &) = default ;
      NetworkServices(NetworkServices &&) = default ;
      NetworkServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkServices() = default ;
      NetworkServices& operator=(const NetworkServices &) = default ;
      NetworkServices& operator=(NetworkServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StateChangeReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateChangeReason& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, StateChangeReason& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        StateChangeReason() = default ;
        StateChangeReason(const StateChangeReason &) = default ;
        StateChangeReason(StateChangeReason &&) = default ;
        StateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateChangeReason() = default ;
        StateChangeReason& operator=(const StateChangeReason &) = default ;
        StateChangeReason& operator=(StateChangeReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The status code.
        shared_ptr<string> code_ {};
        // The message that provides details about the state change.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->networkServiceId_ == nullptr && this->state_ == nullptr && this->stateChangeReason_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchIds_ == nullptr && this->workspaceId_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NetworkServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkServiceId Field Functions 
      bool hasNetworkServiceId() const { return this->networkServiceId_ != nullptr;};
      void deleteNetworkServiceId() { this->networkServiceId_ = nullptr;};
      inline string getNetworkServiceId() const { DARABONBA_PTR_GET_DEFAULT(networkServiceId_, "") };
      inline NetworkServices& setNetworkServiceId(string networkServiceId) { DARABONBA_PTR_SET_VALUE(networkServiceId_, networkServiceId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline NetworkServices& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const NetworkServices::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, NetworkServices::StateChangeReason) };
      inline NetworkServices::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, NetworkServices::StateChangeReason) };
      inline NetworkServices& setStateChangeReason(const NetworkServices::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline NetworkServices& setStateChangeReason(NetworkServices::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NetworkServices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkServices& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline NetworkServices& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline NetworkServices& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline NetworkServices& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The name of the network connection.
      shared_ptr<string> name_ {};
      // The ID of the network connection.
      shared_ptr<string> networkServiceId_ {};
      // The state of the network connection.
      shared_ptr<string> state_ {};
      // The reason for the state change.
      shared_ptr<NetworkServices::StateChangeReason> stateChangeReason_ {};
      // The type of the network connection.
      shared_ptr<string> type_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The list of vSwitch IDs.
      shared_ptr<vector<string>> vswitchIds_ {};
      // The ID of the workspace.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->networkServices_ == nullptr && this->nextToken_ == nullptr && this->queues_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNetworkServicesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkServices Field Functions 
    bool hasNetworkServices() const { return this->networkServices_ != nullptr;};
    void deleteNetworkServices() { this->networkServices_ = nullptr;};
    inline const vector<ListNetworkServicesResponseBody::NetworkServices> & getNetworkServices() const { DARABONBA_PTR_GET_CONST(networkServices_, vector<ListNetworkServicesResponseBody::NetworkServices>) };
    inline vector<ListNetworkServicesResponseBody::NetworkServices> getNetworkServices() { DARABONBA_PTR_GET(networkServices_, vector<ListNetworkServicesResponseBody::NetworkServices>) };
    inline ListNetworkServicesResponseBody& setNetworkServices(const vector<ListNetworkServicesResponseBody::NetworkServices> & networkServices) { DARABONBA_PTR_SET_VALUE(networkServices_, networkServices) };
    inline ListNetworkServicesResponseBody& setNetworkServices(vector<ListNetworkServicesResponseBody::NetworkServices> && networkServices) { DARABONBA_PTR_SET_RVALUE(networkServices_, networkServices) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkServicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<ListNetworkServicesResponseBody::Queues> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<ListNetworkServicesResponseBody::Queues>) };
    inline vector<ListNetworkServicesResponseBody::Queues> getQueues() { DARABONBA_PTR_GET(queues_, vector<ListNetworkServicesResponseBody::Queues>) };
    inline ListNetworkServicesResponseBody& setQueues(const vector<ListNetworkServicesResponseBody::Queues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListNetworkServicesResponseBody& setQueues(vector<ListNetworkServicesResponseBody::Queues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNetworkServicesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // A list of network connections.
    shared_ptr<vector<ListNetworkServicesResponseBody::NetworkServices>> networkServices_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If this parameter is empty, all results have been returned.
    shared_ptr<string> nextToken_ {};
    // This parameter is deprecated.
    shared_ptr<vector<ListNetworkServicesResponseBody::Queues>> queues_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
