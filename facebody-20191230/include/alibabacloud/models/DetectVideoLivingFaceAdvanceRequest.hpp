// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOLIVINGFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOLIVINGFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectVideoLivingFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoLivingFaceAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoLivingFaceAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    DetectVideoLivingFaceAdvanceRequest() = default ;
    DetectVideoLivingFaceAdvanceRequest(const DetectVideoLivingFaceAdvanceRequest &) = default ;
    DetectVideoLivingFaceAdvanceRequest(DetectVideoLivingFaceAdvanceRequest &&) = default ;
    DetectVideoLivingFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoLivingFaceAdvanceRequest() = default ;
    DetectVideoLivingFaceAdvanceRequest& operator=(const DetectVideoLivingFaceAdvanceRequest &) = default ;
    DetectVideoLivingFaceAdvanceRequest& operator=(DetectVideoLivingFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoUrlObject_ == nullptr; };
    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline DetectVideoLivingFaceAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
