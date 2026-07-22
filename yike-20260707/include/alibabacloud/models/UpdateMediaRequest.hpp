// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class UpdateMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppendTags, appendTags_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppendTags, appendTags_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UpdateMediaRequest() = default ;
    UpdateMediaRequest(const UpdateMediaRequest &) = default ;
    UpdateMediaRequest(UpdateMediaRequest &&) = default ;
    UpdateMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaRequest() = default ;
    UpdateMediaRequest& operator=(const UpdateMediaRequest &) = default ;
    UpdateMediaRequest& operator=(UpdateMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appendTags_ == nullptr
        && this->categoryId_ == nullptr && this->coverURL_ == nullptr && this->description_ == nullptr && this->dynamicMetaData_ == nullptr && this->inputURL_ == nullptr
        && this->mediaId_ == nullptr && this->mediaTags_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr; };
    // appendTags Field Functions 
    bool hasAppendTags() const { return this->appendTags_ != nullptr;};
    void deleteAppendTags() { this->appendTags_ = nullptr;};
    inline bool getAppendTags() const { DARABONBA_PTR_GET_DEFAULT(appendTags_, false) };
    inline UpdateMediaRequest& setAppendTags(bool appendTags) { DARABONBA_PTR_SET_VALUE(appendTags_, appendTags) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateMediaRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline UpdateMediaRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMediaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dynamicMetaData Field Functions 
    bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
    void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
    inline string getDynamicMetaData() const { DARABONBA_PTR_GET_DEFAULT(dynamicMetaData_, "") };
    inline UpdateMediaRequest& setDynamicMetaData(string dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline UpdateMediaRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UpdateMediaRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaTags Field Functions 
    bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
    void deleteMediaTags() { this->mediaTags_ = nullptr;};
    inline string getMediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
    inline UpdateMediaRequest& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateMediaRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<bool> appendTags_ {};
    shared_ptr<int64_t> categoryId_ {};
    shared_ptr<string> coverURL_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> dynamicMetaData_ {};
    shared_ptr<string> inputURL_ {};
    shared_ptr<string> mediaId_ {};
    shared_ptr<string> mediaTags_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
