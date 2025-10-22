// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBIDRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBIDRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBidRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBidRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBidRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryBidRecordsRequest() = default ;
    QueryBidRecordsRequest(const QueryBidRecordsRequest &) = default ;
    QueryBidRecordsRequest(QueryBidRecordsRequest &&) = default ;
    QueryBidRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBidRecordsRequest() = default ;
    QueryBidRecordsRequest& operator=(const QueryBidRecordsRequest &) = default ;
    QueryBidRecordsRequest& operator=(QueryBidRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline QueryBidRecordsRequest& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryBidRecordsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryBidRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> auctionId_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
