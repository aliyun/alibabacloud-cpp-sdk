// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPRICETAGDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPRICETAGDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MerchandisePriceTagDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePriceTagDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePriceTagDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    MerchandisePriceTagDetectionRequest() = default ;
    MerchandisePriceTagDetectionRequest(const MerchandisePriceTagDetectionRequest &) = default ;
    MerchandisePriceTagDetectionRequest(MerchandisePriceTagDetectionRequest &&) = default ;
    MerchandisePriceTagDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePriceTagDetectionRequest() = default ;
    MerchandisePriceTagDetectionRequest& operator=(const MerchandisePriceTagDetectionRequest &) = default ;
    MerchandisePriceTagDetectionRequest& operator=(MerchandisePriceTagDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline MerchandisePriceTagDetectionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The HTTP(S) URL of the image to be detected.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
