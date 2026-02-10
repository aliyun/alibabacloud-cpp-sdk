// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertySoftwareDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertySoftwareDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertySoftwareDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertySoftwareDetailResponseBody() = default ;
    DescribePropertySoftwareDetailResponseBody(const DescribePropertySoftwareDetailResponseBody &) = default ;
    DescribePropertySoftwareDetailResponseBody(DescribePropertySoftwareDetailResponseBody &&) = default ;
    DescribePropertySoftwareDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertySoftwareDetailResponseBody() = default ;
    DescribePropertySoftwareDetailResponseBody& operator=(const DescribePropertySoftwareDetailResponseBody &) = default ;
    DescribePropertySoftwareDetailResponseBody& operator=(DescribePropertySoftwareDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Propertys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Propertys& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
        DARABONBA_PTR_TO_JSON(InstallTimeDt, installTimeDt_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Propertys& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
        DARABONBA_PTR_FROM_JSON(InstallTimeDt, installTimeDt_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Propertys() = default ;
      Propertys(const Propertys &) = default ;
      Propertys(Propertys &&) = default ;
      Propertys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Propertys() = default ;
      Propertys& operator=(const Propertys &) = default ;
      Propertys& operator=(Propertys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->installTime_ == nullptr && this->installTimeDt_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->ip_ == nullptr && this->name_ == nullptr && this->path_ == nullptr && this->uuid_ == nullptr
        && this->version_ == nullptr; };
      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Propertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // installTime Field Functions 
      bool hasInstallTime() const { return this->installTime_ != nullptr;};
      void deleteInstallTime() { this->installTime_ = nullptr;};
      inline string getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
      inline Propertys& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


      // installTimeDt Field Functions 
      bool hasInstallTimeDt() const { return this->installTimeDt_ != nullptr;};
      void deleteInstallTimeDt() { this->installTimeDt_ = nullptr;};
      inline int64_t getInstallTimeDt() const { DARABONBA_PTR_GET_DEFAULT(installTimeDt_, 0L) };
      inline Propertys& setInstallTimeDt(int64_t installTimeDt) { DARABONBA_PTR_SET_VALUE(installTimeDt_, installTimeDt) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Propertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Propertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Propertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Propertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Propertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Propertys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Propertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Propertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Propertys& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The timestamp of the latest scan of the asset fingerprint. The unit is milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // The installation time of the software.
      shared_ptr<string> installTime_ {};
      // The installation timestamp of the software. The unit is in milliseconds.
      shared_ptr<int64_t> installTimeDt_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // List of server IPs
      shared_ptr<string> ip_ {};
      // The name of the software.
      shared_ptr<string> name_ {};
      // The installation directory information of the software asset.
      shared_ptr<string> path_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The version information of the software asset.
      shared_ptr<string> version_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
      // The number of fingerprint information of software assets displayed on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page during pagination.
      shared_ptr<int32_t> currentPage_ {};
      // The NextToken value returned using the NextToken method.
      shared_ptr<string> nextToken_ {};
      // The number of software asset fingerprint information displayed per page when performing a paginated query. The default value is **10**, indicating that 10 pieces of software asset fingerprint information are displayed per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of fingerprint information for the queried software assets.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->propertys_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertySoftwareDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertySoftwareDetailResponseBody::PageInfo) };
    inline DescribePropertySoftwareDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertySoftwareDetailResponseBody::PageInfo) };
    inline DescribePropertySoftwareDetailResponseBody& setPageInfo(const DescribePropertySoftwareDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertySoftwareDetailResponseBody& setPageInfo(DescribePropertySoftwareDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertySoftwareDetailResponseBody::Propertys> & getPropertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertySoftwareDetailResponseBody::Propertys>) };
    inline vector<DescribePropertySoftwareDetailResponseBody::Propertys> getPropertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertySoftwareDetailResponseBody::Propertys>) };
    inline DescribePropertySoftwareDetailResponseBody& setPropertys(const vector<DescribePropertySoftwareDetailResponseBody::Propertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertySoftwareDetailResponseBody& setPropertys(vector<DescribePropertySoftwareDetailResponseBody::Propertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertySoftwareDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information displayed on the query result page.
    shared_ptr<DescribePropertySoftwareDetailResponseBody::PageInfo> pageInfo_ {};
    // Details list of the queried software asset\\"s fingerprint information.
    shared_ptr<vector<DescribePropertySoftwareDetailResponseBody::Propertys>> propertys_ {};
    // The ID of the current request, generated by Alibaba Cloud as a unique identifier for the request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
