// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSUBSCRIBEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSUBSCRIBEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestSubscribeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestSubscribeParams& obj) { 
      DARABONBA_PTR_TO_JSON(SubscribeUserIdList, subscribeUserIdList_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestSubscribeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(SubscribeUserIdList, subscribeUserIdList_);
    };
    StartRtcCloudRecordingRequestSubscribeParams() = default ;
    StartRtcCloudRecordingRequestSubscribeParams(const StartRtcCloudRecordingRequestSubscribeParams &) = default ;
    StartRtcCloudRecordingRequestSubscribeParams(StartRtcCloudRecordingRequestSubscribeParams &&) = default ;
    StartRtcCloudRecordingRequestSubscribeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestSubscribeParams() = default ;
    StartRtcCloudRecordingRequestSubscribeParams& operator=(const StartRtcCloudRecordingRequestSubscribeParams &) = default ;
    StartRtcCloudRecordingRequestSubscribeParams& operator=(StartRtcCloudRecordingRequestSubscribeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subscribeUserIdList_ != nullptr; };
    // subscribeUserIdList Field Functions 
    bool hasSubscribeUserIdList() const { return this->subscribeUserIdList_ != nullptr;};
    void deleteSubscribeUserIdList() { this->subscribeUserIdList_ = nullptr;};
    inline const vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> & subscribeUserIdList() const { DARABONBA_PTR_GET_CONST(subscribeUserIdList_, vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList>) };
    inline vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> subscribeUserIdList() { DARABONBA_PTR_GET(subscribeUserIdList_, vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList>) };
    inline StartRtcCloudRecordingRequestSubscribeParams& setSubscribeUserIdList(const vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> & subscribeUserIdList) { DARABONBA_PTR_SET_VALUE(subscribeUserIdList_, subscribeUserIdList) };
    inline StartRtcCloudRecordingRequestSubscribeParams& setSubscribeUserIdList(vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> && subscribeUserIdList) { DARABONBA_PTR_SET_RVALUE(subscribeUserIdList_, subscribeUserIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList>> subscribeUserIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
