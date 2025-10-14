// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFBATCHRULESHAREDACTIONS_HPP_
#define ALIBABACLOUD_MODELS_WAFBATCHRULESHAREDACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafBatchRuleSharedActionsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafBatchRuleSharedActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafBatchRuleSharedActions& obj) { 
      DARABONBA_PTR_TO_JSON(Response, response_);
    };
    friend void from_json(const Darabonba::Json& j, WafBatchRuleSharedActions& obj) { 
      DARABONBA_PTR_FROM_JSON(Response, response_);
    };
    WafBatchRuleSharedActions() = default ;
    WafBatchRuleSharedActions(const WafBatchRuleSharedActions &) = default ;
    WafBatchRuleSharedActions(WafBatchRuleSharedActions &&) = default ;
    WafBatchRuleSharedActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafBatchRuleSharedActions() = default ;
    WafBatchRuleSharedActions& operator=(const WafBatchRuleSharedActions &) = default ;
    WafBatchRuleSharedActions& operator=(WafBatchRuleSharedActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->response_ == nullptr; };
    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::WafBatchRuleSharedActionsResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::WafBatchRuleSharedActionsResponse) };
    inline Models::WafBatchRuleSharedActionsResponse response() { DARABONBA_PTR_GET(response_, Models::WafBatchRuleSharedActionsResponse) };
    inline WafBatchRuleSharedActions& setResponse(const Models::WafBatchRuleSharedActionsResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline WafBatchRuleSharedActions& setResponse(Models::WafBatchRuleSharedActionsResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


  protected:
    std::shared_ptr<Models::WafBatchRuleSharedActionsResponse> response_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
