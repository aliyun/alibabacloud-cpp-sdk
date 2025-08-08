// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKRESPONSEBODYDATARECORD_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKRESPONSEBODYDATARECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListTaskResponseBodyDataRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskResponseBodyDataRecord& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteCount, completeCount_);
      DARABONBA_PTR_TO_JSON(FireTime, fireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
      DARABONBA_PTR_TO_JSON(RobotName, robotName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskResponseBodyDataRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteCount, completeCount_);
      DARABONBA_PTR_FROM_JSON(FireTime, fireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
      DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTaskResponseBodyDataRecord() = default ;
    ListTaskResponseBodyDataRecord(const ListTaskResponseBodyDataRecord &) = default ;
    ListTaskResponseBodyDataRecord(ListTaskResponseBodyDataRecord &&) = default ;
    ListTaskResponseBodyDataRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskResponseBodyDataRecord() = default ;
    ListTaskResponseBodyDataRecord& operator=(const ListTaskResponseBodyDataRecord &) = default ;
    ListTaskResponseBodyDataRecord& operator=(ListTaskResponseBodyDataRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeCount_ != nullptr
        && this->fireTime_ != nullptr && this->gmtCreate_ != nullptr && this->id_ != nullptr && this->robotId_ != nullptr && this->robotName_ != nullptr
        && this->status_ != nullptr && this->taskName_ != nullptr && this->totalCount_ != nullptr; };
    // completeCount Field Functions 
    bool hasCompleteCount() const { return this->completeCount_ != nullptr;};
    void deleteCompleteCount() { this->completeCount_ = nullptr;};
    inline int32_t completeCount() const { DARABONBA_PTR_GET_DEFAULT(completeCount_, 0) };
    inline ListTaskResponseBodyDataRecord& setCompleteCount(int32_t completeCount) { DARABONBA_PTR_SET_VALUE(completeCount_, completeCount) };


    // fireTime Field Functions 
    bool hasFireTime() const { return this->fireTime_ != nullptr;};
    void deleteFireTime() { this->fireTime_ = nullptr;};
    inline string fireTime() const { DARABONBA_PTR_GET_DEFAULT(fireTime_, "") };
    inline ListTaskResponseBodyDataRecord& setFireTime(string fireTime) { DARABONBA_PTR_SET_VALUE(fireTime_, fireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListTaskResponseBodyDataRecord& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskResponseBodyDataRecord& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline int64_t robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0L) };
    inline ListTaskResponseBodyDataRecord& setRobotId(int64_t robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // robotName Field Functions 
    bool hasRobotName() const { return this->robotName_ != nullptr;};
    void deleteRobotName() { this->robotName_ = nullptr;};
    inline string robotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
    inline ListTaskResponseBodyDataRecord& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskResponseBodyDataRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListTaskResponseBodyDataRecord& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTaskResponseBodyDataRecord& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> completeCount_ = nullptr;
    std::shared_ptr<string> fireTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> robotId_ = nullptr;
    std::shared_ptr<string> robotName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
