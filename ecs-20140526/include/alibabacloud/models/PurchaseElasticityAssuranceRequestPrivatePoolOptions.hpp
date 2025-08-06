// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEELASTICITYASSURANCEREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEELASTICITYASSURANCEREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class PurchaseElasticityAssuranceRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseElasticityAssuranceRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseElasticityAssuranceRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
    };
    PurchaseElasticityAssuranceRequestPrivatePoolOptions() = default ;
    PurchaseElasticityAssuranceRequestPrivatePoolOptions(const PurchaseElasticityAssuranceRequestPrivatePoolOptions &) = default ;
    PurchaseElasticityAssuranceRequestPrivatePoolOptions(PurchaseElasticityAssuranceRequestPrivatePoolOptions &&) = default ;
    PurchaseElasticityAssuranceRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseElasticityAssuranceRequestPrivatePoolOptions() = default ;
    PurchaseElasticityAssuranceRequestPrivatePoolOptions& operator=(const PurchaseElasticityAssuranceRequestPrivatePoolOptions &) = default ;
    PurchaseElasticityAssuranceRequestPrivatePoolOptions& operator=(PurchaseElasticityAssuranceRequestPrivatePoolOptions &&) = default ;
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
    inline PurchaseElasticityAssuranceRequestPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline PurchaseElasticityAssuranceRequestPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The ID of the elasticity assurance.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the private pool with which you want to associate the elasticity assurance. Valid values:
    // 
    // *   Open: open private pool. If you use the elasticity assurance to create Elastic Compute Service (ECS) instances, the open private pool that is associated with the elasticity assurance is automatically matched. If no capacity is available in the open private pool, resources in the public pool are automatically used to create the ECS instances.
    // *   Target: targeted private pool. If you use the elasticity assurance to create ECS instances, the specified private pool that is associated with the elasticity assurance is automatically matched. If no capacity is available in the private pool, the ECS instances fail to be created.
    // 
    // Default value: Open.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
