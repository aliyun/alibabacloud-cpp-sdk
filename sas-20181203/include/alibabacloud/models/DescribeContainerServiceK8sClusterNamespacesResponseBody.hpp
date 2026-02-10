// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClusterNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClusterNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterNamespaces, k8sClusterNamespaces_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClusterNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterNamespaces, k8sClusterNamespaces_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerServiceK8sClusterNamespacesResponseBody() = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBody(const DescribeContainerServiceK8sClusterNamespacesResponseBody &) = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBody(DescribeContainerServiceK8sClusterNamespacesResponseBody &&) = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClusterNamespacesResponseBody() = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBody& operator=(const DescribeContainerServiceK8sClusterNamespacesResponseBody &) = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBody& operator=(DescribeContainerServiceK8sClusterNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class K8sClusterNamespaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const K8sClusterNamespaces& obj) { 
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      };
      friend void from_json(const Darabonba::Json& j, K8sClusterNamespaces& obj) { 
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      };
      K8sClusterNamespaces() = default ;
      K8sClusterNamespaces(const K8sClusterNamespaces &) = default ;
      K8sClusterNamespaces(K8sClusterNamespaces &&) = default ;
      K8sClusterNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~K8sClusterNamespaces() = default ;
      K8sClusterNamespaces& operator=(const K8sClusterNamespaces &) = default ;
      K8sClusterNamespaces& operator=(K8sClusterNamespaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->namespace_ == nullptr; };
      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline K8sClusterNamespaces& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    protected:
      // The namespace.
      shared_ptr<string> namespace_ {};
    };

    virtual bool empty() const override { return this->k8sClusterNamespaces_ == nullptr
        && this->requestId_ == nullptr; };
    // k8sClusterNamespaces Field Functions 
    bool hasK8sClusterNamespaces() const { return this->k8sClusterNamespaces_ != nullptr;};
    void deleteK8sClusterNamespaces() { this->k8sClusterNamespaces_ = nullptr;};
    inline const vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces> & getK8sClusterNamespaces() const { DARABONBA_PTR_GET_CONST(k8sClusterNamespaces_, vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces>) };
    inline vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces> getK8sClusterNamespaces() { DARABONBA_PTR_GET(k8sClusterNamespaces_, vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces>) };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBody& setK8sClusterNamespaces(const vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces> & k8sClusterNamespaces) { DARABONBA_PTR_SET_VALUE(k8sClusterNamespaces_, k8sClusterNamespaces) };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBody& setK8sClusterNamespaces(vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces> && k8sClusterNamespaces) { DARABONBA_PTR_SET_RVALUE(k8sClusterNamespaces_, k8sClusterNamespaces) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The namespaces.
    shared_ptr<vector<DescribeContainerServiceK8sClusterNamespacesResponseBody::K8sClusterNamespaces>> k8sClusterNamespaces_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
