// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTaskByParamResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTaskByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryTaskByParamResponseBody() = default ;
    QueryTaskByParamResponseBody(const QueryTaskByParamResponseBody &) = default ;
    QueryTaskByParamResponseBody(QueryTaskByParamResponseBody &&) = default ;
    QueryTaskByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskByParamResponseBody() = default ;
    QueryTaskByParamResponseBody& operator=(const QueryTaskByParamResponseBody &) = default ;
    QueryTaskByParamResponseBody& operator=(QueryTaskByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->data_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryTaskByParamResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryTaskByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTaskByParamResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryTaskByParamResponseBodyData) };
    inline QueryTaskByParamResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryTaskByParamResponseBodyData) };
    inline QueryTaskByParamResponseBody& setData(const QueryTaskByParamResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTaskByParamResponseBody& setData(QueryTaskByParamResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Current page number
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total count
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Returned results
    std::shared_ptr<QueryTaskByParamResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
