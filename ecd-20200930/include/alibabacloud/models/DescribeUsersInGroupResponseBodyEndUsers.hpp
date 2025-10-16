// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODYENDUSERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODYENDUSERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUsersInGroupResponseBodyEndUsersExternalInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersInGroupResponseBodyEndUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersInGroupResponseBodyEndUsers& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_TO_JSON(EndUserEmail, endUserEmail_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserName, endUserName_);
      DARABONBA_PTR_TO_JSON(EndUserPhone, endUserPhone_);
      DARABONBA_PTR_TO_JSON(EndUserRemark, endUserRemark_);
      DARABONBA_PTR_TO_JSON(EndUserType, endUserType_);
      DARABONBA_PTR_TO_JSON(ExternalInfo, externalInfo_);
      DARABONBA_PTR_TO_JSON(UserDesktopId, userDesktopId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      DARABONBA_PTR_TO_JSON(UserSetPropertiesModels, userSetPropertiesModels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersInGroupResponseBodyEndUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_FROM_JSON(EndUserEmail, endUserEmail_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserName, endUserName_);
      DARABONBA_PTR_FROM_JSON(EndUserPhone, endUserPhone_);
      DARABONBA_PTR_FROM_JSON(EndUserRemark, endUserRemark_);
      DARABONBA_PTR_FROM_JSON(EndUserType, endUserType_);
      DARABONBA_PTR_FROM_JSON(ExternalInfo, externalInfo_);
      DARABONBA_PTR_FROM_JSON(UserDesktopId, userDesktopId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      DARABONBA_PTR_FROM_JSON(UserSetPropertiesModels, userSetPropertiesModels_);
    };
    DescribeUsersInGroupResponseBodyEndUsers() = default ;
    DescribeUsersInGroupResponseBodyEndUsers(const DescribeUsersInGroupResponseBodyEndUsers &) = default ;
    DescribeUsersInGroupResponseBodyEndUsers(DescribeUsersInGroupResponseBodyEndUsers &&) = default ;
    DescribeUsersInGroupResponseBodyEndUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersInGroupResponseBodyEndUsers() = default ;
    DescribeUsersInGroupResponseBodyEndUsers& operator=(const DescribeUsersInGroupResponseBodyEndUsers &) = default ;
    DescribeUsersInGroupResponseBodyEndUsers& operator=(DescribeUsersInGroupResponseBodyEndUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && return this->desktopId_ == nullptr && return this->desktopName_ == nullptr && return this->displayName_ == nullptr && return this->displayNameNew_ == nullptr && return this->endUserEmail_ == nullptr
        && return this->endUserId_ == nullptr && return this->endUserName_ == nullptr && return this->endUserPhone_ == nullptr && return this->endUserRemark_ == nullptr && return this->endUserType_ == nullptr
        && return this->externalInfo_ == nullptr && return this->userDesktopId_ == nullptr && return this->userPrincipalName_ == nullptr && return this->userSetPropertiesModels_ == nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameNew Field Functions 
    bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
    void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
    inline string displayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


    // endUserEmail Field Functions 
    bool hasEndUserEmail() const { return this->endUserEmail_ != nullptr;};
    void deleteEndUserEmail() { this->endUserEmail_ = nullptr;};
    inline string endUserEmail() const { DARABONBA_PTR_GET_DEFAULT(endUserEmail_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setEndUserEmail(string endUserEmail) { DARABONBA_PTR_SET_VALUE(endUserEmail_, endUserEmail) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserName Field Functions 
    bool hasEndUserName() const { return this->endUserName_ != nullptr;};
    void deleteEndUserName() { this->endUserName_ = nullptr;};
    inline string endUserName() const { DARABONBA_PTR_GET_DEFAULT(endUserName_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setEndUserName(string endUserName) { DARABONBA_PTR_SET_VALUE(endUserName_, endUserName) };


    // endUserPhone Field Functions 
    bool hasEndUserPhone() const { return this->endUserPhone_ != nullptr;};
    void deleteEndUserPhone() { this->endUserPhone_ = nullptr;};
    inline string endUserPhone() const { DARABONBA_PTR_GET_DEFAULT(endUserPhone_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setEndUserPhone(string endUserPhone) { DARABONBA_PTR_SET_VALUE(endUserPhone_, endUserPhone) };


    // endUserRemark Field Functions 
    bool hasEndUserRemark() const { return this->endUserRemark_ != nullptr;};
    void deleteEndUserRemark() { this->endUserRemark_ = nullptr;};
    inline string endUserRemark() const { DARABONBA_PTR_GET_DEFAULT(endUserRemark_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setEndUserRemark(string endUserRemark) { DARABONBA_PTR_SET_VALUE(endUserRemark_, endUserRemark) };


    // endUserType Field Functions 
    bool hasEndUserType() const { return this->endUserType_ != nullptr;};
    void deleteEndUserType() { this->endUserType_ = nullptr;};
    inline string endUserType() const { DARABONBA_PTR_GET_DEFAULT(endUserType_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setEndUserType(string endUserType) { DARABONBA_PTR_SET_VALUE(endUserType_, endUserType) };


    // externalInfo Field Functions 
    bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
    void deleteExternalInfo() { this->externalInfo_ = nullptr;};
    inline const Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo & externalInfo() const { DARABONBA_PTR_GET_CONST(externalInfo_, Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo) };
    inline Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo externalInfo() { DARABONBA_PTR_GET(externalInfo_, Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo) };
    inline DescribeUsersInGroupResponseBodyEndUsers& setExternalInfo(const Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo & externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };
    inline DescribeUsersInGroupResponseBodyEndUsers& setExternalInfo(Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo && externalInfo) { DARABONBA_PTR_SET_RVALUE(externalInfo_, externalInfo) };


    // userDesktopId Field Functions 
    bool hasUserDesktopId() const { return this->userDesktopId_ != nullptr;};
    void deleteUserDesktopId() { this->userDesktopId_ = nullptr;};
    inline string userDesktopId() const { DARABONBA_PTR_GET_DEFAULT(userDesktopId_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setUserDesktopId(string userDesktopId) { DARABONBA_PTR_SET_VALUE(userDesktopId_, userDesktopId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DescribeUsersInGroupResponseBodyEndUsers& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    // userSetPropertiesModels Field Functions 
    bool hasUserSetPropertiesModels() const { return this->userSetPropertiesModels_ != nullptr;};
    void deleteUserSetPropertiesModels() { this->userSetPropertiesModels_ = nullptr;};
    inline const vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels> & userSetPropertiesModels() const { DARABONBA_PTR_GET_CONST(userSetPropertiesModels_, vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels>) };
    inline vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels> userSetPropertiesModels() { DARABONBA_PTR_GET(userSetPropertiesModels_, vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels>) };
    inline DescribeUsersInGroupResponseBodyEndUsers& setUserSetPropertiesModels(const vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels> & userSetPropertiesModels) { DARABONBA_PTR_SET_VALUE(userSetPropertiesModels_, userSetPropertiesModels) };
    inline DescribeUsersInGroupResponseBodyEndUsers& setUserSetPropertiesModels(vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels> && userSetPropertiesModels) { DARABONBA_PTR_SET_RVALUE(userSetPropertiesModels_, userSetPropertiesModels) };


  protected:
    // The connection status.
    // 
    // Valid values:
    // 
    // *   0: disconnected
    // *   1: connecting
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The display name of the enterprise AD account.
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNameNew_ = nullptr;
    // The email address of the authorized user.
    std::shared_ptr<string> endUserEmail_ = nullptr;
    // The ID of the authorized user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The username of the authorized user.
    std::shared_ptr<string> endUserName_ = nullptr;
    // The mobile number of the authorized user.
    std::shared_ptr<string> endUserPhone_ = nullptr;
    // The remarks.
    std::shared_ptr<string> endUserRemark_ = nullptr;
    // The user account type.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience account
    // *   AD_CONNECTOR: enterprise Active Directory (AD) account
    std::shared_ptr<string> endUserType_ = nullptr;
    // The appended information.
    std::shared_ptr<Models::DescribeUsersInGroupResponseBodyEndUsersExternalInfo> externalInfo_ = nullptr;
    // The ID of the cloud computer that is used by the user.
    std::shared_ptr<string> userDesktopId_ = nullptr;
    std::shared_ptr<string> userPrincipalName_ = nullptr;
    // Details about the seats of users.
    std::shared_ptr<vector<Models::DescribeUsersInGroupResponseBodyEndUsersUserSetPropertiesModels>> userSetPropertiesModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
