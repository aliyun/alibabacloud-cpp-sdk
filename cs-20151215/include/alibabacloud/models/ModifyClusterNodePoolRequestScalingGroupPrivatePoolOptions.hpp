// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(match_criteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(match_criteria, matchCriteria_);
    };
    ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions() = default ;
    ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions(const ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions &) = default ;
    ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions(ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions &&) = default ;
    ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions() = default ;
    ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions& operator=(const ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions &) = default ;
    ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions& operator=(ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions &&) = default ;
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
    inline ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline ModifyClusterNodePoolRequestScalingGroupPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The private node pool ID. This parameter is available only when `match_criteria` is set to `Target`.
    std::shared_ptr<string> id_ = nullptr;
    // The type of private node pool. This parameter specifies the type of private pool that you want to use to create instances. A private pool is generated when an elasticity assurance or a capacity reservation takes effect. The system selects a private pool to start instances. Valid values:
    // 
    // *   `Open`: open private pool. The system selects an open private pool to start instances. If no matching open private pools are available, the resources in the public pool are used.
    // *   `Target`: uses a specified private pool. The system uses the resources of the specified private pool to start instances. If the specified private pool is unavailable, instances cannot be started.
    // *   `None`: no private pool is used. The resources of private pools are not used to launch the instances.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
