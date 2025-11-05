// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTALISTEXPORTPAGEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUOTALISTEXPORTPAGEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class QuotaListExportPagedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaListExportPagedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaListExportPagedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QuotaListExportPagedRequest() = default ;
    QuotaListExportPagedRequest(const QuotaListExportPagedRequest &) = default ;
    QuotaListExportPagedRequest(QuotaListExportPagedRequest &&) = default ;
    QuotaListExportPagedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaListExportPagedRequest() = default ;
    QuotaListExportPagedRequest& operator=(const QuotaListExportPagedRequest &) = default ;
    QuotaListExportPagedRequest& operator=(QuotaListExportPagedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->language_ == nullptr && return this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QuotaListExportPagedRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline QuotaListExportPagedRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuotaListExportPagedRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Pagination, current page number, starting from 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Multilingual Parameters, the default language is English.</br>
    // en: English</br>
    // zh: Chinese</br>
    // ja: Japanese </br>
    std::shared_ptr<string> language_ = nullptr;
    // Pagination, record number on each page, maximum 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
