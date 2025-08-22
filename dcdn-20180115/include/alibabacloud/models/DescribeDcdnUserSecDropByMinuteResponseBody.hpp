// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPBYMINUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPBYMINUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserSecDropByMinuteResponseBodyRows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserSecDropByMinuteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserSecDropByMinuteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Len, len_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserSecDropByMinuteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Len, len_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDcdnUserSecDropByMinuteResponseBody() = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody(const DescribeDcdnUserSecDropByMinuteResponseBody &) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody(DescribeDcdnUserSecDropByMinuteResponseBody &&) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserSecDropByMinuteResponseBody() = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody& operator=(const DescribeDcdnUserSecDropByMinuteResponseBody &) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBody& operator=(DescribeDcdnUserSecDropByMinuteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->len_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->rows_ != nullptr
        && this->totalCount_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // len Field Functions 
    bool hasLen() const { return this->len_ != nullptr;};
    void deleteLen() { this->len_ = nullptr;};
    inline int32_t len() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows>) };
    inline vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows> rows() { DARABONBA_PTR_GET(rows_, vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows>) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setRows(const vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setRows(vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The description of HTTP responses.
    std::shared_ptr<string> description_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> len_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array.
    std::shared_ptr<vector<DescribeDcdnUserSecDropByMinuteResponseBodyRows>> rows_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
