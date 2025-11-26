// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobGroupExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(Option, option_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
    };
    CreateJobGroupExportTaskRequest() = default ;
    CreateJobGroupExportTaskRequest(const CreateJobGroupExportTaskRequest &) = default ;
    CreateJobGroupExportTaskRequest(CreateJobGroupExportTaskRequest &&) = default ;
    CreateJobGroupExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupExportTaskRequest() = default ;
    CreateJobGroupExportTaskRequest& operator=(const CreateJobGroupExportTaskRequest &) = default ;
    CreateJobGroupExportTaskRequest& operator=(CreateJobGroupExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->jobGroupId_ == nullptr && return this->option_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateJobGroupExportTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline CreateJobGroupExportTaskRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const vector<string> & option() const { DARABONBA_PTR_GET_CONST(option_, vector<string>) };
    inline vector<string> option() { DARABONBA_PTR_GET(option_, vector<string>) };
    inline CreateJobGroupExportTaskRequest& setOption(const vector<string> & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline CreateJobGroupExportTaskRequest& setOption(vector<string> && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<vector<string>> option_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
