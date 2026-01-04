// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_TO_JSON(ClusterNames, clusterNames_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_TO_JSON(MinDate, minDate_);
      DARABONBA_PTR_TO_JSON(OutAppInfoParams, outAppInfoParams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersions, appVersions_);
      DARABONBA_PTR_FROM_JSON(ClusterNames, clusterNames_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_FROM_JSON(MinDate, minDate_);
      DARABONBA_PTR_FROM_JSON(OutAppInfoParams, outAppInfoParams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListApplicationsRequest() = default ;
    ListApplicationsRequest(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest(ListApplicationsRequest &&) = default ;
    ListApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsRequest() = default ;
    ListApplicationsRequest& operator=(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest& operator=(ListApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersions_ == nullptr
        && this->clusterNames_ == nullptr && this->level_ == nullptr && this->maxDate_ == nullptr && this->minDate_ == nullptr && this->outAppInfoParams_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // appVersions Field Functions 
    bool hasAppVersions() const { return this->appVersions_ != nullptr;};
    void deleteAppVersions() { this->appVersions_ = nullptr;};
    inline string getAppVersions() const { DARABONBA_PTR_GET_DEFAULT(appVersions_, "") };
    inline ListApplicationsRequest& setAppVersions(string appVersions) { DARABONBA_PTR_SET_VALUE(appVersions_, appVersions) };


    // clusterNames Field Functions 
    bool hasClusterNames() const { return this->clusterNames_ != nullptr;};
    void deleteClusterNames() { this->clusterNames_ = nullptr;};
    inline string getClusterNames() const { DARABONBA_PTR_GET_DEFAULT(clusterNames_, "") };
    inline ListApplicationsRequest& setClusterNames(string clusterNames) { DARABONBA_PTR_SET_VALUE(clusterNames_, clusterNames) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListApplicationsRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maxDate Field Functions 
    bool hasMaxDate() const { return this->maxDate_ != nullptr;};
    void deleteMaxDate() { this->maxDate_ = nullptr;};
    inline string getMaxDate() const { DARABONBA_PTR_GET_DEFAULT(maxDate_, "") };
    inline ListApplicationsRequest& setMaxDate(string maxDate) { DARABONBA_PTR_SET_VALUE(maxDate_, maxDate) };


    // minDate Field Functions 
    bool hasMinDate() const { return this->minDate_ != nullptr;};
    void deleteMinDate() { this->minDate_ = nullptr;};
    inline string getMinDate() const { DARABONBA_PTR_GET_DEFAULT(minDate_, "") };
    inline ListApplicationsRequest& setMinDate(string minDate) { DARABONBA_PTR_SET_VALUE(minDate_, minDate) };


    // outAppInfoParams Field Functions 
    bool hasOutAppInfoParams() const { return this->outAppInfoParams_ != nullptr;};
    void deleteOutAppInfoParams() { this->outAppInfoParams_ = nullptr;};
    inline string getOutAppInfoParams() const { DARABONBA_PTR_GET_DEFAULT(outAppInfoParams_, "") };
    inline ListApplicationsRequest& setOutAppInfoParams(string outAppInfoParams) { DARABONBA_PTR_SET_VALUE(outAppInfoParams_, outAppInfoParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The version number of the application. Separate multiple version numbers with commas (,). If you want to query data of all versions of applications, specify All for this parameter. By default, only data of applications in the stable versions are queried.
    shared_ptr<string> appVersions_ {};
    // The name of the application cluster. Separate multiple names with commas (,). If you want to query applications of all clusters in your account, specify All for this parameter. Default value: All.
    shared_ptr<string> clusterNames_ {};
    // The region level by which edge resources of the application are collected. The value is of the enumeration type. Valid values:
    // 
    // *   National: Chinese mainland
    // *   Big: area
    // *   Middle: province
    // *   Small: city
    // *   RegionId: edge node
    // 
    // Default value: National.
    shared_ptr<string> level_ {};
    // The end of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    shared_ptr<string> maxDate_ {};
    // The beginning of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    shared_ptr<string> minDate_ {};
    // Specifies whether to return other information about the application, such as statistics on resource instances and pods. The value must be a JSON string. By default, all information is returned.
    shared_ptr<string> outAppInfoParams_ {};
    // The page number. Pages start from page 1. This parameter is optional if you want to return the push status of all data files.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. This parameter is optional if you want to return all information about the applications.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
