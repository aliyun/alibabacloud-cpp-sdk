// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONHISTORYREQUEST_HPP_
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
  class ListInterceptionHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HistoryName, historyName_);
      DARABONBA_PTR_TO_JSON(InterceptionTypes, interceptionTypes_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HistoryName, historyName_);
      DARABONBA_PTR_FROM_JSON(InterceptionTypes, interceptionTypes_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListInterceptionHistoryRequest() = default ;
    ListInterceptionHistoryRequest(const ListInterceptionHistoryRequest &) = default ;
    ListInterceptionHistoryRequest(ListInterceptionHistoryRequest &&) = default ;
    ListInterceptionHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionHistoryRequest() = default ;
    ListInterceptionHistoryRequest& operator=(const ListInterceptionHistoryRequest &) = default ;
    ListInterceptionHistoryRequest& operator=(ListInterceptionHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->historyName_ == nullptr && this->interceptionTypes_ == nullptr && this->lang_ == nullptr
        && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInterceptionHistoryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInterceptionHistoryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListInterceptionHistoryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // historyName Field Functions 
    bool hasHistoryName() const { return this->historyName_ != nullptr;};
    void deleteHistoryName() { this->historyName_ = nullptr;};
    inline string getHistoryName() const { DARABONBA_PTR_GET_DEFAULT(historyName_, "") };
    inline ListInterceptionHistoryRequest& setHistoryName(string historyName) { DARABONBA_PTR_SET_VALUE(historyName_, historyName) };


    // interceptionTypes Field Functions 
    bool hasInterceptionTypes() const { return this->interceptionTypes_ != nullptr;};
    void deleteInterceptionTypes() { this->interceptionTypes_ = nullptr;};
    inline const vector<int32_t> & getInterceptionTypes() const { DARABONBA_PTR_GET_CONST(interceptionTypes_, vector<int32_t>) };
    inline vector<int32_t> getInterceptionTypes() { DARABONBA_PTR_GET(interceptionTypes_, vector<int32_t>) };
    inline ListInterceptionHistoryRequest& setInterceptionTypes(const vector<int32_t> & interceptionTypes) { DARABONBA_PTR_SET_VALUE(interceptionTypes_, interceptionTypes) };
    inline ListInterceptionHistoryRequest& setInterceptionTypes(vector<int32_t> && interceptionTypes) { DARABONBA_PTR_SET_RVALUE(interceptionTypes_, interceptionTypes) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListInterceptionHistoryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterceptionHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListInterceptionHistoryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the container cluster.
    shared_ptr<string> clusterId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. The value is a UNIX timestamp.
    shared_ptr<int64_t> endTime_ {};
    // The name of the alert.
    shared_ptr<string> historyName_ {};
    // The types of exceptions.
    shared_ptr<vector<int32_t>> interceptionTypes_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The start of the time range to query. The value is a UNIX timestamp.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
