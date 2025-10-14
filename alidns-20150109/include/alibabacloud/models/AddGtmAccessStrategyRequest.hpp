// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMACCESSSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMACCESSSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmAccessStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLines, accessLines_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolId, defaultAddrPoolId_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLines, accessLines_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolId, defaultAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    AddGtmAccessStrategyRequest() = default ;
    AddGtmAccessStrategyRequest(const AddGtmAccessStrategyRequest &) = default ;
    AddGtmAccessStrategyRequest(AddGtmAccessStrategyRequest &&) = default ;
    AddGtmAccessStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmAccessStrategyRequest() = default ;
    AddGtmAccessStrategyRequest& operator=(const AddGtmAccessStrategyRequest &) = default ;
    AddGtmAccessStrategyRequest& operator=(AddGtmAccessStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLines_ == nullptr
        && return this->defaultAddrPoolId_ == nullptr && return this->failoverAddrPoolId_ == nullptr && return this->instanceId_ == nullptr && return this->lang_ == nullptr && return this->strategyName_ == nullptr; };
    // accessLines Field Functions 
    bool hasAccessLines() const { return this->accessLines_ != nullptr;};
    void deleteAccessLines() { this->accessLines_ = nullptr;};
    inline string accessLines() const { DARABONBA_PTR_GET_DEFAULT(accessLines_, "") };
    inline AddGtmAccessStrategyRequest& setAccessLines(string accessLines) { DARABONBA_PTR_SET_VALUE(accessLines_, accessLines) };


    // defaultAddrPoolId Field Functions 
    bool hasDefaultAddrPoolId() const { return this->defaultAddrPoolId_ != nullptr;};
    void deleteDefaultAddrPoolId() { this->defaultAddrPoolId_ = nullptr;};
    inline string defaultAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolId_, "") };
    inline AddGtmAccessStrategyRequest& setDefaultAddrPoolId(string defaultAddrPoolId) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolId_, defaultAddrPoolId) };


    // failoverAddrPoolId Field Functions 
    bool hasFailoverAddrPoolId() const { return this->failoverAddrPoolId_ != nullptr;};
    void deleteFailoverAddrPoolId() { this->failoverAddrPoolId_ = nullptr;};
    inline string failoverAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolId_, "") };
    inline AddGtmAccessStrategyRequest& setFailoverAddrPoolId(string failoverAddrPoolId) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolId_, failoverAddrPoolId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddGtmAccessStrategyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddGtmAccessStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline AddGtmAccessStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The line codes of access regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessLines_ = nullptr;
    // The ID of the default address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> defaultAddrPoolId_ = nullptr;
    // The ID of the failover address pool.
    // 
    // If the failover address pool is not set, pass the **Empty** value.
    // 
    // This parameter is required.
    std::shared_ptr<string> failoverAddrPoolId_ = nullptr;
    // The ID of the GTM instance for which you want to create an access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language used by the user.
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
