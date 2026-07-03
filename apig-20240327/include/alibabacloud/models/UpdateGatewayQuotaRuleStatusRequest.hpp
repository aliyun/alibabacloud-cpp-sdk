// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYQUOTARULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYQUOTARULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateGatewayQuotaRuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayQuotaRuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clearHistory, clearHistory_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayQuotaRuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clearHistory, clearHistory_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    UpdateGatewayQuotaRuleStatusRequest() = default ;
    UpdateGatewayQuotaRuleStatusRequest(const UpdateGatewayQuotaRuleStatusRequest &) = default ;
    UpdateGatewayQuotaRuleStatusRequest(UpdateGatewayQuotaRuleStatusRequest &&) = default ;
    UpdateGatewayQuotaRuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayQuotaRuleStatusRequest() = default ;
    UpdateGatewayQuotaRuleStatusRequest& operator=(const UpdateGatewayQuotaRuleStatusRequest &) = default ;
    UpdateGatewayQuotaRuleStatusRequest& operator=(UpdateGatewayQuotaRuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clearHistory_ == nullptr
        && this->enable_ == nullptr; };
    // clearHistory Field Functions 
    bool hasClearHistory() const { return this->clearHistory_ != nullptr;};
    void deleteClearHistory() { this->clearHistory_ = nullptr;};
    inline bool getClearHistory() const { DARABONBA_PTR_GET_DEFAULT(clearHistory_, false) };
    inline UpdateGatewayQuotaRuleStatusRequest& setClearHistory(bool clearHistory) { DARABONBA_PTR_SET_VALUE(clearHistory_, clearHistory) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateGatewayQuotaRuleStatusRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Specifies whether to clear historical quota usage when enabling or disabling the rule.
    shared_ptr<bool> clearHistory_ {};
    // Specifies whether to enable or disable the rule.
    shared_ptr<bool> enable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
