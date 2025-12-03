// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiTrafficControlsResponseBodyApiTrafficControls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiTrafficControlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiTrafficControls, apiTrafficControls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiTrafficControls, apiTrafficControls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiTrafficControlsResponseBody() = default ;
    DescribeApiTrafficControlsResponseBody(const DescribeApiTrafficControlsResponseBody &) = default ;
    DescribeApiTrafficControlsResponseBody(DescribeApiTrafficControlsResponseBody &&) = default ;
    DescribeApiTrafficControlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficControlsResponseBody() = default ;
    DescribeApiTrafficControlsResponseBody& operator=(const DescribeApiTrafficControlsResponseBody &) = default ;
    DescribeApiTrafficControlsResponseBody& operator=(DescribeApiTrafficControlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiTrafficControls_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiTrafficControls Field Functions 
    bool hasApiTrafficControls() const { return this->apiTrafficControls_ != nullptr;};
    void deleteApiTrafficControls() { this->apiTrafficControls_ = nullptr;};
    inline const DescribeApiTrafficControlsResponseBodyApiTrafficControls & apiTrafficControls() const { DARABONBA_PTR_GET_CONST(apiTrafficControls_, DescribeApiTrafficControlsResponseBodyApiTrafficControls) };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControls apiTrafficControls() { DARABONBA_PTR_GET(apiTrafficControls_, DescribeApiTrafficControlsResponseBodyApiTrafficControls) };
    inline DescribeApiTrafficControlsResponseBody& setApiTrafficControls(const DescribeApiTrafficControlsResponseBodyApiTrafficControls & apiTrafficControls) { DARABONBA_PTR_SET_VALUE(apiTrafficControls_, apiTrafficControls) };
    inline DescribeApiTrafficControlsResponseBody& setApiTrafficControls(DescribeApiTrafficControlsResponseBodyApiTrafficControls && apiTrafficControls) { DARABONBA_PTR_SET_RVALUE(apiTrafficControls_, apiTrafficControls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiTrafficControlsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiTrafficControlsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiTrafficControlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiTrafficControlsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned throttling policy information. It is an array consisting of ApiTrafficControlItem data.
    std::shared_ptr<DescribeApiTrafficControlsResponseBodyApiTrafficControls> apiTrafficControls_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
