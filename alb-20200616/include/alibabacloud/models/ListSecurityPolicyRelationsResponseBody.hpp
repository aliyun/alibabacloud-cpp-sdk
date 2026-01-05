// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSRESPONSEBODY_HPP_
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
  class ListSecurityPolicyRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecrityPolicyRelations, secrityPolicyRelations_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecrityPolicyRelations, secrityPolicyRelations_);
    };
    ListSecurityPolicyRelationsResponseBody() = default ;
    ListSecurityPolicyRelationsResponseBody(const ListSecurityPolicyRelationsResponseBody &) = default ;
    ListSecurityPolicyRelationsResponseBody(ListSecurityPolicyRelationsResponseBody &&) = default ;
    ListSecurityPolicyRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyRelationsResponseBody() = default ;
    ListSecurityPolicyRelationsResponseBody& operator=(const ListSecurityPolicyRelationsResponseBody &) = default ;
    ListSecurityPolicyRelationsResponseBody& operator=(ListSecurityPolicyRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecrityPolicyRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecrityPolicyRelations& obj) { 
        DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, SecrityPolicyRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      };
      SecrityPolicyRelations() = default ;
      SecrityPolicyRelations(const SecrityPolicyRelations &) = default ;
      SecrityPolicyRelations(SecrityPolicyRelations &&) = default ;
      SecrityPolicyRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecrityPolicyRelations() = default ;
      SecrityPolicyRelations& operator=(const SecrityPolicyRelations &) = default ;
      SecrityPolicyRelations& operator=(SecrityPolicyRelations &&) = default ;
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
        };
        friend void from_json(const Darabonba::Json& j, RelatedListeners& obj) { 
          DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
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
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalancerId_ == nullptr; };
        // listenerId Field Functions 
        bool hasListenerId() const { return this->listenerId_ != nullptr;};
        void deleteListenerId() { this->listenerId_ = nullptr;};
        inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
        inline RelatedListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int64_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0L) };
        inline RelatedListeners& setListenerPort(int64_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


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


      protected:
        // The listener ID.
        shared_ptr<string> listenerId_ {};
        // The listener port.
        shared_ptr<int64_t> listenerPort_ {};
        // The listener protocol.
        shared_ptr<string> listenerProtocol_ {};
        // The Server Load Balancer (SLB) instance ID.
        shared_ptr<string> loadBalancerId_ {};
      };

      virtual bool empty() const override { return this->relatedListeners_ == nullptr
        && this->securityPolicyId_ == nullptr; };
      // relatedListeners Field Functions 
      bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
      void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
      inline const vector<SecrityPolicyRelations::RelatedListeners> & getRelatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<SecrityPolicyRelations::RelatedListeners>) };
      inline vector<SecrityPolicyRelations::RelatedListeners> getRelatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<SecrityPolicyRelations::RelatedListeners>) };
      inline SecrityPolicyRelations& setRelatedListeners(const vector<SecrityPolicyRelations::RelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
      inline SecrityPolicyRelations& setRelatedListeners(vector<SecrityPolicyRelations::RelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline SecrityPolicyRelations& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    protected:
      // The listeners that are associated with the security policy.
      shared_ptr<vector<SecrityPolicyRelations::RelatedListeners>> relatedListeners_ {};
      // The security policy ID.
      shared_ptr<string> securityPolicyId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->secrityPolicyRelations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityPolicyRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secrityPolicyRelations Field Functions 
    bool hasSecrityPolicyRelations() const { return this->secrityPolicyRelations_ != nullptr;};
    void deleteSecrityPolicyRelations() { this->secrityPolicyRelations_ = nullptr;};
    inline const vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations> & getSecrityPolicyRelations() const { DARABONBA_PTR_GET_CONST(secrityPolicyRelations_, vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations>) };
    inline vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations> getSecrityPolicyRelations() { DARABONBA_PTR_GET(secrityPolicyRelations_, vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations>) };
    inline ListSecurityPolicyRelationsResponseBody& setSecrityPolicyRelations(const vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations> & secrityPolicyRelations) { DARABONBA_PTR_SET_VALUE(secrityPolicyRelations_, secrityPolicyRelations) };
    inline ListSecurityPolicyRelationsResponseBody& setSecrityPolicyRelations(vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations> && secrityPolicyRelations) { DARABONBA_PTR_SET_RVALUE(secrityPolicyRelations_, secrityPolicyRelations) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The security policies and the listeners that are associated with the security policies.
    shared_ptr<vector<ListSecurityPolicyRelationsResponseBody::SecrityPolicyRelations>> secrityPolicyRelations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
