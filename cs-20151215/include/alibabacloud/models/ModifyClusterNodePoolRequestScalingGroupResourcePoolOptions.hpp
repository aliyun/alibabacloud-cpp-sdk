// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTSCALINGGROUPRESOURCEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTSCALINGGROUPRESOURCEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(private_pool_ids, privatePoolIds_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(private_pool_ids, privatePoolIds_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions() = default ;
    ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions(const ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions &) = default ;
    ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions(ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions &&) = default ;
    ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions() = default ;
    ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& operator=(const ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions &) = default ;
    ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& operator=(ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions &&) = default ;
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
    inline ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
    inline ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline ModifyClusterNodePoolRequestScalingGroupResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<string>> privatePoolIds_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
