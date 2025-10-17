// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMPORTIMAGEOPTIONSFEATURES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMPORTIMAGEOPTIONSFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures &&) = default ;
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
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


  protected:
    std::shared_ptr<string> imdsSupport_ = nullptr;
    // Indicates whether the image supports the NVMe protocol. Valid values:
    // 
    // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
    // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
