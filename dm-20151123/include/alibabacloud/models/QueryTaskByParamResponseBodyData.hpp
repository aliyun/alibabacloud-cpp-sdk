// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTaskByParamResponseBodyDataTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTaskByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    QueryTaskByParamResponseBodyData() = default ;
    QueryTaskByParamResponseBodyData(const QueryTaskByParamResponseBodyData &) = default ;
    QueryTaskByParamResponseBodyData(QueryTaskByParamResponseBodyData &&) = default ;
    QueryTaskByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskByParamResponseBodyData() = default ;
    QueryTaskByParamResponseBodyData& operator=(const QueryTaskByParamResponseBodyData &) = default ;
    QueryTaskByParamResponseBodyData& operator=(QueryTaskByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::QueryTaskByParamResponseBodyDataTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::QueryTaskByParamResponseBodyDataTask>) };
    inline vector<Models::QueryTaskByParamResponseBodyDataTask> task() { DARABONBA_PTR_GET(task_, vector<Models::QueryTaskByParamResponseBodyDataTask>) };
    inline QueryTaskByParamResponseBodyData& setTask(const vector<Models::QueryTaskByParamResponseBodyDataTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline QueryTaskByParamResponseBodyData& setTask(vector<Models::QueryTaskByParamResponseBodyDataTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::QueryTaskByParamResponseBodyDataTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
