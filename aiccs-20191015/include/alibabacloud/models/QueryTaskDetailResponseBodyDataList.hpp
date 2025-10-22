// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTaskDetailResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Ani, ani_);
      DARABONBA_PTR_TO_JSON(BuId, buId_);
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Dnis, dnis_);
      DARABONBA_PTR_TO_JSON(EndReason, endReason_);
      DARABONBA_PTR_TO_JSON(ExtAttrs, extAttrs_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(OutboundNum, outboundNum_);
      DARABONBA_PTR_TO_JSON(OutboundTaskId, outboundTaskId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ani, ani_);
      DARABONBA_PTR_FROM_JSON(BuId, buId_);
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
      DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
      DARABONBA_PTR_FROM_JSON(ExtAttrs, extAttrs_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(OutboundNum, outboundNum_);
      DARABONBA_PTR_FROM_JSON(OutboundTaskId, outboundTaskId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryTaskDetailResponseBodyDataList() = default ;
    QueryTaskDetailResponseBodyDataList(const QueryTaskDetailResponseBodyDataList &) = default ;
    QueryTaskDetailResponseBodyDataList(QueryTaskDetailResponseBodyDataList &&) = default ;
    QueryTaskDetailResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailResponseBodyDataList() = default ;
    QueryTaskDetailResponseBodyDataList& operator=(const QueryTaskDetailResponseBodyDataList &) = default ;
    QueryTaskDetailResponseBodyDataList& operator=(QueryTaskDetailResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ani_ == nullptr
        && return this->buId_ == nullptr && return this->departmentId_ == nullptr && return this->dnis_ == nullptr && return this->endReason_ == nullptr && return this->extAttrs_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->memberId_ == nullptr && return this->memberName_ == nullptr
        && return this->outboundNum_ == nullptr && return this->outboundTaskId_ == nullptr && return this->priority_ == nullptr && return this->retryTime_ == nullptr && return this->servicerId_ == nullptr
        && return this->servicerName_ == nullptr && return this->skillGroup_ == nullptr && return this->status_ == nullptr; };
    // ani Field Functions 
    bool hasAni() const { return this->ani_ != nullptr;};
    void deleteAni() { this->ani_ = nullptr;};
    inline string ani() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
    inline QueryTaskDetailResponseBodyDataList& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


    // buId Field Functions 
    bool hasBuId() const { return this->buId_ != nullptr;};
    void deleteBuId() { this->buId_ = nullptr;};
    inline int64_t buId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // dnis Field Functions 
    bool hasDnis() const { return this->dnis_ != nullptr;};
    void deleteDnis() { this->dnis_ = nullptr;};
    inline string dnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
    inline QueryTaskDetailResponseBodyDataList& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


    // endReason Field Functions 
    bool hasEndReason() const { return this->endReason_ != nullptr;};
    void deleteEndReason() { this->endReason_ = nullptr;};
    inline int32_t endReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, 0) };
    inline QueryTaskDetailResponseBodyDataList& setEndReason(int32_t endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


    // extAttrs Field Functions 
    bool hasExtAttrs() const { return this->extAttrs_ != nullptr;};
    void deleteExtAttrs() { this->extAttrs_ = nullptr;};
    inline string extAttrs() const { DARABONBA_PTR_GET_DEFAULT(extAttrs_, "") };
    inline QueryTaskDetailResponseBodyDataList& setExtAttrs(string extAttrs) { DARABONBA_PTR_SET_VALUE(extAttrs_, extAttrs) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline QueryTaskDetailResponseBodyDataList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline int64_t memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline QueryTaskDetailResponseBodyDataList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // outboundNum Field Functions 
    bool hasOutboundNum() const { return this->outboundNum_ != nullptr;};
    void deleteOutboundNum() { this->outboundNum_ = nullptr;};
    inline int32_t outboundNum() const { DARABONBA_PTR_GET_DEFAULT(outboundNum_, 0) };
    inline QueryTaskDetailResponseBodyDataList& setOutboundNum(int32_t outboundNum) { DARABONBA_PTR_SET_VALUE(outboundNum_, outboundNum) };


    // outboundTaskId Field Functions 
    bool hasOutboundTaskId() const { return this->outboundTaskId_ != nullptr;};
    void deleteOutboundTaskId() { this->outboundTaskId_ = nullptr;};
    inline int64_t outboundTaskId() const { DARABONBA_PTR_GET_DEFAULT(outboundTaskId_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setOutboundTaskId(int64_t outboundTaskId) { DARABONBA_PTR_SET_VALUE(outboundTaskId_, outboundTaskId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline QueryTaskDetailResponseBodyDataList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // retryTime Field Functions 
    bool hasRetryTime() const { return this->retryTime_ != nullptr;};
    void deleteRetryTime() { this->retryTime_ = nullptr;};
    inline string retryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, "") };
    inline QueryTaskDetailResponseBodyDataList& setRetryTime(string retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline int64_t servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, 0L) };
    inline QueryTaskDetailResponseBodyDataList& setServicerId(int64_t servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline QueryTaskDetailResponseBodyDataList& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // skillGroup Field Functions 
    bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
    void deleteSkillGroup() { this->skillGroup_ = nullptr;};
    inline int32_t skillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, 0) };
    inline QueryTaskDetailResponseBodyDataList& setSkillGroup(int32_t skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryTaskDetailResponseBodyDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> ani_ = nullptr;
    std::shared_ptr<int64_t> buId_ = nullptr;
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<string> dnis_ = nullptr;
    std::shared_ptr<int32_t> endReason_ = nullptr;
    std::shared_ptr<string> extAttrs_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<int64_t> memberId_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<int32_t> outboundNum_ = nullptr;
    std::shared_ptr<int64_t> outboundTaskId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> retryTime_ = nullptr;
    std::shared_ptr<int64_t> servicerId_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<int32_t> skillGroup_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
