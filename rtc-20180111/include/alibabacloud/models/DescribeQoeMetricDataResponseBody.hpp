// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOEMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOEMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQoeMetricDataResponseBodyAudioData.hpp>
#include <alibabacloud/models/DescribeQoeMetricDataResponseBodyVideoData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQoeMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQoeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioData, audioData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoData, videoData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQoeMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioData, audioData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoData, videoData_);
    };
    DescribeQoeMetricDataResponseBody() = default ;
    DescribeQoeMetricDataResponseBody(const DescribeQoeMetricDataResponseBody &) = default ;
    DescribeQoeMetricDataResponseBody(DescribeQoeMetricDataResponseBody &&) = default ;
    DescribeQoeMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQoeMetricDataResponseBody() = default ;
    DescribeQoeMetricDataResponseBody& operator=(const DescribeQoeMetricDataResponseBody &) = default ;
    DescribeQoeMetricDataResponseBody& operator=(DescribeQoeMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioData_ == nullptr
        && return this->requestId_ == nullptr && return this->videoData_ == nullptr; };
    // audioData Field Functions 
    bool hasAudioData() const { return this->audioData_ != nullptr;};
    void deleteAudioData() { this->audioData_ = nullptr;};
    inline const vector<DescribeQoeMetricDataResponseBodyAudioData> & audioData() const { DARABONBA_PTR_GET_CONST(audioData_, vector<DescribeQoeMetricDataResponseBodyAudioData>) };
    inline vector<DescribeQoeMetricDataResponseBodyAudioData> audioData() { DARABONBA_PTR_GET(audioData_, vector<DescribeQoeMetricDataResponseBodyAudioData>) };
    inline DescribeQoeMetricDataResponseBody& setAudioData(const vector<DescribeQoeMetricDataResponseBodyAudioData> & audioData) { DARABONBA_PTR_SET_VALUE(audioData_, audioData) };
    inline DescribeQoeMetricDataResponseBody& setAudioData(vector<DescribeQoeMetricDataResponseBodyAudioData> && audioData) { DARABONBA_PTR_SET_RVALUE(audioData_, audioData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQoeMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoData Field Functions 
    bool hasVideoData() const { return this->videoData_ != nullptr;};
    void deleteVideoData() { this->videoData_ = nullptr;};
    inline const vector<DescribeQoeMetricDataResponseBodyVideoData> & videoData() const { DARABONBA_PTR_GET_CONST(videoData_, vector<DescribeQoeMetricDataResponseBodyVideoData>) };
    inline vector<DescribeQoeMetricDataResponseBodyVideoData> videoData() { DARABONBA_PTR_GET(videoData_, vector<DescribeQoeMetricDataResponseBodyVideoData>) };
    inline DescribeQoeMetricDataResponseBody& setVideoData(const vector<DescribeQoeMetricDataResponseBodyVideoData> & videoData) { DARABONBA_PTR_SET_VALUE(videoData_, videoData) };
    inline DescribeQoeMetricDataResponseBody& setVideoData(vector<DescribeQoeMetricDataResponseBodyVideoData> && videoData) { DARABONBA_PTR_SET_RVALUE(videoData_, videoData) };


  protected:
    std::shared_ptr<vector<DescribeQoeMetricDataResponseBodyAudioData>> audioData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeQoeMetricDataResponseBodyVideoData>> videoData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
