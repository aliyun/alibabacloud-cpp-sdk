// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATAIDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATAIDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataIdListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataIdListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchFieldJson, searchFieldJson_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDataIdListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchFieldJson, searchFieldJson_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    SearchFormDataIdListRequest() = default ;
    SearchFormDataIdListRequest(const SearchFormDataIdListRequest &) = default ;
    SearchFormDataIdListRequest(SearchFormDataIdListRequest &&) = default ;
    SearchFormDataIdListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataIdListRequest() = default ;
    SearchFormDataIdListRequest& operator=(const SearchFormDataIdListRequest &) = default ;
    SearchFormDataIdListRequest& operator=(SearchFormDataIdListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->createFromTimeGMT_ != nullptr && this->createToTimeGMT_ != nullptr && this->formUuid_ != nullptr && this->language_ != nullptr && this->modifiedFromTimeGMT_ != nullptr
        && this->modifiedToTimeGMT_ != nullptr && this->originatorId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchFieldJson_ != nullptr
        && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchFormDataIdListRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline string createFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, "") };
    inline SearchFormDataIdListRequest& setCreateFromTimeGMT(string createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline string createToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, "") };
    inline SearchFormDataIdListRequest& setCreateToTimeGMT(string createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SearchFormDataIdListRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SearchFormDataIdListRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modifiedFromTimeGMT Field Functions 
    bool hasModifiedFromTimeGMT() const { return this->modifiedFromTimeGMT_ != nullptr;};
    void deleteModifiedFromTimeGMT() { this->modifiedFromTimeGMT_ = nullptr;};
    inline string modifiedFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedFromTimeGMT_, "") };
    inline SearchFormDataIdListRequest& setModifiedFromTimeGMT(string modifiedFromTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedFromTimeGMT_, modifiedFromTimeGMT) };


    // modifiedToTimeGMT Field Functions 
    bool hasModifiedToTimeGMT() const { return this->modifiedToTimeGMT_ != nullptr;};
    void deleteModifiedToTimeGMT() { this->modifiedToTimeGMT_ = nullptr;};
    inline string modifiedToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedToTimeGMT_, "") };
    inline SearchFormDataIdListRequest& setModifiedToTimeGMT(string modifiedToTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedToTimeGMT_, modifiedToTimeGMT) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline SearchFormDataIdListRequest& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchFormDataIdListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFormDataIdListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchFieldJson Field Functions 
    bool hasSearchFieldJson() const { return this->searchFieldJson_ != nullptr;};
    void deleteSearchFieldJson() { this->searchFieldJson_ = nullptr;};
    inline string searchFieldJson() const { DARABONBA_PTR_GET_DEFAULT(searchFieldJson_, "") };
    inline SearchFormDataIdListRequest& setSearchFieldJson(string searchFieldJson) { DARABONBA_PTR_SET_VALUE(searchFieldJson_, searchFieldJson) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SearchFormDataIdListRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> createFromTimeGMT_ = nullptr;
    std::shared_ptr<string> createToTimeGMT_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> modifiedFromTimeGMT_ = nullptr;
    std::shared_ptr<string> modifiedToTimeGMT_ = nullptr;
    std::shared_ptr<string> originatorId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchFieldJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
