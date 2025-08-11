// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
    };
    ModifyScalingConfigurationRequestPrivatePoolOptions() = default ;
    ModifyScalingConfigurationRequestPrivatePoolOptions(const ModifyScalingConfigurationRequestPrivatePoolOptions &) = default ;
    ModifyScalingConfigurationRequestPrivatePoolOptions(ModifyScalingConfigurationRequestPrivatePoolOptions &&) = default ;
    ModifyScalingConfigurationRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequestPrivatePoolOptions() = default ;
    ModifyScalingConfigurationRequestPrivatePoolOptions& operator=(const ModifyScalingConfigurationRequestPrivatePoolOptions &) = default ;
    ModifyScalingConfigurationRequestPrivatePoolOptions& operator=(ModifyScalingConfigurationRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->matchCriteria_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyScalingConfigurationRequestPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline ModifyScalingConfigurationRequestPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The ID of the private pool. The ID of a private pool is the same as the ID of the elasticity assurance or capacity reservation for which the private pool is generated.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the private pool that you want to use to start ECS instances. A private pool is generated when an elasticity assurance or a capacity reservation takes effect. You can specify a private pool for Auto Scaling to start ECS instances. Valid values:
    // 
    // *   Open: open private pool. Auto Scaling selects a matching open private pool to start ECS instances. If no matching open private pools exist, the resources in the public pool are used. In this case, you do not need to specify PrivatePoolOptions.Id.
    // *   Target: specified private pool. Auto Scaling uses the resources in the specified private pool to start ECS instances. If the specified private pool does not exist, Auto Scaling cannot start ECS instances. If you set this parameter to Target, you must specify PrivatePoolOptions.Id.
    // *   None: no private pool. Auto Scaling does not use the resources of private pools to start ECS instances.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
