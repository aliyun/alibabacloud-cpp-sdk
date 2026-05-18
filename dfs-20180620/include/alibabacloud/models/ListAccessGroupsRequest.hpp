// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListAccessGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(StartOffset, startOffset_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(StartOffset, startOffset_);
    };
    ListAccessGroupsRequest() = default ;
    ListAccessGroupsRequest(const ListAccessGroupsRequest &) = default ;
    ListAccessGroupsRequest(ListAccessGroupsRequest &&) = default ;
    ListAccessGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessGroupsRequest() = default ;
    ListAccessGroupsRequest& operator=(const ListAccessGroupsRequest &) = default ;
    ListAccessGroupsRequest& operator=(ListAccessGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputRegionId_ == nullptr
        && this->limit_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->orderType_ == nullptr && this->startOffset_ == nullptr; };
    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ListAccessGroupsRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListAccessGroupsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListAccessGroupsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListAccessGroupsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // startOffset Field Functions 
    bool hasStartOffset() const { return this->startOffset_ != nullptr;};
    void deleteStartOffset() { this->startOffset_ = nullptr;};
    inline int32_t getStartOffset() const { DARABONBA_PTR_GET_DEFAULT(startOffset_, 0) };
    inline ListAccessGroupsRequest& setStartOffset(int32_t startOffset) { DARABONBA_PTR_SET_VALUE(startOffset_, startOffset) };


  protected:
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<int32_t> limit_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<int32_t> startOffset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
