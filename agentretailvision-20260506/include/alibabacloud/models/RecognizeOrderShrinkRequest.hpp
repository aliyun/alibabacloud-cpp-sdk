// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class RecognizeOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CandidateItems, candidateItemsShrink_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(OrderUniqueId, orderUniqueId_);
      DARABONBA_PTR_TO_JSON(VideoUrls, videoUrlsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CandidateItems, candidateItemsShrink_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(OrderUniqueId, orderUniqueId_);
      DARABONBA_PTR_FROM_JSON(VideoUrls, videoUrlsShrink_);
    };
    RecognizeOrderShrinkRequest() = default ;
    RecognizeOrderShrinkRequest(const RecognizeOrderShrinkRequest &) = default ;
    RecognizeOrderShrinkRequest(RecognizeOrderShrinkRequest &&) = default ;
    RecognizeOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeOrderShrinkRequest() = default ;
    RecognizeOrderShrinkRequest& operator=(const RecognizeOrderShrinkRequest &) = default ;
    RecognizeOrderShrinkRequest& operator=(RecognizeOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->candidateItemsShrink_ == nullptr && this->deviceId_ == nullptr && this->orderUniqueId_ == nullptr && this->videoUrlsShrink_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline RecognizeOrderShrinkRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // candidateItemsShrink Field Functions 
    bool hasCandidateItemsShrink() const { return this->candidateItemsShrink_ != nullptr;};
    void deleteCandidateItemsShrink() { this->candidateItemsShrink_ = nullptr;};
    inline string getCandidateItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(candidateItemsShrink_, "") };
    inline RecognizeOrderShrinkRequest& setCandidateItemsShrink(string candidateItemsShrink) { DARABONBA_PTR_SET_VALUE(candidateItemsShrink_, candidateItemsShrink) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline RecognizeOrderShrinkRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // orderUniqueId Field Functions 
    bool hasOrderUniqueId() const { return this->orderUniqueId_ != nullptr;};
    void deleteOrderUniqueId() { this->orderUniqueId_ = nullptr;};
    inline string getOrderUniqueId() const { DARABONBA_PTR_GET_DEFAULT(orderUniqueId_, "") };
    inline RecognizeOrderShrinkRequest& setOrderUniqueId(string orderUniqueId) { DARABONBA_PTR_SET_VALUE(orderUniqueId_, orderUniqueId) };


    // videoUrlsShrink Field Functions 
    bool hasVideoUrlsShrink() const { return this->videoUrlsShrink_ != nullptr;};
    void deleteVideoUrlsShrink() { this->videoUrlsShrink_ = nullptr;};
    inline string getVideoUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(videoUrlsShrink_, "") };
    inline RecognizeOrderShrinkRequest& setVideoUrlsShrink(string videoUrlsShrink) { DARABONBA_PTR_SET_VALUE(videoUrlsShrink_, videoUrlsShrink) };


  protected:
    // Callback URL for this task. If not provided, the registered default address is used.
    shared_ptr<string> callbackUrl_ {};
    // List of candidate items. It is recommended to pass platform_item_id.
    shared_ptr<string> candidateItemsShrink_ {};
    // Device ID
    shared_ptr<string> deviceId_ {};
    // Unique idempotent ID of the business party, unique within the same business party
    shared_ptr<string> orderUniqueId_ {};
    // List of shopping video OSS addresses (currently only one is supported)
    shared_ptr<string> videoUrlsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
