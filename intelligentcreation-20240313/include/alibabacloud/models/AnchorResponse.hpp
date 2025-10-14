// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANCHORRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ANCHORRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class AnchorResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnchorResponse& obj) { 
      DARABONBA_PTR_TO_JSON(anchorCategory, anchorCategory_);
      DARABONBA_PTR_TO_JSON(anchorId, anchorId_);
      DARABONBA_PTR_TO_JSON(anchorMaterialName, anchorMaterialName_);
      DARABONBA_PTR_TO_JSON(anchorType, anchorType_);
      DARABONBA_PTR_TO_JSON(coverHeight, coverHeight_);
      DARABONBA_PTR_TO_JSON(coverRate, coverRate_);
      DARABONBA_PTR_TO_JSON(coverThumbnailUrl, coverThumbnailUrl_);
      DARABONBA_PTR_TO_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(coverWeight, coverWeight_);
      DARABONBA_PTR_TO_JSON(digitalHumanType, digitalHumanType_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(resourceTypeDesc, resourceTypeDesc_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supportBgChange, supportBgChange_);
      DARABONBA_PTR_TO_JSON(useScene, useScene_);
    };
    friend void from_json(const Darabonba::Json& j, AnchorResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(anchorCategory, anchorCategory_);
      DARABONBA_PTR_FROM_JSON(anchorId, anchorId_);
      DARABONBA_PTR_FROM_JSON(anchorMaterialName, anchorMaterialName_);
      DARABONBA_PTR_FROM_JSON(anchorType, anchorType_);
      DARABONBA_PTR_FROM_JSON(coverHeight, coverHeight_);
      DARABONBA_PTR_FROM_JSON(coverRate, coverRate_);
      DARABONBA_PTR_FROM_JSON(coverThumbnailUrl, coverThumbnailUrl_);
      DARABONBA_PTR_FROM_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(coverWeight, coverWeight_);
      DARABONBA_PTR_FROM_JSON(digitalHumanType, digitalHumanType_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(resourceTypeDesc, resourceTypeDesc_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supportBgChange, supportBgChange_);
      DARABONBA_PTR_FROM_JSON(useScene, useScene_);
    };
    AnchorResponse() = default ;
    AnchorResponse(const AnchorResponse &) = default ;
    AnchorResponse(AnchorResponse &&) = default ;
    AnchorResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnchorResponse() = default ;
    AnchorResponse& operator=(const AnchorResponse &) = default ;
    AnchorResponse& operator=(AnchorResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorCategory_ == nullptr
        && return this->anchorId_ == nullptr && return this->anchorMaterialName_ == nullptr && return this->anchorType_ == nullptr && return this->coverHeight_ == nullptr && return this->coverRate_ == nullptr
        && return this->coverThumbnailUrl_ == nullptr && return this->coverUrl_ == nullptr && return this->coverWeight_ == nullptr && return this->digitalHumanType_ == nullptr && return this->gender_ == nullptr
        && return this->resourceTypeDesc_ == nullptr && return this->status_ == nullptr && return this->supportBgChange_ == nullptr && return this->useScene_ == nullptr; };
    // anchorCategory Field Functions 
    bool hasAnchorCategory() const { return this->anchorCategory_ != nullptr;};
    void deleteAnchorCategory() { this->anchorCategory_ = nullptr;};
    inline string anchorCategory() const { DARABONBA_PTR_GET_DEFAULT(anchorCategory_, "") };
    inline AnchorResponse& setAnchorCategory(string anchorCategory) { DARABONBA_PTR_SET_VALUE(anchorCategory_, anchorCategory) };


    // anchorId Field Functions 
    bool hasAnchorId() const { return this->anchorId_ != nullptr;};
    void deleteAnchorId() { this->anchorId_ = nullptr;};
    inline string anchorId() const { DARABONBA_PTR_GET_DEFAULT(anchorId_, "") };
    inline AnchorResponse& setAnchorId(string anchorId) { DARABONBA_PTR_SET_VALUE(anchorId_, anchorId) };


    // anchorMaterialName Field Functions 
    bool hasAnchorMaterialName() const { return this->anchorMaterialName_ != nullptr;};
    void deleteAnchorMaterialName() { this->anchorMaterialName_ = nullptr;};
    inline string anchorMaterialName() const { DARABONBA_PTR_GET_DEFAULT(anchorMaterialName_, "") };
    inline AnchorResponse& setAnchorMaterialName(string anchorMaterialName) { DARABONBA_PTR_SET_VALUE(anchorMaterialName_, anchorMaterialName) };


    // anchorType Field Functions 
    bool hasAnchorType() const { return this->anchorType_ != nullptr;};
    void deleteAnchorType() { this->anchorType_ = nullptr;};
    inline string anchorType() const { DARABONBA_PTR_GET_DEFAULT(anchorType_, "") };
    inline AnchorResponse& setAnchorType(string anchorType) { DARABONBA_PTR_SET_VALUE(anchorType_, anchorType) };


    // coverHeight Field Functions 
    bool hasCoverHeight() const { return this->coverHeight_ != nullptr;};
    void deleteCoverHeight() { this->coverHeight_ = nullptr;};
    inline int32_t coverHeight() const { DARABONBA_PTR_GET_DEFAULT(coverHeight_, 0) };
    inline AnchorResponse& setCoverHeight(int32_t coverHeight) { DARABONBA_PTR_SET_VALUE(coverHeight_, coverHeight) };


    // coverRate Field Functions 
    bool hasCoverRate() const { return this->coverRate_ != nullptr;};
    void deleteCoverRate() { this->coverRate_ = nullptr;};
    inline string coverRate() const { DARABONBA_PTR_GET_DEFAULT(coverRate_, "") };
    inline AnchorResponse& setCoverRate(string coverRate) { DARABONBA_PTR_SET_VALUE(coverRate_, coverRate) };


    // coverThumbnailUrl Field Functions 
    bool hasCoverThumbnailUrl() const { return this->coverThumbnailUrl_ != nullptr;};
    void deleteCoverThumbnailUrl() { this->coverThumbnailUrl_ = nullptr;};
    inline string coverThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(coverThumbnailUrl_, "") };
    inline AnchorResponse& setCoverThumbnailUrl(string coverThumbnailUrl) { DARABONBA_PTR_SET_VALUE(coverThumbnailUrl_, coverThumbnailUrl) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline AnchorResponse& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // coverWeight Field Functions 
    bool hasCoverWeight() const { return this->coverWeight_ != nullptr;};
    void deleteCoverWeight() { this->coverWeight_ = nullptr;};
    inline int32_t coverWeight() const { DARABONBA_PTR_GET_DEFAULT(coverWeight_, 0) };
    inline AnchorResponse& setCoverWeight(int32_t coverWeight) { DARABONBA_PTR_SET_VALUE(coverWeight_, coverWeight) };


    // digitalHumanType Field Functions 
    bool hasDigitalHumanType() const { return this->digitalHumanType_ != nullptr;};
    void deleteDigitalHumanType() { this->digitalHumanType_ = nullptr;};
    inline string digitalHumanType() const { DARABONBA_PTR_GET_DEFAULT(digitalHumanType_, "") };
    inline AnchorResponse& setDigitalHumanType(string digitalHumanType) { DARABONBA_PTR_SET_VALUE(digitalHumanType_, digitalHumanType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline AnchorResponse& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // resourceTypeDesc Field Functions 
    bool hasResourceTypeDesc() const { return this->resourceTypeDesc_ != nullptr;};
    void deleteResourceTypeDesc() { this->resourceTypeDesc_ = nullptr;};
    inline string resourceTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeDesc_, "") };
    inline AnchorResponse& setResourceTypeDesc(string resourceTypeDesc) { DARABONBA_PTR_SET_VALUE(resourceTypeDesc_, resourceTypeDesc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AnchorResponse& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportBgChange Field Functions 
    bool hasSupportBgChange() const { return this->supportBgChange_ != nullptr;};
    void deleteSupportBgChange() { this->supportBgChange_ = nullptr;};
    inline int32_t supportBgChange() const { DARABONBA_PTR_GET_DEFAULT(supportBgChange_, 0) };
    inline AnchorResponse& setSupportBgChange(int32_t supportBgChange) { DARABONBA_PTR_SET_VALUE(supportBgChange_, supportBgChange) };


    // useScene Field Functions 
    bool hasUseScene() const { return this->useScene_ != nullptr;};
    void deleteUseScene() { this->useScene_ = nullptr;};
    inline string useScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
    inline AnchorResponse& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


  protected:
    std::shared_ptr<string> anchorCategory_ = nullptr;
    std::shared_ptr<string> anchorId_ = nullptr;
    std::shared_ptr<string> anchorMaterialName_ = nullptr;
    std::shared_ptr<string> anchorType_ = nullptr;
    std::shared_ptr<int32_t> coverHeight_ = nullptr;
    std::shared_ptr<string> coverRate_ = nullptr;
    std::shared_ptr<string> coverThumbnailUrl_ = nullptr;
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<int32_t> coverWeight_ = nullptr;
    std::shared_ptr<string> digitalHumanType_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> resourceTypeDesc_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> supportBgChange_ = nullptr;
    std::shared_ptr<string> useScene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
