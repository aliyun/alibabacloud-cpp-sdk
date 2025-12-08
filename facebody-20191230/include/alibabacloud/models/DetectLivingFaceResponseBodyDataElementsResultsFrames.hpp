// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATAELEMENTSRESULTSFRAMES_HPP_
#define ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATAELEMENTSRESULTSFRAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectLivingFaceResponseBodyDataElementsResultsFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectLivingFaceResponseBodyDataElementsResultsFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DetectLivingFaceResponseBodyDataElementsResultsFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DetectLivingFaceResponseBodyDataElementsResultsFrames() = default ;
    DetectLivingFaceResponseBodyDataElementsResultsFrames(const DetectLivingFaceResponseBodyDataElementsResultsFrames &) = default ;
    DetectLivingFaceResponseBodyDataElementsResultsFrames(DetectLivingFaceResponseBodyDataElementsResultsFrames &&) = default ;
    DetectLivingFaceResponseBodyDataElementsResultsFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectLivingFaceResponseBodyDataElementsResultsFrames() = default ;
    DetectLivingFaceResponseBodyDataElementsResultsFrames& operator=(const DetectLivingFaceResponseBodyDataElementsResultsFrames &) = default ;
    DetectLivingFaceResponseBodyDataElementsResultsFrames& operator=(DetectLivingFaceResponseBodyDataElementsResultsFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rate_ == nullptr
        && return this->url_ == nullptr; };
    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline DetectLivingFaceResponseBodyDataElementsResultsFrames& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DetectLivingFaceResponseBodyDataElementsResultsFrames& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
