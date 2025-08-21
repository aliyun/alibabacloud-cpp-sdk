// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataTasksResponseBodyResultSinkCluster.hpp>
#include <alibabacloud/models/ListDataTasksResponseBodyResultSourceCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataTasksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(sinkCluster, sinkCluster_);
      DARABONBA_PTR_TO_JSON(sourceCluster, sourceCluster_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(sinkCluster, sinkCluster_);
      DARABONBA_PTR_FROM_JSON(sourceCluster, sourceCluster_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListDataTasksResponseBodyResult() = default ;
    ListDataTasksResponseBodyResult(const ListDataTasksResponseBodyResult &) = default ;
    ListDataTasksResponseBodyResult(ListDataTasksResponseBodyResult &&) = default ;
    ListDataTasksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataTasksResponseBodyResult() = default ;
    ListDataTasksResponseBodyResult& operator=(const ListDataTasksResponseBodyResult &) = default ;
    ListDataTasksResponseBodyResult& operator=(ListDataTasksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->sinkCluster_ != nullptr && this->sourceCluster_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDataTasksResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // sinkCluster Field Functions 
    bool hasSinkCluster() const { return this->sinkCluster_ != nullptr;};
    void deleteSinkCluster() { this->sinkCluster_ = nullptr;};
    inline const Models::ListDataTasksResponseBodyResultSinkCluster & sinkCluster() const { DARABONBA_PTR_GET_CONST(sinkCluster_, Models::ListDataTasksResponseBodyResultSinkCluster) };
    inline Models::ListDataTasksResponseBodyResultSinkCluster sinkCluster() { DARABONBA_PTR_GET(sinkCluster_, Models::ListDataTasksResponseBodyResultSinkCluster) };
    inline ListDataTasksResponseBodyResult& setSinkCluster(const Models::ListDataTasksResponseBodyResultSinkCluster & sinkCluster) { DARABONBA_PTR_SET_VALUE(sinkCluster_, sinkCluster) };
    inline ListDataTasksResponseBodyResult& setSinkCluster(Models::ListDataTasksResponseBodyResultSinkCluster && sinkCluster) { DARABONBA_PTR_SET_RVALUE(sinkCluster_, sinkCluster) };


    // sourceCluster Field Functions 
    bool hasSourceCluster() const { return this->sourceCluster_ != nullptr;};
    void deleteSourceCluster() { this->sourceCluster_ = nullptr;};
    inline const Models::ListDataTasksResponseBodyResultSourceCluster & sourceCluster() const { DARABONBA_PTR_GET_CONST(sourceCluster_, Models::ListDataTasksResponseBodyResultSourceCluster) };
    inline Models::ListDataTasksResponseBodyResultSourceCluster sourceCluster() { DARABONBA_PTR_GET(sourceCluster_, Models::ListDataTasksResponseBodyResultSourceCluster) };
    inline ListDataTasksResponseBodyResult& setSourceCluster(const Models::ListDataTasksResponseBodyResultSourceCluster & sourceCluster) { DARABONBA_PTR_SET_VALUE(sourceCluster_, sourceCluster) };
    inline ListDataTasksResponseBodyResult& setSourceCluster(Models::ListDataTasksResponseBodyResultSourceCluster && sourceCluster) { DARABONBA_PTR_SET_RVALUE(sourceCluster_, sourceCluster) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataTasksResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListDataTasksResponseBodyResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the site monitoring task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information of the target cluster.
    std::shared_ptr<Models::ListDataTasksResponseBodyResultSinkCluster> sinkCluster_ = nullptr;
    // The information about the source cluster.
    std::shared_ptr<Models::ListDataTasksResponseBodyResultSourceCluster> sourceCluster_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
