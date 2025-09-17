// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDBASICMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDBASICMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudBasicMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudBasicMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasicMonitors, basicMonitors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudBasicMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicMonitors, basicMonitors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudBasicMonitorResponseBody() = default ;
    DescribeHybridCloudBasicMonitorResponseBody(const DescribeHybridCloudBasicMonitorResponseBody &) = default ;
    DescribeHybridCloudBasicMonitorResponseBody(DescribeHybridCloudBasicMonitorResponseBody &&) = default ;
    DescribeHybridCloudBasicMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudBasicMonitorResponseBody() = default ;
    DescribeHybridCloudBasicMonitorResponseBody& operator=(const DescribeHybridCloudBasicMonitorResponseBody &) = default ;
    DescribeHybridCloudBasicMonitorResponseBody& operator=(DescribeHybridCloudBasicMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->basicMonitors_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // basicMonitors Field Functions 
    bool hasBasicMonitors() const { return this->basicMonitors_ != nullptr;};
    void deleteBasicMonitors() { this->basicMonitors_ = nullptr;};
    inline const vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors> & basicMonitors() const { DARABONBA_PTR_GET_CONST(basicMonitors_, vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors>) };
    inline vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors> basicMonitors() { DARABONBA_PTR_GET(basicMonitors_, vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors>) };
    inline DescribeHybridCloudBasicMonitorResponseBody& setBasicMonitors(const vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors> & basicMonitors) { DARABONBA_PTR_SET_VALUE(basicMonitors_, basicMonitors) };
    inline DescribeHybridCloudBasicMonitorResponseBody& setBasicMonitors(vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors> && basicMonitors) { DARABONBA_PTR_SET_RVALUE(basicMonitors_, basicMonitors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudBasicMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudBasicMonitorResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The basic metrics.
    std::shared_ptr<vector<DescribeHybridCloudBasicMonitorResponseBodyBasicMonitors>> basicMonitors_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
