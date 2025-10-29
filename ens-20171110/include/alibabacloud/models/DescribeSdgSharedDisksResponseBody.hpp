// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSDGSharedDisksResponseBodySharedDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGSharedDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGSharedDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedDisks, sharedDisks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGSharedDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedDisks, sharedDisks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSDGSharedDisksResponseBody() = default ;
    DescribeSDGSharedDisksResponseBody(const DescribeSDGSharedDisksResponseBody &) = default ;
    DescribeSDGSharedDisksResponseBody(DescribeSDGSharedDisksResponseBody &&) = default ;
    DescribeSDGSharedDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGSharedDisksResponseBody() = default ;
    DescribeSDGSharedDisksResponseBody& operator=(const DescribeSDGSharedDisksResponseBody &) = default ;
    DescribeSDGSharedDisksResponseBody& operator=(DescribeSDGSharedDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->sharedDisks_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSDGSharedDisksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSDGSharedDisksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSDGSharedDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedDisks Field Functions 
    bool hasSharedDisks() const { return this->sharedDisks_ != nullptr;};
    void deleteSharedDisks() { this->sharedDisks_ = nullptr;};
    inline const vector<DescribeSDGSharedDisksResponseBodySharedDisks> & sharedDisks() const { DARABONBA_PTR_GET_CONST(sharedDisks_, vector<DescribeSDGSharedDisksResponseBodySharedDisks>) };
    inline vector<DescribeSDGSharedDisksResponseBodySharedDisks> sharedDisks() { DARABONBA_PTR_GET(sharedDisks_, vector<DescribeSDGSharedDisksResponseBodySharedDisks>) };
    inline DescribeSDGSharedDisksResponseBody& setSharedDisks(const vector<DescribeSDGSharedDisksResponseBodySharedDisks> & sharedDisks) { DARABONBA_PTR_SET_VALUE(sharedDisks_, sharedDisks) };
    inline DescribeSDGSharedDisksResponseBody& setSharedDisks(vector<DescribeSDGSharedDisksResponseBodySharedDisks> && sharedDisks) { DARABONBA_PTR_SET_RVALUE(sharedDisks_, sharedDisks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSDGSharedDisksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSDGSharedDisksResponseBodySharedDisks>> sharedDisks_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
