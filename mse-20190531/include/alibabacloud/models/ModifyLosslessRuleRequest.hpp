// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOSSLESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOSSLESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ModifyLosslessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLosslessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Aligned, aligned_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FuncType, funcType_);
      DARABONBA_PTR_TO_JSON(LossLessDetail, lossLessDetail_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Notice, notice_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(WarmupTime, warmupTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLosslessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Aligned, aligned_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FuncType, funcType_);
      DARABONBA_PTR_FROM_JSON(LossLessDetail, lossLessDetail_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Notice, notice_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(WarmupTime, warmupTime_);
    };
    ModifyLosslessRuleRequest() = default ;
    ModifyLosslessRuleRequest(const ModifyLosslessRuleRequest &) = default ;
    ModifyLosslessRuleRequest(ModifyLosslessRuleRequest &&) = default ;
    ModifyLosslessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLosslessRuleRequest() = default ;
    ModifyLosslessRuleRequest& operator=(const ModifyLosslessRuleRequest &) = default ;
    ModifyLosslessRuleRequest& operator=(ModifyLosslessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->aligned_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->delayTime_ == nullptr && this->enable_ == nullptr
        && this->funcType_ == nullptr && this->lossLessDetail_ == nullptr && this->namespace_ == nullptr && this->notice_ == nullptr && this->regionId_ == nullptr
        && this->related_ == nullptr && this->warmupTime_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ModifyLosslessRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // aligned Field Functions 
    bool hasAligned() const { return this->aligned_ != nullptr;};
    void deleteAligned() { this->aligned_ = nullptr;};
    inline bool getAligned() const { DARABONBA_PTR_GET_DEFAULT(aligned_, false) };
    inline ModifyLosslessRuleRequest& setAligned(bool aligned) { DARABONBA_PTR_SET_VALUE(aligned_, aligned) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLosslessRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ModifyLosslessRuleRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline ModifyLosslessRuleRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyLosslessRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // funcType Field Functions 
    bool hasFuncType() const { return this->funcType_ != nullptr;};
    void deleteFuncType() { this->funcType_ = nullptr;};
    inline int32_t getFuncType() const { DARABONBA_PTR_GET_DEFAULT(funcType_, 0) };
    inline ModifyLosslessRuleRequest& setFuncType(int32_t funcType) { DARABONBA_PTR_SET_VALUE(funcType_, funcType) };


    // lossLessDetail Field Functions 
    bool hasLossLessDetail() const { return this->lossLessDetail_ != nullptr;};
    void deleteLossLessDetail() { this->lossLessDetail_ = nullptr;};
    inline bool getLossLessDetail() const { DARABONBA_PTR_GET_DEFAULT(lossLessDetail_, false) };
    inline ModifyLosslessRuleRequest& setLossLessDetail(bool lossLessDetail) { DARABONBA_PTR_SET_VALUE(lossLessDetail_, lossLessDetail) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyLosslessRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // notice Field Functions 
    bool hasNotice() const { return this->notice_ != nullptr;};
    void deleteNotice() { this->notice_ = nullptr;};
    inline bool getNotice() const { DARABONBA_PTR_GET_DEFAULT(notice_, false) };
    inline ModifyLosslessRuleRequest& setNotice(bool notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLosslessRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline bool getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, false) };
    inline ModifyLosslessRuleRequest& setRelated(bool related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // warmupTime Field Functions 
    bool hasWarmupTime() const { return this->warmupTime_ != nullptr;};
    void deleteWarmupTime() { this->warmupTime_ = nullptr;};
    inline int32_t getWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(warmupTime_, 0) };
    inline ModifyLosslessRuleRequest& setWarmupTime(int32_t warmupTime) { DARABONBA_PTR_SET_VALUE(warmupTime_, warmupTime) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to align the lifecycle of the application in the Kubernetes cluster with that of the microservice.
    // 
    // This parameter is required.
    shared_ptr<bool> aligned_ {};
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The name of the application.
    shared_ptr<string> appName_ {};
    // The registration latency.
    // 
    // This parameter is required.
    shared_ptr<int32_t> delayTime_ {};
    // Specifies whether to enable the alert rule. Valid values:
    // 
    // *   `true`: enables the rule.
    // *   `false`: disables the rule.
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The slope of the prefetching curve.
    // 
    // This parameter is required.
    shared_ptr<int32_t> funcType_ {};
    // Specifies whether to display online and offline processing details.
    shared_ptr<bool> lossLessDetail_ {};
    // The microservice namespace to which the rule applies.
    shared_ptr<string> namespace_ {};
    // Specifies whether to enable notification.
    shared_ptr<bool> notice_ {};
    // The ID of the region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to associate with service prefetching.
    // 
    // This parameter is required.
    shared_ptr<bool> related_ {};
    // The prefetching duration.
    // 
    // This parameter is required.
    shared_ptr<int32_t> warmupTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
