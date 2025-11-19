// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODYTOPPLAYVIDEOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODYTOPPLAYVIDEOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayTopVideosResponseBodyTopPlayVideos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayTopVideosResponseBodyTopPlayVideos& obj) { 
      DARABONBA_PTR_TO_JSON(TopPlayVideoStatis, topPlayVideoStatis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayTopVideosResponseBodyTopPlayVideos& obj) { 
      DARABONBA_PTR_FROM_JSON(TopPlayVideoStatis, topPlayVideoStatis_);
    };
    DescribePlayTopVideosResponseBodyTopPlayVideos() = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideos(const DescribePlayTopVideosResponseBodyTopPlayVideos &) = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideos(DescribePlayTopVideosResponseBodyTopPlayVideos &&) = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayTopVideosResponseBodyTopPlayVideos() = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideos& operator=(const DescribePlayTopVideosResponseBodyTopPlayVideos &) = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideos& operator=(DescribePlayTopVideosResponseBodyTopPlayVideos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topPlayVideoStatis_ == nullptr; };
    // topPlayVideoStatis Field Functions 
    bool hasTopPlayVideoStatis() const { return this->topPlayVideoStatis_ != nullptr;};
    void deleteTopPlayVideoStatis() { this->topPlayVideoStatis_ = nullptr;};
    inline const vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis> & topPlayVideoStatis() const { DARABONBA_PTR_GET_CONST(topPlayVideoStatis_, vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis>) };
    inline vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis> topPlayVideoStatis() { DARABONBA_PTR_GET(topPlayVideoStatis_, vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis>) };
    inline DescribePlayTopVideosResponseBodyTopPlayVideos& setTopPlayVideoStatis(const vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis> & topPlayVideoStatis) { DARABONBA_PTR_SET_VALUE(topPlayVideoStatis_, topPlayVideoStatis) };
    inline DescribePlayTopVideosResponseBodyTopPlayVideos& setTopPlayVideoStatis(vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis> && topPlayVideoStatis) { DARABONBA_PTR_SET_RVALUE(topPlayVideoStatis_, topPlayVideoStatis) };


  protected:
    std::shared_ptr<vector<Models::DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis>> topPlayVideoStatis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
