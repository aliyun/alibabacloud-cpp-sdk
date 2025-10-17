// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDiagnosisSQLInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSQLInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessRcHost, processRcHost_);
      DARABONBA_PTR_TO_JSON(ProcessStartTime, processStartTime_);
      DARABONBA_PTR_TO_JSON(ProcessState, processState_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSQLInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessRcHost, processRcHost_);
      DARABONBA_PTR_FROM_JSON(ProcessStartTime, processStartTime_);
      DARABONBA_PTR_FROM_JSON(ProcessState, processState_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDiagnosisSQLInfoRequest() = default ;
    DescribeDiagnosisSQLInfoRequest(const DescribeDiagnosisSQLInfoRequest &) = default ;
    DescribeDiagnosisSQLInfoRequest(DescribeDiagnosisSQLInfoRequest &&) = default ;
    DescribeDiagnosisSQLInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSQLInfoRequest() = default ;
    DescribeDiagnosisSQLInfoRequest& operator=(const DescribeDiagnosisSQLInfoRequest &) = default ;
    DescribeDiagnosisSQLInfoRequest& operator=(DescribeDiagnosisSQLInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->lang_ == nullptr && return this->processId_ == nullptr && return this->processRcHost_ == nullptr && return this->processStartTime_ == nullptr && return this->processState_ == nullptr
        && return this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processRcHost Field Functions 
    bool hasProcessRcHost() const { return this->processRcHost_ != nullptr;};
    void deleteProcessRcHost() { this->processRcHost_ = nullptr;};
    inline string processRcHost() const { DARABONBA_PTR_GET_DEFAULT(processRcHost_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setProcessRcHost(string processRcHost) { DARABONBA_PTR_SET_VALUE(processRcHost_, processRcHost) };


    // processStartTime Field Functions 
    bool hasProcessStartTime() const { return this->processStartTime_ != nullptr;};
    void deleteProcessStartTime() { this->processStartTime_ = nullptr;};
    inline int64_t processStartTime() const { DARABONBA_PTR_GET_DEFAULT(processStartTime_, 0L) };
    inline DescribeDiagnosisSQLInfoRequest& setProcessStartTime(int64_t processStartTime) { DARABONBA_PTR_SET_VALUE(processStartTime_, processStartTime) };


    // processState Field Functions 
    bool hasProcessState() const { return this->processState_ != nullptr;};
    void deleteProcessState() { this->processState_ = nullptr;};
    inline string processState() const { DARABONBA_PTR_GET_DEFAULT(processState_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setProcessState(string processState) { DARABONBA_PTR_SET_VALUE(processState_, processState) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition (V3.0) clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The language of file titles and error messages. Valid values:
    // 
    // *   **zh**: simplified Chinese.
    // *   **en**: English.
    // *   **ja**: Japanese.
    // *   **zh-tw**: traditional Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The query ID.
    // 
    // >  You can call the [DescribeDiagnosisRecords](https://help.aliyun.com/document_detail/308207.html) operation to query the diagnostic information about SQL statements for an AnalyticDB for MySQL cluster, including the query ID.
    std::shared_ptr<string> processId_ = nullptr;
    // The IP address and port number of the AnalyticDB for MySQL frontend node on which the SQL statement is executed.
    // 
    // >  You can call the [DescribeDiagnosisRecords](https://help.aliyun.com/document_detail/308207.html) operation to query the diagnostic information about SQL statements for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster, including the IP address and port number of the frontend node.
    std::shared_ptr<string> processRcHost_ = nullptr;
    // The execution start time of the SQL statement. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  You can call the [DescribeDiagnosisRecords](https://help.aliyun.com/document_detail/308207.html) operation to query the diagnostic information about SQL statements for an AnalyticDB for MySQL cluster, including the execution start time of the SQL statement.
    std::shared_ptr<int64_t> processStartTime_ = nullptr;
    // The status of the SQL statement. Valid values:
    // 
    // *   **running**
    // *   **finished**
    // *   **failed**
    // 
    // >  You can call the [DescribeDiagnosisRecords](https://help.aliyun.com/document_detail/308207.html) operation to query the diagnostic information about SQL statements for an AnalyticDB for MySQL cluster, including the status of the SQL statement.
    std::shared_ptr<string> processState_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
