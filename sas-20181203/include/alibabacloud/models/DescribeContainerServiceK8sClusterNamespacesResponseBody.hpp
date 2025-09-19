// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces.hpp>
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
    virtual bool empty() const override { this->k8sClusterNamespaces_ != nullptr
        && this->requestId_ != nullptr; };
    // k8sClusterNamespaces Field Functions 
    bool hasK8sClusterNamespaces() const { return this->k8sClusterNamespaces_ != nullptr;};
    void deleteK8sClusterNamespaces() { this->k8sClusterNamespaces_ = nullptr;};
    inline const vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces> & k8sClusterNamespaces() const { DARABONBA_PTR_GET_CONST(k8sClusterNamespaces_, vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces>) };
    inline vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces> k8sClusterNamespaces() { DARABONBA_PTR_GET(k8sClusterNamespaces_, vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces>) };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBody& setK8sClusterNamespaces(const vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces> & k8sClusterNamespaces) { DARABONBA_PTR_SET_VALUE(k8sClusterNamespaces_, k8sClusterNamespaces) };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBody& setK8sClusterNamespaces(vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces> && k8sClusterNamespaces) { DARABONBA_PTR_SET_RVALUE(k8sClusterNamespaces_, k8sClusterNamespaces) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The namespaces.
    std::shared_ptr<vector<DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces>> k8sClusterNamespaces_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
