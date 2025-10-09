// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchUpdateTasksRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchUpdateTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    BatchUpdateTasksRequest() = default ;
    BatchUpdateTasksRequest(const BatchUpdateTasksRequest &) = default ;
    BatchUpdateTasksRequest(BatchUpdateTasksRequest &&) = default ;
    BatchUpdateTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTasksRequest() = default ;
    BatchUpdateTasksRequest& operator=(const BatchUpdateTasksRequest &) = default ;
    BatchUpdateTasksRequest& operator=(BatchUpdateTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->tasks_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline BatchUpdateTasksRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<BatchUpdateTasksRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<BatchUpdateTasksRequestTasks>) };
    inline vector<BatchUpdateTasksRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<BatchUpdateTasksRequestTasks>) };
    inline BatchUpdateTasksRequest& setTasks(const vector<BatchUpdateTasksRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline BatchUpdateTasksRequest& setTasks(vector<BatchUpdateTasksRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The tasks.
    std::shared_ptr<vector<BatchUpdateTasksRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
