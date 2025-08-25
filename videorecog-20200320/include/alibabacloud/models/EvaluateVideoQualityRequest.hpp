// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class EvaluateVideoQualityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateVideoQualityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateVideoQualityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    EvaluateVideoQualityRequest() = default ;
    EvaluateVideoQualityRequest(const EvaluateVideoQualityRequest &) = default ;
    EvaluateVideoQualityRequest(EvaluateVideoQualityRequest &&) = default ;
    EvaluateVideoQualityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateVideoQualityRequest() = default ;
    EvaluateVideoQualityRequest& operator=(const EvaluateVideoQualityRequest &) = default ;
    EvaluateVideoQualityRequest& operator=(EvaluateVideoQualityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr
        && this->videoUrl_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline EvaluateVideoQualityRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline EvaluateVideoQualityRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
