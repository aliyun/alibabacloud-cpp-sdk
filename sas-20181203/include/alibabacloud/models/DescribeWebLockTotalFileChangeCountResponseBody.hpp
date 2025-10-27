// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKTOTALFILECHANGECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKTOTALFILECHANGECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockTotalFileChangeCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockTotalFileChangeCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockTotalFileChangeCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockTotalFileChangeCountResponseBody() = default ;
    DescribeWebLockTotalFileChangeCountResponseBody(const DescribeWebLockTotalFileChangeCountResponseBody &) = default ;
    DescribeWebLockTotalFileChangeCountResponseBody(DescribeWebLockTotalFileChangeCountResponseBody &&) = default ;
    DescribeWebLockTotalFileChangeCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockTotalFileChangeCountResponseBody() = default ;
    DescribeWebLockTotalFileChangeCountResponseBody& operator=(const DescribeWebLockTotalFileChangeCountResponseBody &) = default ;
    DescribeWebLockTotalFileChangeCountResponseBody& operator=(DescribeWebLockTotalFileChangeCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockTotalFileChangeCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeWebLockTotalFileChangeCountResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of times that the files protected by web tamper proofing are changed.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
