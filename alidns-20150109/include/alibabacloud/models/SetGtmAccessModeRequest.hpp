// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETGTMACCESSMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETGTMACCESSMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetGtmAccessModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetGtmAccessModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, SetGtmAccessModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    SetGtmAccessModeRequest() = default ;
    SetGtmAccessModeRequest(const SetGtmAccessModeRequest &) = default ;
    SetGtmAccessModeRequest(SetGtmAccessModeRequest &&) = default ;
    SetGtmAccessModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetGtmAccessModeRequest() = default ;
    SetGtmAccessModeRequest& operator=(const SetGtmAccessModeRequest &) = default ;
    SetGtmAccessModeRequest& operator=(SetGtmAccessModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessMode_ == nullptr
        && return this->lang_ == nullptr && return this->strategyId_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline SetGtmAccessModeRequest& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetGtmAccessModeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline SetGtmAccessModeRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The desired access policy. Valid values:
    // 
    // *   **AUTO: performs automatic switchover between the primary and secondary address pool sets upon failures.**
    // *   **DEFAULT: specifies the primary address pool set.**
    // *   **FAILOVER: specifies the secondary address pool set.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessMode_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
