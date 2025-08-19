// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(match_criteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(match_criteria, matchCriteria_);
    };
    CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions() = default ;
    CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions(const CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions &) = default ;
    CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions(CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions &&) = default ;
    CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions() = default ;
    CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions& operator=(const CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions &) = default ;
    CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions& operator=(CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions &&) = default ;
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
    inline CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The ID of the private node pool.
    std::shared_ptr<string> id_ = nullptr;
    // The type of private node pool. This parameter specifies the type of private pool that you want to use to create instances. A private pool is generated when an elasticity assurance or a capacity reservation takes effect. The system selects a private pool to start instances. Valid values:
    // 
    // *   `Open`: uses an open private pool. The system selects an open private pool to start instances. If no matching open private pools are available, the resources in the public pool are used.
    // *   `Target`: uses a specified private pool. The system uses the resources of the specified private pool to start instances. If the specified private pool is unavailable, instances cannot be started.
    // *   `None`: no private pool is used. The resources of private pools are not used to launch the instances.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
