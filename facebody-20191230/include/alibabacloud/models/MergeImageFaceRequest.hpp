// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEIMAGEFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEIMAGEFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MergeImageFaceRequestMergeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MergeImageFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeImageFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(MergeInfos, mergeInfos_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, MergeImageFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(MergeInfos, mergeInfos_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
    };
    MergeImageFaceRequest() = default ;
    MergeImageFaceRequest(const MergeImageFaceRequest &) = default ;
    MergeImageFaceRequest(MergeImageFaceRequest &&) = default ;
    MergeImageFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeImageFaceRequest() = default ;
    MergeImageFaceRequest& operator=(const MergeImageFaceRequest &) = default ;
    MergeImageFaceRequest& operator=(MergeImageFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addWatermark_ == nullptr
        && return this->imageURL_ == nullptr && return this->mergeInfos_ == nullptr && return this->modelVersion_ == nullptr && return this->templateId_ == nullptr && return this->watermarkType_ == nullptr; };
    // addWatermark Field Functions 
    bool hasAddWatermark() const { return this->addWatermark_ != nullptr;};
    void deleteAddWatermark() { this->addWatermark_ = nullptr;};
    inline bool addWatermark() const { DARABONBA_PTR_GET_DEFAULT(addWatermark_, false) };
    inline MergeImageFaceRequest& setAddWatermark(bool addWatermark) { DARABONBA_PTR_SET_VALUE(addWatermark_, addWatermark) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline MergeImageFaceRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // mergeInfos Field Functions 
    bool hasMergeInfos() const { return this->mergeInfos_ != nullptr;};
    void deleteMergeInfos() { this->mergeInfos_ = nullptr;};
    inline const vector<MergeImageFaceRequestMergeInfos> & mergeInfos() const { DARABONBA_PTR_GET_CONST(mergeInfos_, vector<MergeImageFaceRequestMergeInfos>) };
    inline vector<MergeImageFaceRequestMergeInfos> mergeInfos() { DARABONBA_PTR_GET(mergeInfos_, vector<MergeImageFaceRequestMergeInfos>) };
    inline MergeImageFaceRequest& setMergeInfos(const vector<MergeImageFaceRequestMergeInfos> & mergeInfos) { DARABONBA_PTR_SET_VALUE(mergeInfos_, mergeInfos) };
    inline MergeImageFaceRequest& setMergeInfos(vector<MergeImageFaceRequestMergeInfos> && mergeInfos) { DARABONBA_PTR_SET_RVALUE(mergeInfos_, mergeInfos) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string modelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline MergeImageFaceRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MergeImageFaceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline MergeImageFaceRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    std::shared_ptr<bool> addWatermark_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<vector<MergeImageFaceRequestMergeInfos>> mergeInfos_ = nullptr;
    std::shared_ptr<string> modelVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
