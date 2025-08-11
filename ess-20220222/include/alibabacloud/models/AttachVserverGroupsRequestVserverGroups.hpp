// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSERVERGROUPSREQUESTVSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSERVERGROUPSREQUESTVSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachVServerGroupsRequestVServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVServerGroupsRequestVServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(VServerGroupAttributes, VServerGroupAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVServerGroupsRequestVServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupAttributes, VServerGroupAttributes_);
    };
    AttachVServerGroupsRequestVServerGroups() = default ;
    AttachVServerGroupsRequestVServerGroups(const AttachVServerGroupsRequestVServerGroups &) = default ;
    AttachVServerGroupsRequestVServerGroups(AttachVServerGroupsRequestVServerGroups &&) = default ;
    AttachVServerGroupsRequestVServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVServerGroupsRequestVServerGroups() = default ;
    AttachVServerGroupsRequestVServerGroups& operator=(const AttachVServerGroupsRequestVServerGroups &) = default ;
    AttachVServerGroupsRequestVServerGroups& operator=(AttachVServerGroupsRequestVServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerId_ != nullptr
        && this->VServerGroupAttributes_ != nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline AttachVServerGroupsRequestVServerGroups& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // VServerGroupAttributes Field Functions 
    bool hasVServerGroupAttributes() const { return this->VServerGroupAttributes_ != nullptr;};
    void deleteVServerGroupAttributes() { this->VServerGroupAttributes_ = nullptr;};
    inline const vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes> & VServerGroupAttributes() const { DARABONBA_PTR_GET_CONST(VServerGroupAttributes_, vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes>) };
    inline vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes> VServerGroupAttributes() { DARABONBA_PTR_GET(VServerGroupAttributes_, vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes>) };
    inline AttachVServerGroupsRequestVServerGroups& setVServerGroupAttributes(const vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes> & VServerGroupAttributes) { DARABONBA_PTR_SET_VALUE(VServerGroupAttributes_, VServerGroupAttributes) };
    inline AttachVServerGroupsRequestVServerGroups& setVServerGroupAttributes(vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes> && VServerGroupAttributes) { DARABONBA_PTR_SET_RVALUE(VServerGroupAttributes_, VServerGroupAttributes) };


  protected:
    // The ID of the CLB instance to which the new vServer group belongs.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The attributes of the vServer group.
    std::shared_ptr<vector<Models::AttachVServerGroupsRequestVServerGroupsVServerGroupAttributes>> VServerGroupAttributes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
