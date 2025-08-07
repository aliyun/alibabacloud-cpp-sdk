// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDSDKPULLINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDSDKPULLINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyHybridCloudSdkPullinStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridCloudSdkPullinStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mid, mid_);
      DARABONBA_PTR_TO_JSON(PullinStatus, pullinStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridCloudSdkPullinStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mid, mid_);
      DARABONBA_PTR_FROM_JSON(PullinStatus, pullinStatus_);
    };
    ModifyHybridCloudSdkPullinStatusRequest() = default ;
    ModifyHybridCloudSdkPullinStatusRequest(const ModifyHybridCloudSdkPullinStatusRequest &) = default ;
    ModifyHybridCloudSdkPullinStatusRequest(ModifyHybridCloudSdkPullinStatusRequest &&) = default ;
    ModifyHybridCloudSdkPullinStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridCloudSdkPullinStatusRequest() = default ;
    ModifyHybridCloudSdkPullinStatusRequest& operator=(const ModifyHybridCloudSdkPullinStatusRequest &) = default ;
    ModifyHybridCloudSdkPullinStatusRequest& operator=(ModifyHybridCloudSdkPullinStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->mid_ != nullptr && this->pullinStatus_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHybridCloudSdkPullinStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mid Field Functions 
    bool hasMid() const { return this->mid_ != nullptr;};
    void deleteMid() { this->mid_ = nullptr;};
    inline string mid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
    inline ModifyHybridCloudSdkPullinStatusRequest& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


    // pullinStatus Field Functions 
    bool hasPullinStatus() const { return this->pullinStatus_ != nullptr;};
    void deletePullinStatus() { this->pullinStatus_ = nullptr;};
    inline string pullinStatus() const { DARABONBA_PTR_GET_DEFAULT(pullinStatus_, "") };
    inline ModifyHybridCloudSdkPullinStatusRequest& setPullinStatus(string pullinStatus) { DARABONBA_PTR_SET_VALUE(pullinStatus_, pullinStatus) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the SDK.
    // 
    // This parameter is required.
    std::shared_ptr<string> mid_ = nullptr;
    // The status of traffic redirection. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    std::shared_ptr<string> pullinStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
