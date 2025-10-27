// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELATESTSCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELATESTSCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLatestScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLatestScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskNum, riskNum_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLatestScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskNum, riskNum_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeLatestScanTaskResponseBody() = default ;
    DescribeLatestScanTaskResponseBody(const DescribeLatestScanTaskResponseBody &) = default ;
    DescribeLatestScanTaskResponseBody(DescribeLatestScanTaskResponseBody &&) = default ;
    DescribeLatestScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLatestScanTaskResponseBody() = default ;
    DescribeLatestScanTaskResponseBody& operator=(const DescribeLatestScanTaskResponseBody &) = default ;
    DescribeLatestScanTaskResponseBody& operator=(DescribeLatestScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastCheckTime_ == nullptr
        && return this->requestId_ == nullptr && return this->riskNum_ == nullptr && return this->targetInfo_ == nullptr && return this->uuids_ == nullptr; };
    // lastCheckTime Field Functions 
    bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
    void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
    inline int64_t lastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
    inline DescribeLatestScanTaskResponseBody& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLatestScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskNum Field Functions 
    bool hasRiskNum() const { return this->riskNum_ != nullptr;};
    void deleteRiskNum() { this->riskNum_ = nullptr;};
    inline int32_t riskNum() const { DARABONBA_PTR_GET_DEFAULT(riskNum_, 0) };
    inline DescribeLatestScanTaskResponseBody& setRiskNum(int32_t riskNum) { DARABONBA_PTR_SET_VALUE(riskNum_, riskNum) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string targetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline DescribeLatestScanTaskResponseBody& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline DescribeLatestScanTaskResponseBody& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline DescribeLatestScanTaskResponseBody& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // The timestamp when the last check was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastCheckTime_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of virus detection risks on the server.
    std::shared_ptr<int32_t> riskNum_ = nullptr;
    // The applicable scope of the whitelist. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: the type of the applicable scope. Valid values:
    // 
    //     *   **GroupId**: the ID of a server group
    //     *   **Uuid**: the UUID of a server
    // 
    // *   **uuids**: the UUIDs of servers
    // 
    // *   **groupIds**: the IDs of server groups
    // 
    // >  If you leave this parameter empty, all servers are added to the whitelist. If you set the **type** field to **GroupId**, you must also specify the **groupIds** field. If you set the **type** field to **Uuid**, you must also specify the **uuids** field.
    std::shared_ptr<string> targetInfo_ = nullptr;
    // The UUIDs of the assets.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
