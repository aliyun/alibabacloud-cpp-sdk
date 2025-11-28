// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class UpdateRouteRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRouteRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(ContractName, contractName_);
      DARABONBA_PTR_TO_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RouteRuleId, routeRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRouteRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(ContractName, contractName_);
      DARABONBA_PTR_FROM_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RouteRuleId, routeRuleId_);
    };
    UpdateRouteRuleRequest() = default ;
    UpdateRouteRuleRequest(const UpdateRouteRuleRequest &) = default ;
    UpdateRouteRuleRequest(UpdateRouteRuleRequest &&) = default ;
    UpdateRouteRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRouteRuleRequest() = default ;
    UpdateRouteRuleRequest& operator=(const UpdateRouteRuleRequest &) = default ;
    UpdateRouteRuleRequest& operator=(UpdateRouteRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->contractName_ == nullptr && return this->contractTemplateId_ == nullptr && return this->invokeType_ == nullptr && return this->privacyRuleId_ == nullptr && return this->regionId_ == nullptr
        && return this->remark_ == nullptr && return this->routeRuleId_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline UpdateRouteRuleRequest& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline UpdateRouteRuleRequest& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractTemplateId Field Functions 
    bool hasContractTemplateId() const { return this->contractTemplateId_ != nullptr;};
    void deleteContractTemplateId() { this->contractTemplateId_ = nullptr;};
    inline string contractTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contractTemplateId_, "") };
    inline UpdateRouteRuleRequest& setContractTemplateId(string contractTemplateId) { DARABONBA_PTR_SET_VALUE(contractTemplateId_, contractTemplateId) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline UpdateRouteRuleRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline UpdateRouteRuleRequest& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateRouteRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateRouteRuleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // routeRuleId Field Functions 
    bool hasRouteRuleId() const { return this->routeRuleId_ != nullptr;};
    void deleteRouteRuleId() { this->routeRuleId_ = nullptr;};
    inline string routeRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeRuleId_, "") };
    inline UpdateRouteRuleRequest& setRouteRuleId(string routeRuleId) { DARABONBA_PTR_SET_VALUE(routeRuleId_, routeRuleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> contractName_ = nullptr;
    std::shared_ptr<string> contractTemplateId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> invokeType_ = nullptr;
    std::shared_ptr<string> privacyRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> routeRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
