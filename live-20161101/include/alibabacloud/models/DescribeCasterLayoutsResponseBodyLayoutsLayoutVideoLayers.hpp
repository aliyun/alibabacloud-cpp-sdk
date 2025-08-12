// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTVIDEOLAYERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTVIDEOLAYERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers& obj) { 
      DARABONBA_PTR_TO_JSON(VideoLayer, videoLayer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoLayer, videoLayer_);
    };
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers(const DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers(DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers &&) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers& operator=(const DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers& operator=(DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoLayer_ != nullptr; };
    // videoLayer Field Functions 
    bool hasVideoLayer() const { return this->videoLayer_ != nullptr;};
    void deleteVideoLayer() { this->videoLayer_ = nullptr;};
    inline const vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer> & videoLayer() const { DARABONBA_PTR_GET_CONST(videoLayer_, vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer>) };
    inline vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer> videoLayer() { DARABONBA_PTR_GET(videoLayer_, vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer>) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers& setVideoLayer(const vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer> & videoLayer) { DARABONBA_PTR_SET_VALUE(videoLayer_, videoLayer) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayers& setVideoLayer(vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer> && videoLayer) { DARABONBA_PTR_SET_RVALUE(videoLayer_, videoLayer) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer>> videoLayer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
