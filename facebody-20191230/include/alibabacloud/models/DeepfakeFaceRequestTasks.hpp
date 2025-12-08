// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEFACEREQUESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEFACEREQUESTTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DeepfakeFaceRequestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeFaceRequestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ImageData, imageData_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeFaceRequestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageData, imageData_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    DeepfakeFaceRequestTasks() = default ;
    DeepfakeFaceRequestTasks(const DeepfakeFaceRequestTasks &) = default ;
    DeepfakeFaceRequestTasks(DeepfakeFaceRequestTasks &&) = default ;
    DeepfakeFaceRequestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeFaceRequestTasks() = default ;
    DeepfakeFaceRequestTasks& operator=(const DeepfakeFaceRequestTasks &) = default ;
    DeepfakeFaceRequestTasks& operator=(DeepfakeFaceRequestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageData_ == nullptr
        && return this->imageURL_ == nullptr; };
    // imageData Field Functions 
    bool hasImageData() const { return this->imageData_ != nullptr;};
    void deleteImageData() { this->imageData_ = nullptr;};
    inline string imageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
    inline DeepfakeFaceRequestTasks& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DeepfakeFaceRequestTasks& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<string> imageData_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
