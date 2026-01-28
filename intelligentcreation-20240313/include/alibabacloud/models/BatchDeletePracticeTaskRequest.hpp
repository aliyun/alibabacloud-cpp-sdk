// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEPRACTICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEPRACTICETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchDeletePracticeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeletePracticeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(taskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeletePracticeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(taskIds, taskIds_);
    };
    BatchDeletePracticeTaskRequest() = default ;
    BatchDeletePracticeTaskRequest(const BatchDeletePracticeTaskRequest &) = default ;
    BatchDeletePracticeTaskRequest(BatchDeletePracticeTaskRequest &&) = default ;
    BatchDeletePracticeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeletePracticeTaskRequest() = default ;
    BatchDeletePracticeTaskRequest& operator=(const BatchDeletePracticeTaskRequest &) = default ;
    BatchDeletePracticeTaskRequest& operator=(BatchDeletePracticeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idempotentId_ == nullptr
        && this->taskIds_ == nullptr; };
    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline BatchDeletePracticeTaskRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline BatchDeletePracticeTaskRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline BatchDeletePracticeTaskRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    shared_ptr<string> idempotentId_ {};
    shared_ptr<vector<string>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
