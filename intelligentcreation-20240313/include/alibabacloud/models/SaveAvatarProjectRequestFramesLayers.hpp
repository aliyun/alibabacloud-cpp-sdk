// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMESLAYERS_HPP_
#define ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMESLAYERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SaveAvatarProjectRequestFramesLayersMaterial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SaveAvatarProjectRequestFramesLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAvatarProjectRequestFramesLayers& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(material, material_);
      DARABONBA_PTR_TO_JSON(positionX, positionX_);
      DARABONBA_PTR_TO_JSON(positionY, positionY_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAvatarProjectRequestFramesLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(material, material_);
      DARABONBA_PTR_FROM_JSON(positionX, positionX_);
      DARABONBA_PTR_FROM_JSON(positionY, positionY_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    SaveAvatarProjectRequestFramesLayers() = default ;
    SaveAvatarProjectRequestFramesLayers(const SaveAvatarProjectRequestFramesLayers &) = default ;
    SaveAvatarProjectRequestFramesLayers(SaveAvatarProjectRequestFramesLayers &&) = default ;
    SaveAvatarProjectRequestFramesLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAvatarProjectRequestFramesLayers() = default ;
    SaveAvatarProjectRequestFramesLayers& operator=(const SaveAvatarProjectRequestFramesLayers &) = default ;
    SaveAvatarProjectRequestFramesLayers& operator=(SaveAvatarProjectRequestFramesLayers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->index_ == nullptr && return this->material_ == nullptr && return this->positionX_ == nullptr && return this->positionY_ == nullptr && return this->type_ == nullptr
        && return this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline SaveAvatarProjectRequestFramesLayers& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SaveAvatarProjectRequestFramesLayers& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const Models::SaveAvatarProjectRequestFramesLayersMaterial & material() const { DARABONBA_PTR_GET_CONST(material_, Models::SaveAvatarProjectRequestFramesLayersMaterial) };
    inline Models::SaveAvatarProjectRequestFramesLayersMaterial material() { DARABONBA_PTR_GET(material_, Models::SaveAvatarProjectRequestFramesLayersMaterial) };
    inline SaveAvatarProjectRequestFramesLayers& setMaterial(const Models::SaveAvatarProjectRequestFramesLayersMaterial & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline SaveAvatarProjectRequestFramesLayers& setMaterial(Models::SaveAvatarProjectRequestFramesLayersMaterial && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    // positionX Field Functions 
    bool hasPositionX() const { return this->positionX_ != nullptr;};
    void deletePositionX() { this->positionX_ = nullptr;};
    inline int32_t positionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0) };
    inline SaveAvatarProjectRequestFramesLayers& setPositionX(int32_t positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


    // positionY Field Functions 
    bool hasPositionY() const { return this->positionY_ != nullptr;};
    void deletePositionY() { this->positionY_ = nullptr;};
    inline int32_t positionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0) };
    inline SaveAvatarProjectRequestFramesLayers& setPositionY(int32_t positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SaveAvatarProjectRequestFramesLayers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline SaveAvatarProjectRequestFramesLayers& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::SaveAvatarProjectRequestFramesLayersMaterial> material_ = nullptr;
    std::shared_ptr<int32_t> positionX_ = nullptr;
    std::shared_ptr<int32_t> positionY_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
