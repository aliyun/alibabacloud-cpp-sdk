// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedLogPolicies, advancedLogPolicies_);
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
    class AdvancedLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedLogPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedLogPolicy, advancedLogPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedLogPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedLogPolicy, advancedLogPolicy_);
      };
      AdvancedLogPolicies() = default ;
      AdvancedLogPolicies(const AdvancedLogPolicies &) = default ;
      AdvancedLogPolicies(AdvancedLogPolicies &&) = default ;
      AdvancedLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedLogPolicies() = default ;
      AdvancedLogPolicies& operator=(const AdvancedLogPolicies &) = default ;
      AdvancedLogPolicies& operator=(AdvancedLogPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvancedLogPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedLogPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
          DARABONBA_PTR_TO_JSON(EnableLogBackup, enableLogBackup_);
          DARABONBA_PTR_TO_JSON(LogRetentionType, logRetentionType_);
          DARABONBA_PTR_TO_JSON(LogRetentionValue, logRetentionValue_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_TO_JSON(SrcType, srcType_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedLogPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
          DARABONBA_PTR_FROM_JSON(EnableLogBackup, enableLogBackup_);
          DARABONBA_PTR_FROM_JSON(LogRetentionType, logRetentionType_);
          DARABONBA_PTR_FROM_JSON(LogRetentionValue, logRetentionValue_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
        };
        AdvancedLogPolicy() = default ;
        AdvancedLogPolicy(const AdvancedLogPolicy &) = default ;
        AdvancedLogPolicy(AdvancedLogPolicy &&) = default ;
        AdvancedLogPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedLogPolicy() = default ;
        AdvancedLogPolicy& operator=(const AdvancedLogPolicy &) = default ;
        AdvancedLogPolicy& operator=(AdvancedLogPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destRegion_ == nullptr
        && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->logRetentionType_ == nullptr && this->logRetentionValue_ == nullptr && this->policyId_ == nullptr
        && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
        // destRegion Field Functions 
        bool hasDestRegion() const { return this->destRegion_ != nullptr;};
        void deleteDestRegion() { this->destRegion_ = nullptr;};
        inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
        inline AdvancedLogPolicy& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


        // destType Field Functions 
        bool hasDestType() const { return this->destType_ != nullptr;};
        void deleteDestType() { this->destType_ = nullptr;};
        inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
        inline AdvancedLogPolicy& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


        // enableLogBackup Field Functions 
        bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
        void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
        inline int32_t getEnableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0) };
        inline AdvancedLogPolicy& setEnableLogBackup(int32_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


        // logRetentionType Field Functions 
        bool hasLogRetentionType() const { return this->logRetentionType_ != nullptr;};
        void deleteLogRetentionType() { this->logRetentionType_ = nullptr;};
        inline string getLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(logRetentionType_, "") };
        inline AdvancedLogPolicy& setLogRetentionType(string logRetentionType) { DARABONBA_PTR_SET_VALUE(logRetentionType_, logRetentionType) };


        // logRetentionValue Field Functions 
        bool hasLogRetentionValue() const { return this->logRetentionValue_ != nullptr;};
        void deleteLogRetentionValue() { this->logRetentionValue_ = nullptr;};
        inline string getLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(logRetentionValue_, "") };
        inline AdvancedLogPolicy& setLogRetentionValue(string logRetentionValue) { DARABONBA_PTR_SET_VALUE(logRetentionValue_, logRetentionValue) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline AdvancedLogPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // srcRegion Field Functions 
        bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
        void deleteSrcRegion() { this->srcRegion_ = nullptr;};
        inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
        inline AdvancedLogPolicy& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


        // srcType Field Functions 
        bool hasSrcType() const { return this->srcType_ != nullptr;};
        void deleteSrcType() { this->srcType_ = nullptr;};
        inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
        inline AdvancedLogPolicy& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


      protected:
        shared_ptr<string> destRegion_ {};
        shared_ptr<string> destType_ {};
        shared_ptr<int32_t> enableLogBackup_ {};
        shared_ptr<string> logRetentionType_ {};
        shared_ptr<string> logRetentionValue_ {};
        shared_ptr<string> policyId_ {};
        shared_ptr<string> srcRegion_ {};
        shared_ptr<string> srcType_ {};
      };

      virtual bool empty() const override { return this->advancedLogPolicy_ == nullptr; };
      // advancedLogPolicy Field Functions 
      bool hasAdvancedLogPolicy() const { return this->advancedLogPolicy_ != nullptr;};
      void deleteAdvancedLogPolicy() { this->advancedLogPolicy_ = nullptr;};
      inline const vector<AdvancedLogPolicies::AdvancedLogPolicy> & getAdvancedLogPolicy() const { DARABONBA_PTR_GET_CONST(advancedLogPolicy_, vector<AdvancedLogPolicies::AdvancedLogPolicy>) };
      inline vector<AdvancedLogPolicies::AdvancedLogPolicy> getAdvancedLogPolicy() { DARABONBA_PTR_GET(advancedLogPolicy_, vector<AdvancedLogPolicies::AdvancedLogPolicy>) };
      inline AdvancedLogPolicies& setAdvancedLogPolicy(const vector<AdvancedLogPolicies::AdvancedLogPolicy> & advancedLogPolicy) { DARABONBA_PTR_SET_VALUE(advancedLogPolicy_, advancedLogPolicy) };
      inline AdvancedLogPolicies& setAdvancedLogPolicy(vector<AdvancedLogPolicies::AdvancedLogPolicy> && advancedLogPolicy) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicy_, advancedLogPolicy) };


    protected:
      shared_ptr<vector<AdvancedLogPolicies::AdvancedLogPolicy>> advancedLogPolicy_ {};
    };

    virtual bool empty() const override { return this->advancedLogPolicies_ == nullptr
        && this->enableBackupLog_ == nullptr && this->logBackupAnotherRegionRegion_ == nullptr && this->logBackupAnotherRegionRetentionPeriod_ == nullptr && this->logBackupRetentionPeriod_ == nullptr && this->requestId_ == nullptr; };
    // advancedLogPolicies Field Functions 
    bool hasAdvancedLogPolicies() const { return this->advancedLogPolicies_ != nullptr;};
    void deleteAdvancedLogPolicies() { this->advancedLogPolicies_ = nullptr;};
    inline const DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies & getAdvancedLogPolicies() const { DARABONBA_PTR_GET_CONST(advancedLogPolicies_, DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies) };
    inline DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies getAdvancedLogPolicies() { DARABONBA_PTR_GET(advancedLogPolicies_, DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies) };
    inline DescribeLogBackupPolicyResponseBody& setAdvancedLogPolicies(const DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies & advancedLogPolicies) { DARABONBA_PTR_SET_VALUE(advancedLogPolicies_, advancedLogPolicies) };
    inline DescribeLogBackupPolicyResponseBody& setAdvancedLogPolicies(DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies && advancedLogPolicies) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicies_, advancedLogPolicies) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline int32_t getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, 0) };
    inline DescribeLogBackupPolicyResponseBody& setEnableBackupLog(int32_t enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // logBackupAnotherRegionRegion Field Functions 
    bool hasLogBackupAnotherRegionRegion() const { return this->logBackupAnotherRegionRegion_ != nullptr;};
    void deleteLogBackupAnotherRegionRegion() { this->logBackupAnotherRegionRegion_ = nullptr;};
    inline string getLogBackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRegion_, "") };
    inline DescribeLogBackupPolicyResponseBody& setLogBackupAnotherRegionRegion(string logBackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRegion_, logBackupAnotherRegionRegion) };


    // logBackupAnotherRegionRetentionPeriod Field Functions 
    bool hasLogBackupAnotherRegionRetentionPeriod() const { return this->logBackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteLogBackupAnotherRegionRetentionPeriod() { this->logBackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string getLogBackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRetentionPeriod_, "") };
    inline DescribeLogBackupPolicyResponseBody& setLogBackupAnotherRegionRetentionPeriod(string logBackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRetentionPeriod_, logBackupAnotherRegionRetentionPeriod) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline DescribeLogBackupPolicyResponseBody& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLogBackupPolicyResponseBody::AdvancedLogPolicies> advancedLogPolicies_ {};
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   0: The log backup feature is disabled.
    // *   1: The log backup feature is enabled. By default, the log backup feature is enabled and cannot be disabled.
    shared_ptr<int32_t> enableBackupLog_ {};
    // The region in which you want to store cross-region log backups. For more information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> logBackupAnotherRegionRegion_ {};
    // The retention period of cross-region log backups. Valid values:
    // 
    // *   **0**: The cross-region backup feature is disabled.
    // *   **30 to 7300**: Cross-region log backups are retained for 30 to 7,300 days.
    // *   **-1**: The log backups are permanently retained.
    // 
    // >  When you create a cluster, the default value of this parameter is **0**.
    shared_ptr<string> logBackupAnotherRegionRetentionPeriod_ {};
    // The retention period of the log backups. Valid values:
    // 
    // *   3 to 7300: The log backups are retained for 3 to 7,300 days.
    // *   \\-1: The log backups are permanently retained.
    shared_ptr<int32_t> logBackupRetentionPeriod_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
