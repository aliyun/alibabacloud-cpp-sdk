// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(TicketIdList, ticketIdListShrink_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(TicketIdList, ticketIdListShrink_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListTicketsShrinkRequest() = default ;
    ListTicketsShrinkRequest(const ListTicketsShrinkRequest &) = default ;
    ListTicketsShrinkRequest(ListTicketsShrinkRequest &&) = default ;
    ListTicketsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsShrinkRequest() = default ;
    ListTicketsShrinkRequest& operator=(const ListTicketsShrinkRequest &) = default ;
    ListTicketsShrinkRequest& operator=(ListTicketsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->keyword_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr && this->statusList_ == nullptr
        && this->ticketId_ == nullptr && this->ticketIdListShrink_ == nullptr && this->uid_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline ListTicketsShrinkRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListTicketsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTicketsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTicketsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline ListTicketsShrinkRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListTicketsShrinkRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListTicketsShrinkRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketsShrinkRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // ticketIdListShrink Field Functions 
    bool hasTicketIdListShrink() const { return this->ticketIdListShrink_ != nullptr;};
    void deleteTicketIdListShrink() { this->ticketIdListShrink_ = nullptr;};
    inline string getTicketIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(ticketIdListShrink_, "") };
    inline ListTicketsShrinkRequest& setTicketIdListShrink(string ticketIdListShrink) { DARABONBA_PTR_SET_VALUE(ticketIdListShrink_, ticketIdListShrink) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListTicketsShrinkRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The end time when the ticket was created. Use this parameter with StartDate to query tickets created within a specific time range.
    shared_ptr<int64_t> endDate_ {};
    // The keyword for a fuzzy search. The keyword is used to match the content of the Description field of the ticket.
    shared_ptr<string> keyword_ {};
    // The page number for a paged query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The start time when the ticket was created. Use this parameter with EndDate to query tickets created within a specific time range.
    shared_ptr<int64_t> startDate_ {};
    // A list of ticket statuses.
    shared_ptr<vector<string>> statusList_ {};
    // The ticket ID.
    shared_ptr<string> ticketId_ {};
    // A list of ticket IDs.
    shared_ptr<string> ticketIdListShrink_ {};
    // The UID.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
