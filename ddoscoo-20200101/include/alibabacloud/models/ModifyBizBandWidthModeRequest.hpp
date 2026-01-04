// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBIZBANDWIDTHMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBIZBANDWIDTHMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyBizBandWidthModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBizBandWidthModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBizBandWidthModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    ModifyBizBandWidthModeRequest() = default ;
    ModifyBizBandWidthModeRequest(const ModifyBizBandWidthModeRequest &) = default ;
    ModifyBizBandWidthModeRequest(ModifyBizBandWidthModeRequest &&) = default ;
    ModifyBizBandWidthModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBizBandWidthModeRequest() = default ;
    ModifyBizBandWidthModeRequest& operator=(const ModifyBizBandWidthModeRequest &) = default ;
    ModifyBizBandWidthModeRequest& operator=(ModifyBizBandWidthModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mode_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBizBandWidthModeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyBizBandWidthModeRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The metering method of the burstable clean bandwidth feature. Valid values:
    // 
    // *   **month**: the metering method of monthly 95th percentile
    // *   **day**: the metering method of daily 95th percentile
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
