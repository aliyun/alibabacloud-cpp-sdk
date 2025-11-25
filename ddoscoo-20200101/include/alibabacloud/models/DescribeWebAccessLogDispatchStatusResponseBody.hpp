// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGDISPATCHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGDISPATCHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessLogDispatchStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessLogDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsConfigStatus, slsConfigStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessLogDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsConfigStatus, slsConfigStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebAccessLogDispatchStatusResponseBody() = default ;
    DescribeWebAccessLogDispatchStatusResponseBody(const DescribeWebAccessLogDispatchStatusResponseBody &) = default ;
    DescribeWebAccessLogDispatchStatusResponseBody(DescribeWebAccessLogDispatchStatusResponseBody &&) = default ;
    DescribeWebAccessLogDispatchStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessLogDispatchStatusResponseBody() = default ;
    DescribeWebAccessLogDispatchStatusResponseBody& operator=(const DescribeWebAccessLogDispatchStatusResponseBody &) = default ;
    DescribeWebAccessLogDispatchStatusResponseBody& operator=(DescribeWebAccessLogDispatchStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->slsConfigStatus_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsConfigStatus Field Functions 
    bool hasSlsConfigStatus() const { return this->slsConfigStatus_ != nullptr;};
    void deleteSlsConfigStatus() { this->slsConfigStatus_ = nullptr;};
    inline const vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus> & slsConfigStatus() const { DARABONBA_PTR_GET_CONST(slsConfigStatus_, vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus>) };
    inline vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus> slsConfigStatus() { DARABONBA_PTR_GET(slsConfigStatus_, vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus>) };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setSlsConfigStatus(const vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus> & slsConfigStatus) { DARABONBA_PTR_SET_VALUE(slsConfigStatus_, slsConfigStatus) };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setSlsConfigStatus(vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus> && slsConfigStatus) { DARABONBA_PTR_SET_RVALUE(slsConfigStatus_, slsConfigStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the log analysis feature is enabled for domain names.
    std::shared_ptr<vector<DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus>> slsConfigStatus_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
