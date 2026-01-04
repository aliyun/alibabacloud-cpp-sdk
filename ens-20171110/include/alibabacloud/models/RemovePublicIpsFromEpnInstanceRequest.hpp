// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPUBLICIPSFROMEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPUBLICIPSFROMEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemovePublicIpsFromEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePublicIpsFromEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceInfos, instanceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePublicIpsFromEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceInfos, instanceInfos_);
    };
    RemovePublicIpsFromEpnInstanceRequest() = default ;
    RemovePublicIpsFromEpnInstanceRequest(const RemovePublicIpsFromEpnInstanceRequest &) = default ;
    RemovePublicIpsFromEpnInstanceRequest(RemovePublicIpsFromEpnInstanceRequest &&) = default ;
    RemovePublicIpsFromEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePublicIpsFromEpnInstanceRequest() = default ;
    RemovePublicIpsFromEpnInstanceRequest& operator=(const RemovePublicIpsFromEpnInstanceRequest &) = default ;
    RemovePublicIpsFromEpnInstanceRequest& operator=(RemovePublicIpsFromEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceId_ == nullptr
        && this->instanceInfos_ == nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string getEPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline RemovePublicIpsFromEpnInstanceRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // instanceInfos Field Functions 
    bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
    void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
    inline string getInstanceInfos() const { DARABONBA_PTR_GET_DEFAULT(instanceInfos_, "") };
    inline RemovePublicIpsFromEpnInstanceRequest& setInstanceInfos(string instanceInfos) { DARABONBA_PTR_SET_VALUE(instanceInfos_, instanceInfos) };


  protected:
    // The ID of the EPN instance.
    // 
    // This parameter is required.
    shared_ptr<string> EPNInstanceId_ {};
    // The information about the public IP addresses that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> instanceInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
