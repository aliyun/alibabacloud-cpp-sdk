// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTaskDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ani, ani_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepartmentIdList, departmentIdList_);
      DARABONBA_PTR_TO_JSON(Dnis, dnis_);
      DARABONBA_PTR_TO_JSON(EndReasonList, endReasonList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundTaskId, outboundTaskId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ani, ani_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepartmentIdList, departmentIdList_);
      DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
      DARABONBA_PTR_FROM_JSON(EndReasonList, endReasonList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundTaskId, outboundTaskId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryTaskDetailRequest() = default ;
    QueryTaskDetailRequest(const QueryTaskDetailRequest &) = default ;
    QueryTaskDetailRequest(QueryTaskDetailRequest &&) = default ;
    QueryTaskDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailRequest() = default ;
    QueryTaskDetailRequest& operator=(const QueryTaskDetailRequest &) = default ;
    QueryTaskDetailRequest& operator=(QueryTaskDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ani_ == nullptr
        && return this->currentPage_ == nullptr && return this->departmentIdList_ == nullptr && return this->dnis_ == nullptr && return this->endReasonList_ == nullptr && return this->instanceId_ == nullptr
        && return this->outboundTaskId_ == nullptr && return this->pageSize_ == nullptr && return this->priorityList_ == nullptr && return this->servicerId_ == nullptr && return this->servicerName_ == nullptr
        && return this->sid_ == nullptr && return this->skillGroup_ == nullptr && return this->statusList_ == nullptr && return this->taskId_ == nullptr; };
    // ani Field Functions 
    bool hasAni() const { return this->ani_ != nullptr;};
    void deleteAni() { this->ani_ = nullptr;};
    inline string ani() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
    inline QueryTaskDetailRequest& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryTaskDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // departmentIdList Field Functions 
    bool hasDepartmentIdList() const { return this->departmentIdList_ != nullptr;};
    void deleteDepartmentIdList() { this->departmentIdList_ = nullptr;};
    inline string departmentIdList() const { DARABONBA_PTR_GET_DEFAULT(departmentIdList_, "") };
    inline QueryTaskDetailRequest& setDepartmentIdList(string departmentIdList) { DARABONBA_PTR_SET_VALUE(departmentIdList_, departmentIdList) };


    // dnis Field Functions 
    bool hasDnis() const { return this->dnis_ != nullptr;};
    void deleteDnis() { this->dnis_ = nullptr;};
    inline string dnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
    inline QueryTaskDetailRequest& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


    // endReasonList Field Functions 
    bool hasEndReasonList() const { return this->endReasonList_ != nullptr;};
    void deleteEndReasonList() { this->endReasonList_ = nullptr;};
    inline string endReasonList() const { DARABONBA_PTR_GET_DEFAULT(endReasonList_, "") };
    inline QueryTaskDetailRequest& setEndReasonList(string endReasonList) { DARABONBA_PTR_SET_VALUE(endReasonList_, endReasonList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTaskDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundTaskId Field Functions 
    bool hasOutboundTaskId() const { return this->outboundTaskId_ != nullptr;};
    void deleteOutboundTaskId() { this->outboundTaskId_ = nullptr;};
    inline string outboundTaskId() const { DARABONBA_PTR_GET_DEFAULT(outboundTaskId_, "") };
    inline QueryTaskDetailRequest& setOutboundTaskId(string outboundTaskId) { DARABONBA_PTR_SET_VALUE(outboundTaskId_, outboundTaskId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline string priorityList() const { DARABONBA_PTR_GET_DEFAULT(priorityList_, "") };
    inline QueryTaskDetailRequest& setPriorityList(string priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline string servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, "") };
    inline QueryTaskDetailRequest& setServicerId(string servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline QueryTaskDetailRequest& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline QueryTaskDetailRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // skillGroup Field Functions 
    bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
    void deleteSkillGroup() { this->skillGroup_ = nullptr;};
    inline string skillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, "") };
    inline QueryTaskDetailRequest& setSkillGroup(string skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline QueryTaskDetailRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QueryTaskDetailRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> ani_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> departmentIdList_ = nullptr;
    std::shared_ptr<string> dnis_ = nullptr;
    std::shared_ptr<string> endReasonList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> outboundTaskId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> priorityList_ = nullptr;
    std::shared_ptr<string> servicerId_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<string> sid_ = nullptr;
    std::shared_ptr<string> skillGroup_ = nullptr;
    std::shared_ptr<string> statusList_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
