// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayVideoStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayVideoStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoPlayStatisDetails, videoPlayStatisDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayVideoStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoPlayStatisDetails, videoPlayStatisDetails_);
    };
    DescribePlayVideoStatisResponseBody() = default ;
    DescribePlayVideoStatisResponseBody(const DescribePlayVideoStatisResponseBody &) = default ;
    DescribePlayVideoStatisResponseBody(DescribePlayVideoStatisResponseBody &&) = default ;
    DescribePlayVideoStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayVideoStatisResponseBody() = default ;
    DescribePlayVideoStatisResponseBody& operator=(const DescribePlayVideoStatisResponseBody &) = default ;
    DescribePlayVideoStatisResponseBody& operator=(DescribePlayVideoStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->videoPlayStatisDetails_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayVideoStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoPlayStatisDetails Field Functions 
    bool hasVideoPlayStatisDetails() const { return this->videoPlayStatisDetails_ != nullptr;};
    void deleteVideoPlayStatisDetails() { this->videoPlayStatisDetails_ = nullptr;};
    inline const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails & videoPlayStatisDetails() const { DARABONBA_PTR_GET_CONST(videoPlayStatisDetails_, DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails) };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails videoPlayStatisDetails() { DARABONBA_PTR_GET(videoPlayStatisDetails_, DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails) };
    inline DescribePlayVideoStatisResponseBody& setVideoPlayStatisDetails(const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails & videoPlayStatisDetails) { DARABONBA_PTR_SET_VALUE(videoPlayStatisDetails_, videoPlayStatisDetails) };
    inline DescribePlayVideoStatisResponseBody& setVideoPlayStatisDetails(DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails && videoPlayStatisDetails) { DARABONBA_PTR_SET_RVALUE(videoPlayStatisDetails_, videoPlayStatisDetails) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The daily playback statistics on the video.
    std::shared_ptr<DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails> videoPlayStatisDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
