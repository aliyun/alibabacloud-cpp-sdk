// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryReceiverByParamResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryReceiverByParamResponseBody() = default ;
    QueryReceiverByParamResponseBody(const QueryReceiverByParamResponseBody &) = default ;
    QueryReceiverByParamResponseBody(QueryReceiverByParamResponseBody &&) = default ;
    QueryReceiverByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverByParamResponseBody() = default ;
    QueryReceiverByParamResponseBody& operator=(const QueryReceiverByParamResponseBody &) = default ;
    QueryReceiverByParamResponseBody& operator=(QueryReceiverByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextStart_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->data_ == nullptr; };
    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string nextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline QueryReceiverByParamResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryReceiverByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReceiverByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryReceiverByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryReceiverByParamResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryReceiverByParamResponseBodyData) };
    inline QueryReceiverByParamResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryReceiverByParamResponseBodyData) };
    inline QueryReceiverByParamResponseBody& setData(const QueryReceiverByParamResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryReceiverByParamResponseBody& setData(QueryReceiverByParamResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Used for pagination. If there are more results, set this returned value to the NextStart in the next request.
    std::shared_ptr<string> nextStart_ = nullptr;
    // Number of items displayed per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total count
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Detailed information of the recipient list
    std::shared_ptr<QueryReceiverByParamResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
