// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTKITCHENANIMALSADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTKITCHENANIMALSADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectKitchenAnimalsAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectKitchenAnimalsAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURLA, imageURLAObject_);
      DARABONBA_TO_JSON(ImageURLB, imageURLBObject_);
    };
    friend void from_json(const Darabonba::Json& j, DetectKitchenAnimalsAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURLA, imageURLAObject_);
      DARABONBA_FROM_JSON(ImageURLB, imageURLBObject_);
    };
    DetectKitchenAnimalsAdvanceRequest() = default ;
    DetectKitchenAnimalsAdvanceRequest(const DetectKitchenAnimalsAdvanceRequest &) = default ;
    DetectKitchenAnimalsAdvanceRequest(DetectKitchenAnimalsAdvanceRequest &&) = default ;
    DetectKitchenAnimalsAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectKitchenAnimalsAdvanceRequest() = default ;
    DetectKitchenAnimalsAdvanceRequest& operator=(const DetectKitchenAnimalsAdvanceRequest &) = default ;
    DetectKitchenAnimalsAdvanceRequest& operator=(DetectKitchenAnimalsAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLAObject_ != nullptr
        && this->imageURLBObject_ != nullptr; };
    // imageURLAObject Field Functions 
    bool hasImageURLAObject() const { return this->imageURLAObject_ != nullptr;};
    void deleteImageURLAObject() { this->imageURLAObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLAObject() const { DARABONBA_GET(imageURLAObject_) };
    inline DetectKitchenAnimalsAdvanceRequest& setImageURLAObject(shared_ptr<Darabonba::IStream> imageURLAObject) { DARABONBA_SET_VALUE(imageURLAObject_, imageURLAObject) };


    // imageURLBObject Field Functions 
    bool hasImageURLBObject() const { return this->imageURLBObject_ != nullptr;};
    void deleteImageURLBObject() { this->imageURLBObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLBObject() const { DARABONBA_GET(imageURLBObject_) };
    inline DetectKitchenAnimalsAdvanceRequest& setImageURLBObject(shared_ptr<Darabonba::IStream> imageURLBObject) { DARABONBA_SET_VALUE(imageURLBObject_, imageURLBObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLAObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLBObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
