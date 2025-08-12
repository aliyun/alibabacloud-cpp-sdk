// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutEventRuleTargetsRequestContactParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsRequestFcParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsRequestMnsParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsRequestOpenApiParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsRequestSlsParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsRequestWebhookParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_TO_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_TO_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_TO_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_TO_JSON(WebhookParameters, webhookParameters_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_FROM_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_FROM_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_FROM_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_FROM_JSON(WebhookParameters, webhookParameters_);
    };
    PutEventRuleTargetsRequest() = default ;
    PutEventRuleTargetsRequest(const PutEventRuleTargetsRequest &) = default ;
    PutEventRuleTargetsRequest(PutEventRuleTargetsRequest &&) = default ;
    PutEventRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequest() = default ;
    PutEventRuleTargetsRequest& operator=(const PutEventRuleTargetsRequest &) = default ;
    PutEventRuleTargetsRequest& operator=(PutEventRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactParameters_ != nullptr
        && this->fcParameters_ != nullptr && this->mnsParameters_ != nullptr && this->openApiParameters_ != nullptr && this->regionId_ != nullptr && this->ruleName_ != nullptr
        && this->slsParameters_ != nullptr && this->webhookParameters_ != nullptr; };
    // contactParameters Field Functions 
    bool hasContactParameters() const { return this->contactParameters_ != nullptr;};
    void deleteContactParameters() { this->contactParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequestContactParameters> & contactParameters() const { DARABONBA_PTR_GET_CONST(contactParameters_, vector<PutEventRuleTargetsRequestContactParameters>) };
    inline vector<PutEventRuleTargetsRequestContactParameters> contactParameters() { DARABONBA_PTR_GET(contactParameters_, vector<PutEventRuleTargetsRequestContactParameters>) };
    inline PutEventRuleTargetsRequest& setContactParameters(const vector<PutEventRuleTargetsRequestContactParameters> & contactParameters) { DARABONBA_PTR_SET_VALUE(contactParameters_, contactParameters) };
    inline PutEventRuleTargetsRequest& setContactParameters(vector<PutEventRuleTargetsRequestContactParameters> && contactParameters) { DARABONBA_PTR_SET_RVALUE(contactParameters_, contactParameters) };


    // fcParameters Field Functions 
    bool hasFcParameters() const { return this->fcParameters_ != nullptr;};
    void deleteFcParameters() { this->fcParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequestFcParameters> & fcParameters() const { DARABONBA_PTR_GET_CONST(fcParameters_, vector<PutEventRuleTargetsRequestFcParameters>) };
    inline vector<PutEventRuleTargetsRequestFcParameters> fcParameters() { DARABONBA_PTR_GET(fcParameters_, vector<PutEventRuleTargetsRequestFcParameters>) };
    inline PutEventRuleTargetsRequest& setFcParameters(const vector<PutEventRuleTargetsRequestFcParameters> & fcParameters) { DARABONBA_PTR_SET_VALUE(fcParameters_, fcParameters) };
    inline PutEventRuleTargetsRequest& setFcParameters(vector<PutEventRuleTargetsRequestFcParameters> && fcParameters) { DARABONBA_PTR_SET_RVALUE(fcParameters_, fcParameters) };


    // mnsParameters Field Functions 
    bool hasMnsParameters() const { return this->mnsParameters_ != nullptr;};
    void deleteMnsParameters() { this->mnsParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequestMnsParameters> & mnsParameters() const { DARABONBA_PTR_GET_CONST(mnsParameters_, vector<PutEventRuleTargetsRequestMnsParameters>) };
    inline vector<PutEventRuleTargetsRequestMnsParameters> mnsParameters() { DARABONBA_PTR_GET(mnsParameters_, vector<PutEventRuleTargetsRequestMnsParameters>) };
    inline PutEventRuleTargetsRequest& setMnsParameters(const vector<PutEventRuleTargetsRequestMnsParameters> & mnsParameters) { DARABONBA_PTR_SET_VALUE(mnsParameters_, mnsParameters) };
    inline PutEventRuleTargetsRequest& setMnsParameters(vector<PutEventRuleTargetsRequestMnsParameters> && mnsParameters) { DARABONBA_PTR_SET_RVALUE(mnsParameters_, mnsParameters) };


    // openApiParameters Field Functions 
    bool hasOpenApiParameters() const { return this->openApiParameters_ != nullptr;};
    void deleteOpenApiParameters() { this->openApiParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequestOpenApiParameters> & openApiParameters() const { DARABONBA_PTR_GET_CONST(openApiParameters_, vector<PutEventRuleTargetsRequestOpenApiParameters>) };
    inline vector<PutEventRuleTargetsRequestOpenApiParameters> openApiParameters() { DARABONBA_PTR_GET(openApiParameters_, vector<PutEventRuleTargetsRequestOpenApiParameters>) };
    inline PutEventRuleTargetsRequest& setOpenApiParameters(const vector<PutEventRuleTargetsRequestOpenApiParameters> & openApiParameters) { DARABONBA_PTR_SET_VALUE(openApiParameters_, openApiParameters) };
    inline PutEventRuleTargetsRequest& setOpenApiParameters(vector<PutEventRuleTargetsRequestOpenApiParameters> && openApiParameters) { DARABONBA_PTR_SET_RVALUE(openApiParameters_, openApiParameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutEventRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutEventRuleTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // slsParameters Field Functions 
    bool hasSlsParameters() const { return this->slsParameters_ != nullptr;};
    void deleteSlsParameters() { this->slsParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequestSlsParameters> & slsParameters() const { DARABONBA_PTR_GET_CONST(slsParameters_, vector<PutEventRuleTargetsRequestSlsParameters>) };
    inline vector<PutEventRuleTargetsRequestSlsParameters> slsParameters() { DARABONBA_PTR_GET(slsParameters_, vector<PutEventRuleTargetsRequestSlsParameters>) };
    inline PutEventRuleTargetsRequest& setSlsParameters(const vector<PutEventRuleTargetsRequestSlsParameters> & slsParameters) { DARABONBA_PTR_SET_VALUE(slsParameters_, slsParameters) };
    inline PutEventRuleTargetsRequest& setSlsParameters(vector<PutEventRuleTargetsRequestSlsParameters> && slsParameters) { DARABONBA_PTR_SET_RVALUE(slsParameters_, slsParameters) };


    // webhookParameters Field Functions 
    bool hasWebhookParameters() const { return this->webhookParameters_ != nullptr;};
    void deleteWebhookParameters() { this->webhookParameters_ = nullptr;};
    inline const vector<PutEventRuleTargetsRequestWebhookParameters> & webhookParameters() const { DARABONBA_PTR_GET_CONST(webhookParameters_, vector<PutEventRuleTargetsRequestWebhookParameters>) };
    inline vector<PutEventRuleTargetsRequestWebhookParameters> webhookParameters() { DARABONBA_PTR_GET(webhookParameters_, vector<PutEventRuleTargetsRequestWebhookParameters>) };
    inline PutEventRuleTargetsRequest& setWebhookParameters(const vector<PutEventRuleTargetsRequestWebhookParameters> & webhookParameters) { DARABONBA_PTR_SET_VALUE(webhookParameters_, webhookParameters) };
    inline PutEventRuleTargetsRequest& setWebhookParameters(vector<PutEventRuleTargetsRequestWebhookParameters> && webhookParameters) { DARABONBA_PTR_SET_RVALUE(webhookParameters_, webhookParameters) };


  protected:
    // The information about the alert contact groups that receive alert notifications.
    std::shared_ptr<vector<PutEventRuleTargetsRequestContactParameters>> contactParameters_ = nullptr;
    // The information about the recipients in Function Compute.
    std::shared_ptr<vector<PutEventRuleTargetsRequestFcParameters>> fcParameters_ = nullptr;
    // The notifications of Simple Message Queue (formerly MNS) (SMQ).
    std::shared_ptr<vector<PutEventRuleTargetsRequestMnsParameters>> mnsParameters_ = nullptr;
    // The parameters of API callback notification.
    std::shared_ptr<vector<PutEventRuleTargetsRequestOpenApiParameters>> openApiParameters_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The information about the recipients in Simple Log Service.
    std::shared_ptr<vector<PutEventRuleTargetsRequestSlsParameters>> slsParameters_ = nullptr;
    // The information about the callback URLs that are used to receive alert notifications.
    std::shared_ptr<vector<PutEventRuleTargetsRequestWebhookParameters>> webhookParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
