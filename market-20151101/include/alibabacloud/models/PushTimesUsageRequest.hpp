// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTIMESUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHTIMESUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class PushTimesUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTimesUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Adjust, adjust_);
      DARABONBA_PTR_TO_JSON(AdjustDate, adjustDate_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mark, mark_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, PushTimesUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Adjust, adjust_);
      DARABONBA_PTR_FROM_JSON(AdjustDate, adjustDate_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mark, mark_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    PushTimesUsageRequest() = default ;
    PushTimesUsageRequest(const PushTimesUsageRequest &) = default ;
    PushTimesUsageRequest(PushTimesUsageRequest &&) = default ;
    PushTimesUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTimesUsageRequest() = default ;
    PushTimesUsageRequest& operator=(const PushTimesUsageRequest &) = default ;
    PushTimesUsageRequest& operator=(PushTimesUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjust_ == nullptr
        && this->adjustDate_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->mark_ == nullptr && this->times_ == nullptr; };
    // adjust Field Functions 
    bool hasAdjust() const { return this->adjust_ != nullptr;};
    void deleteAdjust() { this->adjust_ = nullptr;};
    inline bool getAdjust() const { DARABONBA_PTR_GET_DEFAULT(adjust_, false) };
    inline PushTimesUsageRequest& setAdjust(bool adjust) { DARABONBA_PTR_SET_VALUE(adjust_, adjust) };


    // adjustDate Field Functions 
    bool hasAdjustDate() const { return this->adjustDate_ != nullptr;};
    void deleteAdjustDate() { this->adjustDate_ = nullptr;};
    inline int64_t getAdjustDate() const { DARABONBA_PTR_GET_DEFAULT(adjustDate_, 0L) };
    inline PushTimesUsageRequest& setAdjustDate(int64_t adjustDate) { DARABONBA_PTR_SET_VALUE(adjustDate_, adjustDate) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PushTimesUsageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PushTimesUsageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mark Field Functions 
    bool hasMark() const { return this->mark_ != nullptr;};
    void deleteMark() { this->mark_ = nullptr;};
    inline string getMark() const { DARABONBA_PTR_GET_DEFAULT(mark_, "") };
    inline PushTimesUsageRequest& setMark(string mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int64_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0L) };
    inline PushTimesUsageRequest& setTimes(int64_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    shared_ptr<bool> adjust_ {};
    shared_ptr<int64_t> adjustDate_ {};
    // The client token that ensures the idempotency of the request. We recommend that you use a UUID. The same `ClientToken` can be submitted only once within 24 hours. Use the same `ClientToken` when retrying the same operation. Use a new `ClientToken` for new business operations.
    shared_ptr<string> clientToken_ {};
    // The Alibaba Cloud Marketplace instance ID.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> mark_ {};
    // The number of uses to deduct. The value must be greater than 0.
    shared_ptr<int64_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
