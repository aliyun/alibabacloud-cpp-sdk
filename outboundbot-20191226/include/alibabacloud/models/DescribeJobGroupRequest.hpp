// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPREQUEST_HPP_
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
  class DescribeJobGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BriefTypes, briefTypes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BriefTypes, briefTypes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
    };
    DescribeJobGroupRequest() = default ;
    DescribeJobGroupRequest(const DescribeJobGroupRequest &) = default ;
    DescribeJobGroupRequest(DescribeJobGroupRequest &&) = default ;
    DescribeJobGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupRequest() = default ;
    DescribeJobGroupRequest& operator=(const DescribeJobGroupRequest &) = default ;
    DescribeJobGroupRequest& operator=(DescribeJobGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->briefTypes_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr; };
    // briefTypes Field Functions 
    bool hasBriefTypes() const { return this->briefTypes_ != nullptr;};
    void deleteBriefTypes() { this->briefTypes_ = nullptr;};
    inline const vector<string> & briefTypes() const { DARABONBA_PTR_GET_CONST(briefTypes_, vector<string>) };
    inline vector<string> briefTypes() { DARABONBA_PTR_GET(briefTypes_, vector<string>) };
    inline DescribeJobGroupRequest& setBriefTypes(const vector<string> & briefTypes) { DARABONBA_PTR_SET_VALUE(briefTypes_, briefTypes) };
    inline DescribeJobGroupRequest& setBriefTypes(vector<string> && briefTypes) { DARABONBA_PTR_SET_RVALUE(briefTypes_, briefTypes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeJobGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline DescribeJobGroupRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


  protected:
    std::shared_ptr<vector<string>> briefTypes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
