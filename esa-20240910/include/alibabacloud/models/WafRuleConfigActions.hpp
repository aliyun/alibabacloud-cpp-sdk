// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGACTIONS_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfigActionsBypass.hpp>
#include <alibabacloud/models/WafRuleConfigActionsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigActions& obj) { 
      DARABONBA_PTR_TO_JSON(Bypass, bypass_);
      DARABONBA_PTR_TO_JSON(Response, response_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigActions& obj) { 
      DARABONBA_PTR_FROM_JSON(Bypass, bypass_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
    };
    WafRuleConfigActions() = default ;
    WafRuleConfigActions(const WafRuleConfigActions &) = default ;
    WafRuleConfigActions(WafRuleConfigActions &&) = default ;
    WafRuleConfigActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigActions() = default ;
    WafRuleConfigActions& operator=(const WafRuleConfigActions &) = default ;
    WafRuleConfigActions& operator=(WafRuleConfigActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bypass_ != nullptr
        && this->response_ != nullptr; };
    // bypass Field Functions 
    bool hasBypass() const { return this->bypass_ != nullptr;};
    void deleteBypass() { this->bypass_ = nullptr;};
    inline const Models::WafRuleConfigActionsBypass & bypass() const { DARABONBA_PTR_GET_CONST(bypass_, Models::WafRuleConfigActionsBypass) };
    inline Models::WafRuleConfigActionsBypass bypass() { DARABONBA_PTR_GET(bypass_, Models::WafRuleConfigActionsBypass) };
    inline WafRuleConfigActions& setBypass(const Models::WafRuleConfigActionsBypass & bypass) { DARABONBA_PTR_SET_VALUE(bypass_, bypass) };
    inline WafRuleConfigActions& setBypass(Models::WafRuleConfigActionsBypass && bypass) { DARABONBA_PTR_SET_RVALUE(bypass_, bypass) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::WafRuleConfigActionsResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::WafRuleConfigActionsResponse) };
    inline Models::WafRuleConfigActionsResponse response() { DARABONBA_PTR_GET(response_, Models::WafRuleConfigActionsResponse) };
    inline WafRuleConfigActions& setResponse(const Models::WafRuleConfigActionsResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline WafRuleConfigActions& setResponse(Models::WafRuleConfigActionsResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


  protected:
    std::shared_ptr<Models::WafRuleConfigActionsBypass> bypass_ = nullptr;
    std::shared_ptr<Models::WafRuleConfigActionsResponse> response_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
