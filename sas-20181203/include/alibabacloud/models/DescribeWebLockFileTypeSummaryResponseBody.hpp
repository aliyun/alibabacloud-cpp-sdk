// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILETYPESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILETYPESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebLockFileTypeSummaryResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockFileTypeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockFileTypeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockFileTypeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockFileTypeSummaryResponseBody() = default ;
    DescribeWebLockFileTypeSummaryResponseBody(const DescribeWebLockFileTypeSummaryResponseBody &) = default ;
    DescribeWebLockFileTypeSummaryResponseBody(DescribeWebLockFileTypeSummaryResponseBody &&) = default ;
    DescribeWebLockFileTypeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockFileTypeSummaryResponseBody() = default ;
    DescribeWebLockFileTypeSummaryResponseBody& operator=(const DescribeWebLockFileTypeSummaryResponseBody &) = default ;
    DescribeWebLockFileTypeSummaryResponseBody& operator=(DescribeWebLockFileTypeSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeWebLockFileTypeSummaryResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeWebLockFileTypeSummaryResponseBodyList>) };
    inline vector<DescribeWebLockFileTypeSummaryResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeWebLockFileTypeSummaryResponseBodyList>) };
    inline DescribeWebLockFileTypeSummaryResponseBody& setList(const vector<DescribeWebLockFileTypeSummaryResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeWebLockFileTypeSummaryResponseBody& setList(vector<DescribeWebLockFileTypeSummaryResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockFileTypeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockFileTypeSummaryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of events on web tamper proofing returned.
    std::shared_ptr<vector<DescribeWebLockFileTypeSummaryResponseBodyList>> list_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of events on web tamper proofing.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
