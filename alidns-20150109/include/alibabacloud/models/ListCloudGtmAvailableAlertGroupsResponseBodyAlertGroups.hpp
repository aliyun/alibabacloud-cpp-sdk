// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODYALERTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODYALERTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
    };
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups(const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups(ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups &&) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups& operator=(const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups& operator=(ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroup_ == nullptr; };
    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup> & alertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup>) };
    inline vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup> alertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup>) };
    inline ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups& setAlertGroup(const vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups& setAlertGroup(vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroupsAlertGroup>> alertGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
