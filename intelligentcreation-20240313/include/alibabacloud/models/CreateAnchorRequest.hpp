// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANCHORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANCHORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAnchorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnchorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(anchorCategory, anchorCategory_);
      DARABONBA_PTR_TO_JSON(anchorMaterialName, anchorMaterialName_);
      DARABONBA_PTR_TO_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(digitalHumanType, digitalHumanType_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(useScene, useScene_);
      DARABONBA_PTR_TO_JSON(videoOssKey, videoOssKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnchorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(anchorCategory, anchorCategory_);
      DARABONBA_PTR_FROM_JSON(anchorMaterialName, anchorMaterialName_);
      DARABONBA_PTR_FROM_JSON(coverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(digitalHumanType, digitalHumanType_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(useScene, useScene_);
      DARABONBA_PTR_FROM_JSON(videoOssKey, videoOssKey_);
    };
    CreateAnchorRequest() = default ;
    CreateAnchorRequest(const CreateAnchorRequest &) = default ;
    CreateAnchorRequest(CreateAnchorRequest &&) = default ;
    CreateAnchorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnchorRequest() = default ;
    CreateAnchorRequest& operator=(const CreateAnchorRequest &) = default ;
    CreateAnchorRequest& operator=(CreateAnchorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorCategory_ == nullptr
        && this->anchorMaterialName_ == nullptr && this->coverUrl_ == nullptr && this->digitalHumanType_ == nullptr && this->gender_ == nullptr && this->useScene_ == nullptr
        && this->videoOssKey_ == nullptr; };
    // anchorCategory Field Functions 
    bool hasAnchorCategory() const { return this->anchorCategory_ != nullptr;};
    void deleteAnchorCategory() { this->anchorCategory_ = nullptr;};
    inline string getAnchorCategory() const { DARABONBA_PTR_GET_DEFAULT(anchorCategory_, "") };
    inline CreateAnchorRequest& setAnchorCategory(string anchorCategory) { DARABONBA_PTR_SET_VALUE(anchorCategory_, anchorCategory) };


    // anchorMaterialName Field Functions 
    bool hasAnchorMaterialName() const { return this->anchorMaterialName_ != nullptr;};
    void deleteAnchorMaterialName() { this->anchorMaterialName_ = nullptr;};
    inline string getAnchorMaterialName() const { DARABONBA_PTR_GET_DEFAULT(anchorMaterialName_, "") };
    inline CreateAnchorRequest& setAnchorMaterialName(string anchorMaterialName) { DARABONBA_PTR_SET_VALUE(anchorMaterialName_, anchorMaterialName) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline CreateAnchorRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // digitalHumanType Field Functions 
    bool hasDigitalHumanType() const { return this->digitalHumanType_ != nullptr;};
    void deleteDigitalHumanType() { this->digitalHumanType_ = nullptr;};
    inline string getDigitalHumanType() const { DARABONBA_PTR_GET_DEFAULT(digitalHumanType_, "") };
    inline CreateAnchorRequest& setDigitalHumanType(string digitalHumanType) { DARABONBA_PTR_SET_VALUE(digitalHumanType_, digitalHumanType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateAnchorRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // useScene Field Functions 
    bool hasUseScene() const { return this->useScene_ != nullptr;};
    void deleteUseScene() { this->useScene_ = nullptr;};
    inline string getUseScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
    inline CreateAnchorRequest& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


    // videoOssKey Field Functions 
    bool hasVideoOssKey() const { return this->videoOssKey_ != nullptr;};
    void deleteVideoOssKey() { this->videoOssKey_ = nullptr;};
    inline string getVideoOssKey() const { DARABONBA_PTR_GET_DEFAULT(videoOssKey_, "") };
    inline CreateAnchorRequest& setVideoOssKey(string videoOssKey) { DARABONBA_PTR_SET_VALUE(videoOssKey_, videoOssKey) };


  protected:
    shared_ptr<string> anchorCategory_ {};
    shared_ptr<string> anchorMaterialName_ {};
    shared_ptr<string> coverUrl_ {};
    shared_ptr<string> digitalHumanType_ {};
    shared_ptr<string> gender_ {};
    shared_ptr<string> useScene_ {};
    shared_ptr<string> videoOssKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
