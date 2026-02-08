// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMATERIALTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMATERIALTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SubmitMaterialTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMaterialTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMaterialTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    SubmitMaterialTaskRequest() = default ;
    SubmitMaterialTaskRequest(const SubmitMaterialTaskRequest &) = default ;
    SubmitMaterialTaskRequest(SubmitMaterialTaskRequest &&) = default ;
    SubmitMaterialTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMaterialTaskRequest() = default ;
    SubmitMaterialTaskRequest& operator=(const SubmitMaterialTaskRequest &) = default ;
    SubmitMaterialTaskRequest& operator=(SubmitMaterialTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskParam_ == nullptr
        && this->taskType_ == nullptr; };
    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string getTaskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline SubmitMaterialTaskRequest& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SubmitMaterialTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskParam_ {};
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
