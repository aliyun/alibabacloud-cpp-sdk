// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPRIVATEDNSENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPRIVATEDNSENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyPrivateDnsEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrivateDnsEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_TO_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_TO_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StandbyDns, standbyDns_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrivateDnsEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StandbyDns, standbyDns_);
    };
    ModifyPrivateDnsEndpointRequest() = default ;
    ModifyPrivateDnsEndpointRequest(const ModifyPrivateDnsEndpointRequest &) = default ;
    ModifyPrivateDnsEndpointRequest(ModifyPrivateDnsEndpointRequest &&) = default ;
    ModifyPrivateDnsEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrivateDnsEndpointRequest() = default ;
    ModifyPrivateDnsEndpointRequest& operator=(const ModifyPrivateDnsEndpointRequest &) = default ;
    ModifyPrivateDnsEndpointRequest& operator=(ModifyPrivateDnsEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessInstanceId_ != nullptr
        && this->accessInstanceName_ != nullptr && this->primaryDns_ != nullptr && this->privateDnsType_ != nullptr && this->regionNo_ != nullptr && this->standbyDns_ != nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline ModifyPrivateDnsEndpointRequest& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // accessInstanceName Field Functions 
    bool hasAccessInstanceName() const { return this->accessInstanceName_ != nullptr;};
    void deleteAccessInstanceName() { this->accessInstanceName_ = nullptr;};
    inline string accessInstanceName() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceName_, "") };
    inline ModifyPrivateDnsEndpointRequest& setAccessInstanceName(string accessInstanceName) { DARABONBA_PTR_SET_VALUE(accessInstanceName_, accessInstanceName) };


    // primaryDns Field Functions 
    bool hasPrimaryDns() const { return this->primaryDns_ != nullptr;};
    void deletePrimaryDns() { this->primaryDns_ = nullptr;};
    inline string primaryDns() const { DARABONBA_PTR_GET_DEFAULT(primaryDns_, "") };
    inline ModifyPrivateDnsEndpointRequest& setPrimaryDns(string primaryDns) { DARABONBA_PTR_SET_VALUE(primaryDns_, primaryDns) };


    // privateDnsType Field Functions 
    bool hasPrivateDnsType() const { return this->privateDnsType_ != nullptr;};
    void deletePrivateDnsType() { this->privateDnsType_ = nullptr;};
    inline string privateDnsType() const { DARABONBA_PTR_GET_DEFAULT(privateDnsType_, "") };
    inline ModifyPrivateDnsEndpointRequest& setPrivateDnsType(string privateDnsType) { DARABONBA_PTR_SET_VALUE(privateDnsType_, privateDnsType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline ModifyPrivateDnsEndpointRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // standbyDns Field Functions 
    bool hasStandbyDns() const { return this->standbyDns_ != nullptr;};
    void deleteStandbyDns() { this->standbyDns_ = nullptr;};
    inline string standbyDns() const { DARABONBA_PTR_GET_DEFAULT(standbyDns_, "") };
    inline ModifyPrivateDnsEndpointRequest& setStandbyDns(string standbyDns) { DARABONBA_PTR_SET_VALUE(standbyDns_, standbyDns) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> accessInstanceName_ = nullptr;
    std::shared_ptr<string> primaryDns_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> privateDnsType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> standbyDns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
