// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEVIDEOQUALITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEVIDEOQUALITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EnhanceVideoQualityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhanceVideoQualityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, EnhanceVideoQualityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
    };
    EnhanceVideoQualityResponseBodyData() = default ;
    EnhanceVideoQualityResponseBodyData(const EnhanceVideoQualityResponseBodyData &) = default ;
    EnhanceVideoQualityResponseBodyData(EnhanceVideoQualityResponseBodyData &&) = default ;
    EnhanceVideoQualityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhanceVideoQualityResponseBodyData() = default ;
    EnhanceVideoQualityResponseBodyData& operator=(const EnhanceVideoQualityResponseBodyData &) = default ;
    EnhanceVideoQualityResponseBodyData& operator=(EnhanceVideoQualityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoURL_ != nullptr; };
    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline EnhanceVideoQualityResponseBodyData& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
