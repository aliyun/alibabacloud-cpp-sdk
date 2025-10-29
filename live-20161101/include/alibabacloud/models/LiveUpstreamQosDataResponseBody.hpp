// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LiveUpstreamQosDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class LiveUpstreamQosDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveUpstreamQosDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, LiveUpstreamQosDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    LiveUpstreamQosDataResponseBody() = default ;
    LiveUpstreamQosDataResponseBody(const LiveUpstreamQosDataResponseBody &) = default ;
    LiveUpstreamQosDataResponseBody(LiveUpstreamQosDataResponseBody &&) = default ;
    LiveUpstreamQosDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveUpstreamQosDataResponseBody() = default ;
    LiveUpstreamQosDataResponseBody& operator=(const LiveUpstreamQosDataResponseBody &) = default ;
    LiveUpstreamQosDataResponseBody& operator=(LiveUpstreamQosDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->endTime_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<LiveUpstreamQosDataResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<LiveUpstreamQosDataResponseBodyData>) };
    inline vector<LiveUpstreamQosDataResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<LiveUpstreamQosDataResponseBodyData>) };
    inline LiveUpstreamQosDataResponseBody& setData(const vector<LiveUpstreamQosDataResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline LiveUpstreamQosDataResponseBody& setData(vector<LiveUpstreamQosDataResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LiveUpstreamQosDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LiveUpstreamQosDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LiveUpstreamQosDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<LiveUpstreamQosDataResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
