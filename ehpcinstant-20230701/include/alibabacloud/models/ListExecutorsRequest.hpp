// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListExecutorsRequest() = default ;
    ListExecutorsRequest(const ListExecutorsRequest &) = default ;
    ListExecutorsRequest(ListExecutorsRequest &&) = default ;
    ListExecutorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsRequest() = default ;
    ListExecutorsRequest& operator=(const ListExecutorsRequest &) = default ;
    ListExecutorsRequest& operator=(ListExecutorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobTemplateId, jobTemplateId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobTemplateId, jobTemplateId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_FROM_JSON(TimeCreatedBefore, timeCreatedBefore_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->executorIds_ == nullptr
        && this->image_ == nullptr && this->ipAddresses_ == nullptr && this->jobName_ == nullptr && this->jobTemplateId_ == nullptr && this->status_ == nullptr
        && this->timeCreatedAfter_ == nullptr && this->timeCreatedBefore_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // executorIds Field Functions 
      bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
      void deleteExecutorIds() { this->executorIds_ = nullptr;};
      inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
      inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
      inline Filter& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
      inline Filter& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline Filter& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // ipAddresses Field Functions 
      bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
      void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
      inline const vector<string> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
      inline vector<string> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
      inline Filter& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
      inline Filter& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Filter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobTemplateId Field Functions 
      bool hasJobTemplateId() const { return this->jobTemplateId_ != nullptr;};
      void deleteJobTemplateId() { this->jobTemplateId_ = nullptr;};
      inline string getJobTemplateId() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateId_, "") };
      inline Filter& setJobTemplateId(string jobTemplateId) { DARABONBA_PTR_SET_VALUE(jobTemplateId_, jobTemplateId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
      inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
      inline Filter& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Filter& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // timeCreatedAfter Field Functions 
      bool hasTimeCreatedAfter() const { return this->timeCreatedAfter_ != nullptr;};
      void deleteTimeCreatedAfter() { this->timeCreatedAfter_ = nullptr;};
      inline int32_t getTimeCreatedAfter() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedAfter_, 0) };
      inline Filter& setTimeCreatedAfter(int32_t timeCreatedAfter) { DARABONBA_PTR_SET_VALUE(timeCreatedAfter_, timeCreatedAfter) };


      // timeCreatedBefore Field Functions 
      bool hasTimeCreatedBefore() const { return this->timeCreatedBefore_ != nullptr;};
      void deleteTimeCreatedBefore() { this->timeCreatedBefore_ = nullptr;};
      inline int32_t getTimeCreatedBefore() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedBefore_, 0) };
      inline Filter& setTimeCreatedBefore(int32_t timeCreatedBefore) { DARABONBA_PTR_SET_VALUE(timeCreatedBefore_, timeCreatedBefore) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Filter& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Filter& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      // A list of executor IDs. You can specify up to 100 IDs.
      shared_ptr<vector<string>> executorIds_ {};
      // The executor image.
      shared_ptr<string> image_ {};
      // A list of private IP addresses. You can specify up to 100 IP addresses.
      shared_ptr<vector<string>> ipAddresses_ {};
      // The job name. Fuzzy queries are supported.
      shared_ptr<string> jobName_ {};
      shared_ptr<string> jobTemplateId_ {};
      // A list of executor statuses.
      shared_ptr<vector<string>> status_ {};
      // The jobs submitted after this time. This is a UNIX timestamp that is converted from the time in the region where the job is located. For sites in mainland China, the time is in the UTC+8 time zone.
      shared_ptr<int32_t> timeCreatedAfter_ {};
      // The jobs submitted before this time. This is a UNIX timestamp that is converted from the time in the region where the job is located. For sites in mainland China, the time is in the UTC+8 time zone.
      shared_ptr<int32_t> timeCreatedBefore_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListExecutorsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ListExecutorsRequest::Filter) };
    inline ListExecutorsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, ListExecutorsRequest::Filter) };
    inline ListExecutorsRequest& setFilter(const ListExecutorsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListExecutorsRequest& setFilter(ListExecutorsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The filter conditions for querying executors.
    shared_ptr<ListExecutorsRequest::Filter> filter_ {};
    // The current page number.<br>Start value: 1<br>Default value: 1<br><br>
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page for a paged query. Default value: 50. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
