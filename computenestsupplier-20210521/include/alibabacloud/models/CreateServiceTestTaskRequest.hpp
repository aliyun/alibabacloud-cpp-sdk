// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICETESTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICETESTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceTestTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceTestTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskRegionId, taskRegionId_);
      DARABONBA_PTR_TO_JSON(TestCaseIds, testCaseIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceTestTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskRegionId, taskRegionId_);
      DARABONBA_PTR_FROM_JSON(TestCaseIds, testCaseIds_);
    };
    CreateServiceTestTaskRequest() = default ;
    CreateServiceTestTaskRequest(const CreateServiceTestTaskRequest &) = default ;
    CreateServiceTestTaskRequest(CreateServiceTestTaskRequest &&) = default ;
    CreateServiceTestTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceTestTaskRequest() = default ;
    CreateServiceTestTaskRequest& operator=(const CreateServiceTestTaskRequest &) = default ;
    CreateServiceTestTaskRequest& operator=(CreateServiceTestTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->taskName_ != nullptr && this->taskRegionId_ != nullptr && this->testCaseIds_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceTestTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateServiceTestTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskRegionId Field Functions 
    bool hasTaskRegionId() const { return this->taskRegionId_ != nullptr;};
    void deleteTaskRegionId() { this->taskRegionId_ = nullptr;};
    inline string taskRegionId() const { DARABONBA_PTR_GET_DEFAULT(taskRegionId_, "") };
    inline CreateServiceTestTaskRequest& setTaskRegionId(string taskRegionId) { DARABONBA_PTR_SET_VALUE(taskRegionId_, taskRegionId) };


    // testCaseIds Field Functions 
    bool hasTestCaseIds() const { return this->testCaseIds_ != nullptr;};
    void deleteTestCaseIds() { this->testCaseIds_ = nullptr;};
    inline const vector<string> & testCaseIds() const { DARABONBA_PTR_GET_CONST(testCaseIds_, vector<string>) };
    inline vector<string> testCaseIds() { DARABONBA_PTR_GET(testCaseIds_, vector<string>) };
    inline CreateServiceTestTaskRequest& setTestCaseIds(const vector<string> & testCaseIds) { DARABONBA_PTR_SET_VALUE(testCaseIds_, testCaseIds) };
    inline CreateServiceTestTaskRequest& setTestCaseIds(vector<string> && testCaseIds) { DARABONBA_PTR_SET_RVALUE(testCaseIds_, testCaseIds) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The Task Execution Region
    std::shared_ptr<string> taskRegionId_ = nullptr;
    // The service test case ids.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> testCaseIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
