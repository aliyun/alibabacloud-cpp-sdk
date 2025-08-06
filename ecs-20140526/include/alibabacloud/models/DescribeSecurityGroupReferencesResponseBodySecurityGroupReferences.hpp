// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODYSECURITYGROUPREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODYSECURITYGROUPREFERENCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupReference, securityGroupReference_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupReference, securityGroupReference_);
    };
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences() = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences(const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences &) = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences(DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences &&) = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences() = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences& operator=(const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences &) = default ;
    DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences& operator=(DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityGroupReference_ != nullptr; };
    // securityGroupReference Field Functions 
    bool hasSecurityGroupReference() const { return this->securityGroupReference_ != nullptr;};
    void deleteSecurityGroupReference() { this->securityGroupReference_ = nullptr;};
    inline const vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference> & securityGroupReference() const { DARABONBA_PTR_GET_CONST(securityGroupReference_, vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference>) };
    inline vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference> securityGroupReference() { DARABONBA_PTR_GET(securityGroupReference_, vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference>) };
    inline DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences& setSecurityGroupReference(const vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference> & securityGroupReference) { DARABONBA_PTR_SET_VALUE(securityGroupReference_, securityGroupReference) };
    inline DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences& setSecurityGroupReference(vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference> && securityGroupReference) { DARABONBA_PTR_SET_RVALUE(securityGroupReference_, securityGroupReference) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecurityGroupReferencesResponseBodySecurityGroupReferencesSecurityGroupReference>> securityGroupReference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
