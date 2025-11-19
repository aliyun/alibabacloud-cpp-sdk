// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODYDATASECURITYIPGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODYDATASECURITYIPGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_TO_JSON(EngineInfoList, engineInfoList_);
      DARABONBA_PTR_TO_JSON(GEcsSgIdList, GEcsSgIdList_);
      DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
      DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIpType, securityIpType_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WhitelistNetType, whitelistNetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_FROM_JSON(EngineInfoList, engineInfoList_);
      DARABONBA_PTR_FROM_JSON(GEcsSgIdList, GEcsSgIdList_);
      DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
      DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpType, securityIpType_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WhitelistNetType, whitelistNetType_);
    };
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups() = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups(const DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups &) = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups(DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups &&) = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups() = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& operator=(const DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups &) = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& operator=(DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstances_ == nullptr
        && return this->engineInfoList_ == nullptr && return this->GEcsSgIdList_ == nullptr && return this->GIpList_ == nullptr && return this->globalIgName_ == nullptr && return this->globalSecurityGroupId_ == nullptr
        && return this->regionId_ == nullptr && return this->securityIpType_ == nullptr && return this->uid_ == nullptr && return this->userId_ == nullptr && return this->whitelistNetType_ == nullptr; };
    // dbInstances Field Functions 
    bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
    void deleteDbInstances() { this->dbInstances_ = nullptr;};
    inline const vector<string> & dbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, vector<string>) };
    inline vector<string> dbInstances() { DARABONBA_PTR_GET(dbInstances_, vector<string>) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setDbInstances(const vector<string> & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setDbInstances(vector<string> && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


    // engineInfoList Field Functions 
    bool hasEngineInfoList() const { return this->engineInfoList_ != nullptr;};
    void deleteEngineInfoList() { this->engineInfoList_ = nullptr;};
    inline const vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList> & engineInfoList() const { DARABONBA_PTR_GET_CONST(engineInfoList_, vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList>) };
    inline vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList> engineInfoList() { DARABONBA_PTR_GET(engineInfoList_, vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList>) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setEngineInfoList(const vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList> & engineInfoList) { DARABONBA_PTR_SET_VALUE(engineInfoList_, engineInfoList) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setEngineInfoList(vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList> && engineInfoList) { DARABONBA_PTR_SET_RVALUE(engineInfoList_, engineInfoList) };


    // GEcsSgIdList Field Functions 
    bool hasGEcsSgIdList() const { return this->GEcsSgIdList_ != nullptr;};
    void deleteGEcsSgIdList() { this->GEcsSgIdList_ = nullptr;};
    inline string GEcsSgIdList() const { DARABONBA_PTR_GET_DEFAULT(GEcsSgIdList_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setGEcsSgIdList(string GEcsSgIdList) { DARABONBA_PTR_SET_VALUE(GEcsSgIdList_, GEcsSgIdList) };


    // GIpList Field Functions 
    bool hasGIpList() const { return this->GIpList_ != nullptr;};
    void deleteGIpList() { this->GIpList_ = nullptr;};
    inline string GIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


    // globalIgName Field Functions 
    bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
    void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
    inline string globalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string globalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIpType Field Functions 
    bool hasSecurityIpType() const { return this->securityIpType_ != nullptr;};
    void deleteSecurityIpType() { this->securityIpType_ = nullptr;};
    inline string securityIpType() const { DARABONBA_PTR_GET_DEFAULT(securityIpType_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setSecurityIpType(string securityIpType) { DARABONBA_PTR_SET_VALUE(securityIpType_, securityIpType) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // whitelistNetType Field Functions 
    bool hasWhitelistNetType() const { return this->whitelistNetType_ != nullptr;};
    void deleteWhitelistNetType() { this->whitelistNetType_ = nullptr;};
    inline string whitelistNetType() const { DARABONBA_PTR_GET_DEFAULT(whitelistNetType_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups& setWhitelistNetType(string whitelistNetType) { DARABONBA_PTR_SET_VALUE(whitelistNetType_, whitelistNetType) };


  protected:
    std::shared_ptr<vector<string>> dbInstances_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList>> engineInfoList_ = nullptr;
    std::shared_ptr<string> GEcsSgIdList_ = nullptr;
    std::shared_ptr<string> GIpList_ = nullptr;
    std::shared_ptr<string> globalIgName_ = nullptr;
    std::shared_ptr<string> globalSecurityGroupId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityIpType_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> whitelistNetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
