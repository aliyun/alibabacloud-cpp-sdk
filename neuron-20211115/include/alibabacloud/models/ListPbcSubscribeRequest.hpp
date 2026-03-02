// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPBCSUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPBCSUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPbcSubscribeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPbcSubscribeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_by, orderBy_);
      DARABONBA_PTR_TO_JSON(order_direction, orderDirection_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListPbcSubscribeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_by, orderBy_);
      DARABONBA_PTR_FROM_JSON(order_direction, orderDirection_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
    };
    ListPbcSubscribeRequest() = default ;
    ListPbcSubscribeRequest(const ListPbcSubscribeRequest &) = default ;
    ListPbcSubscribeRequest(ListPbcSubscribeRequest &&) = default ;
    ListPbcSubscribeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPbcSubscribeRequest() = default ;
    ListPbcSubscribeRequest& operator=(const ListPbcSubscribeRequest &) = default ;
    ListPbcSubscribeRequest& operator=(ListPbcSubscribeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderBy_ == nullptr
        && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListPbcSubscribeRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListPbcSubscribeRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPbcSubscribeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPbcSubscribeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
