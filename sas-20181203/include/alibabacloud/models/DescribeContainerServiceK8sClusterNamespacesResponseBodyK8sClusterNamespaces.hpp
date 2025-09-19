// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERNAMESPACESRESPONSEBODYK8SCLUSTERNAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERNAMESPACESRESPONSEBODYK8SCLUSTERNAMESPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces() = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces(const DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces &) = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces(DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces &&) = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces() = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces& operator=(const DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces &) = default ;
    DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces& operator=(DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeContainerServiceK8sClusterNamespacesResponseBodyK8sClusterNamespaces& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
