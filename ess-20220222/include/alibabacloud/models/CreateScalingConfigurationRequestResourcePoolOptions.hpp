// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTRESOURCEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTRESOURCEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequestResourcePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestResourcePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(PrivatePoolIds, privatePoolIds_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestResourcePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivatePoolIds, privatePoolIds_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateScalingConfigurationRequestResourcePoolOptions() = default ;
    CreateScalingConfigurationRequestResourcePoolOptions(const CreateScalingConfigurationRequestResourcePoolOptions &) = default ;
    CreateScalingConfigurationRequestResourcePoolOptions(CreateScalingConfigurationRequestResourcePoolOptions &&) = default ;
    CreateScalingConfigurationRequestResourcePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestResourcePoolOptions() = default ;
    CreateScalingConfigurationRequestResourcePoolOptions& operator=(const CreateScalingConfigurationRequestResourcePoolOptions &) = default ;
    CreateScalingConfigurationRequestResourcePoolOptions& operator=(CreateScalingConfigurationRequestResourcePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privatePoolIds_ == nullptr
        && return this->strategy_ == nullptr; };
    // privatePoolIds Field Functions 
    bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
    void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
    inline const vector<string> & privatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
    inline vector<string> privatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
    inline CreateScalingConfigurationRequestResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
    inline CreateScalingConfigurationRequestResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateScalingConfigurationRequestResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // The IDs of private pools. The ID of a private pool is the same as the ID of the elasticity assurance or capacity reservation that is associated with the private pool. You can specify the IDs of only targeted private pools for this parameter.
    std::shared_ptr<vector<string>> privatePoolIds_ = nullptr;
    // The resource pool used for instance creation, which can be the public pool or a private pool associated with any active elasticity assurance or capacity reservation. Valid values:
    // 
    // *   PrivatePoolFirst: prioritizes private pools. When this option is set along with ResourcePoolOptions.PrivatePoolIds, the specified private pools are used first. If you leave ResourcePoolOptions.PrivatePoolIds empty or if the specified private pools lack sufficient capacity, the system will automatically use available open private pools instead. If no matching private pools are available, the system defaults to the public pool.
    // *   PrivatePoolOnly: uses only private pools. If you set this value, you must specify ResourcePoolOptions.PrivatePoolIds. If the specified private pools lack sufficient capacity, instance creation will fail.
    // *   None: uses no resource pools.
    // 
    // Default value: None.
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
