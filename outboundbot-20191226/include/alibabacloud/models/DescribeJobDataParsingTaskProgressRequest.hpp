// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBDATAPARSINGTASKPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBDATAPARSINGTASKPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobDataParsingTaskProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobDataParsingTaskProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobDataParsingTaskProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
    };
    DescribeJobDataParsingTaskProgressRequest() = default ;
    DescribeJobDataParsingTaskProgressRequest(const DescribeJobDataParsingTaskProgressRequest &) = default ;
    DescribeJobDataParsingTaskProgressRequest(DescribeJobDataParsingTaskProgressRequest &&) = default ;
    DescribeJobDataParsingTaskProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobDataParsingTaskProgressRequest() = default ;
    DescribeJobDataParsingTaskProgressRequest& operator=(const DescribeJobDataParsingTaskProgressRequest &) = default ;
    DescribeJobDataParsingTaskProgressRequest& operator=(DescribeJobDataParsingTaskProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->jobDataParsingTaskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeJobDataParsingTaskProgressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobDataParsingTaskId Field Functions 
    bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
    void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
    inline string jobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
    inline DescribeJobDataParsingTaskProgressRequest& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobDataParsingTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
