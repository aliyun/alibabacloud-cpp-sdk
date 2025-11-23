// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSEROWNEDRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSEROWNEDRESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserOwnedResourcesResponseBodyDataResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserOwnedResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserOwnedResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(resourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserOwnedResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceList, resourceList_);
    };
    ListUserOwnedResourcesResponseBodyData() = default ;
    ListUserOwnedResourcesResponseBodyData(const ListUserOwnedResourcesResponseBodyData &) = default ;
    ListUserOwnedResourcesResponseBodyData(ListUserOwnedResourcesResponseBodyData &&) = default ;
    ListUserOwnedResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserOwnedResourcesResponseBodyData() = default ;
    ListUserOwnedResourcesResponseBodyData& operator=(const ListUserOwnedResourcesResponseBodyData &) = default ;
    ListUserOwnedResourcesResponseBodyData& operator=(ListUserOwnedResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceList_ == nullptr; };
    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList>) };
    inline vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList>) };
    inline ListUserOwnedResourcesResponseBodyData& setResourceList(const vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline ListUserOwnedResourcesResponseBodyData& setResourceList(vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    std::shared_ptr<vector<Models::ListUserOwnedResourcesResponseBodyDataResourceList>> resourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
