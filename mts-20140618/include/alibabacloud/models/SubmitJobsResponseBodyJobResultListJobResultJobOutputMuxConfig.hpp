// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Webp, webp_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Webp, webp_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig(SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr && return this->webp_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& setGif(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& setGif(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& setSegment(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& setSegment(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


    // webp Field Functions 
    bool hasWebp() const { return this->webp_ != nullptr;};
    void deleteWebp() { this->webp_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp & webp() const { DARABONBA_PTR_GET_CONST(webp_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp webp() { DARABONBA_PTR_GET(webp_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& setWebp(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig& setWebp(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


  protected:
    // The transmuxing configurations for GIF.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigGif> gif_ = nullptr;
    // The segment configuration. The value is a JSON object.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigSegment> segment_ = nullptr;
    // The transmuxing configurations for WebP.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfigWebp> webp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
