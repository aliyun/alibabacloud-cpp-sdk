// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULLISTBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVULLISTBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVulListByIdResponseBodyDataEffectMsgDTOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetVulListByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulListByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(EffectMsgDTOS, effectMsgDTOS_);
      DARABONBA_PTR_TO_JSON(FirstTs, firstTs_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LastTs, lastTs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(RepairCmd, repairCmd_);
      DARABONBA_PTR_TO_JSON(RepairTs, repairTs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulListByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(EffectMsgDTOS, effectMsgDTOS_);
      DARABONBA_PTR_FROM_JSON(FirstTs, firstTs_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LastTs, lastTs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(RepairCmd, repairCmd_);
      DARABONBA_PTR_FROM_JSON(RepairTs, repairTs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetVulListByIdResponseBodyData() = default ;
    GetVulListByIdResponseBodyData(const GetVulListByIdResponseBodyData &) = default ;
    GetVulListByIdResponseBodyData(GetVulListByIdResponseBodyData &&) = default ;
    GetVulListByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulListByIdResponseBodyData() = default ;
    GetVulListByIdResponseBodyData& operator=(const GetVulListByIdResponseBodyData &) = default ;
    GetVulListByIdResponseBodyData& operator=(GetVulListByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->effectMsgDTOS_ == nullptr && return this->firstTs_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr
        && return this->lastTs_ == nullptr && return this->name_ == nullptr && return this->necessity_ == nullptr && return this->related_ == nullptr && return this->repairCmd_ == nullptr
        && return this->repairTs_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr && return this->uuid_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline GetVulListByIdResponseBodyData& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // effectMsgDTOS Field Functions 
    bool hasEffectMsgDTOS() const { return this->effectMsgDTOS_ != nullptr;};
    void deleteEffectMsgDTOS() { this->effectMsgDTOS_ = nullptr;};
    inline const vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS> & effectMsgDTOS() const { DARABONBA_PTR_GET_CONST(effectMsgDTOS_, vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS>) };
    inline vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS> effectMsgDTOS() { DARABONBA_PTR_GET(effectMsgDTOS_, vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS>) };
    inline GetVulListByIdResponseBodyData& setEffectMsgDTOS(const vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS> & effectMsgDTOS) { DARABONBA_PTR_SET_VALUE(effectMsgDTOS_, effectMsgDTOS) };
    inline GetVulListByIdResponseBodyData& setEffectMsgDTOS(vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS> && effectMsgDTOS) { DARABONBA_PTR_SET_RVALUE(effectMsgDTOS_, effectMsgDTOS) };


    // firstTs Field Functions 
    bool hasFirstTs() const { return this->firstTs_ != nullptr;};
    void deleteFirstTs() { this->firstTs_ = nullptr;};
    inline string firstTs() const { DARABONBA_PTR_GET_DEFAULT(firstTs_, "") };
    inline GetVulListByIdResponseBodyData& setFirstTs(string firstTs) { DARABONBA_PTR_SET_VALUE(firstTs_, firstTs) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetVulListByIdResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline GetVulListByIdResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline GetVulListByIdResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastTs Field Functions 
    bool hasLastTs() const { return this->lastTs_ != nullptr;};
    void deleteLastTs() { this->lastTs_ = nullptr;};
    inline string lastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, "") };
    inline GetVulListByIdResponseBodyData& setLastTs(string lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetVulListByIdResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline GetVulListByIdResponseBodyData& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline string related() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
    inline GetVulListByIdResponseBodyData& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // repairCmd Field Functions 
    bool hasRepairCmd() const { return this->repairCmd_ != nullptr;};
    void deleteRepairCmd() { this->repairCmd_ = nullptr;};
    inline string repairCmd() const { DARABONBA_PTR_GET_DEFAULT(repairCmd_, "") };
    inline GetVulListByIdResponseBodyData& setRepairCmd(string repairCmd) { DARABONBA_PTR_SET_VALUE(repairCmd_, repairCmd) };


    // repairTs Field Functions 
    bool hasRepairTs() const { return this->repairTs_ != nullptr;};
    void deleteRepairTs() { this->repairTs_ = nullptr;};
    inline string repairTs() const { DARABONBA_PTR_GET_DEFAULT(repairTs_, "") };
    inline GetVulListByIdResponseBodyData& setRepairTs(string repairTs) { DARABONBA_PTR_SET_VALUE(repairTs_, repairTs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVulListByIdResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetVulListByIdResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetVulListByIdResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Vulnerability Alias
    std::shared_ptr<string> aliasName_ = nullptr;
    // Impact description
    std::shared_ptr<vector<Models::GetVulListByIdResponseBodyDataEffectMsgDTOS>> effectMsgDTOS_ = nullptr;
    // Timestamp of the first time the vulnerability was detected
    std::shared_ptr<string> firstTs_ = nullptr;
    // Instance name of the asset
    std::shared_ptr<string> instanceName_ = nullptr;
    // Public IP of the asset
    std::shared_ptr<string> internetIp_ = nullptr;
    // Private IP of the asset
    std::shared_ptr<string> intranetIp_ = nullptr;
    // Timestamp of the last time the vulnerability was detected
    std::shared_ptr<string> lastTs_ = nullptr;
    // Vulnerability name
    std::shared_ptr<string> name_ = nullptr;
    // Necessity level of vulnerability repair
    std::shared_ptr<string> necessity_ = nullptr;
    // List of associated CVEs for the vulnerability, separated by commas (,) if there are multiple values.
    std::shared_ptr<string> related_ = nullptr;
    // Repair command
    std::shared_ptr<string> repairCmd_ = nullptr;
    // Timestamp of vulnerability repair
    std::shared_ptr<string> repairTs_ = nullptr;
    // Vulnerability status:
    // 1: Not fixed
    // 2: Fix failed
    // 3: Rollback failed
    // 4: Fixing
    // 5: Rolling back
    // 6: Verifying
    // 7: Fixed successfully
    // 8: Fixed successfully, pending reboot
    // 9: Rolled back successfully
    // 10: Ignored
    // 11: Rolled back successfully, pending reboot
    // 12: Vulnerability does not exist
    // 20: Expired
    std::shared_ptr<string> status_ = nullptr;
    // Vulnerability tag
    std::shared_ptr<string> tag_ = nullptr;
    // UUID of the asset instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
