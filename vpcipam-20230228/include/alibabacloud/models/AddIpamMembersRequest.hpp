// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPAMMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIPAMMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class AddIpamMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpamMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpamMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddIpamMembersRequest() = default ;
    AddIpamMembersRequest(const AddIpamMembersRequest &) = default ;
    AddIpamMembersRequest(AddIpamMembersRequest &&) = default ;
    AddIpamMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpamMembersRequest() = default ;
    AddIpamMembersRequest& operator=(const AddIpamMembersRequest &) = default ;
    AddIpamMembersRequest& operator=(AddIpamMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberId_ == nullptr
        && this->memberType_ == nullptr; };
      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Members& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // memberType Field Functions 
      bool hasMemberType() const { return this->memberType_ != nullptr;};
      void deleteMemberType() { this->memberType_ = nullptr;};
      inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
      inline Members& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    protected:
      // The member ID.
      // 
      // - **Folder ID**: The ID of the folder.
      // 
      // - **Account UID**: The UID of a member account in the resource directory.
      shared_ptr<string> memberId_ {};
      // The member type. Valid values:
      // 
      // - **Folder**: A folder.
      // 
      // - **Account**: A member account in a resource directory.
      shared_ptr<string> memberType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->members_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddIpamMembersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddIpamMembersRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddIpamMembersRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<AddIpamMembersRequest::Members>) };
    inline vector<AddIpamMembersRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<AddIpamMembersRequest::Members>) };
    inline AddIpamMembersRequest& setMembers(const vector<AddIpamMembersRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddIpamMembersRequest& setMembers(vector<AddIpamMembersRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddIpamMembersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddIpamMembersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddIpamMembersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddIpamMembersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddIpamMembersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // A client token to ensure the idempotence of the request.
    // 
    // Generate a unique value from your client for each request. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Performs a dry run. The request is checked for required parameters, request format, and service limits. Members are not added to the IPAM trusted service. If the check passes, the DryRunOperation error code is returned. If the check fails, an error is returned.
    // 
    // - **false** (Default): Sends a request. If the request passes the check, the members are added to the IPAM trusted service and an HTTP 2xx status code is returned.
    shared_ptr<bool> dryRun_ {};
    // The members managed by the IPAM trusted service.
    // 
    // This parameter is required.
    shared_ptr<vector<AddIpamMembersRequest::Members>> members_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the IPAM hosted region.
    // 
    // Call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to get the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
