// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEFACEADVANCEREQUESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEFACEADVANCEREQUESTTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DeepfakeFaceAdvanceRequestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeFaceAdvanceRequestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ImageData, imageData_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeFaceAdvanceRequestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageData, imageData_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
    };
    DeepfakeFaceAdvanceRequestTasks() = default ;
    DeepfakeFaceAdvanceRequestTasks(const DeepfakeFaceAdvanceRequestTasks &) = default ;
    DeepfakeFaceAdvanceRequestTasks(DeepfakeFaceAdvanceRequestTasks &&) = default ;
    DeepfakeFaceAdvanceRequestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeFaceAdvanceRequestTasks() = default ;
    DeepfakeFaceAdvanceRequestTasks& operator=(const DeepfakeFaceAdvanceRequestTasks &) = default ;
    DeepfakeFaceAdvanceRequestTasks& operator=(DeepfakeFaceAdvanceRequestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageData_ == nullptr
        && return this->imageURLObject_ == nullptr; };
    // imageData Field Functions 
    bool hasImageData() const { return this->imageData_ != nullptr;};
    void deleteImageData() { this->imageData_ = nullptr;};
    inline string imageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
    inline DeepfakeFaceAdvanceRequestTasks& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline DeepfakeFaceAdvanceRequestTasks& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


  protected:
    std::shared_ptr<string> imageData_ = nullptr;
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
