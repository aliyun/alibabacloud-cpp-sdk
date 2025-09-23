// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ModifyElasticBandWidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticBandWidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticBandWidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticBandwidth, elasticBandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
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
    virtual bool empty() const override { this->elasticBandwidth_ != nullptr
        && this->instanceId_ != nullptr && this->sourceIp_ != nullptr; };
    // elasticBandwidth Field Functions 
    bool hasElasticBandwidth() const { return this->elasticBandwidth_ != nullptr;};
    void deleteElasticBandwidth() { this->elasticBandwidth_ = nullptr;};
    inline int32_t elasticBandwidth() const { DARABONBA_PTR_GET_DEFAULT(elasticBandwidth_, 0) };
    inline ModifyElasticBandWidthRequest& setElasticBandwidth(int32_t elasticBandwidth) { DARABONBA_PTR_SET_VALUE(elasticBandwidth_, elasticBandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyElasticBandWidthRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyElasticBandWidthRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> elasticBandwidth_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
