// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMPORTIMAGEOPTIONSFEATURES_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMPORTIMAGEOPTIONSFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineRequestImportImageOptionsFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequestImportImageOptionsFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequestImportImageOptionsFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
    };
    CreateImagePipelineRequestImportImageOptionsFeatures() = default ;
    CreateImagePipelineRequestImportImageOptionsFeatures(const CreateImagePipelineRequestImportImageOptionsFeatures &) = default ;
    CreateImagePipelineRequestImportImageOptionsFeatures(CreateImagePipelineRequestImportImageOptionsFeatures &&) = default ;
    CreateImagePipelineRequestImportImageOptionsFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequestImportImageOptionsFeatures() = default ;
    CreateImagePipelineRequestImportImageOptionsFeatures& operator=(const CreateImagePipelineRequestImportImageOptionsFeatures &) = default ;
    CreateImagePipelineRequestImportImageOptionsFeatures& operator=(CreateImagePipelineRequestImportImageOptionsFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nvmeSupport_ != nullptr; };
    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline CreateImagePipelineRequestImportImageOptionsFeatures& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


  protected:
    // Specifies whether the imported source image supports the Non-Volatile Memory Express (NVMe) protocol. Valid values:
    // 
    // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
    // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
    // 
    // Default value: unsupported.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
