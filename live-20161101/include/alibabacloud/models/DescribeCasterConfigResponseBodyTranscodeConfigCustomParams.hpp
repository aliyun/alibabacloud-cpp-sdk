// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYTRANSCODECONFIGCUSTOMPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYTRANSCODECONFIGCUSTOMPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodyTranscodeConfigCustomParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodyTranscodeConfigCustomParams& obj) { 
      DARABONBA_PTR_TO_JSON(video, video_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodyTranscodeConfigCustomParams& obj) { 
      DARABONBA_PTR_FROM_JSON(video, video_);
    };
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParams() = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParams(const DescribeCasterConfigResponseBodyTranscodeConfigCustomParams &) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParams(DescribeCasterConfigResponseBodyTranscodeConfigCustomParams &&) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodyTranscodeConfigCustomParams() = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParams& operator=(const DescribeCasterConfigResponseBodyTranscodeConfigCustomParams &) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParams& operator=(DescribeCasterConfigResponseBodyTranscodeConfigCustomParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->video_ == nullptr; };
    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo) };
    inline Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo video() { DARABONBA_PTR_GET(video_, Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo) };
    inline DescribeCasterConfigResponseBodyTranscodeConfigCustomParams& setVideo(const Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline DescribeCasterConfigResponseBodyTranscodeConfigCustomParams& setVideo(Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The video parameters.
    std::shared_ptr<Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
