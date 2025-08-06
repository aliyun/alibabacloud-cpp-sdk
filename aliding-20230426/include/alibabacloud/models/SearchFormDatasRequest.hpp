// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDatasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDatasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DynamicOrder, dynamicOrder_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchFieldJson, searchFieldJson_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDatasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DynamicOrder, dynamicOrder_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchFieldJson, searchFieldJson_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    SearchFormDatasRequest() = default ;
    SearchFormDatasRequest(const SearchFormDatasRequest &) = default ;
    SearchFormDatasRequest(SearchFormDatasRequest &&) = default ;
    SearchFormDatasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDatasRequest() = default ;
    SearchFormDatasRequest& operator=(const SearchFormDatasRequest &) = default ;
    SearchFormDatasRequest& operator=(SearchFormDatasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->createFromTimeGMT_ != nullptr && this->createToTimeGMT_ != nullptr && this->currentPage_ != nullptr && this->dynamicOrder_ != nullptr && this->formUuid_ != nullptr
        && this->language_ != nullptr && this->modifiedFromTimeGMT_ != nullptr && this->modifiedToTimeGMT_ != nullptr && this->originatorId_ != nullptr && this->pageSize_ != nullptr
        && this->searchFieldJson_ != nullptr && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchFormDatasRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline string createFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, "") };
    inline SearchFormDatasRequest& setCreateFromTimeGMT(string createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline string createToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, "") };
    inline SearchFormDatasRequest& setCreateToTimeGMT(string createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline SearchFormDatasRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dynamicOrder Field Functions 
    bool hasDynamicOrder() const { return this->dynamicOrder_ != nullptr;};
    void deleteDynamicOrder() { this->dynamicOrder_ = nullptr;};
    inline string dynamicOrder() const { DARABONBA_PTR_GET_DEFAULT(dynamicOrder_, "") };
    inline SearchFormDatasRequest& setDynamicOrder(string dynamicOrder) { DARABONBA_PTR_SET_VALUE(dynamicOrder_, dynamicOrder) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SearchFormDatasRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SearchFormDatasRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modifiedFromTimeGMT Field Functions 
    bool hasModifiedFromTimeGMT() const { return this->modifiedFromTimeGMT_ != nullptr;};
    void deleteModifiedFromTimeGMT() { this->modifiedFromTimeGMT_ = nullptr;};
    inline string modifiedFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedFromTimeGMT_, "") };
    inline SearchFormDatasRequest& setModifiedFromTimeGMT(string modifiedFromTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedFromTimeGMT_, modifiedFromTimeGMT) };


    // modifiedToTimeGMT Field Functions 
    bool hasModifiedToTimeGMT() const { return this->modifiedToTimeGMT_ != nullptr;};
    void deleteModifiedToTimeGMT() { this->modifiedToTimeGMT_ = nullptr;};
    inline string modifiedToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedToTimeGMT_, "") };
    inline SearchFormDatasRequest& setModifiedToTimeGMT(string modifiedToTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedToTimeGMT_, modifiedToTimeGMT) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline SearchFormDatasRequest& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFormDatasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchFieldJson Field Functions 
    bool hasSearchFieldJson() const { return this->searchFieldJson_ != nullptr;};
    void deleteSearchFieldJson() { this->searchFieldJson_ = nullptr;};
    inline string searchFieldJson() const { DARABONBA_PTR_GET_DEFAULT(searchFieldJson_, "") };
    inline SearchFormDatasRequest& setSearchFieldJson(string searchFieldJson) { DARABONBA_PTR_SET_VALUE(searchFieldJson_, searchFieldJson) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SearchFormDatasRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> createFromTimeGMT_ = nullptr;
    std::shared_ptr<string> createToTimeGMT_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> dynamicOrder_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> modifiedFromTimeGMT_ = nullptr;
    std::shared_ptr<string> modifiedToTimeGMT_ = nullptr;
    std::shared_ptr<string> originatorId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchFieldJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
