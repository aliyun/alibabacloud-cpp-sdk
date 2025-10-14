// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKREQUEST_HPP_
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
  class BatchGetProjectTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetProjectTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskIdList, taskIdList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetProjectTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIdList, taskIdList_);
    };
    BatchGetProjectTaskRequest() = default ;
    BatchGetProjectTaskRequest(const BatchGetProjectTaskRequest &) = default ;
    BatchGetProjectTaskRequest(BatchGetProjectTaskRequest &&) = default ;
    BatchGetProjectTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetProjectTaskRequest() = default ;
    BatchGetProjectTaskRequest& operator=(const BatchGetProjectTaskRequest &) = default ;
    BatchGetProjectTaskRequest& operator=(BatchGetProjectTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIdList_ == nullptr; };
    // taskIdList Field Functions 
    bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
    void deleteTaskIdList() { this->taskIdList_ = nullptr;};
    inline const vector<string> & taskIdList() const { DARABONBA_PTR_GET_CONST(taskIdList_, vector<string>) };
    inline vector<string> taskIdList() { DARABONBA_PTR_GET(taskIdList_, vector<string>) };
    inline BatchGetProjectTaskRequest& setTaskIdList(const vector<string> & taskIdList) { DARABONBA_PTR_SET_VALUE(taskIdList_, taskIdList) };
    inline BatchGetProjectTaskRequest& setTaskIdList(vector<string> && taskIdList) { DARABONBA_PTR_SET_RVALUE(taskIdList_, taskIdList) };


  protected:
    std::shared_ptr<vector<string>> taskIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
