// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyElasticBandWidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticBandWidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticBandWidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyElasticBandWidthRequest() = default ;
    ModifyElasticBandWidthRequest(const ModifyElasticBandWidthRequest &) = default ;
    ModifyElasticBandWidthRequest(ModifyElasticBandWidthRequest &&) = default ;
    ModifyElasticBandWidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticBandWidthRequest() = default ;
    ModifyElasticBandWidthRequest& operator=(const ModifyElasticBandWidthRequest &) = default ;
    ModifyElasticBandWidthRequest& operator=(ModifyElasticBandWidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticBandwidth_ == nullptr
        && this->instanceId_ == nullptr; };
    // elasticBandwidth Field Functions 
    bool hasElasticBandwidth() const { return this->elasticBandwidth_ != nullptr;};
    void deleteElasticBandwidth() { this->elasticBandwidth_ = nullptr;};
    inline int32_t getElasticBandwidth() const { DARABONBA_PTR_GET_DEFAULT(elasticBandwidth_, 0) };
    inline ModifyElasticBandWidthRequest& setElasticBandwidth(int32_t elasticBandwidth) { DARABONBA_PTR_SET_VALUE(elasticBandwidth_, elasticBandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyElasticBandWidthRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The new burstable protection bandwidth that you want to use. Unit: Gbit/s.
    // 
    // > You can call the [DescribeElasticBandwidthSpec](https://help.aliyun.com/document_detail/91502.html) operation to query the available burstable protection bandwidth of the instance.
    // 
    // This parameter is required.
    shared_ptr<int32_t> elasticBandwidth_ {};
    // The ID of the instance.
    // 
    // >  The instance must be in a normal state. You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
