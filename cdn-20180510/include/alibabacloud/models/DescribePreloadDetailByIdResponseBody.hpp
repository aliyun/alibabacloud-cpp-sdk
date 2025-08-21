// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreloadDetailByIdResponseBodyUrlDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribePreloadDetailByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreloadDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UrlDetails, urlDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreloadDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UrlDetails, urlDetails_);
    };
    DescribePreloadDetailByIdResponseBody() = default ;
    DescribePreloadDetailByIdResponseBody(const DescribePreloadDetailByIdResponseBody &) = default ;
    DescribePreloadDetailByIdResponseBody(DescribePreloadDetailByIdResponseBody &&) = default ;
    DescribePreloadDetailByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreloadDetailByIdResponseBody() = default ;
    DescribePreloadDetailByIdResponseBody& operator=(const DescribePreloadDetailByIdResponseBody &) = default ;
    DescribePreloadDetailByIdResponseBody& operator=(DescribePreloadDetailByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->urlDetails_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreloadDetailByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePreloadDetailByIdResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // urlDetails Field Functions 
    bool hasUrlDetails() const { return this->urlDetails_ != nullptr;};
    void deleteUrlDetails() { this->urlDetails_ = nullptr;};
    inline const vector<DescribePreloadDetailByIdResponseBodyUrlDetails> & urlDetails() const { DARABONBA_PTR_GET_CONST(urlDetails_, vector<DescribePreloadDetailByIdResponseBodyUrlDetails>) };
    inline vector<DescribePreloadDetailByIdResponseBodyUrlDetails> urlDetails() { DARABONBA_PTR_GET(urlDetails_, vector<DescribePreloadDetailByIdResponseBodyUrlDetails>) };
    inline DescribePreloadDetailByIdResponseBody& setUrlDetails(const vector<DescribePreloadDetailByIdResponseBodyUrlDetails> & urlDetails) { DARABONBA_PTR_SET_VALUE(urlDetails_, urlDetails) };
    inline DescribePreloadDetailByIdResponseBody& setUrlDetails(vector<DescribePreloadDetailByIdResponseBodyUrlDetails> && urlDetails) { DARABONBA_PTR_SET_RVALUE(urlDetails_, urlDetails) };


  protected:
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of queried tasks.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The details of the task, including the task ID, start time, end time, domain name, success rate, status, returned error code, and completion details of all URL resources.
    std::shared_ptr<vector<DescribePreloadDetailByIdResponseBodyUrlDetails>> urlDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
