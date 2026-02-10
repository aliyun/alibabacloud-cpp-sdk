// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBaselineCheckWhiteRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(CheckItemFuzzy, checkItemFuzzy_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineCheckWhiteRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(CheckItemFuzzy, checkItemFuzzy_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListBaselineCheckWhiteRecordRequest() = default ;
    ListBaselineCheckWhiteRecordRequest(const ListBaselineCheckWhiteRecordRequest &) = default ;
    ListBaselineCheckWhiteRecordRequest(ListBaselineCheckWhiteRecordRequest &&) = default ;
    ListBaselineCheckWhiteRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineCheckWhiteRecordRequest() = default ;
    ListBaselineCheckWhiteRecordRequest& operator=(const ListBaselineCheckWhiteRecordRequest &) = default ;
    ListBaselineCheckWhiteRecordRequest& operator=(ListBaselineCheckWhiteRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr
        && this->checkItemFuzzy_ == nullptr && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->recordIds_ == nullptr
        && this->source_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & getCheckIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> getCheckIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline ListBaselineCheckWhiteRecordRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline ListBaselineCheckWhiteRecordRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // checkItemFuzzy Field Functions 
    bool hasCheckItemFuzzy() const { return this->checkItemFuzzy_ != nullptr;};
    void deleteCheckItemFuzzy() { this->checkItemFuzzy_ = nullptr;};
    inline string getCheckItemFuzzy() const { DARABONBA_PTR_GET_DEFAULT(checkItemFuzzy_, "") };
    inline ListBaselineCheckWhiteRecordRequest& setCheckItemFuzzy(string checkItemFuzzy) { DARABONBA_PTR_SET_VALUE(checkItemFuzzy_, checkItemFuzzy) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListBaselineCheckWhiteRecordRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListBaselineCheckWhiteRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBaselineCheckWhiteRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<int64_t> & getRecordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<int64_t>) };
    inline vector<int64_t> getRecordIds() { DARABONBA_PTR_GET(recordIds_, vector<int64_t>) };
    inline ListBaselineCheckWhiteRecordRequest& setRecordIds(const vector<int64_t> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline ListBaselineCheckWhiteRecordRequest& setRecordIds(vector<int64_t> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListBaselineCheckWhiteRecordRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The IDs of check items.
    shared_ptr<vector<int64_t>> checkIds_ {};
    // The name of the check item. Fuzzy match is supported.
    shared_ptr<string> checkItemFuzzy_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of the whitelist rules.
    shared_ptr<vector<int64_t>> recordIds_ {};
    // The data source. If you leave this parameter empty, the default value is used. Valid values:
    // 
    // *   **default**: server
    // *   **agentless**: agentless detection
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
