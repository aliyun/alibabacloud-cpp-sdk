// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDROUTERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDROUTERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AddRouteRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRouteRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(ChainUpMode, chainUpMode_);
      DARABONBA_PTR_TO_JSON(ContractName, contractName_);
      DARABONBA_PTR_TO_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddRouteRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(ChainUpMode, chainUpMode_);
      DARABONBA_PTR_FROM_JSON(ContractName, contractName_);
      DARABONBA_PTR_FROM_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddRouteRuleRequest() = default ;
    AddRouteRuleRequest(const AddRouteRuleRequest &) = default ;
    AddRouteRuleRequest(AddRouteRuleRequest &&) = default ;
    AddRouteRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRouteRuleRequest() = default ;
    AddRouteRuleRequest& operator=(const AddRouteRuleRequest &) = default ;
    AddRouteRuleRequest& operator=(AddRouteRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->chainUpMode_ == nullptr && return this->contractName_ == nullptr && return this->contractTemplateId_ == nullptr && return this->deviceGroupId_ == nullptr && return this->invokeType_ == nullptr
        && return this->privacyRuleId_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline AddRouteRuleRequest& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // chainUpMode Field Functions 
    bool hasChainUpMode() const { return this->chainUpMode_ != nullptr;};
    void deleteChainUpMode() { this->chainUpMode_ = nullptr;};
    inline string chainUpMode() const { DARABONBA_PTR_GET_DEFAULT(chainUpMode_, "") };
    inline AddRouteRuleRequest& setChainUpMode(string chainUpMode) { DARABONBA_PTR_SET_VALUE(chainUpMode_, chainUpMode) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline AddRouteRuleRequest& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractTemplateId Field Functions 
    bool hasContractTemplateId() const { return this->contractTemplateId_ != nullptr;};
    void deleteContractTemplateId() { this->contractTemplateId_ = nullptr;};
    inline string contractTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contractTemplateId_, "") };
    inline AddRouteRuleRequest& setContractTemplateId(string contractTemplateId) { DARABONBA_PTR_SET_VALUE(contractTemplateId_, contractTemplateId) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline AddRouteRuleRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline AddRouteRuleRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline AddRouteRuleRequest& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddRouteRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddRouteRuleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> chainUpMode_ = nullptr;
    std::shared_ptr<string> contractName_ = nullptr;
    std::shared_ptr<string> contractTemplateId_ = nullptr;
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> invokeType_ = nullptr;
    std::shared_ptr<string> privacyRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
