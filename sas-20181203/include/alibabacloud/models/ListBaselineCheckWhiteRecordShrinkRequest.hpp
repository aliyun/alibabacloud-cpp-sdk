// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBaselineCheckWhiteRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineCheckWhiteRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIdsShrink_);
      DARABONBA_PTR_TO_JSON(CheckItemFuzzy, checkItemFuzzy_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIdsShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineCheckWhiteRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CheckItemFuzzy, checkItemFuzzy_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListBaselineCheckWhiteRecordShrinkRequest() = default ;
    ListBaselineCheckWhiteRecordShrinkRequest(const ListBaselineCheckWhiteRecordShrinkRequest &) = default ;
    ListBaselineCheckWhiteRecordShrinkRequest(ListBaselineCheckWhiteRecordShrinkRequest &&) = default ;
    ListBaselineCheckWhiteRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineCheckWhiteRecordShrinkRequest() = default ;
    ListBaselineCheckWhiteRecordShrinkRequest& operator=(const ListBaselineCheckWhiteRecordShrinkRequest &) = default ;
    ListBaselineCheckWhiteRecordShrinkRequest& operator=(ListBaselineCheckWhiteRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkIdsShrink_ != nullptr
        && this->checkItemFuzzy_ != nullptr && this->currentPage_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr && this->recordIdsShrink_ != nullptr
        && this->source_ != nullptr; };
    // checkIdsShrink Field Functions 
    bool hasCheckIdsShrink() const { return this->checkIdsShrink_ != nullptr;};
    void deleteCheckIdsShrink() { this->checkIdsShrink_ = nullptr;};
    inline string checkIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(checkIdsShrink_, "") };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setCheckIdsShrink(string checkIdsShrink) { DARABONBA_PTR_SET_VALUE(checkIdsShrink_, checkIdsShrink) };


    // checkItemFuzzy Field Functions 
    bool hasCheckItemFuzzy() const { return this->checkItemFuzzy_ != nullptr;};
    void deleteCheckItemFuzzy() { this->checkItemFuzzy_ = nullptr;};
    inline string checkItemFuzzy() const { DARABONBA_PTR_GET_DEFAULT(checkItemFuzzy_, "") };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setCheckItemFuzzy(string checkItemFuzzy) { DARABONBA_PTR_SET_VALUE(checkItemFuzzy_, checkItemFuzzy) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordIdsShrink Field Functions 
    bool hasRecordIdsShrink() const { return this->recordIdsShrink_ != nullptr;};
    void deleteRecordIdsShrink() { this->recordIdsShrink_ = nullptr;};
    inline string recordIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordIdsShrink_, "") };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setRecordIdsShrink(string recordIdsShrink) { DARABONBA_PTR_SET_VALUE(recordIdsShrink_, recordIdsShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListBaselineCheckWhiteRecordShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The IDs of check items.
    std::shared_ptr<string> checkIdsShrink_ = nullptr;
    // The name of the check item. Fuzzy match is supported.
    std::shared_ptr<string> checkItemFuzzy_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of the whitelist rules.
    std::shared_ptr<string> recordIdsShrink_ = nullptr;
    // The data source. If you leave this parameter empty, the default value is used. Valid values:
    // 
    // *   **default**: server
    // *   **agentless**: agentless detection
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
