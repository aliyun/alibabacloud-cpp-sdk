// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONLITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONLITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MerchandisePlacementDetectionLiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePlacementDetectionLiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePlacementDetectionLiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    MerchandisePlacementDetectionLiteRequest() = default ;
    MerchandisePlacementDetectionLiteRequest(const MerchandisePlacementDetectionLiteRequest &) = default ;
    MerchandisePlacementDetectionLiteRequest(MerchandisePlacementDetectionLiteRequest &&) = default ;
    MerchandisePlacementDetectionLiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePlacementDetectionLiteRequest() = default ;
    MerchandisePlacementDetectionLiteRequest& operator=(const MerchandisePlacementDetectionLiteRequest &) = default ;
    MerchandisePlacementDetectionLiteRequest& operator=(MerchandisePlacementDetectionLiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline MerchandisePlacementDetectionLiteRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The HTTPS URL of the display image to be detected.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
