// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeytabHex, keytabHex_);
      DARABONBA_PTR_TO_JSON(LdapUrl, ldapUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeytabHex, keytabHex_);
      DARABONBA_PTR_FROM_JSON(LdapUrl, ldapUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers(ListUsersResponseBodyUsers &&) = default ;
    ListUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers& operator=(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers& operator=(ListUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->keytabHex_ == nullptr && return this->ldapUrl_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListUsersResponseBodyUsers& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUsersResponseBodyUsers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keytabHex Field Functions 
    bool hasKeytabHex() const { return this->keytabHex_ != nullptr;};
    void deleteKeytabHex() { this->keytabHex_ = nullptr;};
    inline string keytabHex() const { DARABONBA_PTR_GET_DEFAULT(keytabHex_, "") };
    inline ListUsersResponseBodyUsers& setKeytabHex(string keytabHex) { DARABONBA_PTR_SET_VALUE(keytabHex_, keytabHex) };


    // ldapUrl Field Functions 
    bool hasLdapUrl() const { return this->ldapUrl_ != nullptr;};
    void deleteLdapUrl() { this->ldapUrl_ = nullptr;};
    inline string ldapUrl() const { DARABONBA_PTR_GET_DEFAULT(ldapUrl_, "") };
    inline ListUsersResponseBodyUsers& setLdapUrl(string ldapUrl) { DARABONBA_PTR_SET_VALUE(ldapUrl_, ldapUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersResponseBodyUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListUsersResponseBodyUsers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The remarks.
    std::shared_ptr<string> description_ = nullptr;
    // The Base64-encoded content of the keytab file.
    std::shared_ptr<string> keytabHex_ = nullptr;
    // The Lightweight Directory Access Protocol (LDAP) link.
    std::shared_ptr<string> ldapUrl_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
