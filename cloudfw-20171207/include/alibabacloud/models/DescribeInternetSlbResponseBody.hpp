// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETSLBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETSLBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetSlbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetSlbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetSlbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInternetSlbResponseBody() = default ;
    DescribeInternetSlbResponseBody(const DescribeInternetSlbResponseBody &) = default ;
    DescribeInternetSlbResponseBody(DescribeInternetSlbResponseBody &&) = default ;
    DescribeInternetSlbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetSlbResponseBody() = default ;
    DescribeInternetSlbResponseBody& operator=(const DescribeInternetSlbResponseBody &) = default ;
    DescribeInternetSlbResponseBody& operator=(DescribeInternetSlbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_TO_JSON(AclType, aclType_);
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_FROM_JSON(AclType, aclType_);
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclStatus_ == nullptr && this->aclType_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->ipProtocol_ == nullptr && this->port_ == nullptr && this->publicIp_ == nullptr && this->regionNo_ == nullptr && this->tags_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline DataList& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
      inline DataList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // aclType Field Functions 
      bool hasAclType() const { return this->aclType_ != nullptr;};
      void deleteAclType() { this->aclType_ = nullptr;};
      inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
      inline DataList& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline DataList& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline DataList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline DataList& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline DataList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline DataList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline DataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline DataList& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DataList& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> aclId_ {};
      shared_ptr<string> aclStatus_ {};
      shared_ptr<string> aclType_ {};
      shared_ptr<string> healthStatus_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> publicIp_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<vector<string>> tags_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetSlbResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetSlbResponseBody::DataList>) };
    inline vector<DescribeInternetSlbResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetSlbResponseBody::DataList>) };
    inline DescribeInternetSlbResponseBody& setDataList(const vector<DescribeInternetSlbResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetSlbResponseBody& setDataList(vector<DescribeInternetSlbResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInternetSlbResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInternetSlbResponseBody::PageInfo) };
    inline DescribeInternetSlbResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInternetSlbResponseBody::PageInfo) };
    inline DescribeInternetSlbResponseBody& setPageInfo(const DescribeInternetSlbResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInternetSlbResponseBody& setPageInfo(DescribeInternetSlbResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetSlbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeInternetSlbResponseBody::DataList>> dataList_ {};
    shared_ptr<DescribeInternetSlbResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
