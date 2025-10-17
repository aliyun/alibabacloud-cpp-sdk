// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODYSECURITYGROUPREFERENCESSECURITYGROUPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODYSECURITYGROUPREFERENCESSECURITYGROUPREFERENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& obj) { 
      DARABONBA_PTR_TO_JSON(ReferencingSecurityGroups, referencingSecurityGroups_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferencingSecurityGroups, referencingSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference() = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference(const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference &) = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference(DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference &&) = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference() = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& operator=(const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference &) = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& operator=(DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->referencingSecurityGroups_ == nullptr
        && return this->securityGroupId_ == nullptr; };
    // referencingSecurityGroups Field Functions 
    bool hasReferencingSecurityGroups() const { return this->referencingSecurityGroups_ != nullptr;};
    void deleteReferencingSecurityGroups() { this->referencingSecurityGroups_ = nullptr;};
    inline const Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups & referencingSecurityGroups() const { DARABONBA_PTR_GET_CONST(referencingSecurityGroups_, Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups) };
    inline Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups referencingSecurityGroups() { DARABONBA_PTR_GET(referencingSecurityGroups_, Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups) };
    inline DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& setReferencingSecurityGroups(const Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups & referencingSecurityGroups) { DARABONBA_PTR_SET_VALUE(referencingSecurityGroups_, referencingSecurityGroups) };
    inline DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& setReferencingSecurityGroups(Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups && referencingSecurityGroups) { DARABONBA_PTR_SET_RVALUE(referencingSecurityGroups_, referencingSecurityGroups) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // Details about the security groups whose rules reference the specified security group.
    std::shared_ptr<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReferenceReferencingSecurityGroups> referencingSecurityGroups_ = nullptr;
    // The ID of the specified security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
