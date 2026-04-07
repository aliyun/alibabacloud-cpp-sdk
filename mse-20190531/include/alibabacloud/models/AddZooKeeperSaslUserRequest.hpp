// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDZOOKEEPERSASLUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDZOOKEEPERSASLUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddZooKeeperSaslUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddZooKeeperSaslUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reload, reload_);
      DARABONBA_PTR_TO_JSON(SaslUser, saslUser_);
    };
    friend void from_json(const Darabonba::Json& j, AddZooKeeperSaslUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reload, reload_);
      DARABONBA_PTR_FROM_JSON(SaslUser, saslUser_);
    };
    AddZooKeeperSaslUserRequest() = default ;
    AddZooKeeperSaslUserRequest(const AddZooKeeperSaslUserRequest &) = default ;
    AddZooKeeperSaslUserRequest(AddZooKeeperSaslUserRequest &&) = default ;
    AddZooKeeperSaslUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddZooKeeperSaslUserRequest() = default ;
    AddZooKeeperSaslUserRequest& operator=(const AddZooKeeperSaslUserRequest &) = default ;
    AddZooKeeperSaslUserRequest& operator=(AddZooKeeperSaslUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaslUser : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaslUser& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, SaslUser& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      SaslUser() = default ;
      SaslUser(const SaslUser &) = default ;
      SaslUser(SaslUser &&) = default ;
      SaslUser(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaslUser() = default ;
      SaslUser& operator=(const SaslUser &) = default ;
      SaslUser& operator=(SaslUser &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->password_ == nullptr && this->userName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SaslUser& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline SaslUser& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SaslUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->instanceId_ == nullptr && this->reload_ == nullptr && this->saslUser_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddZooKeeperSaslUserRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddZooKeeperSaslUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reload Field Functions 
    bool hasReload() const { return this->reload_ != nullptr;};
    void deleteReload() { this->reload_ = nullptr;};
    inline bool getReload() const { DARABONBA_PTR_GET_DEFAULT(reload_, false) };
    inline AddZooKeeperSaslUserRequest& setReload(bool reload) { DARABONBA_PTR_SET_VALUE(reload_, reload) };


    // saslUser Field Functions 
    bool hasSaslUser() const { return this->saslUser_ != nullptr;};
    void deleteSaslUser() { this->saslUser_ = nullptr;};
    inline const vector<AddZooKeeperSaslUserRequest::SaslUser> & getSaslUser() const { DARABONBA_PTR_GET_CONST(saslUser_, vector<AddZooKeeperSaslUserRequest::SaslUser>) };
    inline vector<AddZooKeeperSaslUserRequest::SaslUser> getSaslUser() { DARABONBA_PTR_GET(saslUser_, vector<AddZooKeeperSaslUserRequest::SaslUser>) };
    inline AddZooKeeperSaslUserRequest& setSaslUser(const vector<AddZooKeeperSaslUserRequest::SaslUser> & saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };
    inline AddZooKeeperSaslUserRequest& setSaslUser(vector<AddZooKeeperSaslUserRequest::SaslUser> && saslUser) { DARABONBA_PTR_SET_RVALUE(saslUser_, saslUser) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> reload_ {};
    // This parameter is required.
    shared_ptr<vector<AddZooKeeperSaslUserRequest::SaslUser>> saslUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
