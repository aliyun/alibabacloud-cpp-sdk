// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTERULERESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTERULERESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListRouteRuleResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteRuleResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_TO_JSON(BlockChainType, blockChainType_);
      DARABONBA_PTR_TO_JSON(ChainUpMode, chainUpMode_);
      DARABONBA_PTR_TO_JSON(ContractName, contractName_);
      DARABONBA_PTR_TO_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(DeviceGroupName, deviceGroupName_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleName, privacyRuleName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RouteRuleId, routeRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteRuleResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_FROM_JSON(BlockChainType, blockChainType_);
      DARABONBA_PTR_FROM_JSON(ChainUpMode, chainUpMode_);
      DARABONBA_PTR_FROM_JSON(ContractName, contractName_);
      DARABONBA_PTR_FROM_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupName, deviceGroupName_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleName, privacyRuleName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RouteRuleId, routeRuleId_);
    };
    ListRouteRuleResponseBodyDataPageData() = default ;
    ListRouteRuleResponseBodyDataPageData(const ListRouteRuleResponseBodyDataPageData &) = default ;
    ListRouteRuleResponseBodyDataPageData(ListRouteRuleResponseBodyDataPageData &&) = default ;
    ListRouteRuleResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteRuleResponseBodyDataPageData() = default ;
    ListRouteRuleResponseBodyDataPageData& operator=(const ListRouteRuleResponseBodyDataPageData &) = default ;
    ListRouteRuleResponseBodyDataPageData& operator=(ListRouteRuleResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->bizChainName_ == nullptr && return this->blockChainType_ == nullptr && return this->chainUpMode_ == nullptr && return this->contractName_ == nullptr && return this->contractTemplateId_ == nullptr
        && return this->deviceGroupId_ == nullptr && return this->deviceGroupName_ == nullptr && return this->invokeType_ == nullptr && return this->privacyRuleId_ == nullptr && return this->privacyRuleName_ == nullptr
        && return this->remark_ == nullptr && return this->routeRuleId_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline int64_t bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, 0L) };
    inline ListRouteRuleResponseBodyDataPageData& setBizChainId(int64_t bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


    // blockChainType Field Functions 
    bool hasBlockChainType() const { return this->blockChainType_ != nullptr;};
    void deleteBlockChainType() { this->blockChainType_ = nullptr;};
    inline string blockChainType() const { DARABONBA_PTR_GET_DEFAULT(blockChainType_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setBlockChainType(string blockChainType) { DARABONBA_PTR_SET_VALUE(blockChainType_, blockChainType) };


    // chainUpMode Field Functions 
    bool hasChainUpMode() const { return this->chainUpMode_ != nullptr;};
    void deleteChainUpMode() { this->chainUpMode_ = nullptr;};
    inline string chainUpMode() const { DARABONBA_PTR_GET_DEFAULT(chainUpMode_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setChainUpMode(string chainUpMode) { DARABONBA_PTR_SET_VALUE(chainUpMode_, chainUpMode) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractTemplateId Field Functions 
    bool hasContractTemplateId() const { return this->contractTemplateId_ != nullptr;};
    void deleteContractTemplateId() { this->contractTemplateId_ = nullptr;};
    inline string contractTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contractTemplateId_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setContractTemplateId(string contractTemplateId) { DARABONBA_PTR_SET_VALUE(contractTemplateId_, contractTemplateId) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // deviceGroupName Field Functions 
    bool hasDeviceGroupName() const { return this->deviceGroupName_ != nullptr;};
    void deleteDeviceGroupName() { this->deviceGroupName_ = nullptr;};
    inline string deviceGroupName() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupName_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setDeviceGroupName(string deviceGroupName) { DARABONBA_PTR_SET_VALUE(deviceGroupName_, deviceGroupName) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


    // privacyRuleName Field Functions 
    bool hasPrivacyRuleName() const { return this->privacyRuleName_ != nullptr;};
    void deletePrivacyRuleName() { this->privacyRuleName_ = nullptr;};
    inline string privacyRuleName() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleName_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setPrivacyRuleName(string privacyRuleName) { DARABONBA_PTR_SET_VALUE(privacyRuleName_, privacyRuleName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // routeRuleId Field Functions 
    bool hasRouteRuleId() const { return this->routeRuleId_ != nullptr;};
    void deleteRouteRuleId() { this->routeRuleId_ = nullptr;};
    inline string routeRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeRuleId_, "") };
    inline ListRouteRuleResponseBodyDataPageData& setRouteRuleId(string routeRuleId) { DARABONBA_PTR_SET_VALUE(routeRuleId_, routeRuleId) };


  protected:
    std::shared_ptr<int64_t> bizChainId_ = nullptr;
    std::shared_ptr<string> bizChainName_ = nullptr;
    std::shared_ptr<string> blockChainType_ = nullptr;
    std::shared_ptr<string> chainUpMode_ = nullptr;
    std::shared_ptr<string> contractName_ = nullptr;
    std::shared_ptr<string> contractTemplateId_ = nullptr;
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    std::shared_ptr<string> deviceGroupName_ = nullptr;
    std::shared_ptr<string> invokeType_ = nullptr;
    std::shared_ptr<string> privacyRuleId_ = nullptr;
    std::shared_ptr<string> privacyRuleName_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> routeRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
