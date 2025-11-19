// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODYVIDEOPLAYSTATISDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODYVIDEOPLAYSTATISDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails& obj) { 
      DARABONBA_PTR_TO_JSON(VideoPlayStatisDetail, videoPlayStatisDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoPlayStatisDetail, videoPlayStatisDetail_);
    };
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails() = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails(const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails &) = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails(DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails &&) = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails() = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails& operator=(const DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails &) = default ;
    DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails& operator=(DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoPlayStatisDetail_ == nullptr; };
    // videoPlayStatisDetail Field Functions 
    bool hasVideoPlayStatisDetail() const { return this->videoPlayStatisDetail_ != nullptr;};
    void deleteVideoPlayStatisDetail() { this->videoPlayStatisDetail_ = nullptr;};
    inline const vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail> & videoPlayStatisDetail() const { DARABONBA_PTR_GET_CONST(videoPlayStatisDetail_, vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail>) };
    inline vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail> videoPlayStatisDetail() { DARABONBA_PTR_GET(videoPlayStatisDetail_, vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail>) };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails& setVideoPlayStatisDetail(const vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail> & videoPlayStatisDetail) { DARABONBA_PTR_SET_VALUE(videoPlayStatisDetail_, videoPlayStatisDetail) };
    inline DescribePlayVideoStatisResponseBodyVideoPlayStatisDetails& setVideoPlayStatisDetail(vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail> && videoPlayStatisDetail) { DARABONBA_PTR_SET_RVALUE(videoPlayStatisDetail_, videoPlayStatisDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribePlayVideoStatisResponseBodyVideoPlayStatisDetailsVideoPlayStatisDetail>> videoPlayStatisDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
