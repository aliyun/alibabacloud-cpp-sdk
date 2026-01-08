// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSPRIVATEASSOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSPRIVATEASSOCRESPONSEBODY_HPP_
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
  class DescribeIpsPrivateAssocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpsPrivateAssocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpsPrivateAssoc, ipsPrivateAssoc_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalOpenCount, totalOpenCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpsPrivateAssocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsPrivateAssoc, ipsPrivateAssoc_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalOpenCount, totalOpenCount_);
    };
    DescribeIpsPrivateAssocResponseBody() = default ;
    DescribeIpsPrivateAssocResponseBody(const DescribeIpsPrivateAssocResponseBody &) = default ;
    DescribeIpsPrivateAssocResponseBody(DescribeIpsPrivateAssocResponseBody &&) = default ;
    DescribeIpsPrivateAssocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpsPrivateAssocResponseBody() = default ;
    DescribeIpsPrivateAssocResponseBody& operator=(const DescribeIpsPrivateAssocResponseBody &) = default ;
    DescribeIpsPrivateAssocResponseBody& operator=(DescribeIpsPrivateAssocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpsPrivateAssoc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpsPrivateAssoc& obj) { 
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
      friend void from_json(const Darabonba::Json& j, IpsPrivateAssoc& obj) { 
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
      IpsPrivateAssoc() = default ;
      IpsPrivateAssoc(const IpsPrivateAssoc &) = default ;
      IpsPrivateAssoc(IpsPrivateAssoc &&) = default ;
      IpsPrivateAssoc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpsPrivateAssoc() = default ;
      IpsPrivateAssoc& operator=(const IpsPrivateAssoc &) = default ;
      IpsPrivateAssoc& operator=(IpsPrivateAssoc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assocInfoStatus_ == nullptr
        && this->errorMsg_ == nullptr && this->memberUid_ == nullptr && this->protectedIpList_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->status_ == nullptr && this->unprotectedIpList_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // assocInfoStatus Field Functions 
      bool hasAssocInfoStatus() const { return this->assocInfoStatus_ != nullptr;};
      void deleteAssocInfoStatus() { this->assocInfoStatus_ = nullptr;};
      inline string getAssocInfoStatus() const { DARABONBA_PTR_GET_DEFAULT(assocInfoStatus_, "") };
      inline IpsPrivateAssoc& setAssocInfoStatus(string assocInfoStatus) { DARABONBA_PTR_SET_VALUE(assocInfoStatus_, assocInfoStatus) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline IpsPrivateAssoc& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline IpsPrivateAssoc& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // protectedIpList Field Functions 
      bool hasProtectedIpList() const { return this->protectedIpList_ != nullptr;};
      void deleteProtectedIpList() { this->protectedIpList_ = nullptr;};
      inline const vector<string> & getProtectedIpList() const { DARABONBA_PTR_GET_CONST(protectedIpList_, vector<string>) };
      inline vector<string> getProtectedIpList() { DARABONBA_PTR_GET(protectedIpList_, vector<string>) };
      inline IpsPrivateAssoc& setProtectedIpList(const vector<string> & protectedIpList) { DARABONBA_PTR_SET_VALUE(protectedIpList_, protectedIpList) };
      inline IpsPrivateAssoc& setProtectedIpList(vector<string> && protectedIpList) { DARABONBA_PTR_SET_RVALUE(protectedIpList_, protectedIpList) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IpsPrivateAssoc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline IpsPrivateAssoc& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline IpsPrivateAssoc& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpsPrivateAssoc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unprotectedIpList Field Functions 
      bool hasUnprotectedIpList() const { return this->unprotectedIpList_ != nullptr;};
      void deleteUnprotectedIpList() { this->unprotectedIpList_ = nullptr;};
      inline const vector<string> & getUnprotectedIpList() const { DARABONBA_PTR_GET_CONST(unprotectedIpList_, vector<string>) };
      inline vector<string> getUnprotectedIpList() { DARABONBA_PTR_GET(unprotectedIpList_, vector<string>) };
      inline IpsPrivateAssoc& setUnprotectedIpList(const vector<string> & unprotectedIpList) { DARABONBA_PTR_SET_VALUE(unprotectedIpList_, unprotectedIpList) };
      inline IpsPrivateAssoc& setUnprotectedIpList(vector<string> && unprotectedIpList) { DARABONBA_PTR_SET_RVALUE(unprotectedIpList_, unprotectedIpList) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline IpsPrivateAssoc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline IpsPrivateAssoc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      shared_ptr<string> assocInfoStatus_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<int64_t> memberUid_ {};
      shared_ptr<vector<string>> protectedIpList_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<string>> unprotectedIpList_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->ipsPrivateAssoc_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalOpenCount_ == nullptr; };
    // ipsPrivateAssoc Field Functions 
    bool hasIpsPrivateAssoc() const { return this->ipsPrivateAssoc_ != nullptr;};
    void deleteIpsPrivateAssoc() { this->ipsPrivateAssoc_ = nullptr;};
    inline const vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc> & getIpsPrivateAssoc() const { DARABONBA_PTR_GET_CONST(ipsPrivateAssoc_, vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc>) };
    inline vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc> getIpsPrivateAssoc() { DARABONBA_PTR_GET(ipsPrivateAssoc_, vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc>) };
    inline DescribeIpsPrivateAssocResponseBody& setIpsPrivateAssoc(const vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc> & ipsPrivateAssoc) { DARABONBA_PTR_SET_VALUE(ipsPrivateAssoc_, ipsPrivateAssoc) };
    inline DescribeIpsPrivateAssocResponseBody& setIpsPrivateAssoc(vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc> && ipsPrivateAssoc) { DARABONBA_PTR_SET_RVALUE(ipsPrivateAssoc_, ipsPrivateAssoc) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpsPrivateAssocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeIpsPrivateAssocResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalOpenCount Field Functions 
    bool hasTotalOpenCount() const { return this->totalOpenCount_ != nullptr;};
    void deleteTotalOpenCount() { this->totalOpenCount_ = nullptr;};
    inline int64_t getTotalOpenCount() const { DARABONBA_PTR_GET_DEFAULT(totalOpenCount_, 0L) };
    inline DescribeIpsPrivateAssocResponseBody& setTotalOpenCount(int64_t totalOpenCount) { DARABONBA_PTR_SET_VALUE(totalOpenCount_, totalOpenCount) };


  protected:
    shared_ptr<vector<DescribeIpsPrivateAssocResponseBody::IpsPrivateAssoc>> ipsPrivateAssoc_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<int64_t> totalOpenCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
