// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTRDSMYSQLINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTRDSMYSQLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequestRdsMysqlInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequestRdsMysqlInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequestRdsMysqlInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateApsDatasoureRequestRdsMysqlInfo() = default ;
    CreateApsDatasoureRequestRdsMysqlInfo(const CreateApsDatasoureRequestRdsMysqlInfo &) = default ;
    CreateApsDatasoureRequestRdsMysqlInfo(CreateApsDatasoureRequestRdsMysqlInfo &&) = default ;
    CreateApsDatasoureRequestRdsMysqlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequestRdsMysqlInfo() = default ;
    CreateApsDatasoureRequestRdsMysqlInfo& operator=(const CreateApsDatasoureRequestRdsMysqlInfo &) = default ;
    CreateApsDatasoureRequestRdsMysqlInfo& operator=(CreateApsDatasoureRequestRdsMysqlInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectUrl_ != nullptr
        && this->instanceId_ != nullptr && this->password_ != nullptr && this->regionId_ != nullptr && this->securityGroup_ != nullptr && this->userName_ != nullptr; };
    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline CreateApsDatasoureRequestRdsMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApsDatasoureRequestRdsMysqlInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateApsDatasoureRequestRdsMysqlInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsDatasoureRequestRdsMysqlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline CreateApsDatasoureRequestRdsMysqlInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateApsDatasoureRequestRdsMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The URL used to connect to the read-only instance.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The password of the database account of the instance.
    std::shared_ptr<string> password_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The name of the database account of the instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
