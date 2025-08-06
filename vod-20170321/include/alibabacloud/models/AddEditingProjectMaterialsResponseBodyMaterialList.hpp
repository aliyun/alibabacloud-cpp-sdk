// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddEditingProjectMaterialsResponseBodyMaterialList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsResponseBodyMaterialList& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(SpriteConfig, spriteConfig_);
      DARABONBA_PTR_TO_JSON(Sprites, sprites_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsResponseBodyMaterialList& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(SpriteConfig, spriteConfig_);
      DARABONBA_PTR_FROM_JSON(Sprites, sprites_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    AddEditingProjectMaterialsResponseBodyMaterialList() = default ;
    AddEditingProjectMaterialsResponseBodyMaterialList(const AddEditingProjectMaterialsResponseBodyMaterialList &) = default ;
    AddEditingProjectMaterialsResponseBodyMaterialList(AddEditingProjectMaterialsResponseBodyMaterialList &&) = default ;
    AddEditingProjectMaterialsResponseBodyMaterialList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsResponseBodyMaterialList() = default ;
    AddEditingProjectMaterialsResponseBodyMaterialList& operator=(const AddEditingProjectMaterialsResponseBodyMaterialList &) = default ;
    AddEditingProjectMaterialsResponseBodyMaterialList& operator=(AddEditingProjectMaterialsResponseBodyMaterialList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->coverURL_ != nullptr && this->createTime_ != nullptr && this->customerId_ != nullptr && this->description_ != nullptr
        && this->duration_ != nullptr && this->materialId_ != nullptr && this->materialType_ != nullptr && this->modifyTime_ != nullptr && this->size_ != nullptr
        && this->snapshots_ != nullptr && this->spriteConfig_ != nullptr && this->sprites_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->title_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int32_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline int64_t customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string materialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string materialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<string> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
    inline vector<string> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // spriteConfig Field Functions 
    bool hasSpriteConfig() const { return this->spriteConfig_ != nullptr;};
    void deleteSpriteConfig() { this->spriteConfig_ = nullptr;};
    inline string spriteConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteConfig_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setSpriteConfig(string spriteConfig) { DARABONBA_PTR_SET_VALUE(spriteConfig_, spriteConfig) };


    // sprites Field Functions 
    bool hasSprites() const { return this->sprites_ != nullptr;};
    void deleteSprites() { this->sprites_ = nullptr;};
    inline const vector<string> & sprites() const { DARABONBA_PTR_GET_CONST(sprites_, vector<string>) };
    inline vector<string> sprites() { DARABONBA_PTR_GET(sprites_, vector<string>) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setSprites(const vector<string> & sprites) { DARABONBA_PTR_SET_VALUE(sprites_, sprites) };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setSprites(vector<string> && sprites) { DARABONBA_PTR_SET_RVALUE(sprites_, sprites) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline AddEditingProjectMaterialsResponseBodyMaterialList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the category.
    std::shared_ptr<int32_t> cateId_ = nullptr;
    // The category name of the material.
    std::shared_ptr<string> cateName_ = nullptr;
    // The thumbnail URL.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the material was created. The time follows the ISO 8601 standard in the *YYYY-MM-DD**Thh:mm:ss* format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> customerId_ = nullptr;
    // The description of the material.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the material. Unit: seconds. The value is accurate to four decimal places.
    std::shared_ptr<float> duration_ = nullptr;
    // The ID of the material.
    std::shared_ptr<string> materialId_ = nullptr;
    // The type of the material. Valid values:
    // 
    // *   **video**
    // *   **audio**
    // *   **image**
    std::shared_ptr<string> materialType_ = nullptr;
    // The time when the material was last updated. The time follows the ISO 8601 standard in the *YYYY-MM-DD**Thh:mm:ss* format. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The size of the material.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The URLs of snapshots.
    std::shared_ptr<vector<string>> snapshots_ = nullptr;
    // The configuration of the sprite snapshot.
    std::shared_ptr<string> spriteConfig_ = nullptr;
    // The URLs of sprite snapshots.
    std::shared_ptr<vector<string>> sprites_ = nullptr;
    // The status of the material. Valid values:
    // 
    // *   **Normal**
    // *   **Uploading**
    // *   **UploadFail**
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
