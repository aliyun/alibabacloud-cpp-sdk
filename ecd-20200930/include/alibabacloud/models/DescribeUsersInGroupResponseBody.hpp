// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndUsers, endUsers_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OnlineUsersCount, onlineUsersCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_TO_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_TO_JSON(UsersCount, usersCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUsers, endUsers_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OnlineUsersCount, onlineUsersCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_FROM_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_FROM_JSON(UsersCount, usersCount_);
    };
    DescribeUsersInGroupResponseBody() = default ;
    DescribeUsersInGroupResponseBody(const DescribeUsersInGroupResponseBody &) = default ;
    DescribeUsersInGroupResponseBody(DescribeUsersInGroupResponseBody &&) = default ;
    DescribeUsersInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersInGroupResponseBody() = default ;
    DescribeUsersInGroupResponseBody& operator=(const DescribeUsersInGroupResponseBody &) = default ;
    DescribeUsersInGroupResponseBody& operator=(DescribeUsersInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndUsers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndUsers& obj) { 
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
      friend void from_json(const Darabonba::Json& j, EndUsers& obj) { 
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
      EndUsers() = default ;
      EndUsers(const EndUsers &) = default ;
      EndUsers(EndUsers &&) = default ;
      EndUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndUsers() = default ;
      EndUsers& operator=(const EndUsers &) = default ;
      EndUsers& operator=(EndUsers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserSetPropertiesModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserSetPropertiesModels& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
          DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
          DARABONBA_PTR_TO_JSON(PropertyType, propertyType_);
          DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserSetPropertiesModels& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
          DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
          DARABONBA_PTR_FROM_JSON(PropertyType, propertyType_);
          DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        UserSetPropertiesModels() = default ;
        UserSetPropertiesModels(const UserSetPropertiesModels &) = default ;
        UserSetPropertiesModels(UserSetPropertiesModels &&) = default ;
        UserSetPropertiesModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserSetPropertiesModels() = default ;
        UserSetPropertiesModels& operator=(const UserSetPropertiesModels &) = default ;
        UserSetPropertiesModels& operator=(UserSetPropertiesModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PropertyValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyValues& obj) { 
            DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
            DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyValues& obj) { 
            DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
            DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
          };
          PropertyValues() = default ;
          PropertyValues(const PropertyValues &) = default ;
          PropertyValues(PropertyValues &&) = default ;
          PropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyValues() = default ;
          PropertyValues& operator=(const PropertyValues &) = default ;
          PropertyValues& operator=(PropertyValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->propertyValue_ == nullptr
        && this->propertyValueId_ == nullptr; };
          // propertyValue Field Functions 
          bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
          void deletePropertyValue() { this->propertyValue_ = nullptr;};
          inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
          inline PropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


          // propertyValueId Field Functions 
          bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
          void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
          inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
          inline PropertyValues& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


        protected:
          // The property value.
          shared_ptr<string> propertyValue_ {};
          // The ID of the property value.
          shared_ptr<int64_t> propertyValueId_ {};
        };

        virtual bool empty() const override { return this->propertyId_ == nullptr
        && this->propertyKey_ == nullptr && this->propertyType_ == nullptr && this->propertyValues_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // propertyId Field Functions 
        bool hasPropertyId() const { return this->propertyId_ != nullptr;};
        void deletePropertyId() { this->propertyId_ = nullptr;};
        inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
        inline UserSetPropertiesModels& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


        // propertyKey Field Functions 
        bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
        void deletePropertyKey() { this->propertyKey_ = nullptr;};
        inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
        inline UserSetPropertiesModels& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


        // propertyType Field Functions 
        bool hasPropertyType() const { return this->propertyType_ != nullptr;};
        void deletePropertyType() { this->propertyType_ = nullptr;};
        inline int32_t getPropertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, 0) };
        inline UserSetPropertiesModels& setPropertyType(int32_t propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


        // propertyValues Field Functions 
        bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
        void deletePropertyValues() { this->propertyValues_ = nullptr;};
        inline const vector<UserSetPropertiesModels::PropertyValues> & getPropertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<UserSetPropertiesModels::PropertyValues>) };
        inline vector<UserSetPropertiesModels::PropertyValues> getPropertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<UserSetPropertiesModels::PropertyValues>) };
        inline UserSetPropertiesModels& setPropertyValues(const vector<UserSetPropertiesModels::PropertyValues> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
        inline UserSetPropertiesModels& setPropertyValues(vector<UserSetPropertiesModels::PropertyValues> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline UserSetPropertiesModels& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserSetPropertiesModels& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The property ID.
        shared_ptr<int64_t> propertyId_ {};
        // The property name.
        shared_ptr<string> propertyKey_ {};
        // The property type.
        // 
        // Valid values:
        // 
        // *   1: system property
        // *   2: custom property
        shared_ptr<int32_t> propertyType_ {};
        // Details about property values.
        shared_ptr<vector<UserSetPropertiesModels::PropertyValues>> propertyValues_ {};
        // The user ID.
        shared_ptr<int64_t> userId_ {};
        // The username.
        shared_ptr<string> userName_ {};
      };

      class ExternalInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalName, externalName_);
          DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalName, externalName_);
          DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
        };
        ExternalInfo() = default ;
        ExternalInfo(const ExternalInfo &) = default ;
        ExternalInfo(ExternalInfo &&) = default ;
        ExternalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExternalInfo() = default ;
        ExternalInfo& operator=(const ExternalInfo &) = default ;
        ExternalInfo& operator=(ExternalInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalName_ == nullptr
        && this->jobNumber_ == nullptr; };
        // externalName Field Functions 
        bool hasExternalName() const { return this->externalName_ != nullptr;};
        void deleteExternalName() { this->externalName_ = nullptr;};
        inline string getExternalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
        inline ExternalInfo& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


        // jobNumber Field Functions 
        bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
        void deleteJobNumber() { this->jobNumber_ = nullptr;};
        inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
        inline ExternalInfo& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


      protected:
        // The external name.
        shared_ptr<string> externalName_ {};
        // The employee ID.
        shared_ptr<string> jobNumber_ {};
      };

      virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->displayName_ == nullptr && this->displayNameNew_ == nullptr && this->endUserEmail_ == nullptr
        && this->endUserId_ == nullptr && this->endUserName_ == nullptr && this->endUserPhone_ == nullptr && this->endUserRemark_ == nullptr && this->endUserType_ == nullptr
        && this->externalInfo_ == nullptr && this->userDesktopId_ == nullptr && this->userPrincipalName_ == nullptr && this->userSetPropertiesModels_ == nullptr; };
      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline EndUsers& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline EndUsers& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline EndUsers& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline EndUsers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // displayNameNew Field Functions 
      bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
      void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
      inline string getDisplayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
      inline EndUsers& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


      // endUserEmail Field Functions 
      bool hasEndUserEmail() const { return this->endUserEmail_ != nullptr;};
      void deleteEndUserEmail() { this->endUserEmail_ = nullptr;};
      inline string getEndUserEmail() const { DARABONBA_PTR_GET_DEFAULT(endUserEmail_, "") };
      inline EndUsers& setEndUserEmail(string endUserEmail) { DARABONBA_PTR_SET_VALUE(endUserEmail_, endUserEmail) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline EndUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // endUserName Field Functions 
      bool hasEndUserName() const { return this->endUserName_ != nullptr;};
      void deleteEndUserName() { this->endUserName_ = nullptr;};
      inline string getEndUserName() const { DARABONBA_PTR_GET_DEFAULT(endUserName_, "") };
      inline EndUsers& setEndUserName(string endUserName) { DARABONBA_PTR_SET_VALUE(endUserName_, endUserName) };


      // endUserPhone Field Functions 
      bool hasEndUserPhone() const { return this->endUserPhone_ != nullptr;};
      void deleteEndUserPhone() { this->endUserPhone_ = nullptr;};
      inline string getEndUserPhone() const { DARABONBA_PTR_GET_DEFAULT(endUserPhone_, "") };
      inline EndUsers& setEndUserPhone(string endUserPhone) { DARABONBA_PTR_SET_VALUE(endUserPhone_, endUserPhone) };


      // endUserRemark Field Functions 
      bool hasEndUserRemark() const { return this->endUserRemark_ != nullptr;};
      void deleteEndUserRemark() { this->endUserRemark_ = nullptr;};
      inline string getEndUserRemark() const { DARABONBA_PTR_GET_DEFAULT(endUserRemark_, "") };
      inline EndUsers& setEndUserRemark(string endUserRemark) { DARABONBA_PTR_SET_VALUE(endUserRemark_, endUserRemark) };


      // endUserType Field Functions 
      bool hasEndUserType() const { return this->endUserType_ != nullptr;};
      void deleteEndUserType() { this->endUserType_ = nullptr;};
      inline string getEndUserType() const { DARABONBA_PTR_GET_DEFAULT(endUserType_, "") };
      inline EndUsers& setEndUserType(string endUserType) { DARABONBA_PTR_SET_VALUE(endUserType_, endUserType) };


      // externalInfo Field Functions 
      bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
      void deleteExternalInfo() { this->externalInfo_ = nullptr;};
      inline const EndUsers::ExternalInfo & getExternalInfo() const { DARABONBA_PTR_GET_CONST(externalInfo_, EndUsers::ExternalInfo) };
      inline EndUsers::ExternalInfo getExternalInfo() { DARABONBA_PTR_GET(externalInfo_, EndUsers::ExternalInfo) };
      inline EndUsers& setExternalInfo(const EndUsers::ExternalInfo & externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };
      inline EndUsers& setExternalInfo(EndUsers::ExternalInfo && externalInfo) { DARABONBA_PTR_SET_RVALUE(externalInfo_, externalInfo) };


      // userDesktopId Field Functions 
      bool hasUserDesktopId() const { return this->userDesktopId_ != nullptr;};
      void deleteUserDesktopId() { this->userDesktopId_ = nullptr;};
      inline string getUserDesktopId() const { DARABONBA_PTR_GET_DEFAULT(userDesktopId_, "") };
      inline EndUsers& setUserDesktopId(string userDesktopId) { DARABONBA_PTR_SET_VALUE(userDesktopId_, userDesktopId) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline EndUsers& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


      // userSetPropertiesModels Field Functions 
      bool hasUserSetPropertiesModels() const { return this->userSetPropertiesModels_ != nullptr;};
      void deleteUserSetPropertiesModels() { this->userSetPropertiesModels_ = nullptr;};
      inline const vector<EndUsers::UserSetPropertiesModels> & getUserSetPropertiesModels() const { DARABONBA_PTR_GET_CONST(userSetPropertiesModels_, vector<EndUsers::UserSetPropertiesModels>) };
      inline vector<EndUsers::UserSetPropertiesModels> getUserSetPropertiesModels() { DARABONBA_PTR_GET(userSetPropertiesModels_, vector<EndUsers::UserSetPropertiesModels>) };
      inline EndUsers& setUserSetPropertiesModels(const vector<EndUsers::UserSetPropertiesModels> & userSetPropertiesModels) { DARABONBA_PTR_SET_VALUE(userSetPropertiesModels_, userSetPropertiesModels) };
      inline EndUsers& setUserSetPropertiesModels(vector<EndUsers::UserSetPropertiesModels> && userSetPropertiesModels) { DARABONBA_PTR_SET_RVALUE(userSetPropertiesModels_, userSetPropertiesModels) };


    protected:
      // The connection status.
      // 
      // Valid values:
      // 
      // *   0: disconnected
      // *   1: connecting
      shared_ptr<string> connectionStatus_ {};
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
      // The display name of the enterprise AD account.
      shared_ptr<string> displayName_ {};
      shared_ptr<string> displayNameNew_ {};
      // The email address of the authorized user.
      shared_ptr<string> endUserEmail_ {};
      // The ID of the authorized user.
      shared_ptr<string> endUserId_ {};
      // The username of the authorized user.
      shared_ptr<string> endUserName_ {};
      // The mobile number of the authorized user.
      shared_ptr<string> endUserPhone_ {};
      // The remarks.
      shared_ptr<string> endUserRemark_ {};
      // The user account type.
      // 
      // Valid values:
      // 
      // *   SIMPLE: convenience account
      // *   AD_CONNECTOR: enterprise Active Directory (AD) account
      shared_ptr<string> endUserType_ {};
      // The appended information.
      shared_ptr<EndUsers::ExternalInfo> externalInfo_ {};
      // The ID of the cloud computer that is used by the user.
      shared_ptr<string> userDesktopId_ {};
      shared_ptr<string> userPrincipalName_ {};
      // Details about the seats of users.
      shared_ptr<vector<EndUsers::UserSetPropertiesModels>> userSetPropertiesModels_ {};
    };

    virtual bool empty() const override { return this->endUsers_ == nullptr
        && this->nextToken_ == nullptr && this->onlineUsersCount_ == nullptr && this->requestId_ == nullptr && this->userGroupName_ == nullptr && this->userOuPath_ == nullptr
        && this->usersCount_ == nullptr; };
    // endUsers Field Functions 
    bool hasEndUsers() const { return this->endUsers_ != nullptr;};
    void deleteEndUsers() { this->endUsers_ = nullptr;};
    inline const vector<DescribeUsersInGroupResponseBody::EndUsers> & getEndUsers() const { DARABONBA_PTR_GET_CONST(endUsers_, vector<DescribeUsersInGroupResponseBody::EndUsers>) };
    inline vector<DescribeUsersInGroupResponseBody::EndUsers> getEndUsers() { DARABONBA_PTR_GET(endUsers_, vector<DescribeUsersInGroupResponseBody::EndUsers>) };
    inline DescribeUsersInGroupResponseBody& setEndUsers(const vector<DescribeUsersInGroupResponseBody::EndUsers> & endUsers) { DARABONBA_PTR_SET_VALUE(endUsers_, endUsers) };
    inline DescribeUsersInGroupResponseBody& setEndUsers(vector<DescribeUsersInGroupResponseBody::EndUsers> && endUsers) { DARABONBA_PTR_SET_RVALUE(endUsers_, endUsers) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUsersInGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // onlineUsersCount Field Functions 
    bool hasOnlineUsersCount() const { return this->onlineUsersCount_ != nullptr;};
    void deleteOnlineUsersCount() { this->onlineUsersCount_ = nullptr;};
    inline int32_t getOnlineUsersCount() const { DARABONBA_PTR_GET_DEFAULT(onlineUsersCount_, 0) };
    inline DescribeUsersInGroupResponseBody& setOnlineUsersCount(int32_t onlineUsersCount) { DARABONBA_PTR_SET_VALUE(onlineUsersCount_, onlineUsersCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline DescribeUsersInGroupResponseBody& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    // userOuPath Field Functions 
    bool hasUserOuPath() const { return this->userOuPath_ != nullptr;};
    void deleteUserOuPath() { this->userOuPath_ = nullptr;};
    inline string getUserOuPath() const { DARABONBA_PTR_GET_DEFAULT(userOuPath_, "") };
    inline DescribeUsersInGroupResponseBody& setUserOuPath(string userOuPath) { DARABONBA_PTR_SET_VALUE(userOuPath_, userOuPath) };


    // usersCount Field Functions 
    bool hasUsersCount() const { return this->usersCount_ != nullptr;};
    void deleteUsersCount() { this->usersCount_ = nullptr;};
    inline int32_t getUsersCount() const { DARABONBA_PTR_GET_DEFAULT(usersCount_, 0) };
    inline DescribeUsersInGroupResponseBody& setUsersCount(int32_t usersCount) { DARABONBA_PTR_SET_VALUE(usersCount_, usersCount) };


  protected:
    // The authorized users.
    shared_ptr<vector<DescribeUsersInGroupResponseBody::EndUsers>> endUsers_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The total number of authorized users that are connected to cloud computers of the cloud computer share.
    shared_ptr<int32_t> onlineUsersCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userGroupName_ {};
    shared_ptr<string> userOuPath_ {};
    // The total number of authorized users of the cloud computer share.
    shared_ptr<int32_t> usersCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
