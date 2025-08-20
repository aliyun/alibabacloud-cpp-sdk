// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTHIVEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTHIVEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequestHiveInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequestHiveInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HostConfig, hostConfig_);
      DARABONBA_PTR_TO_JSON(MetaStoreUri, metaStoreUri_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequestHiveInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HostConfig, hostConfig_);
      DARABONBA_PTR_FROM_JSON(MetaStoreUri, metaStoreUri_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
    };
    CreateApsDatasoureRequestHiveInfo() = default ;
    CreateApsDatasoureRequestHiveInfo(const CreateApsDatasoureRequestHiveInfo &) = default ;
    CreateApsDatasoureRequestHiveInfo(CreateApsDatasoureRequestHiveInfo &&) = default ;
    CreateApsDatasoureRequestHiveInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequestHiveInfo() = default ;
    CreateApsDatasoureRequestHiveInfo& operator=(const CreateApsDatasoureRequestHiveInfo &) = default ;
    CreateApsDatasoureRequestHiveInfo& operator=(CreateApsDatasoureRequestHiveInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->hostConfig_ != nullptr && this->metaStoreUri_ != nullptr && this->securityGroup_ != nullptr && this->vswitch_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateApsDatasoureRequestHiveInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hostConfig Field Functions 
    bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
    void deleteHostConfig() { this->hostConfig_ = nullptr;};
    inline string hostConfig() const { DARABONBA_PTR_GET_DEFAULT(hostConfig_, "") };
    inline CreateApsDatasoureRequestHiveInfo& setHostConfig(string hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };


    // metaStoreUri Field Functions 
    bool hasMetaStoreUri() const { return this->metaStoreUri_ != nullptr;};
    void deleteMetaStoreUri() { this->metaStoreUri_ = nullptr;};
    inline string metaStoreUri() const { DARABONBA_PTR_GET_DEFAULT(metaStoreUri_, "") };
    inline CreateApsDatasoureRequestHiveInfo& setMetaStoreUri(string metaStoreUri) { DARABONBA_PTR_SET_VALUE(metaStoreUri_, metaStoreUri) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline CreateApsDatasoureRequestHiveInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline string vswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
    inline CreateApsDatasoureRequestHiveInfo& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The configuration of the host.
    std::shared_ptr<string> hostConfig_ = nullptr;
    // The URL of the Hive Metastore.
    std::shared_ptr<string> metaStoreUri_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
