// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSREQUEST_HPP_
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
  class ListUninstallApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListUninstallApplicationsRequest() = default ;
    ListUninstallApplicationsRequest(const ListUninstallApplicationsRequest &) = default ;
    ListUninstallApplicationsRequest(ListUninstallApplicationsRequest &&) = default ;
    ListUninstallApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallApplicationsRequest() = default ;
    ListUninstallApplicationsRequest& operator=(const ListUninstallApplicationsRequest &) = default ;
    ListUninstallApplicationsRequest& operator=(ListUninstallApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr
        && return this->currentPage_ == nullptr && return this->department_ == nullptr && return this->hostname_ == nullptr && return this->mac_ == nullptr && return this->pageSize_ == nullptr
        && return this->statuses_ == nullptr && return this->username_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline ListUninstallApplicationsRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline ListUninstallApplicationsRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUninstallApplicationsRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListUninstallApplicationsRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListUninstallApplicationsRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ListUninstallApplicationsRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUninstallApplicationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListUninstallApplicationsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListUninstallApplicationsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListUninstallApplicationsRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> statuses_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
