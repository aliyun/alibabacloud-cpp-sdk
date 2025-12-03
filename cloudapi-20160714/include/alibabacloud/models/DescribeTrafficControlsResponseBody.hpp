// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTrafficControlsResponseBodyTrafficControls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficControls, trafficControls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficControls, trafficControls_);
    };
    DescribeTrafficControlsResponseBody() = default ;
    DescribeTrafficControlsResponseBody(const DescribeTrafficControlsResponseBody &) = default ;
    DescribeTrafficControlsResponseBody(DescribeTrafficControlsResponseBody &&) = default ;
    DescribeTrafficControlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBody() = default ;
    DescribeTrafficControlsResponseBody& operator=(const DescribeTrafficControlsResponseBody &) = default ;
    DescribeTrafficControlsResponseBody& operator=(DescribeTrafficControlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->trafficControls_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTrafficControlsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTrafficControlsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrafficControlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTrafficControlsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficControls Field Functions 
    bool hasTrafficControls() const { return this->trafficControls_ != nullptr;};
    void deleteTrafficControls() { this->trafficControls_ = nullptr;};
    inline const DescribeTrafficControlsResponseBodyTrafficControls & trafficControls() const { DARABONBA_PTR_GET_CONST(trafficControls_, DescribeTrafficControlsResponseBodyTrafficControls) };
    inline DescribeTrafficControlsResponseBodyTrafficControls trafficControls() { DARABONBA_PTR_GET(trafficControls_, DescribeTrafficControlsResponseBodyTrafficControls) };
    inline DescribeTrafficControlsResponseBody& setTrafficControls(const DescribeTrafficControlsResponseBodyTrafficControls & trafficControls) { DARABONBA_PTR_SET_VALUE(trafficControls_, trafficControls) };
    inline DescribeTrafficControlsResponseBody& setTrafficControls(DescribeTrafficControlsResponseBodyTrafficControls && trafficControls) { DARABONBA_PTR_SET_RVALUE(trafficControls_, trafficControls) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The returned throttling policy information. It is an array consisting of TrafficControl data.
    std::shared_ptr<DescribeTrafficControlsResponseBodyTrafficControls> trafficControls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
