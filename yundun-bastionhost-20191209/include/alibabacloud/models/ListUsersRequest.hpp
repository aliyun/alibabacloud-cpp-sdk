// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceUserId, sourceUserId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserState, userState_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceUserId, sourceUserId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserState, userState_);
    };
    ListUsersRequest() = default ;
    ListUsersRequest(const ListUsersRequest &) = default ;
    ListUsersRequest(ListUsersRequest &&) = default ;
    ListUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersRequest() = default ;
    ListUsersRequest& operator=(const ListUsersRequest &) = default ;
    ListUsersRequest& operator=(ListUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->instanceId_ == nullptr && this->mobile_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->source_ == nullptr && this->sourceUserId_ == nullptr && this->userGroupId_ == nullptr && this->userName_ == nullptr && this->userState_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUsersRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUsersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListUsersRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListUsersRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListUsersRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListUsersRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUserId Field Functions 
    bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
    void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
    inline string getSourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
    inline ListUsersRequest& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListUsersRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListUsersRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userState Field Functions 
    bool hasUserState() const { return this->userState_ != nullptr;};
    void deleteUserState() { this->userState_ = nullptr;};
    inline string getUserState() const { DARABONBA_PTR_GET_DEFAULT(userState_, "") };
    inline ListUsersRequest& setUserState(string userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };


  protected:
    // The display name of the user that you want to query. Only exact match is supported.
    shared_ptr<string> displayName_ {};
    // The ID of the bastion host whose users you want to query.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The mobile phone number of the user that you want to query. Only exact match is supported.
    shared_ptr<string> mobile_ {};
    // The page number. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.\\
    // Valid values: 1 to 100. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the bastion host whose users you want to query.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The type of the user that you want to query. Valid values:
    // 
    // *   **Local**: a local user.
    // *   **Ram**: a Resource Access Management (RAM) user.
    // *   **AD**: an Active Directory (AD)-authenticated user.
    // *   **LDAP**: a Lightweight Directory Access Protocol (LDAP)-authenticated user.
    shared_ptr<string> source_ {};
    // The unique ID of the user that you want to query. Only exact match is supported.
    // 
    // >  This parameter uniquely identifies a RAM user of the bastion host. This parameter is valid if **Source** is set to **Ram**. You can call the [ListUsers](https://help.aliyun.com/document_detail/28684.html) operation in RAM to obtain the unique ID of the user from the **UserId** response parameter.
    shared_ptr<string> sourceUserId_ {};
    // The ID of the user group to which the user you want to query belongs.
    // 
    // >  You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the user group ID.
    shared_ptr<string> userGroupId_ {};
    // The logon name of the user that you want to query. Only exact match is supported.
    shared_ptr<string> userName_ {};
    // The state of the user that you want to query. Valid values:
    // 
    // *   **Normal**: The user is in normal state.
    // *   **Frozen**: The user is locked.
    // *   **Expired**: The user has expired.
    shared_ptr<string> userState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
