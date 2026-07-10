// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class RecognizeOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CandidateItems, candidateItems_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(OrderUniqueId, orderUniqueId_);
      DARABONBA_PTR_TO_JSON(VideoUrls, videoUrls_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CandidateItems, candidateItems_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(OrderUniqueId, orderUniqueId_);
      DARABONBA_PTR_FROM_JSON(VideoUrls, videoUrls_);
    };
    RecognizeOrderRequest() = default ;
    RecognizeOrderRequest(const RecognizeOrderRequest &) = default ;
    RecognizeOrderRequest(RecognizeOrderRequest &&) = default ;
    RecognizeOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeOrderRequest() = default ;
    RecognizeOrderRequest& operator=(const RecognizeOrderRequest &) = default ;
    RecognizeOrderRequest& operator=(RecognizeOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->candidateItems_ == nullptr && this->deviceId_ == nullptr && this->orderUniqueId_ == nullptr && this->videoUrls_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline RecognizeOrderRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // candidateItems Field Functions 
    bool hasCandidateItems() const { return this->candidateItems_ != nullptr;};
    void deleteCandidateItems() { this->candidateItems_ = nullptr;};
    inline const vector<string> & getCandidateItems() const { DARABONBA_PTR_GET_CONST(candidateItems_, vector<string>) };
    inline vector<string> getCandidateItems() { DARABONBA_PTR_GET(candidateItems_, vector<string>) };
    inline RecognizeOrderRequest& setCandidateItems(const vector<string> & candidateItems) { DARABONBA_PTR_SET_VALUE(candidateItems_, candidateItems) };
    inline RecognizeOrderRequest& setCandidateItems(vector<string> && candidateItems) { DARABONBA_PTR_SET_RVALUE(candidateItems_, candidateItems) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline RecognizeOrderRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // orderUniqueId Field Functions 
    bool hasOrderUniqueId() const { return this->orderUniqueId_ != nullptr;};
    void deleteOrderUniqueId() { this->orderUniqueId_ = nullptr;};
    inline string getOrderUniqueId() const { DARABONBA_PTR_GET_DEFAULT(orderUniqueId_, "") };
    inline RecognizeOrderRequest& setOrderUniqueId(string orderUniqueId) { DARABONBA_PTR_SET_VALUE(orderUniqueId_, orderUniqueId) };


    // videoUrls Field Functions 
    bool hasVideoUrls() const { return this->videoUrls_ != nullptr;};
    void deleteVideoUrls() { this->videoUrls_ = nullptr;};
    inline const vector<string> & getVideoUrls() const { DARABONBA_PTR_GET_CONST(videoUrls_, vector<string>) };
    inline vector<string> getVideoUrls() { DARABONBA_PTR_GET(videoUrls_, vector<string>) };
    inline RecognizeOrderRequest& setVideoUrls(const vector<string> & videoUrls) { DARABONBA_PTR_SET_VALUE(videoUrls_, videoUrls) };
    inline RecognizeOrderRequest& setVideoUrls(vector<string> && videoUrls) { DARABONBA_PTR_SET_RVALUE(videoUrls_, videoUrls) };


  protected:
    // Callback URL for this task. If not provided, the registered default address is used.
    shared_ptr<string> callbackUrl_ {};
    // List of candidate items. It is recommended to pass platform_item_id.
    shared_ptr<vector<string>> candidateItems_ {};
    // Device ID
    shared_ptr<string> deviceId_ {};
    // Unique idempotent ID of the business party, unique within the same business party
    shared_ptr<string> orderUniqueId_ {};
    // List of shopping video OSS addresses (currently only one is supported)
    shared_ptr<vector<string>> videoUrls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
