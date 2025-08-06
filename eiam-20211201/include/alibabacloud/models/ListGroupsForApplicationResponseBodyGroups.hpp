// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORAPPLICATIONRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORAPPLICATIONRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListGroupsForApplicationResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForApplicationResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForApplicationResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    ListGroupsForApplicationResponseBodyGroups() = default ;
    ListGroupsForApplicationResponseBodyGroups(const ListGroupsForApplicationResponseBodyGroups &) = default ;
    ListGroupsForApplicationResponseBodyGroups(ListGroupsForApplicationResponseBodyGroups &&) = default ;
    ListGroupsForApplicationResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForApplicationResponseBodyGroups() = default ;
    ListGroupsForApplicationResponseBodyGroups& operator=(const ListGroupsForApplicationResponseBodyGroups &) = default ;
    ListGroupsForApplicationResponseBodyGroups& operator=(ListGroupsForApplicationResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListGroupsForApplicationResponseBodyGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
