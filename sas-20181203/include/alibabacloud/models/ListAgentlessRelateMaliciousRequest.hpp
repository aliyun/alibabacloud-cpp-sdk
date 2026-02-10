// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRELATEMALICIOUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRELATEMALICIOUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessRelateMaliciousRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRelateMaliciousRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRelateMaliciousRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    ListAgentlessRelateMaliciousRequest() = default ;
    ListAgentlessRelateMaliciousRequest(const ListAgentlessRelateMaliciousRequest &) = default ;
    ListAgentlessRelateMaliciousRequest(ListAgentlessRelateMaliciousRequest &&) = default ;
    ListAgentlessRelateMaliciousRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRelateMaliciousRequest() = default ;
    ListAgentlessRelateMaliciousRequest& operator=(const ListAgentlessRelateMaliciousRequest &) = default ;
    ListAgentlessRelateMaliciousRequest& operator=(ListAgentlessRelateMaliciousRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->eventId_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->scenario_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessRelateMaliciousRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListAgentlessRelateMaliciousRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAgentlessRelateMaliciousRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAgentlessRelateMaliciousRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ListAgentlessRelateMaliciousRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the event.
    shared_ptr<int64_t> eventId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The scenarios of batch handling. Valid values:
    // 
    // *   same_file_md5: the same MD5 hash value.
    // *   default: the same alert type. This is the default value.
    shared_ptr<string> scenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
