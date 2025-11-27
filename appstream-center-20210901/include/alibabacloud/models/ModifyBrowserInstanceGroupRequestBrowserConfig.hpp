// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTBROWSERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTBROWSERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestBrowserConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestBrowserConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Bookmarks, bookmarks_);
      DARABONBA_PTR_TO_JSON(BrowserParam, browserParam_);
      DARABONBA_PTR_TO_JSON(Homepage, homepage_);
      DARABONBA_PTR_TO_JSON(RemoveBookmarks, removeBookmarks_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestBrowserConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Bookmarks, bookmarks_);
      DARABONBA_PTR_FROM_JSON(BrowserParam, browserParam_);
      DARABONBA_PTR_FROM_JSON(Homepage, homepage_);
      DARABONBA_PTR_FROM_JSON(RemoveBookmarks, removeBookmarks_);
    };
    ModifyBrowserInstanceGroupRequestBrowserConfig() = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfig(const ModifyBrowserInstanceGroupRequestBrowserConfig &) = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfig(ModifyBrowserInstanceGroupRequestBrowserConfig &&) = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestBrowserConfig() = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfig& operator=(const ModifyBrowserInstanceGroupRequestBrowserConfig &) = default ;
    ModifyBrowserInstanceGroupRequestBrowserConfig& operator=(ModifyBrowserInstanceGroupRequestBrowserConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bookmarks_ == nullptr
        && return this->browserParam_ == nullptr && return this->homepage_ == nullptr && return this->removeBookmarks_ == nullptr; };
    // bookmarks Field Functions 
    bool hasBookmarks() const { return this->bookmarks_ != nullptr;};
    void deleteBookmarks() { this->bookmarks_ = nullptr;};
    inline const vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks> & bookmarks() const { DARABONBA_PTR_GET_CONST(bookmarks_, vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks>) };
    inline vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks> bookmarks() { DARABONBA_PTR_GET(bookmarks_, vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks>) };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig& setBookmarks(const vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks> & bookmarks) { DARABONBA_PTR_SET_VALUE(bookmarks_, bookmarks) };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig& setBookmarks(vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks> && bookmarks) { DARABONBA_PTR_SET_RVALUE(bookmarks_, bookmarks) };


    // browserParam Field Functions 
    bool hasBrowserParam() const { return this->browserParam_ != nullptr;};
    void deleteBrowserParam() { this->browserParam_ = nullptr;};
    inline string browserParam() const { DARABONBA_PTR_GET_DEFAULT(browserParam_, "") };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig& setBrowserParam(string browserParam) { DARABONBA_PTR_SET_VALUE(browserParam_, browserParam) };


    // homepage Field Functions 
    bool hasHomepage() const { return this->homepage_ != nullptr;};
    void deleteHomepage() { this->homepage_ = nullptr;};
    inline string homepage() const { DARABONBA_PTR_GET_DEFAULT(homepage_, "") };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig& setHomepage(string homepage) { DARABONBA_PTR_SET_VALUE(homepage_, homepage) };


    // removeBookmarks Field Functions 
    bool hasRemoveBookmarks() const { return this->removeBookmarks_ != nullptr;};
    void deleteRemoveBookmarks() { this->removeBookmarks_ = nullptr;};
    inline const vector<string> & removeBookmarks() const { DARABONBA_PTR_GET_CONST(removeBookmarks_, vector<string>) };
    inline vector<string> removeBookmarks() { DARABONBA_PTR_GET(removeBookmarks_, vector<string>) };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig& setRemoveBookmarks(const vector<string> & removeBookmarks) { DARABONBA_PTR_SET_VALUE(removeBookmarks_, removeBookmarks) };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig& setRemoveBookmarks(vector<string> && removeBookmarks) { DARABONBA_PTR_SET_RVALUE(removeBookmarks_, removeBookmarks) };


  protected:
    // The bookmark.
    std::shared_ptr<vector<Models::ModifyBrowserInstanceGroupRequestBrowserConfigBookmarks>> bookmarks_ = nullptr;
    // The startup parameter.
    std::shared_ptr<string> browserParam_ = nullptr;
    // The home page.
    std::shared_ptr<string> homepage_ = nullptr;
    // The removed bookmarks.
    std::shared_ptr<vector<string>> removeBookmarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
