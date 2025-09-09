// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBAKTASKRESPONSEBODYSQLFLASHBACKTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBAKTASKRESPONSEBODYSQLFLASHBACKTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks& obj) { 
      DARABONBA_PTR_TO_JSON(SqlFlashbackTask, sqlFlashbackTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(SqlFlashbackTask, sqlFlashbackTask_);
    };
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks() = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks(const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks &) = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks(DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks &&) = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks() = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks& operator=(const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks &) = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks& operator=(DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sqlFlashbackTask_ != nullptr; };
    // sqlFlashbackTask Field Functions 
    bool hasSqlFlashbackTask() const { return this->sqlFlashbackTask_ != nullptr;};
    void deleteSqlFlashbackTask() { this->sqlFlashbackTask_ = nullptr;};
    inline const vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask> & sqlFlashbackTask() const { DARABONBA_PTR_GET_CONST(sqlFlashbackTask_, vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask>) };
    inline vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask> sqlFlashbackTask() { DARABONBA_PTR_GET(sqlFlashbackTask_, vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask>) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks& setSqlFlashbackTask(const vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask> & sqlFlashbackTask) { DARABONBA_PTR_SET_VALUE(sqlFlashbackTask_, sqlFlashbackTask) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks& setSqlFlashbackTask(vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask> && sqlFlashbackTask) { DARABONBA_PTR_SET_RVALUE(sqlFlashbackTask_, sqlFlashbackTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask>> sqlFlashbackTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
