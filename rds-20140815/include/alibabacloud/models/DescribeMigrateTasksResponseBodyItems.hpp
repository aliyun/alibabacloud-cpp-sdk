// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrateTasksResponseBodyItemsMigrateTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMigrateTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrateTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(MigrateTask, migrateTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrateTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrateTask, migrateTask_);
    };
    DescribeMigrateTasksResponseBodyItems() = default ;
    DescribeMigrateTasksResponseBodyItems(const DescribeMigrateTasksResponseBodyItems &) = default ;
    DescribeMigrateTasksResponseBodyItems(DescribeMigrateTasksResponseBodyItems &&) = default ;
    DescribeMigrateTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrateTasksResponseBodyItems() = default ;
    DescribeMigrateTasksResponseBodyItems& operator=(const DescribeMigrateTasksResponseBodyItems &) = default ;
    DescribeMigrateTasksResponseBodyItems& operator=(DescribeMigrateTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->migrateTask_ == nullptr; };
    // migrateTask Field Functions 
    bool hasMigrateTask() const { return this->migrateTask_ != nullptr;};
    void deleteMigrateTask() { this->migrateTask_ = nullptr;};
    inline const vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask> & migrateTask() const { DARABONBA_PTR_GET_CONST(migrateTask_, vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask>) };
    inline vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask> migrateTask() { DARABONBA_PTR_GET(migrateTask_, vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask>) };
    inline DescribeMigrateTasksResponseBodyItems& setMigrateTask(const vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask> & migrateTask) { DARABONBA_PTR_SET_VALUE(migrateTask_, migrateTask) };
    inline DescribeMigrateTasksResponseBodyItems& setMigrateTask(vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask> && migrateTask) { DARABONBA_PTR_SET_RVALUE(migrateTask_, migrateTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrateTasksResponseBodyItemsMigrateTask>> migrateTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
