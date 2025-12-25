// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREDICTIONWALLLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREDICTIONWALLLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class PredictionWallLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PredictionWallLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CameraHeight, cameraHeight_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PredictionWallLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CameraHeight, cameraHeight_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    PredictionWallLineRequest() = default ;
    PredictionWallLineRequest(const PredictionWallLineRequest &) = default ;
    PredictionWallLineRequest(PredictionWallLineRequest &&) = default ;
    PredictionWallLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PredictionWallLineRequest() = default ;
    PredictionWallLineRequest& operator=(const PredictionWallLineRequest &) = default ;
    PredictionWallLineRequest& operator=(PredictionWallLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cameraHeight_ == nullptr
        && return this->url_ == nullptr; };
    // cameraHeight Field Functions 
    bool hasCameraHeight() const { return this->cameraHeight_ != nullptr;};
    void deleteCameraHeight() { this->cameraHeight_ = nullptr;};
    inline int64_t cameraHeight() const { DARABONBA_PTR_GET_DEFAULT(cameraHeight_, 0L) };
    inline PredictionWallLineRequest& setCameraHeight(int64_t cameraHeight) { DARABONBA_PTR_SET_VALUE(cameraHeight_, cameraHeight) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PredictionWallLineRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int64_t> cameraHeight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
