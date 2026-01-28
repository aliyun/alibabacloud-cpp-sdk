// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOSHOTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOSHOTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class DetectVideoShotAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoShotAdvanceRequest& obj) { 
      // videoUrlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoShotAdvanceRequest& obj) { 
      // videoUrlObject_ is stream
    };
    DetectVideoShotAdvanceRequest() = default ;
    DetectVideoShotAdvanceRequest(const DetectVideoShotAdvanceRequest &) = default ;
    DetectVideoShotAdvanceRequest(DetectVideoShotAdvanceRequest &&) = default ;
    DetectVideoShotAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoShotAdvanceRequest() = default ;
    DetectVideoShotAdvanceRequest& operator=(const DetectVideoShotAdvanceRequest &) = default ;
    DetectVideoShotAdvanceRequest& operator=(DetectVideoShotAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoUrlObject_ == nullptr; };
    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getVideoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline DetectVideoShotAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
