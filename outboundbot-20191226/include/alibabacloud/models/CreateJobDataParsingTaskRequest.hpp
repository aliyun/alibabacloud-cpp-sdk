// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBDATAPARSINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBDATAPARSINGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobDataParsingTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobDataParsingTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobDataParsingTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
    };
    CreateJobDataParsingTaskRequest() = default ;
    CreateJobDataParsingTaskRequest(const CreateJobDataParsingTaskRequest &) = default ;
    CreateJobDataParsingTaskRequest(CreateJobDataParsingTaskRequest &&) = default ;
    CreateJobDataParsingTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobDataParsingTaskRequest() = default ;
    CreateJobDataParsingTaskRequest& operator=(const CreateJobDataParsingTaskRequest &) = default ;
    CreateJobDataParsingTaskRequest& operator=(CreateJobDataParsingTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->jobFilePath_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateJobDataParsingTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline CreateJobDataParsingTaskRequest& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobFilePath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
