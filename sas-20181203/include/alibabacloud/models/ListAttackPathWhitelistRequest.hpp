// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(WhitelistName, whitelistName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(WhitelistName, whitelistName_);
    };
    ListAttackPathWhitelistRequest() = default ;
    ListAttackPathWhitelistRequest(const ListAttackPathWhitelistRequest &) = default ;
    ListAttackPathWhitelistRequest(ListAttackPathWhitelistRequest &&) = default ;
    ListAttackPathWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathWhitelistRequest() = default ;
    ListAttackPathWhitelistRequest& operator=(const ListAttackPathWhitelistRequest &) = default ;
    ListAttackPathWhitelistRequest& operator=(ListAttackPathWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->pathNameDesc_ == nullptr && return this->pathType_ == nullptr && return this->whitelistName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAttackPathWhitelistRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAttackPathWhitelistRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAttackPathWhitelistRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathNameDesc Field Functions 
    bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
    void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
    inline string pathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
    inline ListAttackPathWhitelistRequest& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline ListAttackPathWhitelistRequest& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // whitelistName Field Functions 
    bool hasWhitelistName() const { return this->whitelistName_ != nullptr;};
    void deleteWhitelistName() { this->whitelistName_ = nullptr;};
    inline string whitelistName() const { DARABONBA_PTR_GET_DEFAULT(whitelistName_, "") };
    inline ListAttackPathWhitelistRequest& setWhitelistName(string whitelistName) { DARABONBA_PTR_SET_VALUE(whitelistName_, whitelistName) };


  protected:
    // When performing a paginated query, set the current page number. The default value is **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language type for requests and responses. The default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // When performing a paginated query, set the maximum number of items per page. The default value is 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Path name description.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path name descriptions.
    std::shared_ptr<string> pathNameDesc_ = nullptr;
    // Path type.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path types.
    std::shared_ptr<string> pathType_ = nullptr;
    // Whitelist name.
    std::shared_ptr<string> whitelistName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
