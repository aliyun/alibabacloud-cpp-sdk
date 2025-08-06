// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSEBODYAUTOSNAPSHOTPOLICYASSOCIATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSEBODYAUTOSNAPSHOTPOLICYASSOCIATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyAssociation, autoSnapshotPolicyAssociation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyAssociation, autoSnapshotPolicyAssociation_);
    };
    DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations(const DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations(DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations &&) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations& operator=(const DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations& operator=(DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicyAssociation_ != nullptr; };
    // autoSnapshotPolicyAssociation Field Functions 
    bool hasAutoSnapshotPolicyAssociation() const { return this->autoSnapshotPolicyAssociation_ != nullptr;};
    void deleteAutoSnapshotPolicyAssociation() { this->autoSnapshotPolicyAssociation_ = nullptr;};
    inline const vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation> & autoSnapshotPolicyAssociation() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicyAssociation_, vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation>) };
    inline vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation> autoSnapshotPolicyAssociation() { DARABONBA_PTR_GET(autoSnapshotPolicyAssociation_, vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation>) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations& setAutoSnapshotPolicyAssociation(const vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation> & autoSnapshotPolicyAssociation) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyAssociation_, autoSnapshotPolicyAssociation) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociations& setAutoSnapshotPolicyAssociation(vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation> && autoSnapshotPolicyAssociation) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicyAssociation_, autoSnapshotPolicyAssociation) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoSnapshotPolicyAssociationsResponseBodyAutoSnapshotPolicyAssociationsAutoSnapshotPolicyAssociation>> autoSnapshotPolicyAssociation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
