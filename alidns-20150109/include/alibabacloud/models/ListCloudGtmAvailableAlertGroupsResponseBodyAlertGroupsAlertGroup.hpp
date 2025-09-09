// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODYALERTGROUPSALERTGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODYALERTGROUPSALERTGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup(const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup(ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup &&) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup& operator=(const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup& operator=(ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The name of the alert contact group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
