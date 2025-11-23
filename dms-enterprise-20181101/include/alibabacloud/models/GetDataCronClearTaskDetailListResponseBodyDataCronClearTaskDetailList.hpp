// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTRESPONSEBODYDATACRONCLEARTASKDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTRESPONSEBODYDATACRONCLEARTASKDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
    };
    GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList() = default ;
    GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList(const GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList &) = default ;
    GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList(GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList &&) = default ;
    GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList() = default ;
    GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& operator=(const GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList &) = default ;
    GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& operator=(GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualAffectRows_ == nullptr
        && return this->createTime_ == nullptr && return this->DBTaskGroupId_ == nullptr && return this->jobStatus_ == nullptr; };
    // actualAffectRows Field Functions 
    bool hasActualAffectRows() const { return this->actualAffectRows_ != nullptr;};
    void deleteActualAffectRows() { this->actualAffectRows_ = nullptr;};
    inline int64_t actualAffectRows() const { DARABONBA_PTR_GET_DEFAULT(actualAffectRows_, 0L) };
    inline GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBTaskGroupId Field Functions 
    bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
    void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
    inline int64_t DBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
    inline GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


  protected:
    // The number of rows affected by the SQL task.
    std::shared_ptr<int64_t> actualAffectRows_ = nullptr;
    // The time when the SQL task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the SQL task group.
    std::shared_ptr<int64_t> DBTaskGroupId_ = nullptr;
    // The state of the SQL task. Valid values:
    // 
    // *   **INIT**: The SQL task was initialized.
    // *   **PENDING**: The SQL task waited to be run.
    // *   **BE_SCHEDULED**: The SQL task waited to be scheduled.
    // *   **FAIL**: The SQL task failed.
    // *   **SUCCESS**: The SQL task was successful.
    // *   **PAUSE**: The SQL task was paused.
    // *   **DELETE**: The SQL task was deleted.
    // *   **RUNNING**: The SQL task was being run.
    std::shared_ptr<string> jobStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
