// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUserBasicInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserBasicInfos, userBasicInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBasicInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserBasicInfos, userBasicInfos_);
    };
    ListUserBasicInfosResponseBody() = default ;
    ListUserBasicInfosResponseBody(const ListUserBasicInfosResponseBody &) = default ;
    ListUserBasicInfosResponseBody(ListUserBasicInfosResponseBody &&) = default ;
    ListUserBasicInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBasicInfosResponseBody() = default ;
    ListUserBasicInfosResponseBody& operator=(const ListUserBasicInfosResponseBody &) = default ;
    ListUserBasicInfosResponseBody& operator=(ListUserBasicInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserBasicInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserBasicInfos& obj) { 
        DARABONBA_PTR_TO_JSON(UserBasicInfo, userBasicInfo_);
      };
      friend void from_json(const Darabonba::Json& j, UserBasicInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(UserBasicInfo, userBasicInfo_);
      };
      UserBasicInfos() = default ;
      UserBasicInfos(const UserBasicInfos &) = default ;
      UserBasicInfos(UserBasicInfos &&) = default ;
      UserBasicInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserBasicInfos() = default ;
      UserBasicInfos& operator=(const UserBasicInfos &) = default ;
      UserBasicInfos& operator=(UserBasicInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserBasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserBasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
        };
        friend void from_json(const Darabonba::Json& j, UserBasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
        };
        UserBasicInfo() = default ;
        UserBasicInfo(const UserBasicInfo &) = default ;
        UserBasicInfo(UserBasicInfo &&) = default ;
        UserBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserBasicInfo() = default ;
        UserBasicInfo& operator=(const UserBasicInfo &) = default ;
        UserBasicInfo& operator=(UserBasicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->status_ == nullptr && this->userId_ == nullptr && this->userPrincipalName_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline UserBasicInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline UserBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserBasicInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userPrincipalName Field Functions 
        bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
        void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
        inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
        inline UserBasicInfo& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


      protected:
        // The display name of the RAM user.
        shared_ptr<string> displayName_ {};
        // The status of the RAM user.
        shared_ptr<string> status_ {};
        // The ID of the RAM user.
        shared_ptr<string> userId_ {};
        // The logon name of the RAM user.
        shared_ptr<string> userPrincipalName_ {};
      };

      virtual bool empty() const override { return this->userBasicInfo_ == nullptr; };
      // userBasicInfo Field Functions 
      bool hasUserBasicInfo() const { return this->userBasicInfo_ != nullptr;};
      void deleteUserBasicInfo() { this->userBasicInfo_ = nullptr;};
      inline const vector<UserBasicInfos::UserBasicInfo> & getUserBasicInfo() const { DARABONBA_PTR_GET_CONST(userBasicInfo_, vector<UserBasicInfos::UserBasicInfo>) };
      inline vector<UserBasicInfos::UserBasicInfo> getUserBasicInfo() { DARABONBA_PTR_GET(userBasicInfo_, vector<UserBasicInfos::UserBasicInfo>) };
      inline UserBasicInfos& setUserBasicInfo(const vector<UserBasicInfos::UserBasicInfo> & userBasicInfo) { DARABONBA_PTR_SET_VALUE(userBasicInfo_, userBasicInfo) };
      inline UserBasicInfos& setUserBasicInfo(vector<UserBasicInfos::UserBasicInfo> && userBasicInfo) { DARABONBA_PTR_SET_RVALUE(userBasicInfo_, userBasicInfo) };


    protected:
      shared_ptr<vector<UserBasicInfos::UserBasicInfo>> userBasicInfo_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->requestId_ == nullptr && this->userBasicInfos_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListUserBasicInfosResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUserBasicInfosResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserBasicInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userBasicInfos Field Functions 
    bool hasUserBasicInfos() const { return this->userBasicInfos_ != nullptr;};
    void deleteUserBasicInfos() { this->userBasicInfos_ = nullptr;};
    inline const ListUserBasicInfosResponseBody::UserBasicInfos & getUserBasicInfos() const { DARABONBA_PTR_GET_CONST(userBasicInfos_, ListUserBasicInfosResponseBody::UserBasicInfos) };
    inline ListUserBasicInfosResponseBody::UserBasicInfos getUserBasicInfos() { DARABONBA_PTR_GET(userBasicInfos_, ListUserBasicInfosResponseBody::UserBasicInfos) };
    inline ListUserBasicInfosResponseBody& setUserBasicInfos(const ListUserBasicInfosResponseBody::UserBasicInfos & userBasicInfos) { DARABONBA_PTR_SET_VALUE(userBasicInfos_, userBasicInfos) };
    inline ListUserBasicInfosResponseBody& setUserBasicInfos(ListUserBasicInfosResponseBody::UserBasicInfos && userBasicInfos) { DARABONBA_PTR_SET_RVALUE(userBasicInfos_, userBasicInfos) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.``
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The basic information about the RAM users.
    shared_ptr<ListUserBasicInfosResponseBody::UserBasicInfos> userBasicInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
