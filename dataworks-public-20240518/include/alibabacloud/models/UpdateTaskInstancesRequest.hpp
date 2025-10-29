// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTaskInstancesRequestTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(TaskInstances, taskInstances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstances_);
    };
    UpdateTaskInstancesRequest() = default ;
    UpdateTaskInstancesRequest(const UpdateTaskInstancesRequest &) = default ;
    UpdateTaskInstancesRequest(UpdateTaskInstancesRequest &&) = default ;
    UpdateTaskInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskInstancesRequest() = default ;
    UpdateTaskInstancesRequest& operator=(const UpdateTaskInstancesRequest &) = default ;
    UpdateTaskInstancesRequest& operator=(UpdateTaskInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->taskInstances_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateTaskInstancesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // taskInstances Field Functions 
    bool hasTaskInstances() const { return this->taskInstances_ != nullptr;};
    void deleteTaskInstances() { this->taskInstances_ = nullptr;};
    inline const vector<UpdateTaskInstancesRequestTaskInstances> & taskInstances() const { DARABONBA_PTR_GET_CONST(taskInstances_, vector<UpdateTaskInstancesRequestTaskInstances>) };
    inline vector<UpdateTaskInstancesRequestTaskInstances> taskInstances() { DARABONBA_PTR_GET(taskInstances_, vector<UpdateTaskInstancesRequestTaskInstances>) };
    inline UpdateTaskInstancesRequest& setTaskInstances(const vector<UpdateTaskInstancesRequestTaskInstances> & taskInstances) { DARABONBA_PTR_SET_VALUE(taskInstances_, taskInstances) };
    inline UpdateTaskInstancesRequest& setTaskInstances(vector<UpdateTaskInstancesRequestTaskInstances> && taskInstances) { DARABONBA_PTR_SET_RVALUE(taskInstances_, taskInstances) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The instances.
    std::shared_ptr<vector<UpdateTaskInstancesRequestTaskInstances>> taskInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
