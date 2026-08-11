// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ContainerConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(image, image_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(image, image_);
    };
    ContainerConfiguration() = default ;
    ContainerConfiguration(const ContainerConfiguration &) = default ;
    ContainerConfiguration(ContainerConfiguration &&) = default ;
    ContainerConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerConfiguration() = default ;
    ContainerConfiguration& operator=(const ContainerConfiguration &) = default ;
    ContainerConfiguration& operator=(ContainerConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ContainerConfiguration& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    shared_ptr<string> image_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
