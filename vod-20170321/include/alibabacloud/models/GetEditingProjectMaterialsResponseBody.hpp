// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
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
  class GetEditingProjectMaterialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialList, materialList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialList, materialList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEditingProjectMaterialsResponseBody() = default ;
    GetEditingProjectMaterialsResponseBody(const GetEditingProjectMaterialsResponseBody &) = default ;
    GetEditingProjectMaterialsResponseBody(GetEditingProjectMaterialsResponseBody &&) = default ;
    GetEditingProjectMaterialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsResponseBody() = default ;
    GetEditingProjectMaterialsResponseBody& operator=(const GetEditingProjectMaterialsResponseBody &) = default ;
    GetEditingProjectMaterialsResponseBody& operator=(GetEditingProjectMaterialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MaterialList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MaterialList& obj) { 
        DARABONBA_PTR_TO_JSON(Material, material_);
      };
      friend void from_json(const Darabonba::Json& j, MaterialList& obj) { 
        DARABONBA_PTR_FROM_JSON(Material, material_);
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
      class Material : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Material& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Material& obj) { 
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
        Material() = default ;
        Material(const Material &) = default ;
        Material(Material &&) = default ;
        Material(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Material() = default ;
        Material& operator=(const Material &) = default ;
        Material& operator=(Material &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Sprites : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sprites& obj) { 
            DARABONBA_PTR_TO_JSON(Sprite, sprite_);
          };
          friend void from_json(const Darabonba::Json& j, Sprites& obj) { 
            DARABONBA_PTR_FROM_JSON(Sprite, sprite_);
          };
          Sprites() = default ;
          Sprites(const Sprites &) = default ;
          Sprites(Sprites &&) = default ;
          Sprites(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sprites() = default ;
          Sprites& operator=(const Sprites &) = default ;
          Sprites& operator=(Sprites &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sprite_ == nullptr; };
          // sprite Field Functions 
          bool hasSprite() const { return this->sprite_ != nullptr;};
          void deleteSprite() { this->sprite_ = nullptr;};
          inline const vector<string> & getSprite() const { DARABONBA_PTR_GET_CONST(sprite_, vector<string>) };
          inline vector<string> getSprite() { DARABONBA_PTR_GET(sprite_, vector<string>) };
          inline Sprites& setSprite(const vector<string> & sprite) { DARABONBA_PTR_SET_VALUE(sprite_, sprite) };
          inline Sprites& setSprite(vector<string> && sprite) { DARABONBA_PTR_SET_RVALUE(sprite_, sprite) };


        protected:
          shared_ptr<vector<string>> sprite_ {};
        };

        class Snapshots : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
            DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
          };
          friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
            DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
          };
          Snapshots() = default ;
          Snapshots(const Snapshots &) = default ;
          Snapshots(Snapshots &&) = default ;
          Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Snapshots() = default ;
          Snapshots& operator=(const Snapshots &) = default ;
          Snapshots& operator=(Snapshots &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->snapshot_ == nullptr; };
          // snapshot Field Functions 
          bool hasSnapshot() const { return this->snapshot_ != nullptr;};
          void deleteSnapshot() { this->snapshot_ = nullptr;};
          inline const vector<string> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<string>) };
          inline vector<string> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<string>) };
          inline Snapshots& setSnapshot(const vector<string> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
          inline Snapshots& setSnapshot(vector<string> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


        protected:
          shared_ptr<vector<string>> snapshot_ {};
        };

        virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->duration_ == nullptr
        && this->materialId_ == nullptr && this->materialType_ == nullptr && this->modifiedTime_ == nullptr && this->size_ == nullptr && this->snapshots_ == nullptr
        && this->source_ == nullptr && this->spriteConfig_ == nullptr && this->sprites_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->title_ == nullptr; };
        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int32_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
        inline Material& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline Material& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline Material& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Material& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Material& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Material& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // materialId Field Functions 
        bool hasMaterialId() const { return this->materialId_ != nullptr;};
        void deleteMaterialId() { this->materialId_ = nullptr;};
        inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
        inline Material& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


        // materialType Field Functions 
        bool hasMaterialType() const { return this->materialType_ != nullptr;};
        void deleteMaterialType() { this->materialType_ = nullptr;};
        inline string getMaterialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
        inline Material& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Material& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Material& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline const Material::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Material::Snapshots) };
        inline Material::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, Material::Snapshots) };
        inline Material& setSnapshots(const Material::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
        inline Material& setSnapshots(Material::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Material& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // spriteConfig Field Functions 
        bool hasSpriteConfig() const { return this->spriteConfig_ != nullptr;};
        void deleteSpriteConfig() { this->spriteConfig_ = nullptr;};
        inline string getSpriteConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteConfig_, "") };
        inline Material& setSpriteConfig(string spriteConfig) { DARABONBA_PTR_SET_VALUE(spriteConfig_, spriteConfig) };


        // sprites Field Functions 
        bool hasSprites() const { return this->sprites_ != nullptr;};
        void deleteSprites() { this->sprites_ = nullptr;};
        inline const Material::Sprites & getSprites() const { DARABONBA_PTR_GET_CONST(sprites_, Material::Sprites) };
        inline Material::Sprites getSprites() { DARABONBA_PTR_GET(sprites_, Material::Sprites) };
        inline Material& setSprites(const Material::Sprites & sprites) { DARABONBA_PTR_SET_VALUE(sprites_, sprites) };
        inline Material& setSprites(Material::Sprites && sprites) { DARABONBA_PTR_SET_RVALUE(sprites_, sprites) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Material& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline Material& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Material& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The category ID of the material.
        shared_ptr<int32_t> cateId_ {};
        // The category name of the material.
        shared_ptr<string> cateName_ {};
        // The thumbnail URL of the material.
        shared_ptr<string> coverURL_ {};
        // The time when the material was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the material.
        shared_ptr<string> description_ {};
        // The duration of the material. The value is rounded to four decimal places. Unit: seconds.
        shared_ptr<float> duration_ {};
        // The ID of the material.
        shared_ptr<string> materialId_ {};
        // The type of the material. Valid values:
        // 
        // *   **video**
        // *   **audio**
        // *   **image**
        shared_ptr<string> materialType_ {};
        // The time when the material was last updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The size of the mezzanine file. Unit: byte.
        shared_ptr<int64_t> size_ {};
        // The URLs of material snapshots. The value is an array.
        shared_ptr<Material::Snapshots> snapshots_ {};
        // The source of the sprite.
        shared_ptr<string> source_ {};
        // The configuration of the sprite.
        shared_ptr<string> spriteConfig_ {};
        // The URLs of material sprites. The value is an array.
        shared_ptr<Material::Sprites> sprites_ {};
        // The status of the material. Valid values:
        // 
        // *   **Normal**: The material is in draft.
        // *   **Producing**: The material is being produced.
        // *   **Produced**: The material was produced.
        // *   **ProduceFailed**: The material failed to be produced.
        shared_ptr<string> status_ {};
        // The tag of the material. Multiple tags are separated by commas (,).
        shared_ptr<string> tags_ {};
        // The title of the material.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->material_ == nullptr; };
      // material Field Functions 
      bool hasMaterial() const { return this->material_ != nullptr;};
      void deleteMaterial() { this->material_ = nullptr;};
      inline const vector<MaterialList::Material> & getMaterial() const { DARABONBA_PTR_GET_CONST(material_, vector<MaterialList::Material>) };
      inline vector<MaterialList::Material> getMaterial() { DARABONBA_PTR_GET(material_, vector<MaterialList::Material>) };
      inline MaterialList& setMaterial(const vector<MaterialList::Material> & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
      inline MaterialList& setMaterial(vector<MaterialList::Material> && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


    protected:
      shared_ptr<vector<MaterialList::Material>> material_ {};
    };

    virtual bool empty() const override { return this->materialList_ == nullptr
        && this->requestId_ == nullptr; };
    // materialList Field Functions 
    bool hasMaterialList() const { return this->materialList_ != nullptr;};
    void deleteMaterialList() { this->materialList_ = nullptr;};
    inline const GetEditingProjectMaterialsResponseBody::MaterialList & getMaterialList() const { DARABONBA_PTR_GET_CONST(materialList_, GetEditingProjectMaterialsResponseBody::MaterialList) };
    inline GetEditingProjectMaterialsResponseBody::MaterialList getMaterialList() { DARABONBA_PTR_GET(materialList_, GetEditingProjectMaterialsResponseBody::MaterialList) };
    inline GetEditingProjectMaterialsResponseBody& setMaterialList(const GetEditingProjectMaterialsResponseBody::MaterialList & materialList) { DARABONBA_PTR_SET_VALUE(materialList_, materialList) };
    inline GetEditingProjectMaterialsResponseBody& setMaterialList(GetEditingProjectMaterialsResponseBody::MaterialList && materialList) { DARABONBA_PTR_SET_RVALUE(materialList_, materialList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEditingProjectMaterialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The materials.
    shared_ptr<GetEditingProjectMaterialsResponseBody::MaterialList> materialList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
