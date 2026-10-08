// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertK8sApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertK8sApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationInfo, applicationInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertK8sApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationInfo, applicationInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InsertK8sApplicationResponseBody() = default ;
    InsertK8sApplicationResponseBody(const InsertK8sApplicationResponseBody &) = default ;
    InsertK8sApplicationResponseBody(InsertK8sApplicationResponseBody &&) = default ;
    InsertK8sApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertK8sApplicationResponseBody() = default ;
    InsertK8sApplicationResponseBody& operator=(const InsertK8sApplicationResponseBody &) = default ;
    InsertK8sApplicationResponseBody& operator=(InsertK8sApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
        DARABONBA_PTR_TO_JSON(EdasId, edasId_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
        DARABONBA_PTR_FROM_JSON(EdasId, edasId_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ApplicationInfo() = default ;
      ApplicationInfo(const ApplicationInfo &) = default ;
      ApplicationInfo(ApplicationInfo &&) = default ;
      ApplicationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationInfo() = default ;
      ApplicationInfo& operator=(const ApplicationInfo &) = default ;
      ApplicationInfo& operator=(ApplicationInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->changeOrderId_ == nullptr && this->clusterType_ == nullptr && this->dockerize_ == nullptr && this->edasId_ == nullptr
        && this->owner_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline ApplicationInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline ApplicationInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // changeOrderId Field Functions 
      bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
      void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
      inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
      inline ApplicationInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
      inline ApplicationInfo& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // dockerize Field Functions 
      bool hasDockerize() const { return this->dockerize_ != nullptr;};
      void deleteDockerize() { this->dockerize_ = nullptr;};
      inline bool getDockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
      inline ApplicationInfo& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


      // edasId Field Functions 
      bool hasEdasId() const { return this->edasId_ != nullptr;};
      void deleteEdasId() { this->edasId_ = nullptr;};
      inline string getEdasId() const { DARABONBA_PTR_GET_DEFAULT(edasId_, "") };
      inline ApplicationInfo& setEdasId(string edasId) { DARABONBA_PTR_SET_VALUE(edasId_, edasId) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ApplicationInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ApplicationInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ApplicationInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The ID of the change process. You can call the GetChangeOrderInfo operation to query the ID. For more information, see [GetChangeOrderInfo](https://help.aliyun.com/document_detail/62072.html).
      shared_ptr<string> changeOrderId_ {};
      // The type of the cluster in which the application is deployed.
      // 
      // - 0: regular Docker cluster.
      // 
      // - 1: Swarm cluster (discontinued).
      // 
      // - 2: ECS cluster.
      // 
      // - 3: self-managed Kubernetes cluster in EDAS (discontinued).
      // 
      // - 4: cluster for applications that are automatically registered with Pandora.
      // 
      // - 5: Kubernetes clusters and Serverless Kubernetes clusters.
      shared_ptr<int32_t> clusterType_ {};
      // Indicates whether the application is a Docker application.
      // 
      // - true: The application is a Docker application.
      // 
      // - false: The application is not a Docker application.
      shared_ptr<bool> dockerize_ {};
      // The ID of the user account.
      shared_ptr<string> edasId_ {};
      // The owner of the application.
      shared_ptr<string> owner_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The Alibaba Cloud account that is used to create the application.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->applicationInfo_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applicationInfo Field Functions 
    bool hasApplicationInfo() const { return this->applicationInfo_ != nullptr;};
    void deleteApplicationInfo() { this->applicationInfo_ = nullptr;};
    inline const InsertK8sApplicationResponseBody::ApplicationInfo & getApplicationInfo() const { DARABONBA_PTR_GET_CONST(applicationInfo_, InsertK8sApplicationResponseBody::ApplicationInfo) };
    inline InsertK8sApplicationResponseBody::ApplicationInfo getApplicationInfo() { DARABONBA_PTR_GET(applicationInfo_, InsertK8sApplicationResponseBody::ApplicationInfo) };
    inline InsertK8sApplicationResponseBody& setApplicationInfo(const InsertK8sApplicationResponseBody::ApplicationInfo & applicationInfo) { DARABONBA_PTR_SET_VALUE(applicationInfo_, applicationInfo) };
    inline InsertK8sApplicationResponseBody& setApplicationInfo(InsertK8sApplicationResponseBody::ApplicationInfo && applicationInfo) { DARABONBA_PTR_SET_RVALUE(applicationInfo_, applicationInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertK8sApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertK8sApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertK8sApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application.
    shared_ptr<InsertK8sApplicationResponseBody::ApplicationInfo> applicationInfo_ {};
    // The status code of the interface or the POP error code.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
