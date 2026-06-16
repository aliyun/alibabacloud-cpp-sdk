// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class DescribeCloudCenterInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudCenterInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudCenterInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
    };
    DescribeCloudCenterInstancesRequest() = default ;
    DescribeCloudCenterInstancesRequest(const DescribeCloudCenterInstancesRequest &) = default ;
    DescribeCloudCenterInstancesRequest(DescribeCloudCenterInstancesRequest &&) = default ;
    DescribeCloudCenterInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudCenterInstancesRequest() = default ;
    DescribeCloudCenterInstancesRequest& operator=(const DescribeCloudCenterInstancesRequest &) = default ;
    DescribeCloudCenterInstancesRequest& operator=(DescribeCloudCenterInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(Criteria, criteria_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Flags, flags_);
        DARABONBA_PTR_TO_JSON(Importance, importance_);
        DARABONBA_PTR_TO_JSON(Lang, lang_);
        DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
        DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(NoGroupTrace, noGroupTrace_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
        DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Flags, flags_);
        DARABONBA_PTR_FROM_JSON(Importance, importance_);
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
        DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
        DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(NoGroupTrace, noGroupTrace_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
        DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      };
      SdkRequest() = default ;
      SdkRequest(const SdkRequest &) = default ;
      SdkRequest(SdkRequest &&) = default ;
      SdkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkRequest() = default ;
      SdkRequest& operator=(const SdkRequest &) = default ;
      SdkRequest& operator=(SdkRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->criteria_ == nullptr
        && this->currentPage_ == nullptr && this->flags_ == nullptr && this->importance_ == nullptr && this->lang_ == nullptr && this->logicalExp_ == nullptr
        && this->machineTypes_ == nullptr && this->nextToken_ == nullptr && this->noGroupTrace_ == nullptr && this->pageSize_ == nullptr && this->resourceDirectoryAccountId_ == nullptr
        && this->useNextToken_ == nullptr; };
      // criteria Field Functions 
      bool hasCriteria() const { return this->criteria_ != nullptr;};
      void deleteCriteria() { this->criteria_ = nullptr;};
      inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
      inline SdkRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline SdkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // flags Field Functions 
      bool hasFlags() const { return this->flags_ != nullptr;};
      void deleteFlags() { this->flags_ = nullptr;};
      inline string getFlags() const { DARABONBA_PTR_GET_DEFAULT(flags_, "") };
      inline SdkRequest& setFlags(string flags) { DARABONBA_PTR_SET_VALUE(flags_, flags) };


      // importance Field Functions 
      bool hasImportance() const { return this->importance_ != nullptr;};
      void deleteImportance() { this->importance_ = nullptr;};
      inline int32_t getImportance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
      inline SdkRequest& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline SdkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // logicalExp Field Functions 
      bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
      void deleteLogicalExp() { this->logicalExp_ = nullptr;};
      inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
      inline SdkRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


      // machineTypes Field Functions 
      bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
      void deleteMachineTypes() { this->machineTypes_ = nullptr;};
      inline string getMachineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
      inline SdkRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline SdkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // noGroupTrace Field Functions 
      bool hasNoGroupTrace() const { return this->noGroupTrace_ != nullptr;};
      void deleteNoGroupTrace() { this->noGroupTrace_ = nullptr;};
      inline bool getNoGroupTrace() const { DARABONBA_PTR_GET_DEFAULT(noGroupTrace_, false) };
      inline SdkRequest& setNoGroupTrace(bool noGroupTrace) { DARABONBA_PTR_SET_VALUE(noGroupTrace_, noGroupTrace) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline SdkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resourceDirectoryAccountId Field Functions 
      bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
      void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
      inline string getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, "") };
      inline SdkRequest& setResourceDirectoryAccountId(string resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


      // useNextToken Field Functions 
      bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
      void deleteUseNextToken() { this->useNextToken_ = nullptr;};
      inline bool getUseNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
      inline SdkRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    protected:
      shared_ptr<string> criteria_ {};
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<string> flags_ {};
      shared_ptr<int32_t> importance_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<string> logicalExp_ {};
      shared_ptr<string> machineTypes_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<bool> noGroupTrace_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> resourceDirectoryAccountId_ {};
      shared_ptr<bool> useNextToken_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudCenterInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const DescribeCloudCenterInstancesRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, DescribeCloudCenterInstancesRequest::SdkRequest) };
    inline DescribeCloudCenterInstancesRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, DescribeCloudCenterInstancesRequest::SdkRequest) };
    inline DescribeCloudCenterInstancesRequest& setSdkRequest(const DescribeCloudCenterInstancesRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline DescribeCloudCenterInstancesRequest& setSdkRequest(DescribeCloudCenterInstancesRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<DescribeCloudCenterInstancesRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
