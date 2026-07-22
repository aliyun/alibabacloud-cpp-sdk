// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ImportMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ImportSource, importSource_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(RegisterConfig, registerConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ImportMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ImportSource, importSource_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(RegisterConfig, registerConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ImportMediaRequest() = default ;
    ImportMediaRequest(const ImportMediaRequest &) = default ;
    ImportMediaRequest(ImportMediaRequest &&) = default ;
    ImportMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportMediaRequest() = default ;
    ImportMediaRequest& operator=(const ImportMediaRequest &) = default ;
    ImportMediaRequest& operator=(ImportMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->coverURL_ == nullptr && this->description_ == nullptr && this->dynamicMetaData_ == nullptr && this->entityId_ == nullptr && this->importSource_ == nullptr
        && this->inputURL_ == nullptr && this->mediaTags_ == nullptr && this->mediaType_ == nullptr && this->overwrite_ == nullptr && this->registerConfig_ == nullptr
        && this->title_ == nullptr && this->userData_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline ImportMediaRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline ImportMediaRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportMediaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dynamicMetaData Field Functions 
    bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
    void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
    inline string getDynamicMetaData() const { DARABONBA_PTR_GET_DEFAULT(dynamicMetaData_, "") };
    inline ImportMediaRequest& setDynamicMetaData(string dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ImportMediaRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // importSource Field Functions 
    bool hasImportSource() const { return this->importSource_ != nullptr;};
    void deleteImportSource() { this->importSource_ = nullptr;};
    inline string getImportSource() const { DARABONBA_PTR_GET_DEFAULT(importSource_, "") };
    inline ImportMediaRequest& setImportSource(string importSource) { DARABONBA_PTR_SET_VALUE(importSource_, importSource) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline ImportMediaRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string getMediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline ImportMediaRequest& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ImportMediaRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline ImportMediaRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // registerConfig Field Functions 
    bool hasRegisterConfig() const { return this->registerConfig_ != nullptr;};
    void deleteRegisterConfig() { this->registerConfig_ = nullptr;};
    inline string getRegisterConfig() const { DARABONBA_PTR_GET_DEFAULT(registerConfig_, "") };
    inline ImportMediaRequest& setRegisterConfig(string registerConfig) { DARABONBA_PTR_SET_VALUE(registerConfig_, registerConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ImportMediaRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ImportMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<int64_t> categoryId_ {};
    shared_ptr<string> coverURL_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> dynamicMetaData_ {};
    shared_ptr<string> entityId_ {};
    shared_ptr<string> importSource_ {};
    shared_ptr<string> inputURL_ {};
    shared_ptr<string> mediaTags_ {};
    shared_ptr<string> mediaType_ {};
    shared_ptr<bool> overwrite_ {};
    shared_ptr<string> registerConfig_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
