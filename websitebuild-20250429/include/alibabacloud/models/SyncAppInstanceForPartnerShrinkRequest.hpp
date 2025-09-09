// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstance, appInstanceShrink_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstance, appInstanceShrink_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SyncAppInstanceForPartnerShrinkRequest() = default ;
    SyncAppInstanceForPartnerShrinkRequest(const SyncAppInstanceForPartnerShrinkRequest &) = default ;
    SyncAppInstanceForPartnerShrinkRequest(SyncAppInstanceForPartnerShrinkRequest &&) = default ;
    SyncAppInstanceForPartnerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerShrinkRequest() = default ;
    SyncAppInstanceForPartnerShrinkRequest& operator=(const SyncAppInstanceForPartnerShrinkRequest &) = default ;
    SyncAppInstanceForPartnerShrinkRequest& operator=(SyncAppInstanceForPartnerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceShrink_ != nullptr
        && this->eventType_ != nullptr && this->operator_ != nullptr && this->sourceBizId_ != nullptr && this->sourceType_ != nullptr; };
    // appInstanceShrink Field Functions 
    bool hasAppInstanceShrink() const { return this->appInstanceShrink_ != nullptr;};
    void deleteAppInstanceShrink() { this->appInstanceShrink_ = nullptr;};
    inline string appInstanceShrink() const { DARABONBA_PTR_GET_DEFAULT(appInstanceShrink_, "") };
    inline SyncAppInstanceForPartnerShrinkRequest& setAppInstanceShrink(string appInstanceShrink) { DARABONBA_PTR_SET_VALUE(appInstanceShrink_, appInstanceShrink) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SyncAppInstanceForPartnerShrinkRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline SyncAppInstanceForPartnerShrinkRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // sourceBizId Field Functions 
    bool hasSourceBizId() const { return this->sourceBizId_ != nullptr;};
    void deleteSourceBizId() { this->sourceBizId_ = nullptr;};
    inline string sourceBizId() const { DARABONBA_PTR_GET_DEFAULT(sourceBizId_, "") };
    inline SyncAppInstanceForPartnerShrinkRequest& setSourceBizId(string sourceBizId) { DARABONBA_PTR_SET_VALUE(sourceBizId_, sourceBizId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SyncAppInstanceForPartnerShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> appInstanceShrink_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> sourceBizId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
