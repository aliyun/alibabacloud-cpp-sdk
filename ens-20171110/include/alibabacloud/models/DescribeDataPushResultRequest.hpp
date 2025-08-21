// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataPushResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataNames, dataNames_);
      DARABONBA_PTR_TO_JSON(DataVersions, dataVersions_);
      DARABONBA_PTR_TO_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_TO_JSON(MinDate, minDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataNames, dataNames_);
      DARABONBA_PTR_FROM_JSON(DataVersions, dataVersions_);
      DARABONBA_PTR_FROM_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_FROM_JSON(MinDate, minDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
    };
    DescribeDataPushResultRequest() = default ;
    DescribeDataPushResultRequest(const DescribeDataPushResultRequest &) = default ;
    DescribeDataPushResultRequest(DescribeDataPushResultRequest &&) = default ;
    DescribeDataPushResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultRequest() = default ;
    DescribeDataPushResultRequest& operator=(const DescribeDataPushResultRequest &) = default ;
    DescribeDataPushResultRequest& operator=(DescribeDataPushResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dataNames_ != nullptr && this->dataVersions_ != nullptr && this->maxDate_ != nullptr && this->minDate_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionIds_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeDataPushResultRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataNames Field Functions 
    bool hasDataNames() const { return this->dataNames_ != nullptr;};
    void deleteDataNames() { this->dataNames_ = nullptr;};
    inline string dataNames() const { DARABONBA_PTR_GET_DEFAULT(dataNames_, "") };
    inline DescribeDataPushResultRequest& setDataNames(string dataNames) { DARABONBA_PTR_SET_VALUE(dataNames_, dataNames) };


    // dataVersions Field Functions 
    bool hasDataVersions() const { return this->dataVersions_ != nullptr;};
    void deleteDataVersions() { this->dataVersions_ = nullptr;};
    inline string dataVersions() const { DARABONBA_PTR_GET_DEFAULT(dataVersions_, "") };
    inline DescribeDataPushResultRequest& setDataVersions(string dataVersions) { DARABONBA_PTR_SET_VALUE(dataVersions_, dataVersions) };


    // maxDate Field Functions 
    bool hasMaxDate() const { return this->maxDate_ != nullptr;};
    void deleteMaxDate() { this->maxDate_ = nullptr;};
    inline string maxDate() const { DARABONBA_PTR_GET_DEFAULT(maxDate_, "") };
    inline DescribeDataPushResultRequest& setMaxDate(string maxDate) { DARABONBA_PTR_SET_VALUE(maxDate_, maxDate) };


    // minDate Field Functions 
    bool hasMinDate() const { return this->minDate_ != nullptr;};
    void deleteMinDate() { this->minDate_ = nullptr;};
    inline string minDate() const { DARABONBA_PTR_GET_DEFAULT(minDate_, "") };
    inline DescribeDataPushResultRequest& setMinDate(string minDate) { DARABONBA_PTR_SET_VALUE(minDate_, minDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataPushResultRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataPushResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline string regionIds() const { DARABONBA_PTR_GET_DEFAULT(regionIds_, "") };
    inline DescribeDataPushResultRequest& setRegionIds(string regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the data file. Separate multiple names with commas (,). By default, all data files are queried.
    std::shared_ptr<string> dataNames_ = nullptr;
    // The version number of the data file. Separate multiple numbers with commas (,). By default, all versions of data files are queried.
    std::shared_ptr<string> dataVersions_ = nullptr;
    // The end of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    std::shared_ptr<string> maxDate_ = nullptr;
    // The beginning of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    std::shared_ptr<string> minDate_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. This parameter is optional if you want to return the push status of all data files.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of ENS nodes. Separate multiple IDs with commas (,). By default, all ENS nodes are queried.
    std::shared_ptr<string> regionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
