// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSUBSCRIPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSUBSCRIPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListProductSubscriptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductSubscriptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerName, consumerName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductSubscriptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerName, consumerName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListProductSubscriptionsRequest() = default ;
    ListProductSubscriptionsRequest(const ListProductSubscriptionsRequest &) = default ;
    ListProductSubscriptionsRequest(ListProductSubscriptionsRequest &&) = default ;
    ListProductSubscriptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductSubscriptionsRequest() = default ;
    ListProductSubscriptionsRequest& operator=(const ListProductSubscriptionsRequest &) = default ;
    ListProductSubscriptionsRequest& operator=(ListProductSubscriptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // consumerName Field Functions 
    bool hasConsumerName() const { return this->consumerName_ != nullptr;};
    void deleteConsumerName() { this->consumerName_ = nullptr;};
    inline string getConsumerName() const { DARABONBA_PTR_GET_DEFAULT(consumerName_, "") };
    inline ListProductSubscriptionsRequest& setConsumerName(string consumerName) { DARABONBA_PTR_SET_VALUE(consumerName_, consumerName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProductSubscriptionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProductSubscriptionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProductSubscriptionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The keyword of the consumer name used to search the subscription records of the API product by consumer name.
    shared_ptr<string> consumerName_ {};
    // The page number. Pages start from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The subscription status used to filter subscriptions. Valid values: PENDING and APPROVED.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
