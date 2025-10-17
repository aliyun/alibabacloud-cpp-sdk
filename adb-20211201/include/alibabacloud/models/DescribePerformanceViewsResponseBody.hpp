// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePerformanceViewsResponseBodyViews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePerformanceViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Views, views_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Views, views_);
    };
    DescribePerformanceViewsResponseBody() = default ;
    DescribePerformanceViewsResponseBody(const DescribePerformanceViewsResponseBody &) = default ;
    DescribePerformanceViewsResponseBody(DescribePerformanceViewsResponseBody &&) = default ;
    DescribePerformanceViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewsResponseBody() = default ;
    DescribePerformanceViewsResponseBody& operator=(const DescribePerformanceViewsResponseBody &) = default ;
    DescribePerformanceViewsResponseBody& operator=(DescribePerformanceViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->requestId_ == nullptr && return this->views_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribePerformanceViewsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePerformanceViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // views Field Functions 
    bool hasViews() const { return this->views_ != nullptr;};
    void deleteViews() { this->views_ = nullptr;};
    inline const vector<DescribePerformanceViewsResponseBodyViews> & views() const { DARABONBA_PTR_GET_CONST(views_, vector<DescribePerformanceViewsResponseBodyViews>) };
    inline vector<DescribePerformanceViewsResponseBodyViews> views() { DARABONBA_PTR_GET(views_, vector<DescribePerformanceViewsResponseBodyViews>) };
    inline DescribePerformanceViewsResponseBody& setViews(const vector<DescribePerformanceViewsResponseBodyViews> & views) { DARABONBA_PTR_SET_VALUE(views_, views) };
    inline DescribePerformanceViewsResponseBody& setViews(vector<DescribePerformanceViewsResponseBodyViews> && views) { DARABONBA_PTR_SET_RVALUE(views_, views) };


  protected:
    // The details about the access denial.
    // 
    // >  This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // the list of view.
    std::shared_ptr<vector<DescribePerformanceViewsResponseBodyViews>> views_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
