// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataNames, dataNames_);
      DARABONBA_PTR_TO_JSON(DataVersions, dataVersions_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_TO_JSON(MinDate, minDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataNames, dataNames_);
      DARABONBA_PTR_FROM_JSON(DataVersions, dataVersions_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_FROM_JSON(MinDate, minDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeDataDistResultRequest() = default ;
    DescribeDataDistResultRequest(const DescribeDataDistResultRequest &) = default ;
    DescribeDataDistResultRequest(DescribeDataDistResultRequest &&) = default ;
    DescribeDataDistResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultRequest() = default ;
    DescribeDataDistResultRequest& operator=(const DescribeDataDistResultRequest &) = default ;
    DescribeDataDistResultRequest& operator=(DescribeDataDistResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->dataNames_ == nullptr && this->dataVersions_ == nullptr && this->ensRegionIds_ == nullptr && this->instanceIds_ == nullptr && this->maxDate_ == nullptr
        && this->minDate_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeDataDistResultRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataNames Field Functions 
    bool hasDataNames() const { return this->dataNames_ != nullptr;};
    void deleteDataNames() { this->dataNames_ = nullptr;};
    inline string getDataNames() const { DARABONBA_PTR_GET_DEFAULT(dataNames_, "") };
    inline DescribeDataDistResultRequest& setDataNames(string dataNames) { DARABONBA_PTR_SET_VALUE(dataNames_, dataNames) };


    // dataVersions Field Functions 
    bool hasDataVersions() const { return this->dataVersions_ != nullptr;};
    void deleteDataVersions() { this->dataVersions_ = nullptr;};
    inline string getDataVersions() const { DARABONBA_PTR_GET_DEFAULT(dataVersions_, "") };
    inline DescribeDataDistResultRequest& setDataVersions(string dataVersions) { DARABONBA_PTR_SET_VALUE(dataVersions_, dataVersions) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeDataDistResultRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeDataDistResultRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeDataDistResultRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // maxDate Field Functions 
    bool hasMaxDate() const { return this->maxDate_ != nullptr;};
    void deleteMaxDate() { this->maxDate_ = nullptr;};
    inline string getMaxDate() const { DARABONBA_PTR_GET_DEFAULT(maxDate_, "") };
    inline DescribeDataDistResultRequest& setMaxDate(string maxDate) { DARABONBA_PTR_SET_VALUE(maxDate_, maxDate) };


    // minDate Field Functions 
    bool hasMinDate() const { return this->minDate_ != nullptr;};
    void deleteMinDate() { this->minDate_ = nullptr;};
    inline string getMinDate() const { DARABONBA_PTR_GET_DEFAULT(minDate_, "") };
    inline DescribeDataDistResultRequest& setMinDate(string minDate) { DARABONBA_PTR_SET_VALUE(minDate_, minDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataDistResultRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataDistResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The name of the data file. Separate multiple names with commas (,). By default, all data files are queried.
    shared_ptr<string> dataNames_ {};
    // The version number of the data file. Separate multiple numbers with commas (,). By default, all versions of data files are queried.
    shared_ptr<string> dataVersions_ {};
    // The IDs of the ENS nodes.
    shared_ptr<vector<string>> ensRegionIds_ {};
    // The IDs of ENS instances. Separate multiple IDs with commas (,). By default, all instances are queried.
    shared_ptr<string> instanceIds_ {};
    // The end of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    shared_ptr<string> maxDate_ {};
    // The beginning of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    shared_ptr<string> minDate_ {};
    // The page number. Pages start from page 1. This parameter is optional if you want to return the push status of all data files.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. This parameter is optional if you want to return the distribution status of all data files.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
