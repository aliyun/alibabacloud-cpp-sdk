// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIPAMMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIPAMMEMBERSREQUEST_HPP_
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
  class RemoveIpamMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveIpamMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveIpamMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    RemoveIpamMembersRequest() = default ;
    RemoveIpamMembersRequest(const RemoveIpamMembersRequest &) = default ;
    RemoveIpamMembersRequest(RemoveIpamMembersRequest &&) = default ;
    RemoveIpamMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveIpamMembersRequest() = default ;
    RemoveIpamMembersRequest& operator=(const RemoveIpamMembersRequest &) = default ;
    RemoveIpamMembersRequest& operator=(RemoveIpamMembersRequest &&) = default ;
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
      // - **Account UID**: The UID of the member account in the resource directory.
      shared_ptr<string> memberId_ {};
      // The type of the member. Valid values:
      // 
      // - **Folder**: The member is a folder.
      // 
      // - **Account**: The member is a member account in the resource directory.
      shared_ptr<string> memberType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->members_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveIpamMembersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveIpamMembersRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<RemoveIpamMembersRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<RemoveIpamMembersRequest::Members>) };
    inline vector<RemoveIpamMembersRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<RemoveIpamMembersRequest::Members>) };
    inline RemoveIpamMembersRequest& setMembers(const vector<RemoveIpamMembersRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline RemoveIpamMembersRequest& setMembers(vector<RemoveIpamMembersRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveIpamMembersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveIpamMembersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveIpamMembersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveIpamMembersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveIpamMembersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // A client token to ensure the idempotence of the request. Generate a value from your client to make sure that the value is unique among different requests. The ClientToken parameter can contain only ASCII characters. Note: If you do not specify this parameter, the system uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Performs a dry run. The system checks the required parameters, the request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned. The members are not removed.
    // 
    // - **false** (default): Sends a request. If the request passes the check, a 2xx HTTP status code is returned, and the members are removed.
    shared_ptr<bool> dryRun_ {};
    // The members managed by the IPAM trusted service.
    // 
    // This parameter is required.
    shared_ptr<vector<RemoveIpamMembersRequest::Members>> members_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the IPAM is hosted. To get the region ID, call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation.
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
