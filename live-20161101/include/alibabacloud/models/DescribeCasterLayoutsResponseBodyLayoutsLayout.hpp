// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers.hpp>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList.hpp>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList.hpp>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBodyLayoutsLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBodyLayoutsLayout& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayers, audioLayers_);
      DARABONBA_PTR_TO_JSON(BlendList, blendList_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(VideoLayers, videoLayers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBodyLayoutsLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayers, audioLayers_);
      DARABONBA_PTR_FROM_JSON(BlendList, blendList_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(VideoLayers, videoLayers_);
    };
    DescribeCasterLayoutsResponseBodyLayoutsLayout() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayout(const DescribeCasterLayoutsResponseBodyLayoutsLayout &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayout(DescribeCasterLayoutsResponseBodyLayoutsLayout &&) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBodyLayoutsLayout() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayout& operator=(const DescribeCasterLayoutsResponseBodyLayoutsLayout &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayout& operator=(DescribeCasterLayoutsResponseBodyLayoutsLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLayers_ == nullptr
        && return this->blendList_ == nullptr && return this->layoutId_ == nullptr && return this->mixList_ == nullptr && return this->videoLayers_ == nullptr; };
    // audioLayers Field Functions 
    bool hasAudioLayers() const { return this->audioLayers_ != nullptr;};
    void deleteAudioLayers() { this->audioLayers_ = nullptr;};
    inline const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers & audioLayers() const { DARABONBA_PTR_GET_CONST(audioLayers_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers) };
    inline Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers audioLayers() { DARABONBA_PTR_GET(audioLayers_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setAudioLayers(const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers & audioLayers) { DARABONBA_PTR_SET_VALUE(audioLayers_, audioLayers) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setAudioLayers(Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers && audioLayers) { DARABONBA_PTR_SET_RVALUE(audioLayers_, audioLayers) };


    // blendList Field Functions 
    bool hasBlendList() const { return this->blendList_ != nullptr;};
    void deleteBlendList() { this->blendList_ = nullptr;};
    inline const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList & blendList() const { DARABONBA_PTR_GET_CONST(blendList_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList) };
    inline Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList blendList() { DARABONBA_PTR_GET(blendList_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setBlendList(const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList & blendList) { DARABONBA_PTR_SET_VALUE(blendList_, blendList) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setBlendList(Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList && blendList) { DARABONBA_PTR_SET_RVALUE(blendList_, blendList) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList & mixList() const { DARABONBA_PTR_GET_CONST(mixList_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList) };
    inline Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList mixList() { DARABONBA_PTR_GET(mixList_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setMixList(const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setMixList(Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // videoLayers Field Functions 
    bool hasVideoLayers() const { return this->videoLayers_ != nullptr;};
    void deleteVideoLayers() { this->videoLayers_ = nullptr;};
    inline const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers & videoLayers() const { DARABONBA_PTR_GET_CONST(videoLayers_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers) };
    inline Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers videoLayers() { DARABONBA_PTR_GET(videoLayers_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setVideoLayers(const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers & videoLayers) { DARABONBA_PTR_SET_VALUE(videoLayers_, videoLayers) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayout& setVideoLayers(Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers && videoLayers) { DARABONBA_PTR_SET_RVALUE(videoLayers_, videoLayers) };


  protected:
    // The configurations of the audio layers.
    std::shared_ptr<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers> audioLayers_ = nullptr;
    // The location IDs of the video layers, which are in the same order as the video layers.
    std::shared_ptr<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList> blendList_ = nullptr;
    // The ID of the layout.
    std::shared_ptr<string> layoutId_ = nullptr;
    // The location IDs of the audio layers, which are in the same order as the audio layers.
    std::shared_ptr<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutMixList> mixList_ = nullptr;
    // The configurations of the video layers, which are in the default array sequence.
    std::shared_ptr<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers> videoLayers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
