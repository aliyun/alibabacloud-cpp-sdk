// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULNERABILITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVULNERABILITIESREQUEST_HPP_
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
  class ListVulnerabilitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulnerabilitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateIds, updateIds_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
      DARABONBA_PTR_TO_JSON(VulType, vulType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulnerabilitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateIds, updateIds_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
      DARABONBA_PTR_FROM_JSON(VulType, vulType_);
    };
    ListVulnerabilitiesRequest() = default ;
    ListVulnerabilitiesRequest(const ListVulnerabilitiesRequest &) = default ;
    ListVulnerabilitiesRequest(ListVulnerabilitiesRequest &&) = default ;
    ListVulnerabilitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulnerabilitiesRequest() = default ;
    ListVulnerabilitiesRequest& operator=(const ListVulnerabilitiesRequest &) = default ;
    ListVulnerabilitiesRequest& operator=(ListVulnerabilitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->department_ == nullptr && this->devTag_ == nullptr && this->devType_ == nullptr && this->hostname_ == nullptr && this->pageSize_ == nullptr
        && this->saseUserId_ == nullptr && this->scanTaskId_ == nullptr && this->title_ == nullptr && this->updateIds_ == nullptr && this->username_ == nullptr
        && this->vulLevel_ == nullptr && this->vulType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListVulnerabilitiesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListVulnerabilitiesRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListVulnerabilitiesRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline ListVulnerabilitiesRequest& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListVulnerabilitiesRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVulnerabilitiesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListVulnerabilitiesRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline ListVulnerabilitiesRequest& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListVulnerabilitiesRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateIds Field Functions 
    bool hasUpdateIds() const { return this->updateIds_ != nullptr;};
    void deleteUpdateIds() { this->updateIds_ = nullptr;};
    inline const vector<string> & getUpdateIds() const { DARABONBA_PTR_GET_CONST(updateIds_, vector<string>) };
    inline vector<string> getUpdateIds() { DARABONBA_PTR_GET(updateIds_, vector<string>) };
    inline ListVulnerabilitiesRequest& setUpdateIds(const vector<string> & updateIds) { DARABONBA_PTR_SET_VALUE(updateIds_, updateIds) };
    inline ListVulnerabilitiesRequest& setUpdateIds(vector<string> && updateIds) { DARABONBA_PTR_SET_RVALUE(updateIds_, updateIds) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListVulnerabilitiesRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline ListVulnerabilitiesRequest& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


    // vulType Field Functions 
    bool hasVulType() const { return this->vulType_ != nullptr;};
    void deleteVulType() { this->vulType_ = nullptr;};
    inline string getVulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
    inline ListVulnerabilitiesRequest& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


  protected:
    // The page number of the current page in a paged query with paging. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The department name. Matches any level of department in the organizational structure to which the user belongs. Specify the department name itself without the full path of the organizational structure.
    shared_ptr<string> department_ {};
    // The unique identifier of the user endpoint device. Exact match. The value can be up to 64 characters in length. Valid values are obtained from:
    // - [ListUserDevices](~~ListUserDevices~~): lists user endpoint devices.
    shared_ptr<string> devTag_ {};
    // The operating system type of the user endpoint device. Valid values:
    // - **windows**: Windows. Currently, vulnerability scanning supports only Windows.
    shared_ptr<string> devType_ {};
    // The hostname of the user endpoint device. Fuzzy match is supported. The value can be up to 64 characters in length.
    shared_ptr<string> hostname_ {};
    // The number of entries per page. Settings for paged query with paging. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The user ID. Exact match. Valid values are obtained from:
    // - [ListUserDevices](~~ListUserDevices~~): lists user endpoint devices.
    // - [GetUserDevice](~~GetUserDevice~~): queries the details of a user endpoint device.
    shared_ptr<string> saseUserId_ {};
    // The ID of the vulnerability scanning node that detected the vulnerability. Used to filter detection results of a specified node. Valid values are obtained from:
    // - [ListVulScanTasks](~~ListVulScanTasks~~): lists vulnerability scanning nodes.
    // - [CreateVulScanTask](~~CreateVulScanTask~~): creates a vulnerability scanning node.
    shared_ptr<string> scanTaskId_ {};
    // The vulnerability title. Fuzzy match is supported. Matches both Chinese and English titles.
    shared_ptr<string> title_ {};
    // The patch IDs used for filtering. A maximum of 100 IDs can be specified. Duplicate values are not allowed.
    shared_ptr<vector<string>> updateIds_ {};
    // The username. Fuzzy match is supported. The value can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), asterisks (*), hyphens (-), at signs (@), spaces, middle dots (·), and parentheses.
    shared_ptr<string> username_ {};
    // The vulnerability risk level used for filtering. Valid values:
    // - **High**: high risk.
    // - **Mid**: medium risk.
    // - **Low**: low risk.
    shared_ptr<string> vulLevel_ {};
    // The vulnerability type used for filtering. Valid values:
    // - **windows**: Windows system vulnerability.
    // - **ai_agent**: AI Agent vulnerability.
    shared_ptr<string> vulType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
