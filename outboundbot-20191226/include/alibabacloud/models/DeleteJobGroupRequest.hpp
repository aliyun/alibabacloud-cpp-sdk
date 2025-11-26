// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteJobGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
    };
    DeleteJobGroupRequest() = default ;
    DeleteJobGroupRequest(const DeleteJobGroupRequest &) = default ;
    DeleteJobGroupRequest(DeleteJobGroupRequest &&) = default ;
    DeleteJobGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobGroupRequest() = default ;
    DeleteJobGroupRequest& operator=(const DeleteJobGroupRequest &) = default ;
    DeleteJobGroupRequest& operator=(DeleteJobGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->jobGroupId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteJobGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline DeleteJobGroupRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
