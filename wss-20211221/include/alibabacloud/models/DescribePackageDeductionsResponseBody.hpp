// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePackageDeductionsResponseBodyDeductions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribePackageDeductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageDeductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Deductions, deductions_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalUsedCoreTime, totalUsedCoreTime_);
      DARABONBA_PTR_TO_JSON(TotalUsedTime, totalUsedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageDeductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Deductions, deductions_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalUsedCoreTime, totalUsedCoreTime_);
      DARABONBA_PTR_FROM_JSON(TotalUsedTime, totalUsedTime_);
    };
    DescribePackageDeductionsResponseBody() = default ;
    DescribePackageDeductionsResponseBody(const DescribePackageDeductionsResponseBody &) = default ;
    DescribePackageDeductionsResponseBody(DescribePackageDeductionsResponseBody &&) = default ;
    DescribePackageDeductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageDeductionsResponseBody() = default ;
    DescribePackageDeductionsResponseBody& operator=(const DescribePackageDeductionsResponseBody &) = default ;
    DescribePackageDeductionsResponseBody& operator=(DescribePackageDeductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deductions_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->totalUsedCoreTime_ == nullptr
        && return this->totalUsedTime_ == nullptr; };
    // deductions Field Functions 
    bool hasDeductions() const { return this->deductions_ != nullptr;};
    void deleteDeductions() { this->deductions_ = nullptr;};
    inline const vector<DescribePackageDeductionsResponseBodyDeductions> & deductions() const { DARABONBA_PTR_GET_CONST(deductions_, vector<DescribePackageDeductionsResponseBodyDeductions>) };
    inline vector<DescribePackageDeductionsResponseBodyDeductions> deductions() { DARABONBA_PTR_GET(deductions_, vector<DescribePackageDeductionsResponseBodyDeductions>) };
    inline DescribePackageDeductionsResponseBody& setDeductions(const vector<DescribePackageDeductionsResponseBodyDeductions> & deductions) { DARABONBA_PTR_SET_VALUE(deductions_, deductions) };
    inline DescribePackageDeductionsResponseBody& setDeductions(vector<DescribePackageDeductionsResponseBodyDeductions> && deductions) { DARABONBA_PTR_SET_RVALUE(deductions_, deductions) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribePackageDeductionsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePackageDeductionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePackageDeductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePackageDeductionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalUsedCoreTime Field Functions 
    bool hasTotalUsedCoreTime() const { return this->totalUsedCoreTime_ != nullptr;};
    void deleteTotalUsedCoreTime() { this->totalUsedCoreTime_ = nullptr;};
    inline float totalUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(totalUsedCoreTime_, 0.0) };
    inline DescribePackageDeductionsResponseBody& setTotalUsedCoreTime(float totalUsedCoreTime) { DARABONBA_PTR_SET_VALUE(totalUsedCoreTime_, totalUsedCoreTime) };


    // totalUsedTime Field Functions 
    bool hasTotalUsedTime() const { return this->totalUsedTime_ != nullptr;};
    void deleteTotalUsedTime() { this->totalUsedTime_ = nullptr;};
    inline int64_t totalUsedTime() const { DARABONBA_PTR_GET_DEFAULT(totalUsedTime_, 0L) };
    inline DescribePackageDeductionsResponseBody& setTotalUsedTime(int64_t totalUsedTime) { DARABONBA_PTR_SET_VALUE(totalUsedTime_, totalUsedTime) };


  protected:
    std::shared_ptr<vector<DescribePackageDeductionsResponseBodyDeductions>> deductions_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<float> totalUsedCoreTime_ = nullptr;
    std::shared_ptr<int64_t> totalUsedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
