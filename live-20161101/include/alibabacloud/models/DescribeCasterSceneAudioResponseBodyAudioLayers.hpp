// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODYAUDIOLAYERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODYAUDIOLAYERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterSceneAudioResponseBodyAudioLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterSceneAudioResponseBodyAudioLayers& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterSceneAudioResponseBodyAudioLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
    };
    DescribeCasterSceneAudioResponseBodyAudioLayers() = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayers(const DescribeCasterSceneAudioResponseBodyAudioLayers &) = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayers(DescribeCasterSceneAudioResponseBodyAudioLayers &&) = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterSceneAudioResponseBodyAudioLayers() = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayers& operator=(const DescribeCasterSceneAudioResponseBodyAudioLayers &) = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayers& operator=(DescribeCasterSceneAudioResponseBodyAudioLayers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLayer_ == nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer> & audioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer>) };
    inline vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer> audioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer>) };
    inline DescribeCasterSceneAudioResponseBodyAudioLayers& setAudioLayer(const vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline DescribeCasterSceneAudioResponseBodyAudioLayers& setAudioLayer(vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer>> audioLayer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
