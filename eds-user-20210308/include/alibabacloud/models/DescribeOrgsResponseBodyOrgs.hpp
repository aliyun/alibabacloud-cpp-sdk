// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGSRESPONSEBODYORGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGSRESPONSEBODYORGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgsResponseBodyOrgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgsResponseBodyOrgs& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(OrgNamePath, orgNamePath_);
      DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgsResponseBodyOrgs& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(OrgNamePath, orgNamePath_);
      DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
    };
    DescribeOrgsResponseBodyOrgs() = default ;
    DescribeOrgsResponseBodyOrgs(const DescribeOrgsResponseBodyOrgs &) = default ;
    DescribeOrgsResponseBodyOrgs(DescribeOrgsResponseBodyOrgs &&) = default ;
    DescribeOrgsResponseBodyOrgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgsResponseBodyOrgs() = default ;
    DescribeOrgsResponseBodyOrgs& operator=(const DescribeOrgsResponseBodyOrgs &) = default ;
    DescribeOrgsResponseBodyOrgs& operator=(DescribeOrgsResponseBodyOrgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgId_ == nullptr
        && return this->orgName_ == nullptr && return this->orgNamePath_ == nullptr && return this->parentOrgId_ == nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeOrgsResponseBodyOrgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline DescribeOrgsResponseBodyOrgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // orgNamePath Field Functions 
    bool hasOrgNamePath() const { return this->orgNamePath_ != nullptr;};
    void deleteOrgNamePath() { this->orgNamePath_ = nullptr;};
    inline string orgNamePath() const { DARABONBA_PTR_GET_DEFAULT(orgNamePath_, "") };
    inline DescribeOrgsResponseBodyOrgs& setOrgNamePath(string orgNamePath) { DARABONBA_PTR_SET_VALUE(orgNamePath_, orgNamePath) };


    // parentOrgId Field Functions 
    bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
    void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
    inline string parentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
    inline DescribeOrgsResponseBodyOrgs& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


  protected:
    // The organization ID.
    std::shared_ptr<string> orgId_ = nullptr;
    // The name of the organizational unit.
    std::shared_ptr<string> orgName_ = nullptr;
    std::shared_ptr<string> orgNamePath_ = nullptr;
    // The parent organization ID.
    std::shared_ptr<string> parentOrgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
