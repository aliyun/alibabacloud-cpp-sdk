// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERRESPONSEBODYDATAOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERRESPONSEBODYDATAOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class GenerateVideoCoverResponseBodyDataOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoCoverResponseBodyDataOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoCoverResponseBodyDataOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    GenerateVideoCoverResponseBodyDataOutputs() = default ;
    GenerateVideoCoverResponseBodyDataOutputs(const GenerateVideoCoverResponseBodyDataOutputs &) = default ;
    GenerateVideoCoverResponseBodyDataOutputs(GenerateVideoCoverResponseBodyDataOutputs &&) = default ;
    GenerateVideoCoverResponseBodyDataOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoCoverResponseBodyDataOutputs() = default ;
    GenerateVideoCoverResponseBodyDataOutputs& operator=(const GenerateVideoCoverResponseBodyDataOutputs &) = default ;
    GenerateVideoCoverResponseBodyDataOutputs& operator=(GenerateVideoCoverResponseBodyDataOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->imageURL_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline GenerateVideoCoverResponseBodyDataOutputs& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline GenerateVideoCoverResponseBodyDataOutputs& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
