// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYNAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYNAMESPACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListNamespacesResponseBodyNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBodyNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBodyNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListNamespacesResponseBodyNamespaces() = default ;
    ListNamespacesResponseBodyNamespaces(const ListNamespacesResponseBodyNamespaces &) = default ;
    ListNamespacesResponseBodyNamespaces(ListNamespacesResponseBodyNamespaces &&) = default ;
    ListNamespacesResponseBodyNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBodyNamespaces() = default ;
    ListNamespacesResponseBodyNamespaces& operator=(const ListNamespacesResponseBodyNamespaces &) = default ;
    ListNamespacesResponseBodyNamespaces& operator=(ListNamespacesResponseBodyNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const vector<string> & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, vector<string>) };
    inline vector<string> _namespace() { DARABONBA_PTR_GET(namespace_, vector<string>) };
    inline ListNamespacesResponseBodyNamespaces& setNamespace(const vector<string> & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline ListNamespacesResponseBodyNamespaces& setNamespace(vector<string> && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<vector<string>> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
