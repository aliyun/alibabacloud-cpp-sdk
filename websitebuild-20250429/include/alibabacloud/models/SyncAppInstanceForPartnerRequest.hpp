// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncAppInstanceForPartnerRequestAppInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstance, appInstance_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstance, appInstance_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SyncAppInstanceForPartnerRequest() = default ;
    SyncAppInstanceForPartnerRequest(const SyncAppInstanceForPartnerRequest &) = default ;
    SyncAppInstanceForPartnerRequest(SyncAppInstanceForPartnerRequest &&) = default ;
    SyncAppInstanceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerRequest() = default ;
    SyncAppInstanceForPartnerRequest& operator=(const SyncAppInstanceForPartnerRequest &) = default ;
    SyncAppInstanceForPartnerRequest& operator=(SyncAppInstanceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstance_ == nullptr
        && return this->eventType_ == nullptr && return this->operator_ == nullptr && return this->sourceBizId_ == nullptr && return this->sourceType_ == nullptr; };
    // appInstance Field Functions 
    bool hasAppInstance() const { return this->appInstance_ != nullptr;};
    void deleteAppInstance() { this->appInstance_ = nullptr;};
    inline const SyncAppInstanceForPartnerRequestAppInstance & appInstance() const { DARABONBA_PTR_GET_CONST(appInstance_, SyncAppInstanceForPartnerRequestAppInstance) };
    inline SyncAppInstanceForPartnerRequestAppInstance appInstance() { DARABONBA_PTR_GET(appInstance_, SyncAppInstanceForPartnerRequestAppInstance) };
    inline SyncAppInstanceForPartnerRequest& setAppInstance(const SyncAppInstanceForPartnerRequestAppInstance & appInstance) { DARABONBA_PTR_SET_VALUE(appInstance_, appInstance) };
    inline SyncAppInstanceForPartnerRequest& setAppInstance(SyncAppInstanceForPartnerRequestAppInstance && appInstance) { DARABONBA_PTR_SET_RVALUE(appInstance_, appInstance) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SyncAppInstanceForPartnerRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline SyncAppInstanceForPartnerRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // sourceBizId Field Functions 
    bool hasSourceBizId() const { return this->sourceBizId_ != nullptr;};
    void deleteSourceBizId() { this->sourceBizId_ = nullptr;};
    inline string sourceBizId() const { DARABONBA_PTR_GET_DEFAULT(sourceBizId_, "") };
    inline SyncAppInstanceForPartnerRequest& setSourceBizId(string sourceBizId) { DARABONBA_PTR_SET_VALUE(sourceBizId_, sourceBizId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SyncAppInstanceForPartnerRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<SyncAppInstanceForPartnerRequestAppInstance> appInstance_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> sourceBizId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
