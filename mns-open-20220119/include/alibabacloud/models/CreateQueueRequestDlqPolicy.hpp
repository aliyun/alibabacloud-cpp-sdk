// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUEREQUESTDLQPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUEREQUESTDLQPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class CreateQueueRequestDlqPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueRequestDlqPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MaxReceiveCount, maxReceiveCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueRequestDlqPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MaxReceiveCount, maxReceiveCount_);
    };
    CreateQueueRequestDlqPolicy() = default ;
    CreateQueueRequestDlqPolicy(const CreateQueueRequestDlqPolicy &) = default ;
    CreateQueueRequestDlqPolicy(CreateQueueRequestDlqPolicy &&) = default ;
    CreateQueueRequestDlqPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueueRequestDlqPolicy() = default ;
    CreateQueueRequestDlqPolicy& operator=(const CreateQueueRequestDlqPolicy &) = default ;
    CreateQueueRequestDlqPolicy& operator=(CreateQueueRequestDlqPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deadLetterTargetQueue_ != nullptr
        && this->enabled_ != nullptr && this->maxReceiveCount_ != nullptr; };
    // deadLetterTargetQueue Field Functions 
    bool hasDeadLetterTargetQueue() const { return this->deadLetterTargetQueue_ != nullptr;};
    void deleteDeadLetterTargetQueue() { this->deadLetterTargetQueue_ = nullptr;};
    inline string deadLetterTargetQueue() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetQueue_, "") };
    inline CreateQueueRequestDlqPolicy& setDeadLetterTargetQueue(string deadLetterTargetQueue) { DARABONBA_PTR_SET_VALUE(deadLetterTargetQueue_, deadLetterTargetQueue) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateQueueRequestDlqPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // maxReceiveCount Field Functions 
    bool hasMaxReceiveCount() const { return this->maxReceiveCount_ != nullptr;};
    void deleteMaxReceiveCount() { this->maxReceiveCount_ = nullptr;};
    inline int32_t maxReceiveCount() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveCount_, 0) };
    inline CreateQueueRequestDlqPolicy& setMaxReceiveCount(int32_t maxReceiveCount) { DARABONBA_PTR_SET_VALUE(maxReceiveCount_, maxReceiveCount) };


  protected:
    // The queue to which dead-letter messages are delivered.
    std::shared_ptr<string> deadLetterTargetQueue_ = nullptr;
    // Specifies whether to enable the dead-letter message delivery.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The maximum number of retries.
    std::shared_ptr<int32_t> maxReceiveCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
