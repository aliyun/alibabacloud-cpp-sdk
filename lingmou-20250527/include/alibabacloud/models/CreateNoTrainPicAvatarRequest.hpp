// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENOTRAINPICAVATARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENOTRAINPICAVATARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateNoTrainPicAvatarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNoTrainPicAvatarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(generateAssets, generateAssets_);
      DARABONBA_PTR_TO_JSON(imageOssPath, imageOssPath_);
      DARABONBA_PTR_TO_JSON(jwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(transparent, transparent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNoTrainPicAvatarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(generateAssets, generateAssets_);
      DARABONBA_PTR_FROM_JSON(imageOssPath, imageOssPath_);
      DARABONBA_PTR_FROM_JSON(jwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(transparent, transparent_);
    };
    CreateNoTrainPicAvatarRequest() = default ;
    CreateNoTrainPicAvatarRequest(const CreateNoTrainPicAvatarRequest &) = default ;
    CreateNoTrainPicAvatarRequest(CreateNoTrainPicAvatarRequest &&) = default ;
    CreateNoTrainPicAvatarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNoTrainPicAvatarRequest() = default ;
    CreateNoTrainPicAvatarRequest& operator=(const CreateNoTrainPicAvatarRequest &) = default ;
    CreateNoTrainPicAvatarRequest& operator=(CreateNoTrainPicAvatarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressiveness_ == nullptr
        && return this->gender_ == nullptr && return this->generateAssets_ == nullptr && return this->imageOssPath_ == nullptr && return this->jwtToken_ == nullptr && return this->name_ == nullptr
        && return this->transparent_ == nullptr; };
    // expressiveness Field Functions 
    bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
    void deleteExpressiveness() { this->expressiveness_ = nullptr;};
    inline string expressiveness() const { DARABONBA_PTR_GET_DEFAULT(expressiveness_, "") };
    inline CreateNoTrainPicAvatarRequest& setExpressiveness(string expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateNoTrainPicAvatarRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // generateAssets Field Functions 
    bool hasGenerateAssets() const { return this->generateAssets_ != nullptr;};
    void deleteGenerateAssets() { this->generateAssets_ = nullptr;};
    inline bool generateAssets() const { DARABONBA_PTR_GET_DEFAULT(generateAssets_, false) };
    inline CreateNoTrainPicAvatarRequest& setGenerateAssets(bool generateAssets) { DARABONBA_PTR_SET_VALUE(generateAssets_, generateAssets) };


    // imageOssPath Field Functions 
    bool hasImageOssPath() const { return this->imageOssPath_ != nullptr;};
    void deleteImageOssPath() { this->imageOssPath_ = nullptr;};
    inline string imageOssPath() const { DARABONBA_PTR_GET_DEFAULT(imageOssPath_, "") };
    inline CreateNoTrainPicAvatarRequest& setImageOssPath(string imageOssPath) { DARABONBA_PTR_SET_VALUE(imageOssPath_, imageOssPath) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string jwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline CreateNoTrainPicAvatarRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNoTrainPicAvatarRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transparent Field Functions 
    bool hasTransparent() const { return this->transparent_ != nullptr;};
    void deleteTransparent() { this->transparent_ = nullptr;};
    inline bool transparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
    inline CreateNoTrainPicAvatarRequest& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


  protected:
    std::shared_ptr<string> expressiveness_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<bool> generateAssets_ = nullptr;
    std::shared_ptr<string> imageOssPath_ = nullptr;
    std::shared_ptr<string> jwtToken_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> transparent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
