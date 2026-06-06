// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCANCELTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCANCELTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class BatchCancelTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCancelTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(taskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCancelTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(taskIds, taskIds_);
    };
    BatchCancelTasksRequest() = default ;
    BatchCancelTasksRequest(const BatchCancelTasksRequest &) = default ;
    BatchCancelTasksRequest(BatchCancelTasksRequest &&) = default ;
    BatchCancelTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCancelTasksRequest() = default ;
    BatchCancelTasksRequest& operator=(const BatchCancelTasksRequest &) = default ;
    BatchCancelTasksRequest& operator=(BatchCancelTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskCode_ == nullptr
        && this->taskIds_ == nullptr; };
    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline BatchCancelTasksRequest& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline BatchCancelTasksRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline BatchCancelTasksRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskCode_ {};
    shared_ptr<vector<string>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
