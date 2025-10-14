// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINPUBLICIPSTOEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_JOINPUBLICIPSTOEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class JoinPublicIpsToEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinPublicIpsToEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceInfos, instanceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, JoinPublicIpsToEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceInfos, instanceInfos_);
    };
    JoinPublicIpsToEpnInstanceRequest() = default ;
    JoinPublicIpsToEpnInstanceRequest(const JoinPublicIpsToEpnInstanceRequest &) = default ;
    JoinPublicIpsToEpnInstanceRequest(JoinPublicIpsToEpnInstanceRequest &&) = default ;
    JoinPublicIpsToEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinPublicIpsToEpnInstanceRequest() = default ;
    JoinPublicIpsToEpnInstanceRequest& operator=(const JoinPublicIpsToEpnInstanceRequest &) = default ;
    JoinPublicIpsToEpnInstanceRequest& operator=(JoinPublicIpsToEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceId_ == nullptr
        && return this->instanceInfos_ == nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline JoinPublicIpsToEpnInstanceRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // instanceInfos Field Functions 
    bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
    void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
    inline string instanceInfos() const { DARABONBA_PTR_GET_DEFAULT(instanceInfos_, "") };
    inline JoinPublicIpsToEpnInstanceRequest& setInstanceInfos(string instanceInfos) { DARABONBA_PTR_SET_VALUE(instanceInfos_, instanceInfos) };


  protected:
    // The ID of the EPN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
    // The information about the public IP address that you want to add to the EPN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
