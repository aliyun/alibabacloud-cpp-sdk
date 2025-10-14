// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTRAINTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTRAINTASKREQUEST_HPP_
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
  class BatchGetTrainTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTrainTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_TO_JSON(taskIdList, taskIdList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTrainTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_FROM_JSON(taskIdList, taskIdList_);
    };
    BatchGetTrainTaskRequest() = default ;
    BatchGetTrainTaskRequest(const BatchGetTrainTaskRequest &) = default ;
    BatchGetTrainTaskRequest(BatchGetTrainTaskRequest &&) = default ;
    BatchGetTrainTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTrainTaskRequest() = default ;
    BatchGetTrainTaskRequest& operator=(const BatchGetTrainTaskRequest &) = default ;
    BatchGetTrainTaskRequest& operator=(BatchGetTrainTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunMainId_ == nullptr
        && return this->taskIdList_ == nullptr; };
    // aliyunMainId Field Functions 
    bool hasAliyunMainId() const { return this->aliyunMainId_ != nullptr;};
    void deleteAliyunMainId() { this->aliyunMainId_ = nullptr;};
    inline string aliyunMainId() const { DARABONBA_PTR_GET_DEFAULT(aliyunMainId_, "") };
    inline BatchGetTrainTaskRequest& setAliyunMainId(string aliyunMainId) { DARABONBA_PTR_SET_VALUE(aliyunMainId_, aliyunMainId) };


    // taskIdList Field Functions 
    bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
    void deleteTaskIdList() { this->taskIdList_ = nullptr;};
    inline const vector<string> & taskIdList() const { DARABONBA_PTR_GET_CONST(taskIdList_, vector<string>) };
    inline vector<string> taskIdList() { DARABONBA_PTR_GET(taskIdList_, vector<string>) };
    inline BatchGetTrainTaskRequest& setTaskIdList(const vector<string> & taskIdList) { DARABONBA_PTR_SET_VALUE(taskIdList_, taskIdList) };
    inline BatchGetTrainTaskRequest& setTaskIdList(vector<string> && taskIdList) { DARABONBA_PTR_SET_RVALUE(taskIdList_, taskIdList) };


  protected:
    std::shared_ptr<string> aliyunMainId_ = nullptr;
    std::shared_ptr<vector<string>> taskIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
