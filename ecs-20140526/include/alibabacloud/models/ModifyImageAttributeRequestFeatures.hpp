// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGEATTRIBUTEREQUESTFEATURES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGEATTRIBUTEREQUESTFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyImageAttributeRequestFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageAttributeRequestFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageAttributeRequestFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
    };
    ModifyImageAttributeRequestFeatures() = default ;
    ModifyImageAttributeRequestFeatures(const ModifyImageAttributeRequestFeatures &) = default ;
    ModifyImageAttributeRequestFeatures(ModifyImageAttributeRequestFeatures &&) = default ;
    ModifyImageAttributeRequestFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageAttributeRequestFeatures() = default ;
    ModifyImageAttributeRequestFeatures& operator=(const ModifyImageAttributeRequestFeatures &) = default ;
    ModifyImageAttributeRequestFeatures& operator=(ModifyImageAttributeRequestFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imdsSupport_ == nullptr
        && return this->nvmeSupport_ == nullptr; };
    // imdsSupport Field Functions 
    bool hasImdsSupport() const { return this->imdsSupport_ != nullptr;};
    void deleteImdsSupport() { this->imdsSupport_ = nullptr;};
    inline string imdsSupport() const { DARABONBA_PTR_GET_DEFAULT(imdsSupport_, "") };
    inline ModifyImageAttributeRequestFeatures& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline ModifyImageAttributeRequestFeatures& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


  protected:
    // The image metadata access mode. Valid values:
    // 
    // *   v1: You cannot set the image metadata access mode to security hardening when you create instances from the image.
    // 
    // *   v2: You can set the image metadata access mode to security hardening when you create instances from the image.
    // 
    //     **
    // 
    //     **Note** You cannot change the value of ImdsSupport from v2 to v1 for an image. To change the value of ImdsSupport from v2 to v1 for an image, use the snapshots associated with the image to create an image and set ImdsSupport to v1 for the new image.
    std::shared_ptr<string> imdsSupport_ = nullptr;
    // Specifies whether the image supports the Non-Volatile Memory Express (NVMe) protocol. Valid values:
    // 
    // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
    // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
