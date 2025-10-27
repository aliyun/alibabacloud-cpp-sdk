// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODYCLOUDVENDORACCOUNTAKSAUTHMODULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODYCLOUDVENDORACCOUNTAKSAUTHMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(ModuleAssetType, moduleAssetType_);
      DARABONBA_PTR_TO_JSON(ModuleDisp, moduleDisp_);
      DARABONBA_PTR_TO_JSON(ModuleServiceStatus, moduleServiceStatus_);
      DARABONBA_PTR_TO_JSON(ModuleStatement, moduleStatement_);
      DARABONBA_PTR_TO_JSON(TrailMessage, trailMessage_);
      DARABONBA_PTR_TO_JSON(TrailStatus, trailStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(ModuleAssetType, moduleAssetType_);
      DARABONBA_PTR_FROM_JSON(ModuleDisp, moduleDisp_);
      DARABONBA_PTR_FROM_JSON(ModuleServiceStatus, moduleServiceStatus_);
      DARABONBA_PTR_FROM_JSON(ModuleStatement, moduleStatement_);
      DARABONBA_PTR_FROM_JSON(TrailMessage, trailMessage_);
      DARABONBA_PTR_FROM_JSON(TrailStatus, trailStatus_);
    };
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules() = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules(const DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules &) = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules(DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules &&) = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules() = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& operator=(const DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules &) = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& operator=(DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->module_ == nullptr && return this->moduleAssetType_ == nullptr && return this->moduleDisp_ == nullptr && return this->moduleServiceStatus_ == nullptr && return this->moduleStatement_ == nullptr
        && return this->trailMessage_ == nullptr && return this->trailStatus_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // moduleAssetType Field Functions 
    bool hasModuleAssetType() const { return this->moduleAssetType_ != nullptr;};
    void deleteModuleAssetType() { this->moduleAssetType_ = nullptr;};
    inline string moduleAssetType() const { DARABONBA_PTR_GET_DEFAULT(moduleAssetType_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setModuleAssetType(string moduleAssetType) { DARABONBA_PTR_SET_VALUE(moduleAssetType_, moduleAssetType) };


    // moduleDisp Field Functions 
    bool hasModuleDisp() const { return this->moduleDisp_ != nullptr;};
    void deleteModuleDisp() { this->moduleDisp_ = nullptr;};
    inline string moduleDisp() const { DARABONBA_PTR_GET_DEFAULT(moduleDisp_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setModuleDisp(string moduleDisp) { DARABONBA_PTR_SET_VALUE(moduleDisp_, moduleDisp) };


    // moduleServiceStatus Field Functions 
    bool hasModuleServiceStatus() const { return this->moduleServiceStatus_ != nullptr;};
    void deleteModuleServiceStatus() { this->moduleServiceStatus_ = nullptr;};
    inline int32_t moduleServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleServiceStatus_, 0) };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setModuleServiceStatus(int32_t moduleServiceStatus) { DARABONBA_PTR_SET_VALUE(moduleServiceStatus_, moduleServiceStatus) };


    // moduleStatement Field Functions 
    bool hasModuleStatement() const { return this->moduleStatement_ != nullptr;};
    void deleteModuleStatement() { this->moduleStatement_ = nullptr;};
    inline string moduleStatement() const { DARABONBA_PTR_GET_DEFAULT(moduleStatement_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setModuleStatement(string moduleStatement) { DARABONBA_PTR_SET_VALUE(moduleStatement_, moduleStatement) };


    // trailMessage Field Functions 
    bool hasTrailMessage() const { return this->trailMessage_ != nullptr;};
    void deleteTrailMessage() { this->trailMessage_ = nullptr;};
    inline string trailMessage() const { DARABONBA_PTR_GET_DEFAULT(trailMessage_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setTrailMessage(string trailMessage) { DARABONBA_PTR_SET_VALUE(trailMessage_, trailMessage) };


    // trailStatus Field Functions 
    bool hasTrailStatus() const { return this->trailStatus_ != nullptr;};
    void deleteTrailStatus() { this->trailStatus_ = nullptr;};
    inline string trailStatus() const { DARABONBA_PTR_GET_DEFAULT(trailStatus_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules& setTrailStatus(string trailStatus) { DARABONBA_PTR_SET_VALUE(trailStatus_, trailStatus) };


  protected:
    // The error message of the module.
    std::shared_ptr<string> message_ = nullptr;
    // The code of the module. Valid values:
    // 
    // *   **HOST**: host
    // *   **CSPM**: configuration assessment
    // *   **SIEM**: CloudSiem
    // *   **TRIAL**: log audit
    std::shared_ptr<string> module_ = nullptr;
    // The cloud asset that is associated with the module.
    std::shared_ptr<string> moduleAssetType_ = nullptr;
    // The display name of the module.
    std::shared_ptr<string> moduleDisp_ = nullptr;
    // The service status of the module. Valid values:
    // 
    // *   **0**: being used
    // *   **1**: exception occurred
    // *   **2**: being validated
    // *   **3**: validation timed out
    std::shared_ptr<int32_t> moduleServiceStatus_ = nullptr;
    // The permission description of the module.
    std::shared_ptr<string> moduleStatement_ = nullptr;
    // The error message of the log audit service.
    std::shared_ptr<string> trailMessage_ = nullptr;
    // The status of the log audit service. Valid values:
    // 
    // *   **init**: being initialized
    // *   **verify**: being validated
    // *   **enable**: enabled
    // *   **disable**: disabled
    // *   **error**: exception occurred
    // *   **timeout**: validation timed out
    std::shared_ptr<string> trailStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
