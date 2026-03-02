// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPIMAGE_HPP_
#define ALIBABACLOUD_MODELS_PDPIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpImage& obj) { 
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
      DARABONBA_PTR_TO_JSON(imageTag, imageTag_);
    };
    friend void from_json(const Darabonba::Json& j, PdpImage& obj) { 
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
      DARABONBA_PTR_FROM_JSON(imageTag, imageTag_);
    };
    PdpImage() = default ;
    PdpImage(const PdpImage &) = default ;
    PdpImage(PdpImage &&) = default ;
    PdpImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpImage() = default ;
    PdpImage& operator=(const PdpImage &) = default ;
    PdpImage& operator=(PdpImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageTag_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline PdpImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline PdpImage& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


  protected:
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // This parameter is required.
    shared_ptr<string> imageTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
