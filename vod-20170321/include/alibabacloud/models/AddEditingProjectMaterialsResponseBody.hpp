// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
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
  class AddEditingProjectMaterialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialList, materialList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialList, materialList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddEditingProjectMaterialsResponseBody() = default ;
    AddEditingProjectMaterialsResponseBody(const AddEditingProjectMaterialsResponseBody &) = default ;
    AddEditingProjectMaterialsResponseBody(AddEditingProjectMaterialsResponseBody &&) = default ;
    AddEditingProjectMaterialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsResponseBody() = default ;
    AddEditingProjectMaterialsResponseBody& operator=(const AddEditingProjectMaterialsResponseBody &) = default ;
    AddEditingProjectMaterialsResponseBody& operator=(AddEditingProjectMaterialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MaterialList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MaterialList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, MaterialList& obj) { 
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
      MaterialList() = default ;
      MaterialList(const MaterialList &) = default ;
      MaterialList(MaterialList &&) = default ;
      MaterialList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MaterialList() = default ;
      MaterialList& operator=(const MaterialList &) = default ;
      MaterialList& operator=(MaterialList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->createTime_ == nullptr && this->customerId_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->materialId_ == nullptr && this->materialType_ == nullptr && this->modifyTime_ == nullptr && this->size_ == nullptr
        && this->snapshots_ == nullptr && this->spriteConfig_ == nullptr && this->sprites_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->title_ == nullptr; };
      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int32_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
      inline MaterialList& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline MaterialList& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline MaterialList& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline MaterialList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline int64_t getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
      inline MaterialList& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MaterialList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline MaterialList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // materialId Field Functions 
      bool hasMaterialId() const { return this->materialId_ != nullptr;};
      void deleteMaterialId() { this->materialId_ = nullptr;};
      inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
      inline MaterialList& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


      // materialType Field Functions 
      bool hasMaterialType() const { return this->materialType_ != nullptr;};
      void deleteMaterialType() { this->materialType_ = nullptr;};
      inline string getMaterialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
      inline MaterialList& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline MaterialList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline MaterialList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
      inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
      inline MaterialList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline MaterialList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


      // spriteConfig Field Functions 
      bool hasSpriteConfig() const { return this->spriteConfig_ != nullptr;};
      void deleteSpriteConfig() { this->spriteConfig_ = nullptr;};
      inline string getSpriteConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteConfig_, "") };
      inline MaterialList& setSpriteConfig(string spriteConfig) { DARABONBA_PTR_SET_VALUE(spriteConfig_, spriteConfig) };


      // sprites Field Functions 
      bool hasSprites() const { return this->sprites_ != nullptr;};
      void deleteSprites() { this->sprites_ = nullptr;};
      inline const vector<string> & getSprites() const { DARABONBA_PTR_GET_CONST(sprites_, vector<string>) };
      inline vector<string> getSprites() { DARABONBA_PTR_GET(sprites_, vector<string>) };
      inline MaterialList& setSprites(const vector<string> & sprites) { DARABONBA_PTR_SET_VALUE(sprites_, sprites) };
      inline MaterialList& setSprites(vector<string> && sprites) { DARABONBA_PTR_SET_RVALUE(sprites_, sprites) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MaterialList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline MaterialList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline MaterialList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the category.
      shared_ptr<int32_t> cateId_ {};
      // The category name of the material.
      shared_ptr<string> cateName_ {};
      // The thumbnail URL.
      shared_ptr<string> coverURL_ {};
      // The time when the material was created. The time follows the ISO 8601 standard in the *YYYY-MM-DD**Thh:mm:ss* format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the user.
      shared_ptr<int64_t> customerId_ {};
      // The description of the material.
      shared_ptr<string> description_ {};
      // The duration of the material. Unit: seconds. The value is accurate to four decimal places.
      shared_ptr<float> duration_ {};
      // The ID of the material.
      shared_ptr<string> materialId_ {};
      // The type of the material. Valid values:
      // 
      // *   **video**
      // *   **audio**
      // *   **image**
      shared_ptr<string> materialType_ {};
      // The time when the material was last updated. The time follows the ISO 8601 standard in the *YYYY-MM-DD**Thh:mm:ss* format. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The size of the material.
      shared_ptr<int64_t> size_ {};
      // The URLs of snapshots.
      shared_ptr<vector<string>> snapshots_ {};
      // The configuration of the sprite snapshot.
      shared_ptr<string> spriteConfig_ {};
      // The URLs of sprite snapshots.
      shared_ptr<vector<string>> sprites_ {};
      // The status of the material. Valid values:
      // 
      // *   **Normal**
      // *   **Uploading**
      // *   **UploadFail**
      shared_ptr<string> status_ {};
      // The tag of the material. Multiple tags are separated by commas (,).
      shared_ptr<string> tags_ {};
      // The title of the material.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->materialList_ == nullptr
        && this->requestId_ == nullptr; };
    // materialList Field Functions 
    bool hasMaterialList() const { return this->materialList_ != nullptr;};
    void deleteMaterialList() { this->materialList_ = nullptr;};
    inline const vector<AddEditingProjectMaterialsResponseBody::MaterialList> & getMaterialList() const { DARABONBA_PTR_GET_CONST(materialList_, vector<AddEditingProjectMaterialsResponseBody::MaterialList>) };
    inline vector<AddEditingProjectMaterialsResponseBody::MaterialList> getMaterialList() { DARABONBA_PTR_GET(materialList_, vector<AddEditingProjectMaterialsResponseBody::MaterialList>) };
    inline AddEditingProjectMaterialsResponseBody& setMaterialList(const vector<AddEditingProjectMaterialsResponseBody::MaterialList> & materialList) { DARABONBA_PTR_SET_VALUE(materialList_, materialList) };
    inline AddEditingProjectMaterialsResponseBody& setMaterialList(vector<AddEditingProjectMaterialsResponseBody::MaterialList> && materialList) { DARABONBA_PTR_SET_RVALUE(materialList_, materialList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddEditingProjectMaterialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The materials.
    shared_ptr<vector<AddEditingProjectMaterialsResponseBody::MaterialList>> materialList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
