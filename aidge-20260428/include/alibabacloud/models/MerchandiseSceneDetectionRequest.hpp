// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISESCENEDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISESCENEDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MerchandiseSceneDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandiseSceneDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandiseSceneDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    MerchandiseSceneDetectionRequest() = default ;
    MerchandiseSceneDetectionRequest(const MerchandiseSceneDetectionRequest &) = default ;
    MerchandiseSceneDetectionRequest(MerchandiseSceneDetectionRequest &&) = default ;
    MerchandiseSceneDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandiseSceneDetectionRequest() = default ;
    MerchandiseSceneDetectionRequest& operator=(const MerchandiseSceneDetectionRequest &) = default ;
    MerchandiseSceneDetectionRequest& operator=(MerchandiseSceneDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline MerchandiseSceneDetectionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The HTTP(S) URL of the display image to be detected.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
