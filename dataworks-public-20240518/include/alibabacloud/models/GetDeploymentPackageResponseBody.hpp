// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDeploymentPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDeploymentPackageResponseBody() = default ;
    GetDeploymentPackageResponseBody(const GetDeploymentPackageResponseBody &) = default ;
    GetDeploymentPackageResponseBody(GetDeploymentPackageResponseBody &&) = default ;
    GetDeploymentPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentPackageResponseBody() = default ;
    GetDeploymentPackageResponseBody& operator=(const GetDeploymentPackageResponseBody &) = default ;
    GetDeploymentPackageResponseBody& operator=(GetDeploymentPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeployedItems, deployedItems_);
        DARABONBA_PTR_TO_JSON(Deployment, deployment_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployedItems, deployedItems_);
        DARABONBA_PTR_FROM_JSON(Deployment, deployment_);
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
      class Deployment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Deployment& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingStatus, checkingStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_TO_JSON(FromEnvironment, fromEnvironment_);
          DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ToEnvironment, toEnvironment_);
        };
        friend void from_json(const Darabonba::Json& j, Deployment& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingStatus, checkingStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_FROM_JSON(FromEnvironment, fromEnvironment_);
          DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ToEnvironment, toEnvironment_);
        };
        Deployment() = default ;
        Deployment(const Deployment &) = default ;
        Deployment(Deployment &&) = default ;
        Deployment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Deployment() = default ;
        Deployment& operator=(const Deployment &) = default ;
        Deployment& operator=(Deployment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkingStatus_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->errorMessage_ == nullptr && this->executeTime_ == nullptr && this->fromEnvironment_ == nullptr
        && this->handlerId_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->toEnvironment_ == nullptr; };
        // checkingStatus Field Functions 
        bool hasCheckingStatus() const { return this->checkingStatus_ != nullptr;};
        void deleteCheckingStatus() { this->checkingStatus_ = nullptr;};
        inline int32_t getCheckingStatus() const { DARABONBA_PTR_GET_DEFAULT(checkingStatus_, 0) };
        inline Deployment& setCheckingStatus(int32_t checkingStatus) { DARABONBA_PTR_SET_VALUE(checkingStatus_, checkingStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Deployment& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Deployment& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Deployment& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
        inline Deployment& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // fromEnvironment Field Functions 
        bool hasFromEnvironment() const { return this->fromEnvironment_ != nullptr;};
        void deleteFromEnvironment() { this->fromEnvironment_ = nullptr;};
        inline int32_t getFromEnvironment() const { DARABONBA_PTR_GET_DEFAULT(fromEnvironment_, 0) };
        inline Deployment& setFromEnvironment(int32_t fromEnvironment) { DARABONBA_PTR_SET_VALUE(fromEnvironment_, fromEnvironment) };


        // handlerId Field Functions 
        bool hasHandlerId() const { return this->handlerId_ != nullptr;};
        void deleteHandlerId() { this->handlerId_ = nullptr;};
        inline string getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, "") };
        inline Deployment& setHandlerId(string handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Deployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Deployment& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // toEnvironment Field Functions 
        bool hasToEnvironment() const { return this->toEnvironment_ != nullptr;};
        void deleteToEnvironment() { this->toEnvironment_ = nullptr;};
        inline int32_t getToEnvironment() const { DARABONBA_PTR_GET_DEFAULT(toEnvironment_, 0) };
        inline Deployment& setToEnvironment(int32_t toEnvironment) { DARABONBA_PTR_SET_VALUE(toEnvironment_, toEnvironment) };


      protected:
        // The validation status of nodes in the deployment package. For packages deployed to the development environment (toEnviroment=1), you can only proceed to deploy to production if the package Status is 1 (succeeded) and CheckingStatus is empty (validation complete).
        // 
        // *   7: Validation failed
        // *   8: Validation in progress
        shared_ptr<int32_t> checkingStatus_ {};
        // The timestamp (in milliseconds) when the deployment package was created.
        shared_ptr<int64_t> createTime_ {};
        // The Alibaba Cloud account ID of the user who created the deployment package.
        shared_ptr<string> creatorId_ {};
        // The detailed error message when the deployment package fails (status is 2).
        shared_ptr<string> errorMessage_ {};
        // The timestamp (in milliseconds) when the deployment started.
        shared_ptr<int64_t> executeTime_ {};
        // The environment where the deployment is executed. Valid values: 0 (local) and 1 (development).
        shared_ptr<int32_t> fromEnvironment_ {};
        // The Alibaba Cloud account ID of the user who executed the deployment.
        shared_ptr<string> handlerId_ {};
        // The deployment package name, displayed on the Deploy Center > Deployment Packages page.
        shared_ptr<string> name_ {};
        // The current status of the deployment package. Valid values: 0 (ready), 1 (succeeded), and 2 (failed).
        shared_ptr<int32_t> status_ {};
        // The target environment for the deployment. Valid values: 1 (development) and 2 (production).
        shared_ptr<int32_t> toEnvironment_ {};
      };

      class DeployedItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployedItems& obj) { 
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DeployedItems& obj) { 
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DeployedItems() = default ;
        DeployedItems(const DeployedItems &) = default ;
        DeployedItems(DeployedItems &&) = default ;
        DeployedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployedItems() = default ;
        DeployedItems& operator=(const DeployedItems &) = default ;
        DeployedItems& operator=(DeployedItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileVersion_ == nullptr && this->status_ == nullptr; };
        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline DeployedItems& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileVersion Field Functions 
        bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
        void deleteFileVersion() { this->fileVersion_ = nullptr;};
        inline int64_t getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0L) };
        inline DeployedItems& setFileVersion(int64_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline DeployedItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The file version.
        shared_ptr<int64_t> fileVersion_ {};
        // *   UNPUBLISHED(0)
        // *   SUCCESS(1)
        // *   ERROR(2)
        // *   CLONED(3)
        // *   DEPLOY_ERROR(4)
        // *   CLONING(5)
        // *   REJECT(6)
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->deployedItems_ == nullptr
        && this->deployment_ == nullptr; };
      // deployedItems Field Functions 
      bool hasDeployedItems() const { return this->deployedItems_ != nullptr;};
      void deleteDeployedItems() { this->deployedItems_ = nullptr;};
      inline const vector<Data::DeployedItems> & getDeployedItems() const { DARABONBA_PTR_GET_CONST(deployedItems_, vector<Data::DeployedItems>) };
      inline vector<Data::DeployedItems> getDeployedItems() { DARABONBA_PTR_GET(deployedItems_, vector<Data::DeployedItems>) };
      inline Data& setDeployedItems(const vector<Data::DeployedItems> & deployedItems) { DARABONBA_PTR_SET_VALUE(deployedItems_, deployedItems) };
      inline Data& setDeployedItems(vector<Data::DeployedItems> && deployedItems) { DARABONBA_PTR_SET_RVALUE(deployedItems_, deployedItems) };


      // deployment Field Functions 
      bool hasDeployment() const { return this->deployment_ != nullptr;};
      void deleteDeployment() { this->deployment_ = nullptr;};
      inline const Data::Deployment & getDeployment() const { DARABONBA_PTR_GET_CONST(deployment_, Data::Deployment) };
      inline Data::Deployment getDeployment() { DARABONBA_PTR_GET(deployment_, Data::Deployment) };
      inline Data& setDeployment(const Data::Deployment & deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };
      inline Data& setDeployment(Data::Deployment && deployment) { DARABONBA_PTR_SET_RVALUE(deployment_, deployment) };


    protected:
      // The deployment item details.
      shared_ptr<vector<Data::DeployedItems>> deployedItems_ {};
      // The deployment package details.
      shared_ptr<Data::Deployment> deployment_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDeploymentPackageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDeploymentPackageResponseBody::Data) };
    inline GetDeploymentPackageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDeploymentPackageResponseBody::Data) };
    inline GetDeploymentPackageResponseBody& setData(const GetDeploymentPackageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDeploymentPackageResponseBody& setData(GetDeploymentPackageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDeploymentPackageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDeploymentPackageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDeploymentPackageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeploymentPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDeploymentPackageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The deployment package details.
    shared_ptr<GetDeploymentPackageResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. Use this ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call succeeded. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
