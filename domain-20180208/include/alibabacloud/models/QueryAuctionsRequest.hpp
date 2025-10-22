// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryAuctionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuctionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionEndTimeOrder, auctionEndTimeOrder_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuctionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionEndTimeOrder, auctionEndTimeOrder_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    QueryAuctionsRequest() = default ;
    QueryAuctionsRequest(const QueryAuctionsRequest &) = default ;
    QueryAuctionsRequest(QueryAuctionsRequest &&) = default ;
    QueryAuctionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuctionsRequest() = default ;
    QueryAuctionsRequest& operator=(const QueryAuctionsRequest &) = default ;
    QueryAuctionsRequest& operator=(QueryAuctionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionEndTimeOrder_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->status_ == nullptr && return this->statuses_ == nullptr; };
    // auctionEndTimeOrder Field Functions 
    bool hasAuctionEndTimeOrder() const { return this->auctionEndTimeOrder_ != nullptr;};
    void deleteAuctionEndTimeOrder() { this->auctionEndTimeOrder_ = nullptr;};
    inline string auctionEndTimeOrder() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTimeOrder_, "") };
    inline QueryAuctionsRequest& setAuctionEndTimeOrder(string auctionEndTimeOrder) { DARABONBA_PTR_SET_VALUE(auctionEndTimeOrder_, auctionEndTimeOrder) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryAuctionsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAuctionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAuctionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline string statuses() const { DARABONBA_PTR_GET_DEFAULT(statuses_, "") };
    inline QueryAuctionsRequest& setStatuses(string statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };


  protected:
    std::shared_ptr<string> auctionEndTimeOrder_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statuses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
