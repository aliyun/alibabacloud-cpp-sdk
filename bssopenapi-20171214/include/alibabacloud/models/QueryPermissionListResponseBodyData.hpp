// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPermissionListResponseBodyDataPermissionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPermissionListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPermissionListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MasterId, masterId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(PermissionList, permissionList_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(SetupTime, setupTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPermissionListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MasterId, masterId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(PermissionList, permissionList_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(SetupTime, setupTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    QueryPermissionListResponseBodyData() = default ;
    QueryPermissionListResponseBodyData(const QueryPermissionListResponseBodyData &) = default ;
    QueryPermissionListResponseBodyData(QueryPermissionListResponseBodyData &&) = default ;
    QueryPermissionListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPermissionListResponseBodyData() = default ;
    QueryPermissionListResponseBodyData& operator=(const QueryPermissionListResponseBodyData &) = default ;
    QueryPermissionListResponseBodyData& operator=(QueryPermissionListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->masterId_ != nullptr && this->memberId_ != nullptr && this->permissionList_ != nullptr && this->relationType_ != nullptr && this->setupTime_ != nullptr
        && this->startTime_ != nullptr && this->state_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryPermissionListResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // masterId Field Functions 
    bool hasMasterId() const { return this->masterId_ != nullptr;};
    void deleteMasterId() { this->masterId_ = nullptr;};
    inline int64_t masterId() const { DARABONBA_PTR_GET_DEFAULT(masterId_, 0L) };
    inline QueryPermissionListResponseBodyData& setMasterId(int64_t masterId) { DARABONBA_PTR_SET_VALUE(masterId_, masterId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline int64_t memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
    inline QueryPermissionListResponseBodyData& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // permissionList Field Functions 
    bool hasPermissionList() const { return this->permissionList_ != nullptr;};
    void deletePermissionList() { this->permissionList_ = nullptr;};
    inline const vector<Models::QueryPermissionListResponseBodyDataPermissionList> & permissionList() const { DARABONBA_PTR_GET_CONST(permissionList_, vector<Models::QueryPermissionListResponseBodyDataPermissionList>) };
    inline vector<Models::QueryPermissionListResponseBodyDataPermissionList> permissionList() { DARABONBA_PTR_GET(permissionList_, vector<Models::QueryPermissionListResponseBodyDataPermissionList>) };
    inline QueryPermissionListResponseBodyData& setPermissionList(const vector<Models::QueryPermissionListResponseBodyDataPermissionList> & permissionList) { DARABONBA_PTR_SET_VALUE(permissionList_, permissionList) };
    inline QueryPermissionListResponseBodyData& setPermissionList(vector<Models::QueryPermissionListResponseBodyDataPermissionList> && permissionList) { DARABONBA_PTR_SET_RVALUE(permissionList_, permissionList) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline QueryPermissionListResponseBodyData& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // setupTime Field Functions 
    bool hasSetupTime() const { return this->setupTime_ != nullptr;};
    void deleteSetupTime() { this->setupTime_ = nullptr;};
    inline string setupTime() const { DARABONBA_PTR_GET_DEFAULT(setupTime_, "") };
    inline QueryPermissionListResponseBodyData& setSetupTime(string setupTime) { DARABONBA_PTR_SET_VALUE(setupTime_, setupTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryPermissionListResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryPermissionListResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The time when the relationship expired. If no value is returned, the relationship is still valid.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the management account.
    std::shared_ptr<int64_t> masterId_ = nullptr;
    // The ID of the member.
    std::shared_ptr<int64_t> memberId_ = nullptr;
    // The list of permissions.
    std::shared_ptr<vector<Models::QueryPermissionListResponseBodyDataPermissionList>> permissionList_ = nullptr;
    // The type of the relationship. Valid values: FinancialManagement and FinancialTrusteeship.
    std::shared_ptr<string> relationType_ = nullptr;
    // The time when the relationship was established. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the relationship was established at 20:00:00 on May 23, 2016 (UTC+8).
    std::shared_ptr<string> setupTime_ = nullptr;
    // The time when the relationship took effect. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the relationship took effect at 20:00:00 on May 23, 2016 (UTC+8).
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the relationship. For more information about valid values of this parameter, see the enumeration values of the RelationshipStatusEnum type in the following table.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
