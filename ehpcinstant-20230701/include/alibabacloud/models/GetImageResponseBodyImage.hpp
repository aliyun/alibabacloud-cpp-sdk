// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGE_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageResponseBodyImageAdditionalRegionsInfo.hpp>
#include <alibabacloud/models/GetImageResponseBodyImageContainerImageSpec.hpp>
#include <alibabacloud/models/GetImageResponseBodyImageDocumentInfo.hpp>
#include <alibabacloud/models/GetImageResponseBodyImageVMImageSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBodyImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyImage& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalRegionsInfo, additionalRegionsInfo_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ContainerImageSpec, containerImageSpec_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentInfo, documentInfo_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VMImageSpec, VMImageSpec_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyImage& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalRegionsInfo, additionalRegionsInfo_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ContainerImageSpec, containerImageSpec_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentInfo, documentInfo_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VMImageSpec, VMImageSpec_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetImageResponseBodyImage() = default ;
    GetImageResponseBodyImage(const GetImageResponseBodyImage &) = default ;
    GetImageResponseBodyImage(GetImageResponseBodyImage &&) = default ;
    GetImageResponseBodyImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyImage() = default ;
    GetImageResponseBodyImage& operator=(const GetImageResponseBodyImage &) = default ;
    GetImageResponseBodyImage& operator=(GetImageResponseBodyImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalRegionsInfo_ != nullptr
        && this->appId_ != nullptr && this->containerImageSpec_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->documentInfo_ != nullptr
        && this->imageType_ != nullptr && this->name_ != nullptr && this->size_ != nullptr && this->status_ != nullptr && this->VMImageSpec_ != nullptr
        && this->version_ != nullptr; };
    // additionalRegionsInfo Field Functions 
    bool hasAdditionalRegionsInfo() const { return this->additionalRegionsInfo_ != nullptr;};
    void deleteAdditionalRegionsInfo() { this->additionalRegionsInfo_ = nullptr;};
    inline const vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo> & additionalRegionsInfo() const { DARABONBA_PTR_GET_CONST(additionalRegionsInfo_, vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo>) };
    inline vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo> additionalRegionsInfo() { DARABONBA_PTR_GET(additionalRegionsInfo_, vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo>) };
    inline GetImageResponseBodyImage& setAdditionalRegionsInfo(const vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo> & additionalRegionsInfo) { DARABONBA_PTR_SET_VALUE(additionalRegionsInfo_, additionalRegionsInfo) };
    inline GetImageResponseBodyImage& setAdditionalRegionsInfo(vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo> && additionalRegionsInfo) { DARABONBA_PTR_SET_RVALUE(additionalRegionsInfo_, additionalRegionsInfo) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetImageResponseBodyImage& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // containerImageSpec Field Functions 
    bool hasContainerImageSpec() const { return this->containerImageSpec_ != nullptr;};
    void deleteContainerImageSpec() { this->containerImageSpec_ = nullptr;};
    inline const Models::GetImageResponseBodyImageContainerImageSpec & containerImageSpec() const { DARABONBA_PTR_GET_CONST(containerImageSpec_, Models::GetImageResponseBodyImageContainerImageSpec) };
    inline Models::GetImageResponseBodyImageContainerImageSpec containerImageSpec() { DARABONBA_PTR_GET(containerImageSpec_, Models::GetImageResponseBodyImageContainerImageSpec) };
    inline GetImageResponseBodyImage& setContainerImageSpec(const Models::GetImageResponseBodyImageContainerImageSpec & containerImageSpec) { DARABONBA_PTR_SET_VALUE(containerImageSpec_, containerImageSpec) };
    inline GetImageResponseBodyImage& setContainerImageSpec(Models::GetImageResponseBodyImageContainerImageSpec && containerImageSpec) { DARABONBA_PTR_SET_RVALUE(containerImageSpec_, containerImageSpec) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetImageResponseBodyImage& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetImageResponseBodyImage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentInfo Field Functions 
    bool hasDocumentInfo() const { return this->documentInfo_ != nullptr;};
    void deleteDocumentInfo() { this->documentInfo_ = nullptr;};
    inline const Models::GetImageResponseBodyImageDocumentInfo & documentInfo() const { DARABONBA_PTR_GET_CONST(documentInfo_, Models::GetImageResponseBodyImageDocumentInfo) };
    inline Models::GetImageResponseBodyImageDocumentInfo documentInfo() { DARABONBA_PTR_GET(documentInfo_, Models::GetImageResponseBodyImageDocumentInfo) };
    inline GetImageResponseBodyImage& setDocumentInfo(const Models::GetImageResponseBodyImageDocumentInfo & documentInfo) { DARABONBA_PTR_SET_VALUE(documentInfo_, documentInfo) };
    inline GetImageResponseBodyImage& setDocumentInfo(Models::GetImageResponseBodyImageDocumentInfo && documentInfo) { DARABONBA_PTR_SET_RVALUE(documentInfo_, documentInfo) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetImageResponseBodyImage& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetImageResponseBodyImage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GetImageResponseBodyImage& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageResponseBodyImage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // VMImageSpec Field Functions 
    bool hasVMImageSpec() const { return this->VMImageSpec_ != nullptr;};
    void deleteVMImageSpec() { this->VMImageSpec_ = nullptr;};
    inline const Models::GetImageResponseBodyImageVMImageSpec & VMImageSpec() const { DARABONBA_PTR_GET_CONST(VMImageSpec_, Models::GetImageResponseBodyImageVMImageSpec) };
    inline Models::GetImageResponseBodyImageVMImageSpec VMImageSpec() { DARABONBA_PTR_GET(VMImageSpec_, Models::GetImageResponseBodyImageVMImageSpec) };
    inline GetImageResponseBodyImage& setVMImageSpec(const Models::GetImageResponseBodyImageVMImageSpec & VMImageSpec) { DARABONBA_PTR_SET_VALUE(VMImageSpec_, VMImageSpec) };
    inline GetImageResponseBodyImage& setVMImageSpec(Models::GetImageResponseBodyImageVMImageSpec && VMImageSpec) { DARABONBA_PTR_SET_RVALUE(VMImageSpec_, VMImageSpec) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetImageResponseBodyImage& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<Models::GetImageResponseBodyImageAdditionalRegionsInfo>> additionalRegionsInfo_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<Models::GetImageResponseBodyImageContainerImageSpec> containerImageSpec_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetImageResponseBodyImageDocumentInfo> documentInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::GetImageResponseBodyImageVMImageSpec> VMImageSpec_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
