// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODYTASKINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODYTASKINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveTaskInfoResponseBodyTaskInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveTaskInfoResponseBodyTaskInfos& obj) { 
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveTaskInfoResponseBodyTaskInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    QueryPredictiveTaskInfoResponseBodyTaskInfos() = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfos(const QueryPredictiveTaskInfoResponseBodyTaskInfos &) = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfos(QueryPredictiveTaskInfoResponseBodyTaskInfos &&) = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveTaskInfoResponseBodyTaskInfos() = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfos& operator=(const QueryPredictiveTaskInfoResponseBodyTaskInfos &) = default ;
    QueryPredictiveTaskInfoResponseBodyTaskInfos& operator=(QueryPredictiveTaskInfoResponseBodyTaskInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskInfo_ == nullptr; };
    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo> & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo>) };
    inline vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo> taskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo>) };
    inline QueryPredictiveTaskInfoResponseBodyTaskInfos& setTaskInfo(const vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline QueryPredictiveTaskInfoResponseBodyTaskInfos& setTaskInfo(vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    std::shared_ptr<vector<Models::QueryPredictiveTaskInfoResponseBodyTaskInfosTaskInfo>> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
