// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICEREQUESTMODULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICEREQUESTMODULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceRequestModuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceRequestModuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleStatus, moduleStatus_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceRequestModuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleStatus, moduleStatus_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetSubscriptionPriceRequestModuleList() = default ;
    GetSubscriptionPriceRequestModuleList(const GetSubscriptionPriceRequestModuleList &) = default ;
    GetSubscriptionPriceRequestModuleList(GetSubscriptionPriceRequestModuleList &&) = default ;
    GetSubscriptionPriceRequestModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceRequestModuleList() = default ;
    GetSubscriptionPriceRequestModuleList& operator=(const GetSubscriptionPriceRequestModuleList &) = default ;
    GetSubscriptionPriceRequestModuleList& operator=(GetSubscriptionPriceRequestModuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->moduleCode_ != nullptr && this->moduleStatus_ != nullptr && this->tag_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetSubscriptionPriceRequestModuleList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetSubscriptionPriceRequestModuleList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleStatus Field Functions 
    bool hasModuleStatus() const { return this->moduleStatus_ != nullptr;};
    void deleteModuleStatus() { this->moduleStatus_ = nullptr;};
    inline int32_t moduleStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleStatus_, 0) };
    inline GetSubscriptionPriceRequestModuleList& setModuleStatus(int32_t moduleStatus) { DARABONBA_PTR_SET_VALUE(moduleStatus_, moduleStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetSubscriptionPriceRequestModuleList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The configurations of the Nth pricing module. Valid values of N: 1 to 50. Format: AA:aa,BB:bb. The values of AA and BB are the property IDs of the pricing module. The values of aa and bb are the property values of the pricing module.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The identifier of the Nth pricing module.
    // 
    // This parameter is required.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The status of the pricing module. This parameter is required only if the order type is Upgrade. Valid values:
    // 
    // *   1: adds one or more instances.
    // *   2: modifies the configurations of an instance. In the upgrade scenario, if the configurations of the pricing module change, you must specify this value for the parameter.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> moduleStatus_ = nullptr;
    // The tag of the specified resource. This parameter is required only if you upgrade or modify the configurations of an Alibaba Cloud service. For example, if you want to modify the configurations of a disk, you can use a tag to identify the ID of the disk.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
