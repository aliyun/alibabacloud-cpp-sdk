// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayResponseBodyGateways.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Gateways, gateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Gateways, gateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGatewayResponseBody() = default ;
    ListGatewayResponseBody(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody(ListGatewayResponseBody &&) = default ;
    ListGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBody() = default ;
    ListGatewayResponseBody& operator=(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody& operator=(ListGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gateways_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // gateways Field Functions 
    bool hasGateways() const { return this->gateways_ != nullptr;};
    void deleteGateways() { this->gateways_ = nullptr;};
    inline const vector<ListGatewayResponseBodyGateways> & gateways() const { DARABONBA_PTR_GET_CONST(gateways_, vector<ListGatewayResponseBodyGateways>) };
    inline vector<ListGatewayResponseBodyGateways> gateways() { DARABONBA_PTR_GET(gateways_, vector<ListGatewayResponseBodyGateways>) };
    inline ListGatewayResponseBody& setGateways(const vector<ListGatewayResponseBodyGateways> & gateways) { DARABONBA_PTR_SET_VALUE(gateways_, gateways) };
    inline ListGatewayResponseBody& setGateways(vector<ListGatewayResponseBodyGateways> && gateways) { DARABONBA_PTR_SET_RVALUE(gateways_, gateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGatewayResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The private gateways.
    std::shared_ptr<vector<ListGatewayResponseBodyGateways>> gateways_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of private gateways returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
