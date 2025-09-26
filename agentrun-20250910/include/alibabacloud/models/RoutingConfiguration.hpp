// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROUTINGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_ROUTINGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VersionWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RoutingConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RoutingConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(versionWeights, versionWeights_);
    };
    friend void from_json(const Darabonba::Json& j, RoutingConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(versionWeights, versionWeights_);
    };
    RoutingConfiguration() = default ;
    RoutingConfiguration(const RoutingConfiguration &) = default ;
    RoutingConfiguration(RoutingConfiguration &&) = default ;
    RoutingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RoutingConfiguration() = default ;
    RoutingConfiguration& operator=(const RoutingConfiguration &) = default ;
    RoutingConfiguration& operator=(RoutingConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->versionWeights_ != nullptr; };
    // versionWeights Field Functions 
    bool hasVersionWeights() const { return this->versionWeights_ != nullptr;};
    void deleteVersionWeights() { this->versionWeights_ = nullptr;};
    inline const vector<VersionWeight> & versionWeights() const { DARABONBA_PTR_GET_CONST(versionWeights_, vector<VersionWeight>) };
    inline vector<VersionWeight> versionWeights() { DARABONBA_PTR_GET(versionWeights_, vector<VersionWeight>) };
    inline RoutingConfiguration& setVersionWeights(const vector<VersionWeight> & versionWeights) { DARABONBA_PTR_SET_VALUE(versionWeights_, versionWeights) };
    inline RoutingConfiguration& setVersionWeights(vector<VersionWeight> && versionWeights) { DARABONBA_PTR_SET_RVALUE(versionWeights_, versionWeights) };


  protected:
    // 不同版本的流量权重配置
    std::shared_ptr<vector<VersionWeight>> versionWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
