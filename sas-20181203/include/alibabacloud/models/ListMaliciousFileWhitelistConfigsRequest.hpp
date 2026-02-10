// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMALICIOUSFILEWHITELISTCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMALICIOUSFILEWHITELISTCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMaliciousFileWhitelistConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaliciousFileWhitelistConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaliciousFileWhitelistConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListMaliciousFileWhitelistConfigsRequest() = default ;
    ListMaliciousFileWhitelistConfigsRequest(const ListMaliciousFileWhitelistConfigsRequest &) = default ;
    ListMaliciousFileWhitelistConfigsRequest(ListMaliciousFileWhitelistConfigsRequest &&) = default ;
    ListMaliciousFileWhitelistConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaliciousFileWhitelistConfigsRequest() = default ;
    ListMaliciousFileWhitelistConfigsRequest& operator=(const ListMaliciousFileWhitelistConfigsRequest &) = default ;
    ListMaliciousFileWhitelistConfigsRequest& operator=(ListMaliciousFileWhitelistConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->eventName_ == nullptr && this->idList_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->source_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMaliciousFileWhitelistConfigsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListMaliciousFileWhitelistConfigsRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline int64_t getIdList() const { DARABONBA_PTR_GET_DEFAULT(idList_, 0L) };
    inline ListMaliciousFileWhitelistConfigsRequest& setIdList(int64_t idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListMaliciousFileWhitelistConfigsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMaliciousFileWhitelistConfigsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListMaliciousFileWhitelistConfigsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the alert.
    // 
    // *   Set the value to ALL, which indicates all alert types.
    shared_ptr<string> eventName_ {};
    // Event ID. <notice>Field is deprecated.</notice>
    shared_ptr<int64_t> idList_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The feature to which this operation belongs. If you leave this parameter empty, the default value agentless is used.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
