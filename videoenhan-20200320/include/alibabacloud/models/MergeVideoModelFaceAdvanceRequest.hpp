// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEVIDEOMODELFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEVIDEOMODELFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MergeVideoModelFaceAdvanceRequestMergeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class MergeVideoModelFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeVideoModelFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_TO_JSON(Enhance, enhance_);
      DARABONBA_TO_JSON(FaceImageURL, faceImageURLObject_);
      DARABONBA_PTR_TO_JSON(MergeInfos, mergeInfos_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, MergeVideoModelFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWatermark, addWatermark_);
      DARABONBA_PTR_FROM_JSON(Enhance, enhance_);
      DARABONBA_FROM_JSON(FaceImageURL, faceImageURLObject_);
      DARABONBA_PTR_FROM_JSON(MergeInfos, mergeInfos_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
    };
    MergeVideoModelFaceAdvanceRequest() = default ;
    MergeVideoModelFaceAdvanceRequest(const MergeVideoModelFaceAdvanceRequest &) = default ;
    MergeVideoModelFaceAdvanceRequest(MergeVideoModelFaceAdvanceRequest &&) = default ;
    MergeVideoModelFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeVideoModelFaceAdvanceRequest() = default ;
    MergeVideoModelFaceAdvanceRequest& operator=(const MergeVideoModelFaceAdvanceRequest &) = default ;
    MergeVideoModelFaceAdvanceRequest& operator=(MergeVideoModelFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addWatermark_ != nullptr
        && this->enhance_ != nullptr && this->faceImageURLObject_ != nullptr && this->mergeInfos_ != nullptr && this->templateId_ != nullptr && this->watermarkType_ != nullptr; };
    // addWatermark Field Functions 
    bool hasAddWatermark() const { return this->addWatermark_ != nullptr;};
    void deleteAddWatermark() { this->addWatermark_ = nullptr;};
    inline bool addWatermark() const { DARABONBA_PTR_GET_DEFAULT(addWatermark_, false) };
    inline MergeVideoModelFaceAdvanceRequest& setAddWatermark(bool addWatermark) { DARABONBA_PTR_SET_VALUE(addWatermark_, addWatermark) };


    // enhance Field Functions 
    bool hasEnhance() const { return this->enhance_ != nullptr;};
    void deleteEnhance() { this->enhance_ = nullptr;};
    inline bool enhance() const { DARABONBA_PTR_GET_DEFAULT(enhance_, false) };
    inline MergeVideoModelFaceAdvanceRequest& setEnhance(bool enhance) { DARABONBA_PTR_SET_VALUE(enhance_, enhance) };


    // faceImageURLObject Field Functions 
    bool hasFaceImageURLObject() const { return this->faceImageURLObject_ != nullptr;};
    void deleteFaceImageURLObject() { this->faceImageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> faceImageURLObject() const { DARABONBA_GET(faceImageURLObject_) };
    inline MergeVideoModelFaceAdvanceRequest& setFaceImageURLObject(shared_ptr<Darabonba::IStream> faceImageURLObject) { DARABONBA_SET_VALUE(faceImageURLObject_, faceImageURLObject) };


    // mergeInfos Field Functions 
    bool hasMergeInfos() const { return this->mergeInfos_ != nullptr;};
    void deleteMergeInfos() { this->mergeInfos_ = nullptr;};
    inline const vector<MergeVideoModelFaceAdvanceRequestMergeInfos> & mergeInfos() const { DARABONBA_PTR_GET_CONST(mergeInfos_, vector<MergeVideoModelFaceAdvanceRequestMergeInfos>) };
    inline vector<MergeVideoModelFaceAdvanceRequestMergeInfos> mergeInfos() { DARABONBA_PTR_GET(mergeInfos_, vector<MergeVideoModelFaceAdvanceRequestMergeInfos>) };
    inline MergeVideoModelFaceAdvanceRequest& setMergeInfos(const vector<MergeVideoModelFaceAdvanceRequestMergeInfos> & mergeInfos) { DARABONBA_PTR_SET_VALUE(mergeInfos_, mergeInfos) };
    inline MergeVideoModelFaceAdvanceRequest& setMergeInfos(vector<MergeVideoModelFaceAdvanceRequestMergeInfos> && mergeInfos) { DARABONBA_PTR_SET_RVALUE(mergeInfos_, mergeInfos) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MergeVideoModelFaceAdvanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline MergeVideoModelFaceAdvanceRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    std::shared_ptr<bool> addWatermark_ = nullptr;
    std::shared_ptr<bool> enhance_ = nullptr;
    shared_ptr<Darabonba::IStream> faceImageURLObject_ = nullptr;
    std::shared_ptr<vector<MergeVideoModelFaceAdvanceRequestMergeInfos>> mergeInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
