// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTPOLARDBMYSQLINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTPOLARDBMYSQLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequestPolarDBMysqlInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequestPolarDBMysqlInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Across, across_);
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequestPolarDBMysqlInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Across, across_);
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateApsDatasoureRequestPolarDBMysqlInfo() = default ;
    CreateApsDatasoureRequestPolarDBMysqlInfo(const CreateApsDatasoureRequestPolarDBMysqlInfo &) = default ;
    CreateApsDatasoureRequestPolarDBMysqlInfo(CreateApsDatasoureRequestPolarDBMysqlInfo &&) = default ;
    CreateApsDatasoureRequestPolarDBMysqlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequestPolarDBMysqlInfo() = default ;
    CreateApsDatasoureRequestPolarDBMysqlInfo& operator=(const CreateApsDatasoureRequestPolarDBMysqlInfo &) = default ;
    CreateApsDatasoureRequestPolarDBMysqlInfo& operator=(CreateApsDatasoureRequestPolarDBMysqlInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->across_ == nullptr
        && return this->acrossRole_ == nullptr && return this->acrossUid_ == nullptr && return this->connectUrl_ == nullptr && return this->instanceId_ == nullptr && return this->password_ == nullptr
        && return this->regionId_ == nullptr && return this->securityGroup_ == nullptr && return this->userName_ == nullptr; };
    // across Field Functions 
    bool hasAcross() const { return this->across_ != nullptr;};
    void deleteAcross() { this->across_ = nullptr;};
    inline bool across() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string acrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string acrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether the data source is a cross-account resource. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> across_ = nullptr;
    // The name of the cross-account role.
    std::shared_ptr<string> acrossRole_ = nullptr;
    // The cross-account UID.
    std::shared_ptr<string> acrossUid_ = nullptr;
    // The URL used to connect to the custom ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The username used to access the instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
