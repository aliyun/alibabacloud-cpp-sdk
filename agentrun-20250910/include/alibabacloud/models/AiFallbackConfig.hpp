// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIFALLBACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIFALLBACKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AiFallbackServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AiFallbackConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiFallbackConfig& obj) { 
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, AiFallbackConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
    };
    AiFallbackConfig() = default ;
    AiFallbackConfig(const AiFallbackConfig &) = default ;
    AiFallbackConfig(AiFallbackConfig &&) = default ;
    AiFallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiFallbackConfig() = default ;
    AiFallbackConfig& operator=(const AiFallbackConfig &) = default ;
    AiFallbackConfig& operator=(AiFallbackConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceConfigs_ == nullptr; };
    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<AiFallbackServiceConfig> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<AiFallbackServiceConfig>) };
    inline vector<AiFallbackServiceConfig> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<AiFallbackServiceConfig>) };
    inline AiFallbackConfig& setServiceConfigs(const vector<AiFallbackServiceConfig> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline AiFallbackConfig& setServiceConfigs(vector<AiFallbackServiceConfig> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


  protected:
    std::shared_ptr<vector<AiFallbackServiceConfig>> serviceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
