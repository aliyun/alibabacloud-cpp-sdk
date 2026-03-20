// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class ListListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListListenersResponseBody() = default ;
    ListListenersResponseBody(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody(ListListenersResponseBody &&) = default ;
    ListListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBody() = default ;
    ListListenersResponseBody& operator=(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody& operator=(ListListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(ListenerStatus, listenerStatus_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TcpIdleTimeout, tcpIdleTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(ListenerStatus, listenerStatus_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TcpIdleTimeout, tcpIdleTimeout_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->listenerDescription_ == nullptr
        && this->listenerId_ == nullptr && this->listenerStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->serverGroupId_ == nullptr && this->tags_ == nullptr
        && this->tcpIdleTimeout_ == nullptr; };
      // listenerDescription Field Functions 
      bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
      void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
      inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
      inline Listeners& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Listeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // listenerStatus Field Functions 
      bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
      void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
      inline string getListenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
      inline Listeners& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline Listeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // serverGroupId Field Functions 
      bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
      void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
      inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
      inline Listeners& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Listeners::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Listeners::Tags>) };
      inline vector<Listeners::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Listeners::Tags>) };
      inline Listeners& setTags(const vector<Listeners::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Listeners& setTags(vector<Listeners::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tcpIdleTimeout Field Functions 
      bool hasTcpIdleTimeout() const { return this->tcpIdleTimeout_ != nullptr;};
      void deleteTcpIdleTimeout() { this->tcpIdleTimeout_ = nullptr;};
      inline int32_t getTcpIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpIdleTimeout_, 0) };
      inline Listeners& setTcpIdleTimeout(int32_t tcpIdleTimeout) { DARABONBA_PTR_SET_VALUE(tcpIdleTimeout_, tcpIdleTimeout) };


    protected:
      // The description of the listener.
      shared_ptr<string> listenerDescription_ {};
      // The listener ID.
      shared_ptr<string> listenerId_ {};
      // The status of the listener. Valid values:
      // 
      // *   **Provisioning**: The listener is being created.
      // *   **Running**: The listener is running.
      // *   **Configuring**: The listener is being configured.
      // *   **Deleting**: The listener is being deleted.
      shared_ptr<string> listenerStatus_ {};
      // The GWLB instance ID.
      shared_ptr<string> loadBalancerId_ {};
      // The server group ID.
      shared_ptr<string> serverGroupId_ {};
      // The tags.
      shared_ptr<vector<Listeners::Tags>> tags_ {};
      // The timeout period of an idle TCP connection. Unit: seconds.
      shared_ptr<int32_t> tcpIdleTimeout_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<ListListenersResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline vector<ListListenersResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline ListListenersResponseBody& setListeners(const vector<ListListenersResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline ListListenersResponseBody& setListeners(vector<ListListenersResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListListenersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListListenersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The GWLB listeners.
    shared_ptr<vector<ListListenersResponseBody::Listeners>> listeners_ {};
    // The maximum number of results to be returned from a single query when the NextToken parameter is used in the query. Valid values: 1 to 1000. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
