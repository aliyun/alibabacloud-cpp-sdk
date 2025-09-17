// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROCESSMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROCESSMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudProcessMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudProcessMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessMonitors, processMonitors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudProcessMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessMonitors, processMonitors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudProcessMonitorResponseBody() = default ;
    DescribeHybridCloudProcessMonitorResponseBody(const DescribeHybridCloudProcessMonitorResponseBody &) = default ;
    DescribeHybridCloudProcessMonitorResponseBody(DescribeHybridCloudProcessMonitorResponseBody &&) = default ;
    DescribeHybridCloudProcessMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudProcessMonitorResponseBody() = default ;
    DescribeHybridCloudProcessMonitorResponseBody& operator=(const DescribeHybridCloudProcessMonitorResponseBody &) = default ;
    DescribeHybridCloudProcessMonitorResponseBody& operator=(DescribeHybridCloudProcessMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->processMonitors_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // processMonitors Field Functions 
    bool hasProcessMonitors() const { return this->processMonitors_ != nullptr;};
    void deleteProcessMonitors() { this->processMonitors_ = nullptr;};
    inline const vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors> & processMonitors() const { DARABONBA_PTR_GET_CONST(processMonitors_, vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors>) };
    inline vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors> processMonitors() { DARABONBA_PTR_GET(processMonitors_, vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors>) };
    inline DescribeHybridCloudProcessMonitorResponseBody& setProcessMonitors(const vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors> & processMonitors) { DARABONBA_PTR_SET_VALUE(processMonitors_, processMonitors) };
    inline DescribeHybridCloudProcessMonitorResponseBody& setProcessMonitors(vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors> && processMonitors) { DARABONBA_PTR_SET_RVALUE(processMonitors_, processMonitors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudProcessMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudProcessMonitorResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status of the applications.
    std::shared_ptr<vector<DescribeHybridCloudProcessMonitorResponseBodyProcessMonitors>> processMonitors_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
