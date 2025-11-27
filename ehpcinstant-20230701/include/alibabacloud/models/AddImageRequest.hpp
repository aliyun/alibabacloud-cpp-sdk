// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddImageRequestContainerImageSpec.hpp>
#include <alibabacloud/models/AddImageRequestVMImageSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class AddImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerImageSpec, containerImageSpec_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VMImageSpec, VMImageSpec_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerImageSpec, containerImageSpec_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VMImageSpec, VMImageSpec_);
    };
    AddImageRequest() = default ;
    AddImageRequest(const AddImageRequest &) = default ;
    AddImageRequest(AddImageRequest &&) = default ;
    AddImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageRequest() = default ;
    AddImageRequest& operator=(const AddImageRequest &) = default ;
    AddImageRequest& operator=(AddImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerImageSpec_ == nullptr
        && return this->description_ == nullptr && return this->imageType_ == nullptr && return this->imageVersion_ == nullptr && return this->name_ == nullptr && return this->VMImageSpec_ == nullptr; };
    // containerImageSpec Field Functions 
    bool hasContainerImageSpec() const { return this->containerImageSpec_ != nullptr;};
    void deleteContainerImageSpec() { this->containerImageSpec_ = nullptr;};
    inline const AddImageRequestContainerImageSpec & containerImageSpec() const { DARABONBA_PTR_GET_CONST(containerImageSpec_, AddImageRequestContainerImageSpec) };
    inline AddImageRequestContainerImageSpec containerImageSpec() { DARABONBA_PTR_GET(containerImageSpec_, AddImageRequestContainerImageSpec) };
    inline AddImageRequest& setContainerImageSpec(const AddImageRequestContainerImageSpec & containerImageSpec) { DARABONBA_PTR_SET_VALUE(containerImageSpec_, containerImageSpec) };
    inline AddImageRequest& setContainerImageSpec(AddImageRequestContainerImageSpec && containerImageSpec) { DARABONBA_PTR_SET_RVALUE(containerImageSpec_, containerImageSpec) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline AddImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline AddImageRequest& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddImageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // VMImageSpec Field Functions 
    bool hasVMImageSpec() const { return this->VMImageSpec_ != nullptr;};
    void deleteVMImageSpec() { this->VMImageSpec_ = nullptr;};
    inline const AddImageRequestVMImageSpec & VMImageSpec() const { DARABONBA_PTR_GET_CONST(VMImageSpec_, AddImageRequestVMImageSpec) };
    inline AddImageRequestVMImageSpec VMImageSpec() { DARABONBA_PTR_GET(VMImageSpec_, AddImageRequestVMImageSpec) };
    inline AddImageRequest& setVMImageSpec(const AddImageRequestVMImageSpec & VMImageSpec) { DARABONBA_PTR_SET_VALUE(VMImageSpec_, VMImageSpec) };
    inline AddImageRequest& setVMImageSpec(AddImageRequestVMImageSpec && VMImageSpec) { DARABONBA_PTR_SET_RVALUE(VMImageSpec_, VMImageSpec) };


  protected:
    // The configurations of the container image.
    std::shared_ptr<AddImageRequestContainerImageSpec> containerImageSpec_ = nullptr;
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
    std::shared_ptr<AddImageRequestVMImageSpec> VMImageSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
