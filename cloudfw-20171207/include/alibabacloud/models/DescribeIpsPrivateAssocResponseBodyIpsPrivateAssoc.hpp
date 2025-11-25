// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSPRIVATEASSOCRESPONSEBODYIPSPRIVATEASSOC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSPRIVATEASSOCRESPONSEBODYIPSPRIVATEASSOC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& obj) { 
      DARABONBA_PTR_TO_JSON(AssocInfoStatus, assocInfoStatus_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(ProtectedIpList, protectedIpList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnprotectedIpList, unprotectedIpList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& obj) { 
      DARABONBA_PTR_FROM_JSON(AssocInfoStatus, assocInfoStatus_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(ProtectedIpList, protectedIpList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnprotectedIpList, unprotectedIpList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc() = default ;
    DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc(const DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc &) = default ;
    DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc(DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc &&) = default ;
    DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc() = default ;
    DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& operator=(const DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc &) = default ;
    DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& operator=(DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assocInfoStatus_ == nullptr
        && return this->errorMsg_ == nullptr && return this->memberUid_ == nullptr && return this->protectedIpList_ == nullptr && return this->regionId_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceName_ == nullptr && return this->status_ == nullptr && return this->unprotectedIpList_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // assocInfoStatus Field Functions 
    bool hasAssocInfoStatus() const { return this->assocInfoStatus_ != nullptr;};
    void deleteAssocInfoStatus() { this->assocInfoStatus_ = nullptr;};
    inline string assocInfoStatus() const { DARABONBA_PTR_GET_DEFAULT(assocInfoStatus_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setAssocInfoStatus(string assocInfoStatus) { DARABONBA_PTR_SET_VALUE(assocInfoStatus_, assocInfoStatus) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // protectedIpList Field Functions 
    bool hasProtectedIpList() const { return this->protectedIpList_ != nullptr;};
    void deleteProtectedIpList() { this->protectedIpList_ = nullptr;};
    inline const vector<string> & protectedIpList() const { DARABONBA_PTR_GET_CONST(protectedIpList_, vector<string>) };
    inline vector<string> protectedIpList() { DARABONBA_PTR_GET(protectedIpList_, vector<string>) };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setProtectedIpList(const vector<string> & protectedIpList) { DARABONBA_PTR_SET_VALUE(protectedIpList_, protectedIpList) };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setProtectedIpList(vector<string> && protectedIpList) { DARABONBA_PTR_SET_RVALUE(protectedIpList_, protectedIpList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unprotectedIpList Field Functions 
    bool hasUnprotectedIpList() const { return this->unprotectedIpList_ != nullptr;};
    void deleteUnprotectedIpList() { this->unprotectedIpList_ = nullptr;};
    inline const vector<string> & unprotectedIpList() const { DARABONBA_PTR_GET_CONST(unprotectedIpList_, vector<string>) };
    inline vector<string> unprotectedIpList() { DARABONBA_PTR_GET(unprotectedIpList_, vector<string>) };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setUnprotectedIpList(const vector<string> & unprotectedIpList) { DARABONBA_PTR_SET_VALUE(unprotectedIpList_, unprotectedIpList) };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setUnprotectedIpList(vector<string> && unprotectedIpList) { DARABONBA_PTR_SET_RVALUE(unprotectedIpList_, unprotectedIpList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeIpsPrivateAssocResponseBodyIpsPrivateAssoc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    std::shared_ptr<string> assocInfoStatus_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    std::shared_ptr<vector<string>> protectedIpList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> unprotectedIpList_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
