// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeKeyPairsResponseBodyKeyPairs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeKeyPairsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeKeyPairsResponseBody() = default ;
    DescribeKeyPairsResponseBody(const DescribeKeyPairsResponseBody &) = default ;
    DescribeKeyPairsResponseBody(DescribeKeyPairsResponseBody &&) = default ;
    DescribeKeyPairsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsResponseBody() = default ;
    DescribeKeyPairsResponseBody& operator=(const DescribeKeyPairsResponseBody &) = default ;
    DescribeKeyPairsResponseBody& operator=(DescribeKeyPairsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPairs_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // keyPairs Field Functions 
    bool hasKeyPairs() const { return this->keyPairs_ != nullptr;};
    void deleteKeyPairs() { this->keyPairs_ = nullptr;};
    inline const DescribeKeyPairsResponseBodyKeyPairs & keyPairs() const { DARABONBA_PTR_GET_CONST(keyPairs_, DescribeKeyPairsResponseBodyKeyPairs) };
    inline DescribeKeyPairsResponseBodyKeyPairs keyPairs() { DARABONBA_PTR_GET(keyPairs_, DescribeKeyPairsResponseBodyKeyPairs) };
    inline DescribeKeyPairsResponseBody& setKeyPairs(const DescribeKeyPairsResponseBodyKeyPairs & keyPairs) { DARABONBA_PTR_SET_VALUE(keyPairs_, keyPairs) };
    inline DescribeKeyPairsResponseBody& setKeyPairs(DescribeKeyPairsResponseBodyKeyPairs && keyPairs) { DARABONBA_PTR_SET_RVALUE(keyPairs_, keyPairs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKeyPairsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKeyPairsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyPairsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeKeyPairsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the key pairs.
    std::shared_ptr<DescribeKeyPairsResponseBodyKeyPairs> keyPairs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of key pairs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
