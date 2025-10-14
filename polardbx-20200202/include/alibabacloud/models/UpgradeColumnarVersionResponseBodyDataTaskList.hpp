// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECOLUMNARVERSIONRESPONSEBODYDATATASKLIST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECOLUMNARVERSIONRESPONSEBODYDATATASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpgradeColumnarVersionResponseBodyDataTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeColumnarVersionResponseBodyDataTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeColumnarVersionResponseBodyDataTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpgradeColumnarVersionResponseBodyDataTaskList() = default ;
    UpgradeColumnarVersionResponseBodyDataTaskList(const UpgradeColumnarVersionResponseBodyDataTaskList &) = default ;
    UpgradeColumnarVersionResponseBodyDataTaskList(UpgradeColumnarVersionResponseBodyDataTaskList &&) = default ;
    UpgradeColumnarVersionResponseBodyDataTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeColumnarVersionResponseBodyDataTaskList() = default ;
    UpgradeColumnarVersionResponseBodyDataTaskList& operator=(const UpgradeColumnarVersionResponseBodyDataTaskList &) = default ;
    UpgradeColumnarVersionResponseBodyDataTaskList& operator=(UpgradeColumnarVersionResponseBodyDataTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceName_ == nullptr
        && return this->taskId_ == nullptr; };
    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline UpgradeColumnarVersionResponseBodyDataTaskList& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline UpgradeColumnarVersionResponseBodyDataTaskList& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
