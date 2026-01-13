// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEELASTICVCUUPPERLIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEELASTICVCUUPPERLIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UpdateInstanceElasticVCUUpperLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceElasticVCUUpperLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticVCUUpperLimit, elasticVCUUpperLimit_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceElasticVCUUpperLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticVCUUpperLimit, elasticVCUUpperLimit_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    UpdateInstanceElasticVCUUpperLimitRequest() = default ;
    UpdateInstanceElasticVCUUpperLimitRequest(const UpdateInstanceElasticVCUUpperLimitRequest &) = default ;
    UpdateInstanceElasticVCUUpperLimitRequest(UpdateInstanceElasticVCUUpperLimitRequest &&) = default ;
    UpdateInstanceElasticVCUUpperLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceElasticVCUUpperLimitRequest() = default ;
    UpdateInstanceElasticVCUUpperLimitRequest& operator=(const UpdateInstanceElasticVCUUpperLimitRequest &) = default ;
    UpdateInstanceElasticVCUUpperLimitRequest& operator=(UpdateInstanceElasticVCUUpperLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticVCUUpperLimit_ == nullptr
        && this->instanceName_ == nullptr; };
    // elasticVCUUpperLimit Field Functions 
    bool hasElasticVCUUpperLimit() const { return this->elasticVCUUpperLimit_ != nullptr;};
    void deleteElasticVCUUpperLimit() { this->elasticVCUUpperLimit_ = nullptr;};
    inline float getElasticVCUUpperLimit() const { DARABONBA_PTR_GET_DEFAULT(elasticVCUUpperLimit_, 0.0) };
    inline UpdateInstanceElasticVCUUpperLimitRequest& setElasticVCUUpperLimit(float elasticVCUUpperLimit) { DARABONBA_PTR_SET_VALUE(elasticVCUUpperLimit_, elasticVCUUpperLimit) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceElasticVCUUpperLimitRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The upper limit for the VCUs of the instance.
    // 
    // >  Valid values of the upper limit for the VCUs of an instance: **Number of reserved VCUs+0.1 to 2000**. You can upgrade or downgrade configurations to modify the number of reserved VCUs by increments or decrements of 1. You can dynamically modify the upper limit for the VCUs of an instance by increments or decrements of 0.1
    // 
    // This parameter is required.
    shared_ptr<float> elasticVCUUpperLimit_ {};
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
