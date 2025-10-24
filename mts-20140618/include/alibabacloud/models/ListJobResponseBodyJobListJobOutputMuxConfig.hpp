// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputMuxConfigGif.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputMuxConfigSegment.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputMuxConfigWebp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Webp, webp_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Webp, webp_);
    };
    ListJobResponseBodyJobListJobOutputMuxConfig() = default ;
    ListJobResponseBodyJobListJobOutputMuxConfig(const ListJobResponseBodyJobListJobOutputMuxConfig &) = default ;
    ListJobResponseBodyJobListJobOutputMuxConfig(ListJobResponseBodyJobListJobOutputMuxConfig &&) = default ;
    ListJobResponseBodyJobListJobOutputMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputMuxConfig() = default ;
    ListJobResponseBodyJobListJobOutputMuxConfig& operator=(const ListJobResponseBodyJobListJobOutputMuxConfig &) = default ;
    ListJobResponseBodyJobListJobOutputMuxConfig& operator=(ListJobResponseBodyJobListJobOutputMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr && return this->webp_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::ListJobResponseBodyJobListJobOutputMuxConfigGif) };
    inline Models::ListJobResponseBodyJobListJobOutputMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::ListJobResponseBodyJobListJobOutputMuxConfigGif) };
    inline ListJobResponseBodyJobListJobOutputMuxConfig& setGif(const Models::ListJobResponseBodyJobListJobOutputMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline ListJobResponseBodyJobListJobOutputMuxConfig& setGif(Models::ListJobResponseBodyJobListJobOutputMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment) };
    inline Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment) };
    inline ListJobResponseBodyJobListJobOutputMuxConfig& setSegment(const Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline ListJobResponseBodyJobListJobOutputMuxConfig& setSegment(Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


    // webp Field Functions 
    bool hasWebp() const { return this->webp_ != nullptr;};
    void deleteWebp() { this->webp_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp & webp() const { DARABONBA_PTR_GET_CONST(webp_, Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp) };
    inline Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp webp() { DARABONBA_PTR_GET(webp_, Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp) };
    inline ListJobResponseBodyJobListJobOutputMuxConfig& setWebp(const Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
    inline ListJobResponseBodyJobListJobOutputMuxConfig& setWebp(Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


  protected:
    // The transmuxing configurations for GIF.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputMuxConfigGif> gif_ = nullptr;
    // The segment configurations. The value is a JSON object.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputMuxConfigSegment> segment_ = nullptr;
    // The transmuxing configurations for WebP.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputMuxConfigWebp> webp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
