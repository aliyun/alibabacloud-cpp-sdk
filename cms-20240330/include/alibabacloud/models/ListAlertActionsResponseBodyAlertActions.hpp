// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsEbParam.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsEssParam.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsFc3Param.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsFcParam.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsMnsParam.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsPagerDutyParam.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsSlsParam.hpp>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActionsWebhookParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActions& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionId, alertActionId_);
      DARABONBA_PTR_TO_JSON(alertActionName, alertActionName_);
      DARABONBA_PTR_TO_JSON(ebParam, ebParam_);
      DARABONBA_PTR_TO_JSON(essParam, essParam_);
      DARABONBA_PTR_TO_JSON(fc3Param, fc3Param_);
      DARABONBA_PTR_TO_JSON(fcParam, fcParam_);
      DARABONBA_PTR_TO_JSON(mnsParam, mnsParam_);
      DARABONBA_PTR_TO_JSON(pagerDutyParam, pagerDutyParam_);
      DARABONBA_PTR_TO_JSON(slsParam, slsParam_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(webhookParam, webhookParam_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActions& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionId, alertActionId_);
      DARABONBA_PTR_FROM_JSON(alertActionName, alertActionName_);
      DARABONBA_PTR_FROM_JSON(ebParam, ebParam_);
      DARABONBA_PTR_FROM_JSON(essParam, essParam_);
      DARABONBA_PTR_FROM_JSON(fc3Param, fc3Param_);
      DARABONBA_PTR_FROM_JSON(fcParam, fcParam_);
      DARABONBA_PTR_FROM_JSON(mnsParam, mnsParam_);
      DARABONBA_PTR_FROM_JSON(pagerDutyParam, pagerDutyParam_);
      DARABONBA_PTR_FROM_JSON(slsParam, slsParam_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(webhookParam, webhookParam_);
    };
    ListAlertActionsResponseBodyAlertActions() = default ;
    ListAlertActionsResponseBodyAlertActions(const ListAlertActionsResponseBodyAlertActions &) = default ;
    ListAlertActionsResponseBodyAlertActions(ListAlertActionsResponseBodyAlertActions &&) = default ;
    ListAlertActionsResponseBodyAlertActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActions() = default ;
    ListAlertActionsResponseBodyAlertActions& operator=(const ListAlertActionsResponseBodyAlertActions &) = default ;
    ListAlertActionsResponseBodyAlertActions& operator=(ListAlertActionsResponseBodyAlertActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertActionId_ != nullptr
        && this->alertActionName_ != nullptr && this->ebParam_ != nullptr && this->essParam_ != nullptr && this->fc3Param_ != nullptr && this->fcParam_ != nullptr
        && this->mnsParam_ != nullptr && this->pagerDutyParam_ != nullptr && this->slsParam_ != nullptr && this->type_ != nullptr && this->webhookParam_ != nullptr; };
    // alertActionId Field Functions 
    bool hasAlertActionId() const { return this->alertActionId_ != nullptr;};
    void deleteAlertActionId() { this->alertActionId_ = nullptr;};
    inline string alertActionId() const { DARABONBA_PTR_GET_DEFAULT(alertActionId_, "") };
    inline ListAlertActionsResponseBodyAlertActions& setAlertActionId(string alertActionId) { DARABONBA_PTR_SET_VALUE(alertActionId_, alertActionId) };


    // alertActionName Field Functions 
    bool hasAlertActionName() const { return this->alertActionName_ != nullptr;};
    void deleteAlertActionName() { this->alertActionName_ = nullptr;};
    inline string alertActionName() const { DARABONBA_PTR_GET_DEFAULT(alertActionName_, "") };
    inline ListAlertActionsResponseBodyAlertActions& setAlertActionName(string alertActionName) { DARABONBA_PTR_SET_VALUE(alertActionName_, alertActionName) };


    // ebParam Field Functions 
    bool hasEbParam() const { return this->ebParam_ != nullptr;};
    void deleteEbParam() { this->ebParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsEbParam & ebParam() const { DARABONBA_PTR_GET_CONST(ebParam_, Models::ListAlertActionsResponseBodyAlertActionsEbParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsEbParam ebParam() { DARABONBA_PTR_GET(ebParam_, Models::ListAlertActionsResponseBodyAlertActionsEbParam) };
    inline ListAlertActionsResponseBodyAlertActions& setEbParam(const Models::ListAlertActionsResponseBodyAlertActionsEbParam & ebParam) { DARABONBA_PTR_SET_VALUE(ebParam_, ebParam) };
    inline ListAlertActionsResponseBodyAlertActions& setEbParam(Models::ListAlertActionsResponseBodyAlertActionsEbParam && ebParam) { DARABONBA_PTR_SET_RVALUE(ebParam_, ebParam) };


    // essParam Field Functions 
    bool hasEssParam() const { return this->essParam_ != nullptr;};
    void deleteEssParam() { this->essParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsEssParam & essParam() const { DARABONBA_PTR_GET_CONST(essParam_, Models::ListAlertActionsResponseBodyAlertActionsEssParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsEssParam essParam() { DARABONBA_PTR_GET(essParam_, Models::ListAlertActionsResponseBodyAlertActionsEssParam) };
    inline ListAlertActionsResponseBodyAlertActions& setEssParam(const Models::ListAlertActionsResponseBodyAlertActionsEssParam & essParam) { DARABONBA_PTR_SET_VALUE(essParam_, essParam) };
    inline ListAlertActionsResponseBodyAlertActions& setEssParam(Models::ListAlertActionsResponseBodyAlertActionsEssParam && essParam) { DARABONBA_PTR_SET_RVALUE(essParam_, essParam) };


    // fc3Param Field Functions 
    bool hasFc3Param() const { return this->fc3Param_ != nullptr;};
    void deleteFc3Param() { this->fc3Param_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsFc3Param & fc3Param() const { DARABONBA_PTR_GET_CONST(fc3Param_, Models::ListAlertActionsResponseBodyAlertActionsFc3Param) };
    inline Models::ListAlertActionsResponseBodyAlertActionsFc3Param fc3Param() { DARABONBA_PTR_GET(fc3Param_, Models::ListAlertActionsResponseBodyAlertActionsFc3Param) };
    inline ListAlertActionsResponseBodyAlertActions& setFc3Param(const Models::ListAlertActionsResponseBodyAlertActionsFc3Param & fc3Param) { DARABONBA_PTR_SET_VALUE(fc3Param_, fc3Param) };
    inline ListAlertActionsResponseBodyAlertActions& setFc3Param(Models::ListAlertActionsResponseBodyAlertActionsFc3Param && fc3Param) { DARABONBA_PTR_SET_RVALUE(fc3Param_, fc3Param) };


    // fcParam Field Functions 
    bool hasFcParam() const { return this->fcParam_ != nullptr;};
    void deleteFcParam() { this->fcParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsFcParam & fcParam() const { DARABONBA_PTR_GET_CONST(fcParam_, Models::ListAlertActionsResponseBodyAlertActionsFcParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsFcParam fcParam() { DARABONBA_PTR_GET(fcParam_, Models::ListAlertActionsResponseBodyAlertActionsFcParam) };
    inline ListAlertActionsResponseBodyAlertActions& setFcParam(const Models::ListAlertActionsResponseBodyAlertActionsFcParam & fcParam) { DARABONBA_PTR_SET_VALUE(fcParam_, fcParam) };
    inline ListAlertActionsResponseBodyAlertActions& setFcParam(Models::ListAlertActionsResponseBodyAlertActionsFcParam && fcParam) { DARABONBA_PTR_SET_RVALUE(fcParam_, fcParam) };


    // mnsParam Field Functions 
    bool hasMnsParam() const { return this->mnsParam_ != nullptr;};
    void deleteMnsParam() { this->mnsParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsMnsParam & mnsParam() const { DARABONBA_PTR_GET_CONST(mnsParam_, Models::ListAlertActionsResponseBodyAlertActionsMnsParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsMnsParam mnsParam() { DARABONBA_PTR_GET(mnsParam_, Models::ListAlertActionsResponseBodyAlertActionsMnsParam) };
    inline ListAlertActionsResponseBodyAlertActions& setMnsParam(const Models::ListAlertActionsResponseBodyAlertActionsMnsParam & mnsParam) { DARABONBA_PTR_SET_VALUE(mnsParam_, mnsParam) };
    inline ListAlertActionsResponseBodyAlertActions& setMnsParam(Models::ListAlertActionsResponseBodyAlertActionsMnsParam && mnsParam) { DARABONBA_PTR_SET_RVALUE(mnsParam_, mnsParam) };


    // pagerDutyParam Field Functions 
    bool hasPagerDutyParam() const { return this->pagerDutyParam_ != nullptr;};
    void deletePagerDutyParam() { this->pagerDutyParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam & pagerDutyParam() const { DARABONBA_PTR_GET_CONST(pagerDutyParam_, Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam pagerDutyParam() { DARABONBA_PTR_GET(pagerDutyParam_, Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam) };
    inline ListAlertActionsResponseBodyAlertActions& setPagerDutyParam(const Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam & pagerDutyParam) { DARABONBA_PTR_SET_VALUE(pagerDutyParam_, pagerDutyParam) };
    inline ListAlertActionsResponseBodyAlertActions& setPagerDutyParam(Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam && pagerDutyParam) { DARABONBA_PTR_SET_RVALUE(pagerDutyParam_, pagerDutyParam) };


    // slsParam Field Functions 
    bool hasSlsParam() const { return this->slsParam_ != nullptr;};
    void deleteSlsParam() { this->slsParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsSlsParam & slsParam() const { DARABONBA_PTR_GET_CONST(slsParam_, Models::ListAlertActionsResponseBodyAlertActionsSlsParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsSlsParam slsParam() { DARABONBA_PTR_GET(slsParam_, Models::ListAlertActionsResponseBodyAlertActionsSlsParam) };
    inline ListAlertActionsResponseBodyAlertActions& setSlsParam(const Models::ListAlertActionsResponseBodyAlertActionsSlsParam & slsParam) { DARABONBA_PTR_SET_VALUE(slsParam_, slsParam) };
    inline ListAlertActionsResponseBodyAlertActions& setSlsParam(Models::ListAlertActionsResponseBodyAlertActionsSlsParam && slsParam) { DARABONBA_PTR_SET_RVALUE(slsParam_, slsParam) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertActionsResponseBodyAlertActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webhookParam Field Functions 
    bool hasWebhookParam() const { return this->webhookParam_ != nullptr;};
    void deleteWebhookParam() { this->webhookParam_ = nullptr;};
    inline const Models::ListAlertActionsResponseBodyAlertActionsWebhookParam & webhookParam() const { DARABONBA_PTR_GET_CONST(webhookParam_, Models::ListAlertActionsResponseBodyAlertActionsWebhookParam) };
    inline Models::ListAlertActionsResponseBodyAlertActionsWebhookParam webhookParam() { DARABONBA_PTR_GET(webhookParam_, Models::ListAlertActionsResponseBodyAlertActionsWebhookParam) };
    inline ListAlertActionsResponseBodyAlertActions& setWebhookParam(const Models::ListAlertActionsResponseBodyAlertActionsWebhookParam & webhookParam) { DARABONBA_PTR_SET_VALUE(webhookParam_, webhookParam) };
    inline ListAlertActionsResponseBodyAlertActions& setWebhookParam(Models::ListAlertActionsResponseBodyAlertActionsWebhookParam && webhookParam) { DARABONBA_PTR_SET_RVALUE(webhookParam_, webhookParam) };


  protected:
    std::shared_ptr<string> alertActionId_ = nullptr;
    std::shared_ptr<string> alertActionName_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsEbParam> ebParam_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsEssParam> essParam_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsFc3Param> fc3Param_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsFcParam> fcParam_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsMnsParam> mnsParam_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsPagerDutyParam> pagerDutyParam_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsSlsParam> slsParam_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::ListAlertActionsResponseBodyAlertActionsWebhookParam> webhookParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
