// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICBIZBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICBIZBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyElasticBizBandWidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticBizBandWidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticBizBandwidth, elasticBizBandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticBizBandWidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticBizBandwidth, elasticBizBandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    ModifyElasticBizBandWidthRequest() = default ;
    ModifyElasticBizBandWidthRequest(const ModifyElasticBizBandWidthRequest &) = default ;
    ModifyElasticBizBandWidthRequest(ModifyElasticBizBandWidthRequest &&) = default ;
    ModifyElasticBizBandWidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticBizBandWidthRequest() = default ;
    ModifyElasticBizBandWidthRequest& operator=(const ModifyElasticBizBandWidthRequest &) = default ;
    ModifyElasticBizBandWidthRequest& operator=(ModifyElasticBizBandWidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticBizBandwidth_ == nullptr
        && return this->instanceId_ == nullptr && return this->mode_ == nullptr; };
    // elasticBizBandwidth Field Functions 
    bool hasElasticBizBandwidth() const { return this->elasticBizBandwidth_ != nullptr;};
    void deleteElasticBizBandwidth() { this->elasticBizBandwidth_ = nullptr;};
    inline int32_t elasticBizBandwidth() const { DARABONBA_PTR_GET_DEFAULT(elasticBizBandwidth_, 0) };
    inline ModifyElasticBizBandWidthRequest& setElasticBizBandwidth(int32_t elasticBizBandwidth) { DARABONBA_PTR_SET_VALUE(elasticBizBandwidth_, elasticBizBandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyElasticBizBandWidthRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyElasticBizBandWidthRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The burstable clean bandwidth. Unit: Mbit/s. The burstable clean bandwidth cannot exceed nine times the clean bandwidth of your Anti-DDoS Pro or Anti-DDoS Premium instance, and the sum of the clean bandwidth and the burstable clean bandwidth cannot exceed the maximum clean bandwidth that is supported by your instance. The value 0 indicates that the burstable clean bandwidth feature is disabled. You can disable the burstable clean bandwidth feature once a month.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> elasticBizBandwidth_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metering method of the burstable clean bandwidth feature. Valid values:
    // 
    // *   **month**: the metering method of monthly 95th percentile
    // *   **day**: the metering method of daily 95th percentile
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
