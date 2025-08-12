// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGBYLAYERRESPONSEBODYORGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGBYLAYERRESPONSEBODYORGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgByLayerResponseBodyOrgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgByLayerResponseBodyOrgs& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgByLayerResponseBodyOrgs& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
    };
    DescribeOrgByLayerResponseBodyOrgs() = default ;
    DescribeOrgByLayerResponseBodyOrgs(const DescribeOrgByLayerResponseBodyOrgs &) = default ;
    DescribeOrgByLayerResponseBodyOrgs(DescribeOrgByLayerResponseBodyOrgs &&) = default ;
    DescribeOrgByLayerResponseBodyOrgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgByLayerResponseBodyOrgs() = default ;
    DescribeOrgByLayerResponseBodyOrgs& operator=(const DescribeOrgByLayerResponseBodyOrgs &) = default ;
    DescribeOrgByLayerResponseBodyOrgs& operator=(DescribeOrgByLayerResponseBodyOrgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgId_ != nullptr
        && this->orgName_ != nullptr && this->parentOrgId_ != nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeOrgByLayerResponseBodyOrgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline DescribeOrgByLayerResponseBodyOrgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // parentOrgId Field Functions 
    bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
    void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
    inline string parentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
    inline DescribeOrgByLayerResponseBodyOrgs& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


  protected:
    std::shared_ptr<string> orgId_ = nullptr;
    std::shared_ptr<string> orgName_ = nullptr;
    std::shared_ptr<string> parentOrgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
