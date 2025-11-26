// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(WithScript, withScript_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(WithScript, withScript_);
    };
    DescribeJobRequest() = default ;
    DescribeJobRequest(const DescribeJobRequest &) = default ;
    DescribeJobRequest(DescribeJobRequest &&) = default ;
    DescribeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobRequest() = default ;
    DescribeJobRequest& operator=(const DescribeJobRequest &) = default ;
    DescribeJobRequest& operator=(DescribeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->jobId_ == nullptr && return this->withScript_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // withScript Field Functions 
    bool hasWithScript() const { return this->withScript_ != nullptr;};
    void deleteWithScript() { this->withScript_ = nullptr;};
    inline bool withScript() const { DARABONBA_PTR_GET_DEFAULT(withScript_, false) };
    inline DescribeJobRequest& setWithScript(bool withScript) { DARABONBA_PTR_SET_VALUE(withScript_, withScript) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<bool> withScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
