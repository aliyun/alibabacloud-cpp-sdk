// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICITYASSURANCEREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICITYASSURANCEREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateElasticityAssuranceRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticityAssuranceRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticityAssuranceRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateElasticityAssuranceRequestPrivatePoolOptions() = default ;
    CreateElasticityAssuranceRequestPrivatePoolOptions(const CreateElasticityAssuranceRequestPrivatePoolOptions &) = default ;
    CreateElasticityAssuranceRequestPrivatePoolOptions(CreateElasticityAssuranceRequestPrivatePoolOptions &&) = default ;
    CreateElasticityAssuranceRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticityAssuranceRequestPrivatePoolOptions() = default ;
    CreateElasticityAssuranceRequestPrivatePoolOptions& operator=(const CreateElasticityAssuranceRequestPrivatePoolOptions &) = default ;
    CreateElasticityAssuranceRequestPrivatePoolOptions& operator=(CreateElasticityAssuranceRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchCriteria_ != nullptr
        && this->name_ != nullptr; };
    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline CreateElasticityAssuranceRequestPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateElasticityAssuranceRequestPrivatePoolOptions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The type of the private pool with which you want to associate the elasticity assurance. Valid values:
    // 
    // *   Open: open private pool. If you use the elasticity assurance to create ECS instances, the open private pool that is associated with the elasticity assurance is automatically matched. If no capacity is available in the open private pool, resources in the public pool are automatically used to create the ECS instances.
    // *   Target: targeted private pool. If you use the elasticity assurance to create ECS instances, the specified private pool that is associated with the elasticity assurance is automatically matched. If no capacity is available in the private pool, the ECS instances fail to be created.
    // 
    // Default value: Open.
    std::shared_ptr<string> matchCriteria_ = nullptr;
    // The name of the elasticity assurance. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
