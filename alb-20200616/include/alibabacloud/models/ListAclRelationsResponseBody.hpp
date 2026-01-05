// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACLRELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAclRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclRelations, aclRelations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRelations, aclRelations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAclRelationsResponseBody() = default ;
    ListAclRelationsResponseBody(const ListAclRelationsResponseBody &) = default ;
    ListAclRelationsResponseBody(ListAclRelationsResponseBody &&) = default ;
    ListAclRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclRelationsResponseBody() = default ;
    ListAclRelationsResponseBody& operator=(const ListAclRelationsResponseBody &) = default ;
    ListAclRelationsResponseBody& operator=(ListAclRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclRelations& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
      };
      friend void from_json(const Darabonba::Json& j, AclRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
      };
      AclRelations() = default ;
      AclRelations(const AclRelations &) = default ;
      AclRelations(AclRelations &&) = default ;
      AclRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclRelations() = default ;
      AclRelations& operator=(const AclRelations &) = default ;
      AclRelations& operator=(AclRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedListeners : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedListeners& obj) { 
          DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedListeners& obj) { 
          DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RelatedListeners() = default ;
        RelatedListeners(const RelatedListeners &) = default ;
        RelatedListeners(RelatedListeners &&) = default ;
        RelatedListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedListeners() = default ;
        RelatedListeners& operator=(const RelatedListeners &) = default ;
        RelatedListeners& operator=(RelatedListeners &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->listenerId_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalancerId_ == nullptr && this->status_ == nullptr; };
        // listenerId Field Functions 
        bool hasListenerId() const { return this->listenerId_ != nullptr;};
        void deleteListenerId() { this->listenerId_ = nullptr;};
        inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
        inline RelatedListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
        inline RelatedListeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // listenerProtocol Field Functions 
        bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
        void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
        inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
        inline RelatedListeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline RelatedListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RelatedListeners& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The listener ID.
        shared_ptr<string> listenerId_ {};
        // The listener port.
        shared_ptr<int32_t> listenerPort_ {};
        // The listener protocol.
        shared_ptr<string> listenerProtocol_ {};
        // The ID of the SLB instance.
        shared_ptr<string> loadBalancerId_ {};
        // The association status between the ACL and the listener.
        // 
        // *   **Associating**
        // *   **Associated**
        // *   **Dissociating**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->relatedListeners_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline AclRelations& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // relatedListeners Field Functions 
      bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
      void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
      inline const vector<AclRelations::RelatedListeners> & getRelatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<AclRelations::RelatedListeners>) };
      inline vector<AclRelations::RelatedListeners> getRelatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<AclRelations::RelatedListeners>) };
      inline AclRelations& setRelatedListeners(const vector<AclRelations::RelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
      inline AclRelations& setRelatedListeners(vector<AclRelations::RelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


    protected:
      // ACL ID
      shared_ptr<string> aclId_ {};
      // The listeners that are associated with the ACL.
      shared_ptr<vector<AclRelations::RelatedListeners>> relatedListeners_ {};
    };

    virtual bool empty() const override { return this->aclRelations_ == nullptr
        && this->requestId_ == nullptr; };
    // aclRelations Field Functions 
    bool hasAclRelations() const { return this->aclRelations_ != nullptr;};
    void deleteAclRelations() { this->aclRelations_ = nullptr;};
    inline const vector<ListAclRelationsResponseBody::AclRelations> & getAclRelations() const { DARABONBA_PTR_GET_CONST(aclRelations_, vector<ListAclRelationsResponseBody::AclRelations>) };
    inline vector<ListAclRelationsResponseBody::AclRelations> getAclRelations() { DARABONBA_PTR_GET(aclRelations_, vector<ListAclRelationsResponseBody::AclRelations>) };
    inline ListAclRelationsResponseBody& setAclRelations(const vector<ListAclRelationsResponseBody::AclRelations> & aclRelations) { DARABONBA_PTR_SET_VALUE(aclRelations_, aclRelations) };
    inline ListAclRelationsResponseBody& setAclRelations(vector<ListAclRelationsResponseBody::AclRelations> && aclRelations) { DARABONBA_PTR_SET_RVALUE(aclRelations_, aclRelations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAclRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The relations between the specified ACL and the listeners.
    shared_ptr<vector<ListAclRelationsResponseBody::AclRelations>> aclRelations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
