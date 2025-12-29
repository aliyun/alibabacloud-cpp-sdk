// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeInstanceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Previous, previous_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Previous, previous_);
    };
    DescribeInstanceLogRequest() = default ;
    DescribeInstanceLogRequest(const DescribeInstanceLogRequest &) = default ;
    DescribeInstanceLogRequest(DescribeInstanceLogRequest &&) = default ;
    DescribeInstanceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceLogRequest() = default ;
    DescribeInstanceLogRequest& operator=(const DescribeInstanceLogRequest &) = default ;
    DescribeInstanceLogRequest& operator=(DescribeInstanceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerId_ == nullptr
        && this->instanceId_ == nullptr && this->previous_ == nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeInstanceLogRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceLogRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // previous Field Functions 
    bool hasPrevious() const { return this->previous_ != nullptr;};
    void deletePrevious() { this->previous_ = nullptr;};
    inline string getPrevious() const { DARABONBA_PTR_GET_DEFAULT(previous_, "") };
    inline DescribeInstanceLogRequest& setPrevious(string previous) { DARABONBA_PTR_SET_VALUE(previous_, previous) };


  protected:
    // The ID of the sidecar container. You can call the [DescribeApplicationInstances](https://help.aliyun.com/document_detail/2834847.html) to obtain the ID.
    shared_ptr<string> containerId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> previous_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
