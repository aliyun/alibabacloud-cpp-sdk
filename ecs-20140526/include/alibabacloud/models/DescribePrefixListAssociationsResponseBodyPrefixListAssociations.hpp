// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTASSOCIATIONSRESPONSEBODYPREFIXLISTASSOCIATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTASSOCIATIONSRESPONSEBODYPREFIXLISTASSOCIATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListAssociationsResponseBodyPrefixListAssociations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListAssociationsResponseBodyPrefixListAssociations& obj) { 
      DARABONBA_PTR_TO_JSON(PrefixListAssociation, prefixListAssociation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListAssociationsResponseBodyPrefixListAssociations& obj) { 
      DARABONBA_PTR_FROM_JSON(PrefixListAssociation, prefixListAssociation_);
    };
    DescribePrefixListAssociationsResponseBodyPrefixListAssociations() = default ;
    DescribePrefixListAssociationsResponseBodyPrefixListAssociations(const DescribePrefixListAssociationsResponseBodyPrefixListAssociations &) = default ;
    DescribePrefixListAssociationsResponseBodyPrefixListAssociations(DescribePrefixListAssociationsResponseBodyPrefixListAssociations &&) = default ;
    DescribePrefixListAssociationsResponseBodyPrefixListAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListAssociationsResponseBodyPrefixListAssociations() = default ;
    DescribePrefixListAssociationsResponseBodyPrefixListAssociations& operator=(const DescribePrefixListAssociationsResponseBodyPrefixListAssociations &) = default ;
    DescribePrefixListAssociationsResponseBodyPrefixListAssociations& operator=(DescribePrefixListAssociationsResponseBodyPrefixListAssociations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prefixListAssociation_ == nullptr; };
    // prefixListAssociation Field Functions 
    bool hasPrefixListAssociation() const { return this->prefixListAssociation_ != nullptr;};
    void deletePrefixListAssociation() { this->prefixListAssociation_ = nullptr;};
    inline const vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation> & prefixListAssociation() const { DARABONBA_PTR_GET_CONST(prefixListAssociation_, vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation>) };
    inline vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation> prefixListAssociation() { DARABONBA_PTR_GET(prefixListAssociation_, vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation>) };
    inline DescribePrefixListAssociationsResponseBodyPrefixListAssociations& setPrefixListAssociation(const vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation> & prefixListAssociation) { DARABONBA_PTR_SET_VALUE(prefixListAssociation_, prefixListAssociation) };
    inline DescribePrefixListAssociationsResponseBodyPrefixListAssociations& setPrefixListAssociation(vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation> && prefixListAssociation) { DARABONBA_PTR_SET_RVALUE(prefixListAssociation_, prefixListAssociation) };


  protected:
    std::shared_ptr<vector<Models::DescribePrefixListAssociationsResponseBodyPrefixListAssociationsPrefixListAssociation>> prefixListAssociation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
