// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESASLUSERSRESPONSEBODYSASLUSERLISTSASLUSERVO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESASLUSERSRESPONSEBODYSASLUSERLISTSASLUSERVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeSaslUsersResponseBodySaslUserListSaslUserVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSaslUsersResponseBodySaslUserListSaslUserVO& obj) { 
      DARABONBA_PTR_TO_JSON(Mechanism, mechanism_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSaslUsersResponseBodySaslUserListSaslUserVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Mechanism, mechanism_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DescribeSaslUsersResponseBodySaslUserListSaslUserVO() = default ;
    DescribeSaslUsersResponseBodySaslUserListSaslUserVO(const DescribeSaslUsersResponseBodySaslUserListSaslUserVO &) = default ;
    DescribeSaslUsersResponseBodySaslUserListSaslUserVO(DescribeSaslUsersResponseBodySaslUserListSaslUserVO &&) = default ;
    DescribeSaslUsersResponseBodySaslUserListSaslUserVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSaslUsersResponseBodySaslUserListSaslUserVO() = default ;
    DescribeSaslUsersResponseBodySaslUserListSaslUserVO& operator=(const DescribeSaslUsersResponseBodySaslUserListSaslUserVO &) = default ;
    DescribeSaslUsersResponseBodySaslUserListSaslUserVO& operator=(DescribeSaslUsersResponseBodySaslUserListSaslUserVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mechanism_ == nullptr
        && return this->password_ == nullptr && return this->type_ == nullptr && return this->username_ == nullptr; };
    // mechanism Field Functions 
    bool hasMechanism() const { return this->mechanism_ != nullptr;};
    void deleteMechanism() { this->mechanism_ = nullptr;};
    inline string mechanism() const { DARABONBA_PTR_GET_DEFAULT(mechanism_, "") };
    inline DescribeSaslUsersResponseBodySaslUserListSaslUserVO& setMechanism(string mechanism) { DARABONBA_PTR_SET_VALUE(mechanism_, mechanism) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeSaslUsersResponseBodySaslUserListSaslUserVO& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSaslUsersResponseBodySaslUserListSaslUserVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeSaslUsersResponseBodySaslUserListSaslUserVO& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The encryption method.
    // 
    // >  This parameter is available only for serverless ApsaraMQ for Kafka instances.
    std::shared_ptr<string> mechanism_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The type of the SASL user. Valid values:
    // 
    // *   **plain**: a simple mechanism that uses usernames and passwords to verify user identities. ApsaraMQ for Kafka provides an improved PLAIN mechanism that allows you to dynamically add SASL users without the need to restart an instance.
    // *   **SCRAM**: a mechanism that uses usernames and passwords to verify user identities. Compared with the PLAIN mechanism, this mechanism provides better security protection. ApsaraMQ for Kafka uses the SCRAM-SHA-256 algorithm.
    // *   **LDAP**: This value is available only for the SASL users of ApsaraMQ for Confluent instances.
    // 
    // Default value: **plain**.
    std::shared_ptr<string> type_ = nullptr;
    // The username.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
