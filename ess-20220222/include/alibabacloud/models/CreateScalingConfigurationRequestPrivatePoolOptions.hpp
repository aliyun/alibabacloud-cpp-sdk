// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
    };
    CreateScalingConfigurationRequestPrivatePoolOptions() = default ;
    CreateScalingConfigurationRequestPrivatePoolOptions(const CreateScalingConfigurationRequestPrivatePoolOptions &) = default ;
    CreateScalingConfigurationRequestPrivatePoolOptions(CreateScalingConfigurationRequestPrivatePoolOptions &&) = default ;
    CreateScalingConfigurationRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestPrivatePoolOptions() = default ;
    CreateScalingConfigurationRequestPrivatePoolOptions& operator=(const CreateScalingConfigurationRequestPrivatePoolOptions &) = default ;
    CreateScalingConfigurationRequestPrivatePoolOptions& operator=(CreateScalingConfigurationRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->matchCriteria_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateScalingConfigurationRequestPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline CreateScalingConfigurationRequestPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The ID of the private pool. The ID of a private pool is the same as the ID of the elasticity assurance or capacity reservation for which the private pool is generated.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the private pool that you want to use to start ECS instances. A private pool is generated when an elasticity assurance or a capacity reservation takes effect. You can select a private pool to create ECS instances. Valid values:
    // 
    // *   Open: open private pool. Auto Scaling selects a matching open private pool to start instances. If no matching open private pools are found, Auto Scaling uses the resources in the public pool to start instances. In this case, you do not need to specify PrivatePoolOptions.Id.
    // *   Target: specified private pool. Auto Scaling uses the resources in the specified private pool to start ECS instances. If the specified private pool is unavailable, Auto Scaling cannot start ECS instances. If you set this parameter to Target, you must specify PrivatePoolOptions.Id.
    // *   None: no private pool. Auto Scaling does not use the resources in private pools to start ECS instances.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
