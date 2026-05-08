// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESUBMITCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESUBMITCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeResubmitConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResubmitConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResubmitConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeResubmitConfigResponseBody() = default ;
    DescribeResubmitConfigResponseBody(const DescribeResubmitConfigResponseBody &) = default ;
    DescribeResubmitConfigResponseBody(DescribeResubmitConfigResponseBody &&) = default ;
    DescribeResubmitConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResubmitConfigResponseBody() = default ;
    DescribeResubmitConfigResponseBody& operator=(const DescribeResubmitConfigResponseBody &) = default ;
    DescribeResubmitConfigResponseBody& operator=(DescribeResubmitConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ExceedMemoryException, exceedMemoryException_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_TO_JSON(TargetGroupName, targetGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ExceedMemoryException, exceedMemoryException_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_FROM_JSON(TargetGroupName, targetGroupName_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exceedMemoryException_ == nullptr
        && this->groupName_ == nullptr && this->peakMemory_ == nullptr && this->queryTime_ == nullptr && this->targetGroupName_ == nullptr; };
      // exceedMemoryException Field Functions 
      bool hasExceedMemoryException() const { return this->exceedMemoryException_ != nullptr;};
      void deleteExceedMemoryException() { this->exceedMemoryException_ = nullptr;};
      inline bool getExceedMemoryException() const { DARABONBA_PTR_GET_DEFAULT(exceedMemoryException_, false) };
      inline Rules& setExceedMemoryException(bool exceedMemoryException) { DARABONBA_PTR_SET_VALUE(exceedMemoryException_, exceedMemoryException) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Rules& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline string getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, "") };
      inline Rules& setPeakMemory(string peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // queryTime Field Functions 
      bool hasQueryTime() const { return this->queryTime_ != nullptr;};
      void deleteQueryTime() { this->queryTime_ = nullptr;};
      inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
      inline Rules& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


      // targetGroupName Field Functions 
      bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
      void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
      inline string getTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
      inline Rules& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


    protected:
      // Indicates whether out-of-memory (OOM) check is configured.
      shared_ptr<bool> exceedMemoryException_ {};
      // The name of the source resource group.
      shared_ptr<string> groupName_ {};
      // The peak memory usage.
      shared_ptr<string> peakMemory_ {};
      // The duration of the SQL statement. Unit: milliseconds.
      shared_ptr<string> queryTime_ {};
      // The name of the destination resource group.
      shared_ptr<string> targetGroupName_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->requestId_ == nullptr && this->rules_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeResubmitConfigResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResubmitConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeResubmitConfigResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeResubmitConfigResponseBody::Rules>) };
    inline vector<DescribeResubmitConfigResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeResubmitConfigResponseBody::Rules>) };
    inline DescribeResubmitConfigResponseBody& setRules(const vector<DescribeResubmitConfigResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeResubmitConfigResponseBody& setRules(vector<DescribeResubmitConfigResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
    shared_ptr<string> DBClusterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The job resubmission rules.
    shared_ptr<vector<DescribeResubmitConfigResponseBody::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
