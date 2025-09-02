// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONPROCESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONPROCESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMigrationProcessResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationProcessResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrationProcessResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetMigrationProcessResponseBodyData() = default ;
    GetMigrationProcessResponseBodyData(const GetMigrationProcessResponseBodyData &) = default ;
    GetMigrationProcessResponseBodyData(GetMigrationProcessResponseBodyData &&) = default ;
    GetMigrationProcessResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationProcessResponseBodyData() = default ;
    GetMigrationProcessResponseBodyData& operator=(const GetMigrationProcessResponseBodyData &) = default ;
    GetMigrationProcessResponseBodyData& operator=(GetMigrationProcessResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskName_ != nullptr
        && this->taskStatus_ != nullptr; };
    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetMigrationProcessResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetMigrationProcessResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The name of the step in the migration task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The running status of the step in the migration task. Valid values:
    // 
    // *   INIT
    // *   RUNNING
    // *   FAILURE
    // *   SUCCESS
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
