// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMAGEOPTIONSIMAGEFEATURES_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMAGEOPTIONSIMAGEFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineRequestImageOptionsImageFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequestImageOptionsImageFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequestImageOptionsImageFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
    };
    CreateImagePipelineRequestImageOptionsImageFeatures() = default ;
    CreateImagePipelineRequestImageOptionsImageFeatures(const CreateImagePipelineRequestImageOptionsImageFeatures &) = default ;
    CreateImagePipelineRequestImageOptionsImageFeatures(CreateImagePipelineRequestImageOptionsImageFeatures &&) = default ;
    CreateImagePipelineRequestImageOptionsImageFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequestImageOptionsImageFeatures() = default ;
    CreateImagePipelineRequestImageOptionsImageFeatures& operator=(const CreateImagePipelineRequestImageOptionsImageFeatures &) = default ;
    CreateImagePipelineRequestImageOptionsImageFeatures& operator=(CreateImagePipelineRequestImageOptionsImageFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nvmeSupport_ != nullptr; };
    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline CreateImagePipelineRequestImageOptionsImageFeatures& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


  protected:
    // Specifies whether the image created based on the image template supports the NVMe protocol. Valid values:
    // 
    // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
    // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
    // *   auto: The system automatically detects whether the image supports the NVMe protocol. The system automatically detects whether the NVMe driver is installed on your image before the new image is built. If you install or uninstall the NVMe driver during the image building process, the detection result may be incorrect. We recommend that you set the value to supported or unsupported based on the image building content.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
