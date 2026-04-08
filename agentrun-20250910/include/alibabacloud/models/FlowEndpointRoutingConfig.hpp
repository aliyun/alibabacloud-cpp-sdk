// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWENDPOINTROUTINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_FLOWENDPOINTROUTINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class FlowEndpointRoutingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowEndpointRoutingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, FlowEndpointRoutingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    FlowEndpointRoutingConfig() = default ;
    FlowEndpointRoutingConfig(const FlowEndpointRoutingConfig &) = default ;
    FlowEndpointRoutingConfig(FlowEndpointRoutingConfig &&) = default ;
    FlowEndpointRoutingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowEndpointRoutingConfig() = default ;
    FlowEndpointRoutingConfig& operator=(const FlowEndpointRoutingConfig &) = default ;
    FlowEndpointRoutingConfig& operator=(FlowEndpointRoutingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr
        && this->weight_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline FlowEndpointRoutingConfig& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline FlowEndpointRoutingConfig& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // 目标工作流版本号
    shared_ptr<string> version_ {};
    // 该版本在流量分配中的权重，0-100
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
