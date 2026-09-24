// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHUSERCONNECTDURATIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHUSERCONNECTDURATIONLISTRESPONSEBODY_HPP_
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
  class QueryAuthUserConnectDurationListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthUserConnectDurationListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthUserConnectDurationList, authUserConnectDurationList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuthUserConnectDurationListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthUserConnectDurationList, authUserConnectDurationList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryAuthUserConnectDurationListResponseBody() = default ;
    QueryAuthUserConnectDurationListResponseBody(const QueryAuthUserConnectDurationListResponseBody &) = default ;
    QueryAuthUserConnectDurationListResponseBody(QueryAuthUserConnectDurationListResponseBody &&) = default ;
    QueryAuthUserConnectDurationListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthUserConnectDurationListResponseBody() = default ;
    QueryAuthUserConnectDurationListResponseBody& operator=(const QueryAuthUserConnectDurationListResponseBody &) = default ;
    QueryAuthUserConnectDurationListResponseBody& operator=(QueryAuthUserConnectDurationListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthUserConnectDurationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthUserConnectDurationList& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_TO_JSON(ConnectEndTime, connectEndTime_);
        DARABONBA_PTR_TO_JSON(ConnectStartTime, connectStartTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, AuthUserConnectDurationList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_FROM_JSON(ConnectEndTime, connectEndTime_);
        DARABONBA_PTR_FROM_JSON(ConnectStartTime, connectStartTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      };
      AuthUserConnectDurationList() = default ;
      AuthUserConnectDurationList(const AuthUserConnectDurationList &) = default ;
      AuthUserConnectDurationList(AuthUserConnectDurationList &&) = default ;
      AuthUserConnectDurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthUserConnectDurationList() = default ;
      AuthUserConnectDurationList& operator=(const AuthUserConnectDurationList &) = default ;
      AuthUserConnectDurationList& operator=(AuthUserConnectDurationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectDuration_ == nullptr
        && this->connectEndTime_ == nullptr && this->connectStartTime_ == nullptr && this->description_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->directoryType_ == nullptr && this->displayName_ == nullptr && this->displayNameNew_ == nullptr && this->domainName_ == nullptr && this->endUserId_ == nullptr
        && this->nickName_ == nullptr && this->regionId_ == nullptr && this->userPrincipalName_ == nullptr; };
      // connectDuration Field Functions 
      bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
      void deleteConnectDuration() { this->connectDuration_ = nullptr;};
      inline int64_t getConnectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
      inline AuthUserConnectDurationList& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


      // connectEndTime Field Functions 
      bool hasConnectEndTime() const { return this->connectEndTime_ != nullptr;};
      void deleteConnectEndTime() { this->connectEndTime_ = nullptr;};
      inline string getConnectEndTime() const { DARABONBA_PTR_GET_DEFAULT(connectEndTime_, "") };
      inline AuthUserConnectDurationList& setConnectEndTime(string connectEndTime) { DARABONBA_PTR_SET_VALUE(connectEndTime_, connectEndTime) };


      // connectStartTime Field Functions 
      bool hasConnectStartTime() const { return this->connectStartTime_ != nullptr;};
      void deleteConnectStartTime() { this->connectStartTime_ = nullptr;};
      inline string getConnectStartTime() const { DARABONBA_PTR_GET_DEFAULT(connectStartTime_, "") };
      inline AuthUserConnectDurationList& setConnectStartTime(string connectStartTime) { DARABONBA_PTR_SET_VALUE(connectStartTime_, connectStartTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthUserConnectDurationList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline AuthUserConnectDurationList& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline AuthUserConnectDurationList& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline int32_t getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, 0) };
      inline AuthUserConnectDurationList& setDirectoryType(int32_t directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline AuthUserConnectDurationList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // displayNameNew Field Functions 
      bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
      void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
      inline string getDisplayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
      inline AuthUserConnectDurationList& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline AuthUserConnectDurationList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline AuthUserConnectDurationList& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline AuthUserConnectDurationList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AuthUserConnectDurationList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline AuthUserConnectDurationList& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    protected:
      // The connection duration of the user, in seconds.
      shared_ptr<int64_t> connectDuration_ {};
      // The end time of the connection, as a UNIX timestamp in milliseconds. This parameter is returned only when statistics are collected by individual session details (StatisticType=SingleSession).
      shared_ptr<string> connectEndTime_ {};
      // The start time of the connection, as a UNIX timestamp in milliseconds. This parameter is returned only when statistics are collected by individual session details (StatisticType=SingleSession).
      shared_ptr<string> connectStartTime_ {};
      // The remarks of the user. This parameter is returned only for convenience users when WithDetail is set to true.
      shared_ptr<string> description_ {};
      // The cloud desktop ID.
      shared_ptr<string> desktopId_ {};
      // The cloud desktop name.
      shared_ptr<string> desktopName_ {};
      // The type of the directory to which the user belongs. Valid values:
      // 
      // - 1: convenience account.
      // - 2: RAM account.
      // - 3: AD account.
      // - 4: personal edition.
      shared_ptr<int32_t> directoryType_ {};
      // The display name of the user. This parameter is returned only for AD users when WithDetail is set to true.
      shared_ptr<string> displayName_ {};
      // The new display name of the user. This parameter is returned only for AD users when WithDetail is set to true.
      shared_ptr<string> displayNameNew_ {};
      // The AD domain name.
      shared_ptr<string> domainName_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
      // The nickname of the user. This parameter is returned only for convenience users when WithDetail is set to true.
      shared_ptr<string> nickName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The user principal name (UPN). This parameter is returned only for AD users when WithDetail is set to true.
      shared_ptr<string> userPrincipalName_ {};
    };

    virtual bool empty() const override { return this->authUserConnectDurationList_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authUserConnectDurationList Field Functions 
    bool hasAuthUserConnectDurationList() const { return this->authUserConnectDurationList_ != nullptr;};
    void deleteAuthUserConnectDurationList() { this->authUserConnectDurationList_ = nullptr;};
    inline const vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList> & getAuthUserConnectDurationList() const { DARABONBA_PTR_GET_CONST(authUserConnectDurationList_, vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList>) };
    inline vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList> getAuthUserConnectDurationList() { DARABONBA_PTR_GET(authUserConnectDurationList_, vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList>) };
    inline QueryAuthUserConnectDurationListResponseBody& setAuthUserConnectDurationList(const vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList> & authUserConnectDurationList) { DARABONBA_PTR_SET_VALUE(authUserConnectDurationList_, authUserConnectDurationList) };
    inline QueryAuthUserConnectDurationListResponseBody& setAuthUserConnectDurationList(vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList> && authUserConnectDurationList) { DARABONBA_PTR_SET_RVALUE(authUserConnectDurationList_, authUserConnectDurationList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryAuthUserConnectDurationListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuthUserConnectDurationListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryAuthUserConnectDurationListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The connection duration list of authorized users.
    shared_ptr<vector<QueryAuthUserConnectDurationListResponseBody::AuthUserConnectDurationList>> authUserConnectDurationList_ {};
    // The pagination token for the next page. This parameter is returned when the results span multiple pages. Pass this value as the NextToken in the next request to retrieve the next page. This parameter is returned only when statistics are collected by individual session details.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records that match the specified conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
