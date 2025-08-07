// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLogBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogBackupPolicyResponseBody() = default ;
    DescribeLogBackupPolicyResponseBody(const DescribeLogBackupPolicyResponseBody &) = default ;
    DescribeLogBackupPolicyResponseBody(DescribeLogBackupPolicyResponseBody &&) = default ;
    DescribeLogBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupPolicyResponseBody() = default ;
    DescribeLogBackupPolicyResponseBody& operator=(const DescribeLogBackupPolicyResponseBody &) = default ;
    DescribeLogBackupPolicyResponseBody& operator=(DescribeLogBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableBackupLog_ != nullptr
        && this->logBackupAnotherRegionRegion_ != nullptr && this->logBackupAnotherRegionRetentionPeriod_ != nullptr && this->logBackupRetentionPeriod_ != nullptr && this->requestId_ != nullptr; };
    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline int32_t enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, 0) };
    inline DescribeLogBackupPolicyResponseBody& setEnableBackupLog(int32_t enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // logBackupAnotherRegionRegion Field Functions 
    bool hasLogBackupAnotherRegionRegion() const { return this->logBackupAnotherRegionRegion_ != nullptr;};
    void deleteLogBackupAnotherRegionRegion() { this->logBackupAnotherRegionRegion_ = nullptr;};
    inline string logBackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRegion_, "") };
    inline DescribeLogBackupPolicyResponseBody& setLogBackupAnotherRegionRegion(string logBackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRegion_, logBackupAnotherRegionRegion) };


    // logBackupAnotherRegionRetentionPeriod Field Functions 
    bool hasLogBackupAnotherRegionRetentionPeriod() const { return this->logBackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteLogBackupAnotherRegionRetentionPeriod() { this->logBackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string logBackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRetentionPeriod_, "") };
    inline DescribeLogBackupPolicyResponseBody& setLogBackupAnotherRegionRetentionPeriod(string logBackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRetentionPeriod_, logBackupAnotherRegionRetentionPeriod) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline DescribeLogBackupPolicyResponseBody& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   0: The log backup feature is disabled.
    // *   1: The log backup feature is enabled. By default, the log backup feature is enabled and cannot be disabled.
    std::shared_ptr<int32_t> enableBackupLog_ = nullptr;
    // The region in which you want to store cross-region log backups. For more information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> logBackupAnotherRegionRegion_ = nullptr;
    // The retention period of cross-region log backups. Valid values:
    // 
    // *   **0**: The cross-region backup feature is disabled.
    // *   **30 to 7300**: Cross-region log backups are retained for 30 to 7,300 days.
    // *   **-1**: The log backups are permanently retained.
    // 
    // >  When you create a cluster, the default value of this parameter is **0**.
    std::shared_ptr<string> logBackupAnotherRegionRetentionPeriod_ = nullptr;
    // The retention period of the log backups. Valid values:
    // 
    // *   3 to 7300: The log backups are retained for 3 to 7,300 days.
    // *   \\-1: The log backups are permanently retained.
    std::shared_ptr<int32_t> logBackupRetentionPeriod_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
