// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINITIALIZEPROGRESSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINITIALIZEPROGRESSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionInitializeProgressResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInitializeProgressResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInitializeProgressResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
    };
    DescribeSubscriptionInitializeProgressResponseBodyItems() = default ;
    DescribeSubscriptionInitializeProgressResponseBodyItems(const DescribeSubscriptionInitializeProgressResponseBodyItems &) = default ;
    DescribeSubscriptionInitializeProgressResponseBodyItems(DescribeSubscriptionInitializeProgressResponseBodyItems &&) = default ;
    DescribeSubscriptionInitializeProgressResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInitializeProgressResponseBodyItems() = default ;
    DescribeSubscriptionInitializeProgressResponseBodyItems& operator=(const DescribeSubscriptionInitializeProgressResponseBodyItems &) = default ;
    DescribeSubscriptionInitializeProgressResponseBodyItems& operator=(DescribeSubscriptionInitializeProgressResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishTime_ == nullptr
        && return this->progress_ == nullptr && return this->status_ == nullptr && return this->subscriptionId_ == nullptr; };
    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeSubscriptionInitializeProgressResponseBodyItems& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeSubscriptionInitializeProgressResponseBodyItems& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSubscriptionInitializeProgressResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string subscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline DescribeSubscriptionInitializeProgressResponseBodyItems& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


  protected:
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subscriptionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
