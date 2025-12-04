// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODYCONFIGHISTORYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODYCONFIGHISTORYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeConfigHistoryResponseBodyConfigHistoryItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigHistoryResponseBodyConfigHistoryItems& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeId, changeId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigHistoryResponseBodyConfigHistoryItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeId, changeId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeConfigHistoryResponseBodyConfigHistoryItems() = default ;
    DescribeConfigHistoryResponseBodyConfigHistoryItems(const DescribeConfigHistoryResponseBodyConfigHistoryItems &) = default ;
    DescribeConfigHistoryResponseBodyConfigHistoryItems(DescribeConfigHistoryResponseBodyConfigHistoryItems &&) = default ;
    DescribeConfigHistoryResponseBodyConfigHistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigHistoryResponseBodyConfigHistoryItems() = default ;
    DescribeConfigHistoryResponseBodyConfigHistoryItems& operator=(const DescribeConfigHistoryResponseBodyConfigHistoryItems &) = default ;
    DescribeConfigHistoryResponseBodyConfigHistoryItems& operator=(DescribeConfigHistoryResponseBodyConfigHistoryItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeId_ == nullptr
        && return this->ownerId_ == nullptr && return this->reason_ == nullptr && return this->success_ == nullptr && return this->time_ == nullptr; };
    // changeId Field Functions 
    bool hasChangeId() const { return this->changeId_ != nullptr;};
    void deleteChangeId() { this->changeId_ = nullptr;};
    inline string changeId() const { DARABONBA_PTR_GET_DEFAULT(changeId_, "") };
    inline DescribeConfigHistoryResponseBodyConfigHistoryItems& setChangeId(string changeId) { DARABONBA_PTR_SET_VALUE(changeId_, changeId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeConfigHistoryResponseBodyConfigHistoryItems& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeConfigHistoryResponseBodyConfigHistoryItems& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeConfigHistoryResponseBodyConfigHistoryItems& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeConfigHistoryResponseBodyConfigHistoryItems& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The ID of the change record.
    std::shared_ptr<string> changeId_ = nullptr;
    // The user ID (UID) of the Alibaba Cloud account.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The reason for the setting modification of the configuration parameters.
    std::shared_ptr<string> reason_ = nullptr;
    // Indicates whether the setting modification of the configuration parameters took effect. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // The time when the values of the configuration parameters were changed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
