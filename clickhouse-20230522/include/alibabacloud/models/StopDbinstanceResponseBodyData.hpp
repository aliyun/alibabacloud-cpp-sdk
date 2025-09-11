// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDBINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STOPDBINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class StopDBInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDBInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, StopDBInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    StopDBInstanceResponseBodyData() = default ;
    StopDBInstanceResponseBodyData(const StopDBInstanceResponseBodyData &) = default ;
    StopDBInstanceResponseBodyData(StopDBInstanceResponseBodyData &&) = default ;
    StopDBInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDBInstanceResponseBodyData() = default ;
    StopDBInstanceResponseBodyData& operator=(const StopDBInstanceResponseBodyData &) = default ;
    StopDBInstanceResponseBodyData& operator=(StopDBInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceID_ != nullptr
        && this->DBInstanceName_ != nullptr && this->taskId_ != nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int64_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0L) };
    inline StopDBInstanceResponseBodyData& setDBInstanceID(int64_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline StopDBInstanceResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline StopDBInstanceResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The cluster ID.
    std::shared_ptr<int64_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
