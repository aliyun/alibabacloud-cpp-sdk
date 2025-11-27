// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTBROWSERCONFIGBOOKMARKS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTBROWSERCONFIGBOOKMARKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& obj) { 
      DARABONBA_PTR_TO_JSON(BookmarkFolder, bookmarkFolder_);
      DARABONBA_PTR_TO_JSON(BookmarkId, bookmarkId_);
      DARABONBA_PTR_TO_JSON(BookmarkName, bookmarkName_);
      DARABONBA_PTR_TO_JSON(BookmarkURL, bookmarkURL_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& obj) { 
      DARABONBA_PTR_FROM_JSON(BookmarkFolder, bookmarkFolder_);
      DARABONBA_PTR_FROM_JSON(BookmarkId, bookmarkId_);
      DARABONBA_PTR_FROM_JSON(BookmarkName, bookmarkName_);
      DARABONBA_PTR_FROM_JSON(BookmarkURL, bookmarkURL_);
    };
    ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks() = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks(const ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks &) = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks(ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks &&) = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks() = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& operator=(const ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks &) = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& operator=(ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bookmarkFolder_ == nullptr
        && return this->bookmarkId_ == nullptr && return this->bookmarkName_ == nullptr && return this->bookmarkURL_ == nullptr; };
    // bookmarkFolder Field Functions 
    bool hasBookmarkFolder() const { return this->bookmarkFolder_ != nullptr;};
    void deleteBookmarkFolder() { this->bookmarkFolder_ = nullptr;};
    inline string bookmarkFolder() const { DARABONBA_PTR_GET_DEFAULT(bookmarkFolder_, "") };
    inline ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& setBookmarkFolder(string bookmarkFolder) { DARABONBA_PTR_SET_VALUE(bookmarkFolder_, bookmarkFolder) };


    // bookmarkId Field Functions 
    bool hasBookmarkId() const { return this->bookmarkId_ != nullptr;};
    void deleteBookmarkId() { this->bookmarkId_ = nullptr;};
    inline string bookmarkId() const { DARABONBA_PTR_GET_DEFAULT(bookmarkId_, "") };
    inline ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& setBookmarkId(string bookmarkId) { DARABONBA_PTR_SET_VALUE(bookmarkId_, bookmarkId) };


    // bookmarkName Field Functions 
    bool hasBookmarkName() const { return this->bookmarkName_ != nullptr;};
    void deleteBookmarkName() { this->bookmarkName_ = nullptr;};
    inline string bookmarkName() const { DARABONBA_PTR_GET_DEFAULT(bookmarkName_, "") };
    inline ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& setBookmarkName(string bookmarkName) { DARABONBA_PTR_SET_VALUE(bookmarkName_, bookmarkName) };


    // bookmarkURL Field Functions 
    bool hasBookmarkURL() const { return this->bookmarkURL_ != nullptr;};
    void deleteBookmarkURL() { this->bookmarkURL_ = nullptr;};
    inline string bookmarkURL() const { DARABONBA_PTR_GET_DEFAULT(bookmarkURL_, "") };
    inline ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks& setBookmarkURL(string bookmarkURL) { DARABONBA_PTR_SET_VALUE(bookmarkURL_, bookmarkURL) };


  protected:
    // The folder where the bookmark is located.
    std::shared_ptr<string> bookmarkFolder_ = nullptr;
    // The ID of the bookmark. This parameter needs to be specified only to modify the bookmark.
    std::shared_ptr<string> bookmarkId_ = nullptr;
    // The name of the bookmark.
    // 
    // This parameter is required.
    std::shared_ptr<string> bookmarkName_ = nullptr;
    // The URL of the bookmark.
    // 
    // This parameter is required.
    std::shared_ptr<string> bookmarkURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
