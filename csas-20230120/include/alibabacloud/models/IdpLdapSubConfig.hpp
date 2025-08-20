// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPLDAPSUBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPLDAPSUBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpLdapSubConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpLdapSubConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BaseDn, baseDn_);
      DARABONBA_PTR_TO_JSON(GroupBaseDn, groupBaseDn_);
      DARABONBA_PTR_TO_JSON(GroupFilter, groupFilter_);
      DARABONBA_PTR_TO_JSON(GroupMembershipAttr, groupMembershipAttr_);
      DARABONBA_PTR_TO_JSON(GroupNameAttr, groupNameAttr_);
      DARABONBA_PTR_TO_JSON(LoginNameAttr, loginNameAttr_);
      DARABONBA_PTR_TO_JSON(ServerAddr, serverAddr_);
      DARABONBA_PTR_TO_JSON(ServerPort, serverPort_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(UserDn, userDn_);
      DARABONBA_PTR_TO_JSON(UserFilter, userFilter_);
      DARABONBA_PTR_TO_JSON(UserPassword, userPassword_);
    };
    friend void from_json(const Darabonba::Json& j, IdpLdapSubConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseDn, baseDn_);
      DARABONBA_PTR_FROM_JSON(GroupBaseDn, groupBaseDn_);
      DARABONBA_PTR_FROM_JSON(GroupFilter, groupFilter_);
      DARABONBA_PTR_FROM_JSON(GroupMembershipAttr, groupMembershipAttr_);
      DARABONBA_PTR_FROM_JSON(GroupNameAttr, groupNameAttr_);
      DARABONBA_PTR_FROM_JSON(LoginNameAttr, loginNameAttr_);
      DARABONBA_PTR_FROM_JSON(ServerAddr, serverAddr_);
      DARABONBA_PTR_FROM_JSON(ServerPort, serverPort_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(UserDn, userDn_);
      DARABONBA_PTR_FROM_JSON(UserFilter, userFilter_);
      DARABONBA_PTR_FROM_JSON(UserPassword, userPassword_);
    };
    IdpLdapSubConfig() = default ;
    IdpLdapSubConfig(const IdpLdapSubConfig &) = default ;
    IdpLdapSubConfig(IdpLdapSubConfig &&) = default ;
    IdpLdapSubConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpLdapSubConfig() = default ;
    IdpLdapSubConfig& operator=(const IdpLdapSubConfig &) = default ;
    IdpLdapSubConfig& operator=(IdpLdapSubConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseDn_ != nullptr
        && this->groupBaseDn_ != nullptr && this->groupFilter_ != nullptr && this->groupMembershipAttr_ != nullptr && this->groupNameAttr_ != nullptr && this->loginNameAttr_ != nullptr
        && this->serverAddr_ != nullptr && this->serverPort_ != nullptr && this->serverType_ != nullptr && this->useSsl_ != nullptr && this->userDn_ != nullptr
        && this->userFilter_ != nullptr && this->userPassword_ != nullptr; };
    // baseDn Field Functions 
    bool hasBaseDn() const { return this->baseDn_ != nullptr;};
    void deleteBaseDn() { this->baseDn_ = nullptr;};
    inline string baseDn() const { DARABONBA_PTR_GET_DEFAULT(baseDn_, "") };
    inline IdpLdapSubConfig& setBaseDn(string baseDn) { DARABONBA_PTR_SET_VALUE(baseDn_, baseDn) };


    // groupBaseDn Field Functions 
    bool hasGroupBaseDn() const { return this->groupBaseDn_ != nullptr;};
    void deleteGroupBaseDn() { this->groupBaseDn_ = nullptr;};
    inline string groupBaseDn() const { DARABONBA_PTR_GET_DEFAULT(groupBaseDn_, "") };
    inline IdpLdapSubConfig& setGroupBaseDn(string groupBaseDn) { DARABONBA_PTR_SET_VALUE(groupBaseDn_, groupBaseDn) };


    // groupFilter Field Functions 
    bool hasGroupFilter() const { return this->groupFilter_ != nullptr;};
    void deleteGroupFilter() { this->groupFilter_ = nullptr;};
    inline string groupFilter() const { DARABONBA_PTR_GET_DEFAULT(groupFilter_, "") };
    inline IdpLdapSubConfig& setGroupFilter(string groupFilter) { DARABONBA_PTR_SET_VALUE(groupFilter_, groupFilter) };


    // groupMembershipAttr Field Functions 
    bool hasGroupMembershipAttr() const { return this->groupMembershipAttr_ != nullptr;};
    void deleteGroupMembershipAttr() { this->groupMembershipAttr_ = nullptr;};
    inline string groupMembershipAttr() const { DARABONBA_PTR_GET_DEFAULT(groupMembershipAttr_, "") };
    inline IdpLdapSubConfig& setGroupMembershipAttr(string groupMembershipAttr) { DARABONBA_PTR_SET_VALUE(groupMembershipAttr_, groupMembershipAttr) };


    // groupNameAttr Field Functions 
    bool hasGroupNameAttr() const { return this->groupNameAttr_ != nullptr;};
    void deleteGroupNameAttr() { this->groupNameAttr_ = nullptr;};
    inline string groupNameAttr() const { DARABONBA_PTR_GET_DEFAULT(groupNameAttr_, "") };
    inline IdpLdapSubConfig& setGroupNameAttr(string groupNameAttr) { DARABONBA_PTR_SET_VALUE(groupNameAttr_, groupNameAttr) };


    // loginNameAttr Field Functions 
    bool hasLoginNameAttr() const { return this->loginNameAttr_ != nullptr;};
    void deleteLoginNameAttr() { this->loginNameAttr_ = nullptr;};
    inline string loginNameAttr() const { DARABONBA_PTR_GET_DEFAULT(loginNameAttr_, "") };
    inline IdpLdapSubConfig& setLoginNameAttr(string loginNameAttr) { DARABONBA_PTR_SET_VALUE(loginNameAttr_, loginNameAttr) };


    // serverAddr Field Functions 
    bool hasServerAddr() const { return this->serverAddr_ != nullptr;};
    void deleteServerAddr() { this->serverAddr_ = nullptr;};
    inline string serverAddr() const { DARABONBA_PTR_GET_DEFAULT(serverAddr_, "") };
    inline IdpLdapSubConfig& setServerAddr(string serverAddr) { DARABONBA_PTR_SET_VALUE(serverAddr_, serverAddr) };


    // serverPort Field Functions 
    bool hasServerPort() const { return this->serverPort_ != nullptr;};
    void deleteServerPort() { this->serverPort_ = nullptr;};
    inline string serverPort() const { DARABONBA_PTR_GET_DEFAULT(serverPort_, "") };
    inline IdpLdapSubConfig& setServerPort(string serverPort) { DARABONBA_PTR_SET_VALUE(serverPort_, serverPort) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline IdpLdapSubConfig& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline bool useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, false) };
    inline IdpLdapSubConfig& setUseSsl(bool useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // userDn Field Functions 
    bool hasUserDn() const { return this->userDn_ != nullptr;};
    void deleteUserDn() { this->userDn_ = nullptr;};
    inline string userDn() const { DARABONBA_PTR_GET_DEFAULT(userDn_, "") };
    inline IdpLdapSubConfig& setUserDn(string userDn) { DARABONBA_PTR_SET_VALUE(userDn_, userDn) };


    // userFilter Field Functions 
    bool hasUserFilter() const { return this->userFilter_ != nullptr;};
    void deleteUserFilter() { this->userFilter_ = nullptr;};
    inline string userFilter() const { DARABONBA_PTR_GET_DEFAULT(userFilter_, "") };
    inline IdpLdapSubConfig& setUserFilter(string userFilter) { DARABONBA_PTR_SET_VALUE(userFilter_, userFilter) };


    // userPassword Field Functions 
    bool hasUserPassword() const { return this->userPassword_ != nullptr;};
    void deleteUserPassword() { this->userPassword_ = nullptr;};
    inline string userPassword() const { DARABONBA_PTR_GET_DEFAULT(userPassword_, "") };
    inline IdpLdapSubConfig& setUserPassword(string userPassword) { DARABONBA_PTR_SET_VALUE(userPassword_, userPassword) };


  protected:
    std::shared_ptr<string> baseDn_ = nullptr;
    std::shared_ptr<string> groupBaseDn_ = nullptr;
    std::shared_ptr<string> groupFilter_ = nullptr;
    std::shared_ptr<string> groupMembershipAttr_ = nullptr;
    std::shared_ptr<string> groupNameAttr_ = nullptr;
    std::shared_ptr<string> loginNameAttr_ = nullptr;
    std::shared_ptr<string> serverAddr_ = nullptr;
    std::shared_ptr<string> serverPort_ = nullptr;
    std::shared_ptr<string> serverType_ = nullptr;
    std::shared_ptr<bool> useSsl_ = nullptr;
    std::shared_ptr<string> userDn_ = nullptr;
    std::shared_ptr<string> userFilter_ = nullptr;
    std::shared_ptr<string> userPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
