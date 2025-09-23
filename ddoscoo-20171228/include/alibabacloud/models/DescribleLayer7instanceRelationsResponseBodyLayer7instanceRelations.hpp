// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODYLAYER7INSTANCERELATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODYLAYER7INSTANCERELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
    };
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations() = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations(const DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations &) = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations(DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations &&) = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations() = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& operator=(const DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations &) = default ;
    DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& operator=(DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->instanceDetails_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceDetails Field Functions 
    bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
    void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
    inline const vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails> & instanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails>) };
    inline vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails> instanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails>) };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& setInstanceDetails(const vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
    inline DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations& setInstanceDetails(vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<Models::DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails>> instanceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
