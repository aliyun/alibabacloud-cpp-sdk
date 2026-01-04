// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadBalancerListenersResponseBody() = default ;
    DescribeLoadBalancerListenersResponseBody(const DescribeLoadBalancerListenersResponseBody &) = default ;
    DescribeLoadBalancerListenersResponseBody(DescribeLoadBalancerListenersResponseBody &&) = default ;
    DescribeLoadBalancerListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBody() = default ;
    DescribeLoadBalancerListenersResponseBody& operator=(const DescribeLoadBalancerListenersResponseBody &) = default ;
    DescribeLoadBalancerListenersResponseBody& operator=(DescribeLoadBalancerListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(Listener, listener_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(Listener, listener_);
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
      class Listener : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Listener& obj) { 
          DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Listener& obj) { 
          DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Listener() = default ;
        Listener(const Listener &) = default ;
        Listener(Listener &&) = default ;
        Listener(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Listener() = default ;
        Listener& operator=(const Listener &) = default ;
        Listener& operator=(Listener &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendServerPort_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->forwardPort_ == nullptr && this->listenerForward_ == nullptr && this->listenerPort_ == nullptr
        && this->loadBalancerId_ == nullptr && this->protocol_ == nullptr && this->status_ == nullptr; };
        // backendServerPort Field Functions 
        bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
        void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
        inline int32_t getBackendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
        inline Listener& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Listener& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Listener& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // forwardPort Field Functions 
        bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
        void deleteForwardPort() { this->forwardPort_ = nullptr;};
        inline string getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, "") };
        inline Listener& setForwardPort(string forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


        // listenerForward Field Functions 
        bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
        void deleteListenerForward() { this->listenerForward_ = nullptr;};
        inline string getListenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
        inline Listener& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline string getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
        inline Listener& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline Listener& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Listener& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Listener& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The backend port that is used by the ELB instance. Valid values: **1** to **65535**.
        shared_ptr<int32_t> backendServerPort_ {};
        // The timestamp when the listener was created.
        shared_ptr<string> createTime_ {};
        // The description of the listener.
        shared_ptr<string> description_ {};
        // The listener port that is used for HTTP-to-HTTPS redirection.
        shared_ptr<string> forwardPort_ {};
        // Indicates whether HTTP-to-HTTPS redirection is enabled for the listener. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> listenerForward_ {};
        // The listening port.
        shared_ptr<string> listenerPort_ {};
        // The ID of the ELB instance.
        shared_ptr<string> loadBalancerId_ {};
        // The network transmission protocol that is used by the listener.
        // 
        // *   **tcp**
        // *   **udp**
        // *   **http**
        // *   **https**
        shared_ptr<string> protocol_ {};
        // The status of the listener. Valid values:
        // 
        // *   **running**
        // *   **stopped**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->listener_ == nullptr; };
      // listener Field Functions 
      bool hasListener() const { return this->listener_ != nullptr;};
      void deleteListener() { this->listener_ = nullptr;};
      inline const vector<Listeners::Listener> & getListener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Listeners::Listener>) };
      inline vector<Listeners::Listener> getListener() { DARABONBA_PTR_GET(listener_, vector<Listeners::Listener>) };
      inline Listeners& setListener(const vector<Listeners::Listener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
      inline Listeners& setListener(vector<Listeners::Listener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


    protected:
      shared_ptr<vector<Listeners::Listener>> listener_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const DescribeLoadBalancerListenersResponseBody::Listeners & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, DescribeLoadBalancerListenersResponseBody::Listeners) };
    inline DescribeLoadBalancerListenersResponseBody::Listeners getListeners() { DARABONBA_PTR_GET(listeners_, DescribeLoadBalancerListenersResponseBody::Listeners) };
    inline DescribeLoadBalancerListenersResponseBody& setListeners(const DescribeLoadBalancerListenersResponseBody::Listeners & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLoadBalancerListenersResponseBody& setListeners(DescribeLoadBalancerListenersResponseBody::Listeners && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The listeners of the ELB instance.
    shared_ptr<DescribeLoadBalancerListenersResponseBody::Listeners> listeners_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
