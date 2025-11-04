// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLifecycleHooksResponseBodyLifecycleHooks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLifecycleHooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleHooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleHooks, lifecycleHooks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleHooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleHooks, lifecycleHooks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecycleHooksResponseBody() = default ;
    DescribeLifecycleHooksResponseBody(const DescribeLifecycleHooksResponseBody &) = default ;
    DescribeLifecycleHooksResponseBody(DescribeLifecycleHooksResponseBody &&) = default ;
    DescribeLifecycleHooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleHooksResponseBody() = default ;
    DescribeLifecycleHooksResponseBody& operator=(const DescribeLifecycleHooksResponseBody &) = default ;
    DescribeLifecycleHooksResponseBody& operator=(DescribeLifecycleHooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lifecycleHooks_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // lifecycleHooks Field Functions 
    bool hasLifecycleHooks() const { return this->lifecycleHooks_ != nullptr;};
    void deleteLifecycleHooks() { this->lifecycleHooks_ = nullptr;};
    inline const vector<DescribeLifecycleHooksResponseBodyLifecycleHooks> & lifecycleHooks() const { DARABONBA_PTR_GET_CONST(lifecycleHooks_, vector<DescribeLifecycleHooksResponseBodyLifecycleHooks>) };
    inline vector<DescribeLifecycleHooksResponseBodyLifecycleHooks> lifecycleHooks() { DARABONBA_PTR_GET(lifecycleHooks_, vector<DescribeLifecycleHooksResponseBodyLifecycleHooks>) };
    inline DescribeLifecycleHooksResponseBody& setLifecycleHooks(const vector<DescribeLifecycleHooksResponseBodyLifecycleHooks> & lifecycleHooks) { DARABONBA_PTR_SET_VALUE(lifecycleHooks_, lifecycleHooks) };
    inline DescribeLifecycleHooksResponseBody& setLifecycleHooks(vector<DescribeLifecycleHooksResponseBodyLifecycleHooks> && lifecycleHooks) { DARABONBA_PTR_SET_RVALUE(lifecycleHooks_, lifecycleHooks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecycleHooksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecycleHooksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecycleHooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecycleHooksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the lifecycle hooks.
    std::shared_ptr<vector<DescribeLifecycleHooksResponseBodyLifecycleHooks>> lifecycleHooks_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of lifecycle hooks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
