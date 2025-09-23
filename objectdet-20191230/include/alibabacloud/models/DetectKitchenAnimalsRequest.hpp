// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTKITCHENANIMALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTKITCHENANIMALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectKitchenAnimalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectKitchenAnimalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURLA, imageURLA_);
      DARABONBA_PTR_TO_JSON(ImageURLB, imageURLB_);
    };
    friend void from_json(const Darabonba::Json& j, DetectKitchenAnimalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURLA, imageURLA_);
      DARABONBA_PTR_FROM_JSON(ImageURLB, imageURLB_);
    };
    DetectKitchenAnimalsRequest() = default ;
    DetectKitchenAnimalsRequest(const DetectKitchenAnimalsRequest &) = default ;
    DetectKitchenAnimalsRequest(DetectKitchenAnimalsRequest &&) = default ;
    DetectKitchenAnimalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectKitchenAnimalsRequest() = default ;
    DetectKitchenAnimalsRequest& operator=(const DetectKitchenAnimalsRequest &) = default ;
    DetectKitchenAnimalsRequest& operator=(DetectKitchenAnimalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLA_ != nullptr
        && this->imageURLB_ != nullptr; };
    // imageURLA Field Functions 
    bool hasImageURLA() const { return this->imageURLA_ != nullptr;};
    void deleteImageURLA() { this->imageURLA_ = nullptr;};
    inline string imageURLA() const { DARABONBA_PTR_GET_DEFAULT(imageURLA_, "") };
    inline DetectKitchenAnimalsRequest& setImageURLA(string imageURLA) { DARABONBA_PTR_SET_VALUE(imageURLA_, imageURLA) };


    // imageURLB Field Functions 
    bool hasImageURLB() const { return this->imageURLB_ != nullptr;};
    void deleteImageURLB() { this->imageURLB_ = nullptr;};
    inline string imageURLB() const { DARABONBA_PTR_GET_DEFAULT(imageURLB_, "") };
    inline DetectKitchenAnimalsRequest& setImageURLB(string imageURLB) { DARABONBA_PTR_SET_VALUE(imageURLB_, imageURLB) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURLA_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURLB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
