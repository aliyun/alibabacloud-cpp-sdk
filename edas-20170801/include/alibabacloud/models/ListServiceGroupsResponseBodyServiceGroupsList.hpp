// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEGROUPSRESPONSEBODYSERVICEGROUPSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEGROUPSRESPONSEBODYSERVICEGROUPSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListServiceGroupsResponseBodyServiceGroupsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceGroupsResponseBodyServiceGroupsList& obj) { 
      DARABONBA_PTR_TO_JSON(ListServiceGroups, listServiceGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceGroupsResponseBodyServiceGroupsList& obj) { 
      DARABONBA_PTR_FROM_JSON(ListServiceGroups, listServiceGroups_);
    };
    ListServiceGroupsResponseBodyServiceGroupsList() = default ;
    ListServiceGroupsResponseBodyServiceGroupsList(const ListServiceGroupsResponseBodyServiceGroupsList &) = default ;
    ListServiceGroupsResponseBodyServiceGroupsList(ListServiceGroupsResponseBodyServiceGroupsList &&) = default ;
    ListServiceGroupsResponseBodyServiceGroupsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceGroupsResponseBodyServiceGroupsList() = default ;
    ListServiceGroupsResponseBodyServiceGroupsList& operator=(const ListServiceGroupsResponseBodyServiceGroupsList &) = default ;
    ListServiceGroupsResponseBodyServiceGroupsList& operator=(ListServiceGroupsResponseBodyServiceGroupsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listServiceGroups_ == nullptr; };
    // listServiceGroups Field Functions 
    bool hasListServiceGroups() const { return this->listServiceGroups_ != nullptr;};
    void deleteListServiceGroups() { this->listServiceGroups_ = nullptr;};
    inline const vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups> & listServiceGroups() const { DARABONBA_PTR_GET_CONST(listServiceGroups_, vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups>) };
    inline vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups> listServiceGroups() { DARABONBA_PTR_GET(listServiceGroups_, vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups>) };
    inline ListServiceGroupsResponseBodyServiceGroupsList& setListServiceGroups(const vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups> & listServiceGroups) { DARABONBA_PTR_SET_VALUE(listServiceGroups_, listServiceGroups) };
    inline ListServiceGroupsResponseBodyServiceGroupsList& setListServiceGroups(vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups> && listServiceGroups) { DARABONBA_PTR_SET_RVALUE(listServiceGroups_, listServiceGroups) };


  protected:
    std::shared_ptr<vector<Models::ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups>> listServiceGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
