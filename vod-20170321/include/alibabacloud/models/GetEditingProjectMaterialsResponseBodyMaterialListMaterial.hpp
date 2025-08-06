// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLISTMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLISTMATERIAL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots.hpp>
#include <alibabacloud/models/GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetEditingProjectMaterialsResponseBodyMaterialListMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsResponseBodyMaterialListMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SpriteConfig, spriteConfig_);
      DARABONBA_PTR_TO_JSON(Sprites, sprites_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsResponseBodyMaterialListMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SpriteConfig, spriteConfig_);
      DARABONBA_PTR_FROM_JSON(Sprites, sprites_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetEditingProjectMaterialsResponseBodyMaterialListMaterial() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterial(const GetEditingProjectMaterialsResponseBodyMaterialListMaterial &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterial(GetEditingProjectMaterialsResponseBodyMaterialListMaterial &&) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsResponseBodyMaterialListMaterial() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterial& operator=(const GetEditingProjectMaterialsResponseBodyMaterialListMaterial &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterial& operator=(GetEditingProjectMaterialsResponseBodyMaterialListMaterial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->coverURL_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr
        && this->materialId_ != nullptr && this->materialType_ != nullptr && this->modifiedTime_ != nullptr && this->size_ != nullptr && this->snapshots_ != nullptr
        && this->source_ != nullptr && this->spriteConfig_ != nullptr && this->sprites_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->title_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int32_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string materialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string materialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots) };
    inline Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots snapshots() { DARABONBA_PTR_GET(snapshots_, Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSnapshots(const Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSnapshots(Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // spriteConfig Field Functions 
    bool hasSpriteConfig() const { return this->spriteConfig_ != nullptr;};
    void deleteSpriteConfig() { this->spriteConfig_ = nullptr;};
    inline string spriteConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteConfig_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSpriteConfig(string spriteConfig) { DARABONBA_PTR_SET_VALUE(spriteConfig_, spriteConfig) };


    // sprites Field Functions 
    bool hasSprites() const { return this->sprites_ != nullptr;};
    void deleteSprites() { this->sprites_ = nullptr;};
    inline const Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites & sprites() const { DARABONBA_PTR_GET_CONST(sprites_, Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites) };
    inline Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites sprites() { DARABONBA_PTR_GET(sprites_, Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSprites(const Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites & sprites) { DARABONBA_PTR_SET_VALUE(sprites_, sprites) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setSprites(Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites && sprites) { DARABONBA_PTR_SET_RVALUE(sprites_, sprites) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterial& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The category ID of the material.
    std::shared_ptr<int32_t> cateId_ = nullptr;
    // The category name of the material.
    std::shared_ptr<string> cateName_ = nullptr;
    // The thumbnail URL of the material.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the material was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the material.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the material. The value is rounded to four decimal places. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The ID of the material.
    std::shared_ptr<string> materialId_ = nullptr;
    // The type of the material. Valid values:
    // 
    // *   **video**
    // *   **audio**
    // *   **image**
    std::shared_ptr<string> materialType_ = nullptr;
    // The time when the material was last updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The size of the mezzanine file. Unit: byte.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The URLs of material snapshots. The value is an array.
    std::shared_ptr<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSnapshots> snapshots_ = nullptr;
    // The source of the sprite.
    std::shared_ptr<string> source_ = nullptr;
    // The configuration of the sprite.
    std::shared_ptr<string> spriteConfig_ = nullptr;
    // The URLs of material sprites. The value is an array.
    std::shared_ptr<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites> sprites_ = nullptr;
    // The status of the material. Valid values:
    // 
    // *   **Normal**: The material is in draft.
    // *   **Producing**: The material is being produced.
    // *   **Produced**: The material was produced.
    // *   **ProduceFailed**: The material failed to be produced.
    std::shared_ptr<string> status_ = nullptr;
    // The tag of the material. Multiple tags are separated by commas (,).
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the material.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
