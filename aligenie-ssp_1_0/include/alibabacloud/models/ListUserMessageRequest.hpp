// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListUserMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
    };
    ListUserMessageRequest() = default ;
    ListUserMessageRequest(const ListUserMessageRequest &) = default ;
    ListUserMessageRequest(ListUserMessageRequest &&) = default ;
    ListUserMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserMessageRequest() = default ;
    ListUserMessageRequest& operator=(const ListUserMessageRequest &) = default ;
    ListUserMessageRequest& operator=(ListUserMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. When the encoding type is SKILLID, this value is the application\\"s Skill ID. When the encoding type is PACKAGENAME, this value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier for Maojing, and each method corresponds to a different encoding type: - PACKAGENAME: APK package name, used for Android application client links - SKILLID: Skill ID, used for cloud-based links
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier (userOpenId or userUnionId)
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of user ID: - OPENID: Default user ID identifier - UNIONID: Organization-level user ID identifier, available only after an organization has been registered on the Maojing skill application Open Platform
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->beforeTime_ == nullptr
        && this->userInfo_ == nullptr && this->limit_ == nullptr; };
    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline string getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, "") };
    inline ListUserMessageRequest& setBeforeTime(string beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListUserMessageRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListUserMessageRequest::UserInfo) };
    inline ListUserMessageRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, ListUserMessageRequest::UserInfo) };
    inline ListUserMessageRequest& setUserInfo(const ListUserMessageRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListUserMessageRequest& setUserInfo(ListUserMessageRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListUserMessageRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    // After a specific point in time
    shared_ptr<string> beforeTime_ {};
    // User identifier information
    // 
    // This parameter is required.
    shared_ptr<ListUserMessageRequest::UserInfo> userInfo_ {};
    // Number of records to query
    shared_ptr<int32_t> limit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
