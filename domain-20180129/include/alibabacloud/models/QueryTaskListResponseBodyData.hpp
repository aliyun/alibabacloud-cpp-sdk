// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTaskListResponseBodyDataTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    QueryTaskListResponseBodyData() = default ;
    QueryTaskListResponseBodyData(const QueryTaskListResponseBodyData &) = default ;
    QueryTaskListResponseBodyData(QueryTaskListResponseBodyData &&) = default ;
    QueryTaskListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskListResponseBodyData() = default ;
    QueryTaskListResponseBodyData& operator=(const QueryTaskListResponseBodyData &) = default ;
    QueryTaskListResponseBodyData& operator=(QueryTaskListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskInfo_ == nullptr; };
    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const vector<Models::QueryTaskListResponseBodyDataTaskInfo> & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<Models::QueryTaskListResponseBodyDataTaskInfo>) };
    inline vector<Models::QueryTaskListResponseBodyDataTaskInfo> taskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<Models::QueryTaskListResponseBodyDataTaskInfo>) };
    inline QueryTaskListResponseBodyData& setTaskInfo(const vector<Models::QueryTaskListResponseBodyDataTaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline QueryTaskListResponseBodyData& setTaskInfo(vector<Models::QueryTaskListResponseBodyDataTaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    std::shared_ptr<vector<Models::QueryTaskListResponseBodyDataTaskInfo>> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
