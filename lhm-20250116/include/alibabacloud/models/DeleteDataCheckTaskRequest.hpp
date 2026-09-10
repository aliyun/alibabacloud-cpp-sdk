// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATACHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATACHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class DeleteDataCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIds, taskIds_);
    };
    DeleteDataCheckTaskRequest() = default ;
    DeleteDataCheckTaskRequest(const DeleteDataCheckTaskRequest &) = default ;
    DeleteDataCheckTaskRequest(DeleteDataCheckTaskRequest &&) = default ;
    DeleteDataCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataCheckTaskRequest() = default ;
    DeleteDataCheckTaskRequest& operator=(const DeleteDataCheckTaskRequest &) = default ;
    DeleteDataCheckTaskRequest& operator=(DeleteDataCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIds_ == nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<int64_t> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
    inline vector<int64_t> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
    inline DeleteDataCheckTaskRequest& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline DeleteDataCheckTaskRequest& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // The list of task IDs. Batch deletion is supported.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
