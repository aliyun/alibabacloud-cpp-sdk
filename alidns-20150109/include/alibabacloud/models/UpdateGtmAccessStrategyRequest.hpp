// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGTMACCESSSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGTMACCESSSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateGtmAccessStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLines, accessLines_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolId, defaultAddrPoolId_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLines, accessLines_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolId, defaultAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    UpdateGtmAccessStrategyRequest() = default ;
    UpdateGtmAccessStrategyRequest(const UpdateGtmAccessStrategyRequest &) = default ;
    UpdateGtmAccessStrategyRequest(UpdateGtmAccessStrategyRequest &&) = default ;
    UpdateGtmAccessStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGtmAccessStrategyRequest() = default ;
    UpdateGtmAccessStrategyRequest& operator=(const UpdateGtmAccessStrategyRequest &) = default ;
    UpdateGtmAccessStrategyRequest& operator=(UpdateGtmAccessStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLines_ == nullptr
        && return this->defaultAddrPoolId_ == nullptr && return this->failoverAddrPoolId_ == nullptr && return this->lang_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr; };
    // accessLines Field Functions 
    bool hasAccessLines() const { return this->accessLines_ != nullptr;};
    void deleteAccessLines() { this->accessLines_ = nullptr;};
    inline string accessLines() const { DARABONBA_PTR_GET_DEFAULT(accessLines_, "") };
    inline UpdateGtmAccessStrategyRequest& setAccessLines(string accessLines) { DARABONBA_PTR_SET_VALUE(accessLines_, accessLines) };


    // defaultAddrPoolId Field Functions 
    bool hasDefaultAddrPoolId() const { return this->defaultAddrPoolId_ != nullptr;};
    void deleteDefaultAddrPoolId() { this->defaultAddrPoolId_ = nullptr;};
    inline string defaultAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolId_, "") };
    inline UpdateGtmAccessStrategyRequest& setDefaultAddrPoolId(string defaultAddrPoolId) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolId_, defaultAddrPoolId) };


    // failoverAddrPoolId Field Functions 
    bool hasFailoverAddrPoolId() const { return this->failoverAddrPoolId_ != nullptr;};
    void deleteFailoverAddrPoolId() { this->failoverAddrPoolId_ = nullptr;};
    inline string failoverAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolId_, "") };
    inline UpdateGtmAccessStrategyRequest& setFailoverAddrPoolId(string failoverAddrPoolId) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolId_, failoverAddrPoolId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateGtmAccessStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline UpdateGtmAccessStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline UpdateGtmAccessStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The line codes of access regions.
    std::shared_ptr<string> accessLines_ = nullptr;
    // The ID of the default address pool.
    std::shared_ptr<string> defaultAddrPoolId_ = nullptr;
    // The ID of the failover address pool.
    std::shared_ptr<string> failoverAddrPoolId_ = nullptr;
    // The language used by the user.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the access policy that you want to query for the GTM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyId_ = nullptr;
    // The name of the access policy.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
