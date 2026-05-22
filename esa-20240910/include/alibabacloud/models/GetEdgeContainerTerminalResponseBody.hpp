// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERTERMINALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERTERMINALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerTerminalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerTerminalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerTerminalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetEdgeContainerTerminalResponseBody() = default ;
    GetEdgeContainerTerminalResponseBody(const GetEdgeContainerTerminalResponseBody &) = default ;
    GetEdgeContainerTerminalResponseBody(GetEdgeContainerTerminalResponseBody &&) = default ;
    GetEdgeContainerTerminalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerTerminalResponseBody() = default ;
    GetEdgeContainerTerminalResponseBody& operator=(const GetEdgeContainerTerminalResponseBody &) = default ;
    GetEdgeContainerTerminalResponseBody& operator=(GetEdgeContainerTerminalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && this->container_ == nullptr && this->namespace_ == nullptr && this->pod_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr
        && this->token_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetEdgeContainerTerminalResponseBody& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
    inline GetEdgeContainerTerminalResponseBody& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetEdgeContainerTerminalResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline GetEdgeContainerTerminalResponseBody& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerTerminalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetEdgeContainerTerminalResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetEdgeContainerTerminalResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The cluster name.
    shared_ptr<string> cluster_ {};
    // The container name.
    shared_ptr<string> container_ {};
    // The name of the namespace.
    shared_ptr<string> namespace_ {};
    // The name of the container group.
    shared_ptr<string> pod_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // The information about the shared token.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
