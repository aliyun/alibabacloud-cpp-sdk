// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterAddonInstancesResponseBodyAddons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterAddonInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(addons, addons_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(addons, addons_);
    };
    ListClusterAddonInstancesResponseBody() = default ;
    ListClusterAddonInstancesResponseBody(const ListClusterAddonInstancesResponseBody &) = default ;
    ListClusterAddonInstancesResponseBody(ListClusterAddonInstancesResponseBody &&) = default ;
    ListClusterAddonInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstancesResponseBody() = default ;
    ListClusterAddonInstancesResponseBody& operator=(const ListClusterAddonInstancesResponseBody &) = default ;
    ListClusterAddonInstancesResponseBody& operator=(ListClusterAddonInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addons_ != nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListClusterAddonInstancesResponseBodyAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListClusterAddonInstancesResponseBodyAddons>) };
    inline vector<ListClusterAddonInstancesResponseBodyAddons> addons() { DARABONBA_PTR_GET(addons_, vector<ListClusterAddonInstancesResponseBodyAddons>) };
    inline ListClusterAddonInstancesResponseBody& setAddons(const vector<ListClusterAddonInstancesResponseBodyAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListClusterAddonInstancesResponseBody& setAddons(vector<ListClusterAddonInstancesResponseBodyAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


  protected:
    // A list of components that are installed in the cluster.
    std::shared_ptr<vector<ListClusterAddonInstancesResponseBodyAddons>> addons_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
