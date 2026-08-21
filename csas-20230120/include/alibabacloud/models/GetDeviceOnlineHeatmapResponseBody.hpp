// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEONLINEHEATMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEONLINEHEATMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDeviceOnlineHeatmapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceOnlineHeatmapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceOnlineHeatmap, deviceOnlineHeatmap_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceOnlineHeatmapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceOnlineHeatmap, deviceOnlineHeatmap_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDeviceOnlineHeatmapResponseBody() = default ;
    GetDeviceOnlineHeatmapResponseBody(const GetDeviceOnlineHeatmapResponseBody &) = default ;
    GetDeviceOnlineHeatmapResponseBody(GetDeviceOnlineHeatmapResponseBody &&) = default ;
    GetDeviceOnlineHeatmapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceOnlineHeatmapResponseBody() = default ;
    GetDeviceOnlineHeatmapResponseBody& operator=(const GetDeviceOnlineHeatmapResponseBody &) = default ;
    GetDeviceOnlineHeatmapResponseBody& operator=(GetDeviceOnlineHeatmapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceOnlineHeatmap_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceOnlineHeatmap Field Functions 
    bool hasDeviceOnlineHeatmap() const { return this->deviceOnlineHeatmap_ != nullptr;};
    void deleteDeviceOnlineHeatmap() { this->deviceOnlineHeatmap_ = nullptr;};
    inline const vector<vector<int64_t>> & getDeviceOnlineHeatmap() const { DARABONBA_PTR_GET_CONST(deviceOnlineHeatmap_, vector<vector<int64_t>>) };
    inline vector<vector<int64_t>> getDeviceOnlineHeatmap() { DARABONBA_PTR_GET(deviceOnlineHeatmap_, vector<vector<int64_t>>) };
    inline GetDeviceOnlineHeatmapResponseBody& setDeviceOnlineHeatmap(const vector<vector<int64_t>> & deviceOnlineHeatmap) { DARABONBA_PTR_SET_VALUE(deviceOnlineHeatmap_, deviceOnlineHeatmap) };
    inline GetDeviceOnlineHeatmapResponseBody& setDeviceOnlineHeatmap(vector<vector<int64_t>> && deviceOnlineHeatmap) { DARABONBA_PTR_SET_RVALUE(deviceOnlineHeatmap_, deviceOnlineHeatmap) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceOnlineHeatmapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The online time distribution.
    shared_ptr<vector<vector<int64_t>>> deviceOnlineHeatmap_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
