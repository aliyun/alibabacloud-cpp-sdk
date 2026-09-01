// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCCIDRBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCCIDRBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpcCidrBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcCidrBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OriginalCidrBlock, originalCidrBlock_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetCidrBlock, targetCidrBlock_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcCidrBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OriginalCidrBlock, originalCidrBlock_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetCidrBlock, targetCidrBlock_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyVpcCidrBlockRequest() = default ;
    ModifyVpcCidrBlockRequest(const ModifyVpcCidrBlockRequest &) = default ;
    ModifyVpcCidrBlockRequest(ModifyVpcCidrBlockRequest &&) = default ;
    ModifyVpcCidrBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcCidrBlockRequest() = default ;
    ModifyVpcCidrBlockRequest& operator=(const ModifyVpcCidrBlockRequest &) = default ;
    ModifyVpcCidrBlockRequest& operator=(ModifyVpcCidrBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->originalCidrBlock_ == nullptr && this->regionId_ == nullptr && this->targetCidrBlock_ == nullptr && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpcCidrBlockRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyVpcCidrBlockRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // originalCidrBlock Field Functions 
    bool hasOriginalCidrBlock() const { return this->originalCidrBlock_ != nullptr;};
    void deleteOriginalCidrBlock() { this->originalCidrBlock_ = nullptr;};
    inline string getOriginalCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(originalCidrBlock_, "") };
    inline ModifyVpcCidrBlockRequest& setOriginalCidrBlock(string originalCidrBlock) { DARABONBA_PTR_SET_VALUE(originalCidrBlock_, originalCidrBlock) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpcCidrBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetCidrBlock Field Functions 
    bool hasTargetCidrBlock() const { return this->targetCidrBlock_ != nullptr;};
    void deleteTargetCidrBlock() { this->targetCidrBlock_ = nullptr;};
    inline string getTargetCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(targetCidrBlock_, "") };
    inline ModifyVpcCidrBlockRequest& setTargetCidrBlock(string targetCidrBlock) { DARABONBA_PTR_SET_VALUE(targetCidrBlock_, targetCidrBlock) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyVpcCidrBlockRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without modifying the CIDR block of the virtual private cloud (VPC). The system checks the request for potential issues. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    // - **false** (default): sends a Normal request. If the check succeeds, an HTTP 2xx status code is returned and the modification is performed.
    shared_ptr<bool> dryRun_ {};
    // The CIDR block of the VPC to modify. Both primary and secondary CIDR blocks are supported.
    // 
    // This parameter is required.
    shared_ptr<string> originalCidrBlock_ {};
    // The ID of the region where the VPC resides.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The new CIDR block for the VPC after modification.
    // 
    // This parameter is required.
    shared_ptr<string> targetCidrBlock_ {};
    // The ID of the VPC to modify.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
