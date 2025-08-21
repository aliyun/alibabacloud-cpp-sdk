// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDPREFLECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDPREFLECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeUdpReflectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdpReflectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdpReflectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeUdpReflectRequest() = default ;
    DescribeUdpReflectRequest(const DescribeUdpReflectRequest &) = default ;
    DescribeUdpReflectRequest(DescribeUdpReflectRequest &&) = default ;
    DescribeUdpReflectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdpReflectRequest() = default ;
    DescribeUdpReflectRequest& operator=(const DescribeUdpReflectRequest &) = default ;
    DescribeUdpReflectRequest& operator=(DescribeUdpReflectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUdpReflectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUdpReflectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the instance to query.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the instance. Valid values:
    // 
    // *   **cn-hangzhou**: indicates an Anti-DDoS Proxy (Chinese Mainland) instance. This is the default value.
    // *   **ap-southeast-1**: indicates an Anti-DDoS Proxy (Outside Chinese Mainland) instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
