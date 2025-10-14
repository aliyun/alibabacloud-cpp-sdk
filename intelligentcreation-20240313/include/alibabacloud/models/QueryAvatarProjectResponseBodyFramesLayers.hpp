// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARPROJECTRESPONSEBODYFRAMESLAYERS_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARPROJECTRESPONSEBODYFRAMESLAYERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAvatarProjectResponseBodyFramesLayersMaterial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarProjectResponseBodyFramesLayers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarProjectResponseBodyFramesLayers& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(material, material_);
      DARABONBA_PTR_TO_JSON(positionX, positionX_);
      DARABONBA_PTR_TO_JSON(positionY, positionY_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarProjectResponseBodyFramesLayers& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(material, material_);
      DARABONBA_PTR_FROM_JSON(positionX, positionX_);
      DARABONBA_PTR_FROM_JSON(positionY, positionY_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    QueryAvatarProjectResponseBodyFramesLayers() = default ;
    QueryAvatarProjectResponseBodyFramesLayers(const QueryAvatarProjectResponseBodyFramesLayers &) = default ;
    QueryAvatarProjectResponseBodyFramesLayers(QueryAvatarProjectResponseBodyFramesLayers &&) = default ;
    QueryAvatarProjectResponseBodyFramesLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarProjectResponseBodyFramesLayers() = default ;
    QueryAvatarProjectResponseBodyFramesLayers& operator=(const QueryAvatarProjectResponseBodyFramesLayers &) = default ;
    QueryAvatarProjectResponseBodyFramesLayers& operator=(QueryAvatarProjectResponseBodyFramesLayers &&) = default ;
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
    inline QueryAvatarProjectResponseBodyFramesLayers& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline QueryAvatarProjectResponseBodyFramesLayers& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const Models::QueryAvatarProjectResponseBodyFramesLayersMaterial & material() const { DARABONBA_PTR_GET_CONST(material_, Models::QueryAvatarProjectResponseBodyFramesLayersMaterial) };
    inline Models::QueryAvatarProjectResponseBodyFramesLayersMaterial material() { DARABONBA_PTR_GET(material_, Models::QueryAvatarProjectResponseBodyFramesLayersMaterial) };
    inline QueryAvatarProjectResponseBodyFramesLayers& setMaterial(const Models::QueryAvatarProjectResponseBodyFramesLayersMaterial & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline QueryAvatarProjectResponseBodyFramesLayers& setMaterial(Models::QueryAvatarProjectResponseBodyFramesLayersMaterial && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    // positionX Field Functions 
    bool hasPositionX() const { return this->positionX_ != nullptr;};
    void deletePositionX() { this->positionX_ = nullptr;};
    inline int32_t positionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0) };
    inline QueryAvatarProjectResponseBodyFramesLayers& setPositionX(int32_t positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


    // positionY Field Functions 
    bool hasPositionY() const { return this->positionY_ != nullptr;};
    void deletePositionY() { this->positionY_ = nullptr;};
    inline int32_t positionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0) };
    inline QueryAvatarProjectResponseBodyFramesLayers& setPositionY(int32_t positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryAvatarProjectResponseBodyFramesLayers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline QueryAvatarProjectResponseBodyFramesLayers& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::QueryAvatarProjectResponseBodyFramesLayersMaterial> material_ = nullptr;
    std::shared_ptr<int32_t> positionX_ = nullptr;
    std::shared_ptr<int32_t> positionY_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
