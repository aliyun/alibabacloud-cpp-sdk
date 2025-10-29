// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTAUDIOLAYERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTAUDIOLAYERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
    };
    DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers(const DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers(DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers &&) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers& operator=(const DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers& operator=(DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLayer_ == nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer> & audioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer>) };
    inline vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer> audioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer>) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers& setAudioLayer(const vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayers& setAudioLayer(vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutAudioLayersAudioLayer>> audioLayer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
