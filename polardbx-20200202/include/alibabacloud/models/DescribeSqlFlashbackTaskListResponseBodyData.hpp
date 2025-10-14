// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSqlFlashbackTaskListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbackTaskListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SqlFlashbackTasks, sqlFlashbackTasks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbackTaskListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SqlFlashbackTasks, sqlFlashbackTasks_);
    };
    DescribeSqlFlashbackTaskListResponseBodyData() = default ;
    DescribeSqlFlashbackTaskListResponseBodyData(const DescribeSqlFlashbackTaskListResponseBodyData &) = default ;
    DescribeSqlFlashbackTaskListResponseBodyData(DescribeSqlFlashbackTaskListResponseBodyData &&) = default ;
    DescribeSqlFlashbackTaskListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbackTaskListResponseBodyData() = default ;
    DescribeSqlFlashbackTaskListResponseBodyData& operator=(const DescribeSqlFlashbackTaskListResponseBodyData &) = default ;
    DescribeSqlFlashbackTaskListResponseBodyData& operator=(DescribeSqlFlashbackTaskListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sqlFlashbackTasks_ == nullptr; };
    // sqlFlashbackTasks Field Functions 
    bool hasSqlFlashbackTasks() const { return this->sqlFlashbackTasks_ != nullptr;};
    void deleteSqlFlashbackTasks() { this->sqlFlashbackTasks_ = nullptr;};
    inline const vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks> & sqlFlashbackTasks() const { DARABONBA_PTR_GET_CONST(sqlFlashbackTasks_, vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks>) };
    inline vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks> sqlFlashbackTasks() { DARABONBA_PTR_GET(sqlFlashbackTasks_, vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks>) };
    inline DescribeSqlFlashbackTaskListResponseBodyData& setSqlFlashbackTasks(const vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks> & sqlFlashbackTasks) { DARABONBA_PTR_SET_VALUE(sqlFlashbackTasks_, sqlFlashbackTasks) };
    inline DescribeSqlFlashbackTaskListResponseBodyData& setSqlFlashbackTasks(vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks> && sqlFlashbackTasks) { DARABONBA_PTR_SET_RVALUE(sqlFlashbackTasks_, sqlFlashbackTasks) };


  protected:
    std::shared_ptr<vector<Models::DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks>> sqlFlashbackTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
