// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEIMAGEFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEIMAGEFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MergeImageFaceAdvanceRequestMergeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MergeImageFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeImageFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddWatermark, addWatermark_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(MergeInfos, mergeInfos_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, MergeImageFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWatermark, addWatermark_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(MergeInfos, mergeInfos_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
    };
    MergeImageFaceAdvanceRequest() = default ;
    MergeImageFaceAdvanceRequest(const MergeImageFaceAdvanceRequest &) = default ;
    MergeImageFaceAdvanceRequest(MergeImageFaceAdvanceRequest &&) = default ;
    MergeImageFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeImageFaceAdvanceRequest() = default ;
    MergeImageFaceAdvanceRequest& operator=(const MergeImageFaceAdvanceRequest &) = default ;
    MergeImageFaceAdvanceRequest& operator=(MergeImageFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addWatermark_ == nullptr
        && return this->imageURLObject_ == nullptr && return this->mergeInfos_ == nullptr && return this->modelVersion_ == nullptr && return this->templateId_ == nullptr && return this->watermarkType_ == nullptr; };
    // addWatermark Field Functions 
    bool hasAddWatermark() const { return this->addWatermark_ != nullptr;};
    void deleteAddWatermark() { this->addWatermark_ = nullptr;};
    inline bool addWatermark() const { DARABONBA_PTR_GET_DEFAULT(addWatermark_, false) };
    inline MergeImageFaceAdvanceRequest& setAddWatermark(bool addWatermark) { DARABONBA_PTR_SET_VALUE(addWatermark_, addWatermark) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline MergeImageFaceAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // mergeInfos Field Functions 
    bool hasMergeInfos() const { return this->mergeInfos_ != nullptr;};
    void deleteMergeInfos() { this->mergeInfos_ = nullptr;};
    inline const vector<MergeImageFaceAdvanceRequestMergeInfos> & mergeInfos() const { DARABONBA_PTR_GET_CONST(mergeInfos_, vector<MergeImageFaceAdvanceRequestMergeInfos>) };
    inline vector<MergeImageFaceAdvanceRequestMergeInfos> mergeInfos() { DARABONBA_PTR_GET(mergeInfos_, vector<MergeImageFaceAdvanceRequestMergeInfos>) };
    inline MergeImageFaceAdvanceRequest& setMergeInfos(const vector<MergeImageFaceAdvanceRequestMergeInfos> & mergeInfos) { DARABONBA_PTR_SET_VALUE(mergeInfos_, mergeInfos) };
    inline MergeImageFaceAdvanceRequest& setMergeInfos(vector<MergeImageFaceAdvanceRequestMergeInfos> && mergeInfos) { DARABONBA_PTR_SET_RVALUE(mergeInfos_, mergeInfos) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string modelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline MergeImageFaceAdvanceRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MergeImageFaceAdvanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline MergeImageFaceAdvanceRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    std::shared_ptr<bool> addWatermark_ = nullptr;
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<vector<MergeImageFaceAdvanceRequestMergeInfos>> mergeInfos_ = nullptr;
    std::shared_ptr<string> modelVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
