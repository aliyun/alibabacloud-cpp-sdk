// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroup, masterSlaveServerGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroup, masterSlaveServerGroup_);
    };
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups &&) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups& operator=(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups& operator=(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterSlaveServerGroup_ == nullptr; };
    // masterSlaveServerGroup Field Functions 
    bool hasMasterSlaveServerGroup() const { return this->masterSlaveServerGroup_ != nullptr;};
    void deleteMasterSlaveServerGroup() { this->masterSlaveServerGroup_ = nullptr;};
    inline const vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup> & masterSlaveServerGroup() const { DARABONBA_PTR_GET_CONST(masterSlaveServerGroup_, vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup>) };
    inline vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup> masterSlaveServerGroup() { DARABONBA_PTR_GET(masterSlaveServerGroup_, vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup>) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups& setMasterSlaveServerGroup(const vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup> & masterSlaveServerGroup) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroup_, masterSlaveServerGroup) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups& setMasterSlaveServerGroup(vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup> && masterSlaveServerGroup) { DARABONBA_PTR_SET_RVALUE(masterSlaveServerGroup_, masterSlaveServerGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup>> masterSlaveServerGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
