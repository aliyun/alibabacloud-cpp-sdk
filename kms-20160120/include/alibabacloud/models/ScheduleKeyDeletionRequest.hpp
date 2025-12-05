// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEKEYDELETIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEKEYDELETIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ScheduleKeyDeletionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleKeyDeletionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(PendingWindowInDays, pendingWindowInDays_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleKeyDeletionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(PendingWindowInDays, pendingWindowInDays_);
    };
    ScheduleKeyDeletionRequest() = default ;
    ScheduleKeyDeletionRequest(const ScheduleKeyDeletionRequest &) = default ;
    ScheduleKeyDeletionRequest(ScheduleKeyDeletionRequest &&) = default ;
    ScheduleKeyDeletionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleKeyDeletionRequest() = default ;
    ScheduleKeyDeletionRequest& operator=(const ScheduleKeyDeletionRequest &) = default ;
    ScheduleKeyDeletionRequest& operator=(ScheduleKeyDeletionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->pendingWindowInDays_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ScheduleKeyDeletionRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // pendingWindowInDays Field Functions 
    bool hasPendingWindowInDays() const { return this->pendingWindowInDays_ != nullptr;};
    void deletePendingWindowInDays() { this->pendingWindowInDays_ = nullptr;};
    inline int32_t pendingWindowInDays() const { DARABONBA_PTR_GET_DEFAULT(pendingWindowInDays_, 0) };
    inline ScheduleKeyDeletionRequest& setPendingWindowInDays(int32_t pendingWindowInDays) { DARABONBA_PTR_SET_VALUE(pendingWindowInDays_, pendingWindowInDays) };


  protected:
    // The ID of the customer master key (CMK). The ID must be globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // The scheduled period after which the CMK is deleted. During this period, the CMK is in the PendingDeletion state. After this period ends, you cannot cancel the key deletion task.
    // 
    // Valid values: 7 to 366.
    // 
    // Unit: days.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pendingWindowInDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
