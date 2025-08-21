// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYREQUESTORDERDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYREQUESTORDERDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageGatewayRequestOrderDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageGatewayRequestOrderDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageGatewayRequestOrderDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateStorageGatewayRequestOrderDetails() = default ;
    CreateStorageGatewayRequestOrderDetails(const CreateStorageGatewayRequestOrderDetails &) = default ;
    CreateStorageGatewayRequestOrderDetails(CreateStorageGatewayRequestOrderDetails &&) = default ;
    CreateStorageGatewayRequestOrderDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageGatewayRequestOrderDetails() = default ;
    CreateStorageGatewayRequestOrderDetails& operator=(const CreateStorageGatewayRequestOrderDetails &) = default ;
    CreateStorageGatewayRequestOrderDetails& operator=(CreateStorageGatewayRequestOrderDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->ensRegionId_ != nullptr && this->gatewayName_ != nullptr && this->gatewayType_ != nullptr && this->vpcId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateStorageGatewayRequestOrderDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateStorageGatewayRequestOrderDetails& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string gatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline CreateStorageGatewayRequestOrderDetails& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateStorageGatewayRequestOrderDetails& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateStorageGatewayRequestOrderDetails& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The description of the gateway. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the gateway. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> gatewayName_ = nullptr;
    // The type of the gateway. Set this parameter to **1**. **1** indicates iSCSI.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // The ID of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
