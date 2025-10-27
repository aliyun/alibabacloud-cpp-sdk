// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNamespacesResponseBodyDataNamespaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListNamespacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
    };
    ListNamespacesResponseBodyData() = default ;
    ListNamespacesResponseBodyData(const ListNamespacesResponseBodyData &) = default ;
    ListNamespacesResponseBodyData(ListNamespacesResponseBodyData &&) = default ;
    ListNamespacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBodyData() = default ;
    ListNamespacesResponseBodyData& operator=(const ListNamespacesResponseBodyData &) = default ;
    ListNamespacesResponseBodyData& operator=(ListNamespacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaces_ == nullptr; };
    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<Models::ListNamespacesResponseBodyDataNamespaces> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<Models::ListNamespacesResponseBodyDataNamespaces>) };
    inline vector<Models::ListNamespacesResponseBodyDataNamespaces> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<Models::ListNamespacesResponseBodyDataNamespaces>) };
    inline ListNamespacesResponseBodyData& setNamespaces(const vector<Models::ListNamespacesResponseBodyDataNamespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ListNamespacesResponseBodyData& setNamespaces(vector<Models::ListNamespacesResponseBodyDataNamespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


  protected:
    // The namespaces and their details.
    std::shared_ptr<vector<Models::ListNamespacesResponseBodyDataNamespaces>> namespaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
