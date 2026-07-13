// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDNSGTMACCESSMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDNSGTMACCESSMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetDnsGtmAccessModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDnsGtmAccessModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDnsGtmAccessModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    SetDnsGtmAccessModeRequest() = default ;
    SetDnsGtmAccessModeRequest(const SetDnsGtmAccessModeRequest &) = default ;
    SetDnsGtmAccessModeRequest(SetDnsGtmAccessModeRequest &&) = default ;
    SetDnsGtmAccessModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDnsGtmAccessModeRequest() = default ;
    SetDnsGtmAccessModeRequest& operator=(const SetDnsGtmAccessModeRequest &) = default ;
    SetDnsGtmAccessModeRequest& operator=(SetDnsGtmAccessModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->lang_ == nullptr && this->strategyId_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline SetDnsGtmAccessModeRequest& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetDnsGtmAccessModeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline SetDnsGtmAccessModeRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The switchover policy for the address pool collection:
    // 
    // - AUTO: Automatic switchover
    // 
    // - DEFAULT: The primary address pool collection
    // 
    // - FAILOVER: The secondary address pool collection
    // 
    // This parameter is required.
    shared_ptr<string> accessMode_ {};
    // The language of certain response parameters. Default: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The ID of the access policy. Call [DescribeDnsGtmAccessStrategies](https://help.aliyun.com/document_detail/2357191.html) to obtain the policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
