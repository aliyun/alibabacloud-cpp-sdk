// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class AddImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerImageSpec, containerImageSpecShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VMImageSpec, VMImageSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerImageSpec, containerImageSpecShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VMImageSpec, VMImageSpecShrink_);
    };
    AddImageShrinkRequest() = default ;
    AddImageShrinkRequest(const AddImageShrinkRequest &) = default ;
    AddImageShrinkRequest(AddImageShrinkRequest &&) = default ;
    AddImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageShrinkRequest() = default ;
    AddImageShrinkRequest& operator=(const AddImageShrinkRequest &) = default ;
    AddImageShrinkRequest& operator=(AddImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerImageSpecShrink_ == nullptr
        && return this->description_ == nullptr && return this->imageType_ == nullptr && return this->imageVersion_ == nullptr && return this->name_ == nullptr && return this->VMImageSpecShrink_ == nullptr; };
    // containerImageSpecShrink Field Functions 
    bool hasContainerImageSpecShrink() const { return this->containerImageSpecShrink_ != nullptr;};
    void deleteContainerImageSpecShrink() { this->containerImageSpecShrink_ = nullptr;};
    inline string containerImageSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(containerImageSpecShrink_, "") };
    inline AddImageShrinkRequest& setContainerImageSpecShrink(string containerImageSpecShrink) { DARABONBA_PTR_SET_VALUE(containerImageSpecShrink_, containerImageSpecShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddImageShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline AddImageShrinkRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline AddImageShrinkRequest& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddImageShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // VMImageSpecShrink Field Functions 
    bool hasVMImageSpecShrink() const { return this->VMImageSpecShrink_ != nullptr;};
    void deleteVMImageSpecShrink() { this->VMImageSpecShrink_ = nullptr;};
    inline string VMImageSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(VMImageSpecShrink_, "") };
    inline AddImageShrinkRequest& setVMImageSpecShrink(string VMImageSpecShrink) { DARABONBA_PTR_SET_VALUE(VMImageSpecShrink_, VMImageSpecShrink) };


  protected:
    // The configurations of the container image.
    std::shared_ptr<string> containerImageSpecShrink_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the images. Valid values:
    // 
    // *   VM: virtual machine image.
    // *   Container: the container image.
    std::shared_ptr<string> imageType_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The name of the custom image.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The image configuration of the virtual machine.
    std::shared_ptr<string> VMImageSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
