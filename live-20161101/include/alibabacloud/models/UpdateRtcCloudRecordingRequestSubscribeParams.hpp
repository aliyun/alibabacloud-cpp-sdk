// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTSUBSCRIBEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTSUBSCRIBEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingRequestSubscribeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequestSubscribeParams& obj) { 
      DARABONBA_PTR_TO_JSON(SubscribeUserIdList, subscribeUserIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequestSubscribeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(SubscribeUserIdList, subscribeUserIdList_);
    };
    UpdateRtcCloudRecordingRequestSubscribeParams() = default ;
    UpdateRtcCloudRecordingRequestSubscribeParams(const UpdateRtcCloudRecordingRequestSubscribeParams &) = default ;
    UpdateRtcCloudRecordingRequestSubscribeParams(UpdateRtcCloudRecordingRequestSubscribeParams &&) = default ;
    UpdateRtcCloudRecordingRequestSubscribeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequestSubscribeParams() = default ;
    UpdateRtcCloudRecordingRequestSubscribeParams& operator=(const UpdateRtcCloudRecordingRequestSubscribeParams &) = default ;
    UpdateRtcCloudRecordingRequestSubscribeParams& operator=(UpdateRtcCloudRecordingRequestSubscribeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subscribeUserIdList_ != nullptr; };
    // subscribeUserIdList Field Functions 
    bool hasSubscribeUserIdList() const { return this->subscribeUserIdList_ != nullptr;};
    void deleteSubscribeUserIdList() { this->subscribeUserIdList_ = nullptr;};
    inline const vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> & subscribeUserIdList() const { DARABONBA_PTR_GET_CONST(subscribeUserIdList_, vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList>) };
    inline vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> subscribeUserIdList() { DARABONBA_PTR_GET(subscribeUserIdList_, vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList>) };
    inline UpdateRtcCloudRecordingRequestSubscribeParams& setSubscribeUserIdList(const vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> & subscribeUserIdList) { DARABONBA_PTR_SET_VALUE(subscribeUserIdList_, subscribeUserIdList) };
    inline UpdateRtcCloudRecordingRequestSubscribeParams& setSubscribeUserIdList(vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList> && subscribeUserIdList) { DARABONBA_PTR_SET_RVALUE(subscribeUserIdList_, subscribeUserIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList>> subscribeUserIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
