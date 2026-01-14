// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListClustersResponseBody() = default ;
    ListClustersResponseBody(const ListClustersResponseBody &) = default ;
    ListClustersResponseBody(ListClustersResponseBody &&) = default ;
    ListClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBody() = default ;
    ListClustersResponseBody& operator=(const ListClustersResponseBody &) = default ;
    ListClustersResponseBody& operator=(ListClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(CanUpdate, canUpdate_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ClusterAliasName, clusterAliasName_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(InitStatus, initStatus_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InternetAddress, internetAddress_);
        DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
        DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
        DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_TO_JSON(MaintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
        DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(CanUpdate, canUpdate_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ClusterAliasName, clusterAliasName_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(InitStatus, initStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InternetAddress, internetAddress_);
        DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
        DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
        DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
        DARABONBA_PTR_FROM_JSON(MaintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
        DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MaintenancePeriod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaintenancePeriod& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, MaintenancePeriod& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        MaintenancePeriod() = default ;
        MaintenancePeriod(const MaintenancePeriod &) = default ;
        MaintenancePeriod(MaintenancePeriod &&) = default ;
        MaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaintenancePeriod() = default ;
        MaintenancePeriod& operator=(const MaintenancePeriod &) = default ;
        MaintenancePeriod& operator=(MaintenancePeriod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline MaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline MaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->canUpdate_ == nullptr && this->chargeType_ == nullptr && this->clusterAliasName_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr
        && this->createTime_ == nullptr && this->endDate_ == nullptr && this->initStatus_ == nullptr && this->instanceCount_ == nullptr && this->instanceId_ == nullptr
        && this->internetAddress_ == nullptr && this->internetDomain_ == nullptr && this->intranetAddress_ == nullptr && this->intranetDomain_ == nullptr && this->maintenancePeriod_ == nullptr
        && this->mseVersion_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->versionCode_ == nullptr && this->versionLifecycle_ == nullptr
        && this->vpcId_ == nullptr; };
      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Data& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // canUpdate Field Functions 
      bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
      void deleteCanUpdate() { this->canUpdate_ = nullptr;};
      inline bool getCanUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
      inline Data& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clusterAliasName Field Functions 
      bool hasClusterAliasName() const { return this->clusterAliasName_ != nullptr;};
      void deleteClusterAliasName() { this->clusterAliasName_ = nullptr;};
      inline string getClusterAliasName() const { DARABONBA_PTR_GET_DEFAULT(clusterAliasName_, "") };
      inline Data& setClusterAliasName(string clusterAliasName) { DARABONBA_PTR_SET_VALUE(clusterAliasName_, clusterAliasName) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Data& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // initStatus Field Functions 
      bool hasInitStatus() const { return this->initStatus_ != nullptr;};
      void deleteInitStatus() { this->initStatus_ = nullptr;};
      inline string getInitStatus() const { DARABONBA_PTR_GET_DEFAULT(initStatus_, "") };
      inline Data& setInitStatus(string initStatus) { DARABONBA_PTR_SET_VALUE(initStatus_, initStatus) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
      inline Data& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // internetAddress Field Functions 
      bool hasInternetAddress() const { return this->internetAddress_ != nullptr;};
      void deleteInternetAddress() { this->internetAddress_ = nullptr;};
      inline string getInternetAddress() const { DARABONBA_PTR_GET_DEFAULT(internetAddress_, "") };
      inline Data& setInternetAddress(string internetAddress) { DARABONBA_PTR_SET_VALUE(internetAddress_, internetAddress) };


      // internetDomain Field Functions 
      bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
      void deleteInternetDomain() { this->internetDomain_ = nullptr;};
      inline string getInternetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
      inline Data& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


      // intranetAddress Field Functions 
      bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
      void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
      inline string getIntranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
      inline Data& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


      // intranetDomain Field Functions 
      bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
      void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
      inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
      inline Data& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


      // maintenancePeriod Field Functions 
      bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
      void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
      inline const Data::MaintenancePeriod & getMaintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Data::MaintenancePeriod) };
      inline Data::MaintenancePeriod getMaintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Data::MaintenancePeriod) };
      inline Data& setMaintenancePeriod(const Data::MaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
      inline Data& setMaintenancePeriod(Data::MaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


      // mseVersion Field Functions 
      bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
      void deleteMseVersion() { this->mseVersion_ = nullptr;};
      inline string getMseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
      inline Data& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Data& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Data& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // versionCode Field Functions 
      bool hasVersionCode() const { return this->versionCode_ != nullptr;};
      void deleteVersionCode() { this->versionCode_ = nullptr;};
      inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
      inline Data& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


      // versionLifecycle Field Functions 
      bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
      void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
      inline string getVersionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
      inline Data& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The application version.
      shared_ptr<string> appVersion_ {};
      // Indicates whether the instance can be upgraded.
      shared_ptr<bool> canUpdate_ {};
      // The billing method, such as subscription or pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The alias of the cluster.
      shared_ptr<string> clusterAliasName_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values: ZooKeeper, Nacos-Ans, and Eureka.
      shared_ptr<string> clusterType_ {};
      // The time when the cluster was created.
      shared_ptr<string> createTime_ {};
      // The time when the cluster expires.
      shared_ptr<string> endDate_ {};
      // The initialization status of the instance.
      shared_ptr<string> initStatus_ {};
      // The number of clusters.
      shared_ptr<int64_t> instanceCount_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The public IP address.
      shared_ptr<string> internetAddress_ {};
      // The public endpoint.
      shared_ptr<string> internetDomain_ {};
      // The internal IP address.
      shared_ptr<string> intranetAddress_ {};
      // The internal endpoint.
      shared_ptr<string> intranetDomain_ {};
      shared_ptr<Data::MaintenancePeriod> maintenancePeriod_ {};
      // The edition of the cluster.
      shared_ptr<string> mseVersion_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The tags that are attached to the instance.
      Darabonba::Json tags_ {};
      // The version information.
      shared_ptr<string> versionCode_ {};
      shared_ptr<string> versionLifecycle_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListClustersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListClustersResponseBody::Data>) };
    inline vector<ListClustersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListClustersResponseBody::Data>) };
    inline ListClustersResponseBody& setData(const vector<ListClustersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClustersResponseBody& setData(vector<ListClustersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListClustersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListClustersResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListClustersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListClustersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the data.
    shared_ptr<vector<ListClustersResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of returned instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
