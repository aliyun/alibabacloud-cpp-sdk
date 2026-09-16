// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEALERTRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGEALERTRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ManageAlertRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageAlertRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(callSource, callSource_);
    };
    friend void from_json(const Darabonba::Json& j, ManageAlertRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(callSource, callSource_);
    };
    ManageAlertRulesShrinkRequest() = default ;
    ManageAlertRulesShrinkRequest(const ManageAlertRulesShrinkRequest &) = default ;
    ManageAlertRulesShrinkRequest(ManageAlertRulesShrinkRequest &&) = default ;
    ManageAlertRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageAlertRulesShrinkRequest() = default ;
    ManageAlertRulesShrinkRequest& operator=(const ManageAlertRulesShrinkRequest &) = default ;
    ManageAlertRulesShrinkRequest& operator=(ManageAlertRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->callSource_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline ManageAlertRulesShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // callSource Field Functions 
    bool hasCallSource() const { return this->callSource_ != nullptr;};
    void deleteCallSource() { this->callSource_ = nullptr;};
    inline string getCallSource() const { DARABONBA_PTR_GET_DEFAULT(callSource_, "") };
    inline ManageAlertRulesShrinkRequest& setCallSource(string callSource) { DARABONBA_PTR_SET_VALUE(callSource_, callSource) };


  protected:
    // The request body for managing alert rules. This body is shared by the CREATE, UPDATE, PATCH, and BATCH_DELETE actions. Specify the fields based on the action.
    shared_ptr<string> bodyShrink_ {};
    // The identifier of the call source, which specifies the internal integration channel to which the caller belongs (such as bailian, integrationCenter, or managed_service_for_prometheus). This parameter is used to isolate traffic from different call sources. You do not need to specify this parameter for regular OpenAPI calls.
    shared_ptr<string> callSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
