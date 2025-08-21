// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGroupsResponseBodyGroupsGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListGroupsResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
    };
    ListGroupsResponseBodyGroups() = default ;
    ListGroupsResponseBodyGroups(const ListGroupsResponseBodyGroups &) = default ;
    ListGroupsResponseBodyGroups(ListGroupsResponseBodyGroups &&) = default ;
    ListGroupsResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsResponseBodyGroups() = default ;
    ListGroupsResponseBodyGroups& operator=(const ListGroupsResponseBodyGroups &) = default ;
    ListGroupsResponseBodyGroups& operator=(ListGroupsResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const vector<Models::ListGroupsResponseBodyGroupsGroup> & group() const { DARABONBA_PTR_GET_CONST(group_, vector<Models::ListGroupsResponseBodyGroupsGroup>) };
    inline vector<Models::ListGroupsResponseBodyGroupsGroup> group() { DARABONBA_PTR_GET(group_, vector<Models::ListGroupsResponseBodyGroupsGroup>) };
    inline ListGroupsResponseBodyGroups& setGroup(const vector<Models::ListGroupsResponseBodyGroupsGroup> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline ListGroupsResponseBodyGroups& setGroup(vector<Models::ListGroupsResponseBodyGroupsGroup> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


  protected:
    std::shared_ptr<vector<Models::ListGroupsResponseBodyGroupsGroup>> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
