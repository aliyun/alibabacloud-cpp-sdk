// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSFILESTATUSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSFILESTATUSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusFileStatusesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusFileStatusesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FileProcessStatus, fileProcessStatus_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Operations, operations_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VirusTypes, virusTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusFileStatusesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FileProcessStatus, fileProcessStatus_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Operations, operations_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VirusTypes, virusTypes_);
    };
    ListVirusFileStatusesRequest() = default ;
    ListVirusFileStatusesRequest(const ListVirusFileStatusesRequest &) = default ;
    ListVirusFileStatusesRequest(ListVirusFileStatusesRequest &&) = default ;
    ListVirusFileStatusesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusFileStatusesRequest() = default ;
    ListVirusFileStatusesRequest& operator=(const ListVirusFileStatusesRequest &) = default ;
    ListVirusFileStatusesRequest& operator=(ListVirusFileStatusesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->department_ == nullptr && this->devTag_ == nullptr && this->devType_ == nullptr && this->endTime_ == nullptr && this->fileMd5_ == nullptr
        && this->fileProcessStatus_ == nullptr && this->hostname_ == nullptr && this->operations_ == nullptr && this->pageSize_ == nullptr && this->riskLevels_ == nullptr
        && this->saseUserId_ == nullptr && this->scanTaskId_ == nullptr && this->startTime_ == nullptr && this->username_ == nullptr && this->virusTypes_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListVirusFileStatusesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListVirusFileStatusesRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListVirusFileStatusesRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline ListVirusFileStatusesRequest& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListVirusFileStatusesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline ListVirusFileStatusesRequest& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // fileProcessStatus Field Functions 
    bool hasFileProcessStatus() const { return this->fileProcessStatus_ != nullptr;};
    void deleteFileProcessStatus() { this->fileProcessStatus_ = nullptr;};
    inline string getFileProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(fileProcessStatus_, "") };
    inline ListVirusFileStatusesRequest& setFileProcessStatus(string fileProcessStatus) { DARABONBA_PTR_SET_VALUE(fileProcessStatus_, fileProcessStatus) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListVirusFileStatusesRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<string> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<string>) };
    inline vector<string> getOperations() { DARABONBA_PTR_GET(operations_, vector<string>) };
    inline ListVirusFileStatusesRequest& setOperations(const vector<string> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline ListVirusFileStatusesRequest& setOperations(vector<string> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVirusFileStatusesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline const vector<string> & getRiskLevels() const { DARABONBA_PTR_GET_CONST(riskLevels_, vector<string>) };
    inline vector<string> getRiskLevels() { DARABONBA_PTR_GET(riskLevels_, vector<string>) };
    inline ListVirusFileStatusesRequest& setRiskLevels(const vector<string> & riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };
    inline ListVirusFileStatusesRequest& setRiskLevels(vector<string> && riskLevels) { DARABONBA_PTR_SET_RVALUE(riskLevels_, riskLevels) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListVirusFileStatusesRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline ListVirusFileStatusesRequest& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListVirusFileStatusesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListVirusFileStatusesRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // virusTypes Field Functions 
    bool hasVirusTypes() const { return this->virusTypes_ != nullptr;};
    void deleteVirusTypes() { this->virusTypes_ = nullptr;};
    inline const vector<string> & getVirusTypes() const { DARABONBA_PTR_GET_CONST(virusTypes_, vector<string>) };
    inline vector<string> getVirusTypes() { DARABONBA_PTR_GET(virusTypes_, vector<string>) };
    inline ListVirusFileStatusesRequest& setVirusTypes(const vector<string> & virusTypes) { DARABONBA_PTR_SET_VALUE(virusTypes_, virusTypes) };
    inline ListVirusFileStatusesRequest& setVirusTypes(vector<string> && virusTypes) { DARABONBA_PTR_SET_RVALUE(virusTypes_, virusTypes) };


  protected:
    // The page number of the current page in paging. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The department name. Matches any level of the organizational structure to which the user belongs. Specify the department name itself without the full path of the organizational structure. The value can contain Chinese characters, uppercase and lowercase letters, digits, spaces, periods (.), commas (,), forward slashes (/), at signs (@), hyphens (-), and underscores (_).
    shared_ptr<string> department_ {};
    // The unique identifier of the user terminal device. Exact match. The value can be up to 64 characters in length. You can obtain the value from the following operation:
    // - [ListUserDevices](~~ListUserDevices~~): Lists user terminal devices.
    shared_ptr<string> devTag_ {};
    // The operating system type of the user terminal device. Valid values:
    // - **windows**: Windows.
    // - **macOS**: macOS.
    shared_ptr<string> devType_ {};
    // The end time for filtering by virus file discovery time. The value is a UNIX timestamp in seconds. This parameter must be specified together with StartTime and must be later than StartTime.
    shared_ptr<int64_t> endTime_ {};
    // The MD5 value of the virus file. Fuzzy match is supported. The value can be up to 64 characters in length.
    shared_ptr<string> fileMd5_ {};
    // Filters by disposition status. If this parameter is not specified, no filtering by disposition status is applied. Valid values:
    // - **Pending**: Pending disposition.
    // - **Processed**: Disposed.
    shared_ptr<string> fileProcessStatus_ {};
    // The hostname of the user terminal device. Fuzzy match is supported. The value can be up to 128 characters in length.
    shared_ptr<string> hostname_ {};
    // Filters by disposition action. Duplicate values are not allowed. If this parameter is not specified, no filtering by disposition action is applied.
    shared_ptr<vector<string>> operations_ {};
    // The number of entries per page in paging. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // Filters by risk level. Duplicate values are not allowed. If this parameter is not specified, no filtering by risk level is applied.
    shared_ptr<vector<string>> riskLevels_ {};
    // The user ID. Exact match. The value can be up to 128 characters in length. You can obtain the value from the following operations:
    // - [ListUserDevices](~~ListUserDevices~~): Lists user terminal devices.
    // - [GetUserDevice](~~GetUserDevice~~): Queries user terminal device details.
    shared_ptr<string> saseUserId_ {};
    // The ID of the virus scan task that detected the virus file. This parameter is used to filter detection results of a specified task. You can obtain the value from the following operations:
    // - [ListVirusScanTasks](~~ListVirusScanTasks~~): Lists virus scan tasks.
    // - [CreateVirusScanTask](~~CreateVirusScanTask~~): Creates a virus scan task.
    shared_ptr<string> scanTaskId_ {};
    // The start time for filtering by virus file discovery time. The value is a UNIX timestamp in seconds. This parameter must be specified together with EndTime and must be earlier than EndTime.
    shared_ptr<int64_t> startTime_ {};
    // The username. Fuzzy match is supported. The value can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), asterisks (*), hyphens (-), at signs (@), spaces, middle dots (·), and parentheses.
    shared_ptr<string> username_ {};
    // Filters by virus type. Duplicate values are not allowed. If this parameter is not specified, no filtering by virus type is applied.
    shared_ptr<vector<string>> virusTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
