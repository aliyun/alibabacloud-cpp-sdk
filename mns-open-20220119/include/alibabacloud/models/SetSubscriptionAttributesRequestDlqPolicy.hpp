// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESREQUESTDLQPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESREQUESTDLQPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetSubscriptionAttributesRequestDlqPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSubscriptionAttributesRequestDlqPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, SetSubscriptionAttributesRequestDlqPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    SetSubscriptionAttributesRequestDlqPolicy() = default ;
    SetSubscriptionAttributesRequestDlqPolicy(const SetSubscriptionAttributesRequestDlqPolicy &) = default ;
    SetSubscriptionAttributesRequestDlqPolicy(SetSubscriptionAttributesRequestDlqPolicy &&) = default ;
    SetSubscriptionAttributesRequestDlqPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSubscriptionAttributesRequestDlqPolicy() = default ;
    SetSubscriptionAttributesRequestDlqPolicy& operator=(const SetSubscriptionAttributesRequestDlqPolicy &) = default ;
    SetSubscriptionAttributesRequestDlqPolicy& operator=(SetSubscriptionAttributesRequestDlqPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deadLetterTargetQueue_ != nullptr
        && this->enabled_ != nullptr; };
    // deadLetterTargetQueue Field Functions 
    bool hasDeadLetterTargetQueue() const { return this->deadLetterTargetQueue_ != nullptr;};
    void deleteDeadLetterTargetQueue() { this->deadLetterTargetQueue_ = nullptr;};
    inline string deadLetterTargetQueue() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetQueue_, "") };
    inline SetSubscriptionAttributesRequestDlqPolicy& setDeadLetterTargetQueue(string deadLetterTargetQueue) { DARABONBA_PTR_SET_VALUE(deadLetterTargetQueue_, deadLetterTargetQueue) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline SetSubscriptionAttributesRequestDlqPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The queue to which dead-letter messages are delivered.
    std::shared_ptr<string> deadLetterTargetQueue_ = nullptr;
    // Specifies whether to enable the dead-letter message delivery.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
