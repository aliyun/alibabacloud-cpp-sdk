// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORGBYLAYERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORGBYLAYERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeOrgByLayerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrgByLayerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(ParentOrgId, parentOrgId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrgByLayerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(ParentOrgId, parentOrgId_);
    };
    DescribeOrgByLayerRequest() = default ;
    DescribeOrgByLayerRequest(const DescribeOrgByLayerRequest &) = default ;
    DescribeOrgByLayerRequest(DescribeOrgByLayerRequest &&) = default ;
    DescribeOrgByLayerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrgByLayerRequest() = default ;
    DescribeOrgByLayerRequest& operator=(const DescribeOrgByLayerRequest &) = default ;
    DescribeOrgByLayerRequest& operator=(DescribeOrgByLayerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->orgName_ == nullptr && this->parentOrgId_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribeOrgByLayerRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline DescribeOrgByLayerRequest& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // parentOrgId Field Functions 
    bool hasParentOrgId() const { return this->parentOrgId_ != nullptr;};
    void deleteParentOrgId() { this->parentOrgId_ = nullptr;};
    inline string getParentOrgId() const { DARABONBA_PTR_GET_DEFAULT(parentOrgId_, "") };
    inline DescribeOrgByLayerRequest& setParentOrgId(string parentOrgId) { DARABONBA_PTR_SET_VALUE(parentOrgId_, parentOrgId) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The name of the organization.
    shared_ptr<string> orgName_ {};
    // The ID of the parent organization.
    shared_ptr<string> parentOrgId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
