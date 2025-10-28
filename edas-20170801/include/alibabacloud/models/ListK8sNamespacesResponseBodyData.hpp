// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SNAMESPACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SNAMESPACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sNamespacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListK8sNamespacesResponseBodyData() = default ;
    ListK8sNamespacesResponseBodyData(const ListK8sNamespacesResponseBodyData &) = default ;
    ListK8sNamespacesResponseBodyData(ListK8sNamespacesResponseBodyData &&) = default ;
    ListK8sNamespacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sNamespacesResponseBodyData() = default ;
    ListK8sNamespacesResponseBodyData& operator=(const ListK8sNamespacesResponseBodyData &) = default ;
    ListK8sNamespacesResponseBodyData& operator=(ListK8sNamespacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListK8sNamespacesResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The namespaces of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
