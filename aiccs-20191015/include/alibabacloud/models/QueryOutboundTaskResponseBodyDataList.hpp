// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYOUTBOUNDTASKRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYOUTBOUNDTASKRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryOutboundTaskResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOutboundTaskResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BuId, buId_);
      DARABONBA_PTR_TO_JSON(CallerNum, callerNum_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtAttrs, extAttrs_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOutboundTaskResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BuId, buId_);
      DARABONBA_PTR_FROM_JSON(CallerNum, callerNum_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtAttrs, extAttrs_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryOutboundTaskResponseBodyDataList() = default ;
    QueryOutboundTaskResponseBodyDataList(const QueryOutboundTaskResponseBodyDataList &) = default ;
    QueryOutboundTaskResponseBodyDataList(QueryOutboundTaskResponseBodyDataList &&) = default ;
    QueryOutboundTaskResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOutboundTaskResponseBodyDataList() = default ;
    QueryOutboundTaskResponseBodyDataList& operator=(const QueryOutboundTaskResponseBodyDataList &) = default ;
    QueryOutboundTaskResponseBodyDataList& operator=(QueryOutboundTaskResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buId_ == nullptr
        && return this->callerNum_ == nullptr && return this->creator_ == nullptr && return this->departmentId_ == nullptr && return this->description_ == nullptr && return this->endDate_ == nullptr
        && return this->endTime_ == nullptr && return this->extAttrs_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->groupName_ == nullptr
        && return this->id_ == nullptr && return this->model_ == nullptr && return this->modifier_ == nullptr && return this->name_ == nullptr && return this->retryInterval_ == nullptr
        && return this->retryTime_ == nullptr && return this->skillGroup_ == nullptr && return this->startDate_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // buId Field Functions 
    bool hasBuId() const { return this->buId_ != nullptr;};
    void deleteBuId() { this->buId_ = nullptr;};
    inline int64_t buId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
    inline QueryOutboundTaskResponseBodyDataList& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


    // callerNum Field Functions 
    bool hasCallerNum() const { return this->callerNum_ != nullptr;};
    void deleteCallerNum() { this->callerNum_ = nullptr;};
    inline string callerNum() const { DARABONBA_PTR_GET_DEFAULT(callerNum_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setCallerNum(string callerNum) { DARABONBA_PTR_SET_VALUE(callerNum_, callerNum) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline QueryOutboundTaskResponseBodyDataList& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extAttrs Field Functions 
    bool hasExtAttrs() const { return this->extAttrs_ != nullptr;};
    void deleteExtAttrs() { this->extAttrs_ = nullptr;};
    inline string extAttrs() const { DARABONBA_PTR_GET_DEFAULT(extAttrs_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setExtAttrs(string extAttrs) { DARABONBA_PTR_SET_VALUE(extAttrs_, extAttrs) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryOutboundTaskResponseBodyDataList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryOutboundTaskResponseBodyDataList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryOutboundTaskResponseBodyDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline int32_t model() const { DARABONBA_PTR_GET_DEFAULT(model_, 0) };
    inline QueryOutboundTaskResponseBodyDataList& setModel(int32_t model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline QueryOutboundTaskResponseBodyDataList& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryTime Field Functions 
    bool hasRetryTime() const { return this->retryTime_ != nullptr;};
    void deleteRetryTime() { this->retryTime_ = nullptr;};
    inline int32_t retryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
    inline QueryOutboundTaskResponseBodyDataList& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


    // skillGroup Field Functions 
    bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
    void deleteSkillGroup() { this->skillGroup_ = nullptr;};
    inline int64_t skillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, 0L) };
    inline QueryOutboundTaskResponseBodyDataList& setSkillGroup(int64_t skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryOutboundTaskResponseBodyDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryOutboundTaskResponseBodyDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryOutboundTaskResponseBodyDataList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> buId_ = nullptr;
    std::shared_ptr<string> callerNum_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> extAttrs_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> model_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    std::shared_ptr<int32_t> retryTime_ = nullptr;
    std::shared_ptr<int64_t> skillGroup_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
