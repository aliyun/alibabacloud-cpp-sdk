// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAINPICAVATARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAINPICAVATARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateTrainPicAvatarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainPicAvatarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(generateAssets, generateAssets_);
      DARABONBA_PTR_TO_JSON(imageOssPath, imageOssPath_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(transparent, transparent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainPicAvatarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(generateAssets, generateAssets_);
      DARABONBA_PTR_FROM_JSON(imageOssPath, imageOssPath_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(transparent, transparent_);
    };
    CreateTrainPicAvatarRequest() = default ;
    CreateTrainPicAvatarRequest(const CreateTrainPicAvatarRequest &) = default ;
    CreateTrainPicAvatarRequest(CreateTrainPicAvatarRequest &&) = default ;
    CreateTrainPicAvatarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainPicAvatarRequest() = default ;
    CreateTrainPicAvatarRequest& operator=(const CreateTrainPicAvatarRequest &) = default ;
    CreateTrainPicAvatarRequest& operator=(CreateTrainPicAvatarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gender_ == nullptr
        && return this->generateAssets_ == nullptr && return this->imageOssPath_ == nullptr && return this->name_ == nullptr && return this->templateId_ == nullptr && return this->transparent_ == nullptr; };
    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateTrainPicAvatarRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // generateAssets Field Functions 
    bool hasGenerateAssets() const { return this->generateAssets_ != nullptr;};
    void deleteGenerateAssets() { this->generateAssets_ = nullptr;};
    inline bool generateAssets() const { DARABONBA_PTR_GET_DEFAULT(generateAssets_, false) };
    inline CreateTrainPicAvatarRequest& setGenerateAssets(bool generateAssets) { DARABONBA_PTR_SET_VALUE(generateAssets_, generateAssets) };


    // imageOssPath Field Functions 
    bool hasImageOssPath() const { return this->imageOssPath_ != nullptr;};
    void deleteImageOssPath() { this->imageOssPath_ = nullptr;};
    inline string imageOssPath() const { DARABONBA_PTR_GET_DEFAULT(imageOssPath_, "") };
    inline CreateTrainPicAvatarRequest& setImageOssPath(string imageOssPath) { DARABONBA_PTR_SET_VALUE(imageOssPath_, imageOssPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrainPicAvatarRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateTrainPicAvatarRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transparent Field Functions 
    bool hasTransparent() const { return this->transparent_ != nullptr;};
    void deleteTransparent() { this->transparent_ = nullptr;};
    inline bool transparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
    inline CreateTrainPicAvatarRequest& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<bool> generateAssets_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageOssPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<bool> transparent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
