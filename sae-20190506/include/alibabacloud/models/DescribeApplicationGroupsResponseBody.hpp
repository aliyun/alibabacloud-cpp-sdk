// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationGroupsResponseBody() = default ;
    DescribeApplicationGroupsResponseBody(const DescribeApplicationGroupsResponseBody &) = default ;
    DescribeApplicationGroupsResponseBody(DescribeApplicationGroupsResponseBody &&) = default ;
    DescribeApplicationGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationGroupsResponseBody() = default ;
    DescribeApplicationGroupsResponseBody& operator=(const DescribeApplicationGroupsResponseBody &) = default ;
    DescribeApplicationGroupsResponseBody& operator=(DescribeApplicationGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupType, groupType_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(Jdk, jdk_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
        DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
        DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
        DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
        DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
        DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
        DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
        DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
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
      virtual bool empty() const override { return this->edasContainerVersion_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->imageUrl_ == nullptr && this->jdk_ == nullptr
        && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->packageVersionId_ == nullptr && this->replicas_ == nullptr
        && this->runningInstances_ == nullptr && this->webContainer_ == nullptr; };
      // edasContainerVersion Field Functions 
      bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
      void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
      inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
      inline Data& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline int32_t getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
      inline Data& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Data& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // jdk Field Functions 
      bool hasJdk() const { return this->jdk_ != nullptr;};
      void deleteJdk() { this->jdk_ = nullptr;};
      inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
      inline Data& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // packageUrl Field Functions 
      bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
      void deletePackageUrl() { this->packageUrl_ = nullptr;};
      inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
      inline Data& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


      // packageVersion Field Functions 
      bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
      void deletePackageVersion() { this->packageVersion_ = nullptr;};
      inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
      inline Data& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


      // packageVersionId Field Functions 
      bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
      void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
      inline string getPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
      inline Data& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
      inline Data& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // runningInstances Field Functions 
      bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
      void deleteRunningInstances() { this->runningInstances_ = nullptr;};
      inline int32_t getRunningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
      inline Data& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


      // webContainer Field Functions 
      bool hasWebContainer() const { return this->webContainer_ != nullptr;};
      void deleteWebContainer() { this->webContainer_ = nullptr;};
      inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
      inline Data& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    protected:
      // The version of the container, such as Ali-Tomcat, in which an application that is developed based on High-speed Service Framework (HSF) is deployed.
      shared_ptr<string> edasContainerVersion_ {};
      // The ID of the instance group.
      shared_ptr<string> groupId_ {};
      // The name of the instance group.
      shared_ptr<string> groupName_ {};
      // The type of the instance group.
      shared_ptr<int32_t> groupType_ {};
      // The URL of the image. This parameter is returned only if the **PackageType** parameter is set to **Image**.
      shared_ptr<string> imageUrl_ {};
      // The version of the JDK on which the deployment package of the application depends. This parameter is not returned if the **PackageType** parameter is set to **Image**.
      shared_ptr<string> jdk_ {};
      // The type of the deployment package. Valid values:
      // 
      // *   If you deploy a Java application, the value of this parameter can be **FatJar**, **War**, or **Image**.
      // 
      // *   If you deploy a PHP application, the value of this parameter can be one of the following values:
      // 
      //     *   **PhpZip**
      //     *   **IMAGE_PHP_5_4**
      //     *   **IMAGE_PHP_5_4_ALPINE**
      //     *   **IMAGE_PHP_5_5**
      //     *   **IMAGE_PHP_5_5_ALPINE**
      //     *   **IMAGE_PHP_5_6**
      //     *   **IMAGE_PHP_5_6_ALPINE**
      //     *   **IMAGE_PHP_7_0**
      //     *   **IMAGE_PHP_7_0_ALPINE**
      //     *   **IMAGE_PHP_7_1**
      //     *   **IMAGE_PHP_7_1_ALPINE**
      //     *   **IMAGE_PHP_7_2**
      //     *   **IMAGE_PHP_7_2_ALPINE**
      //     *   **IMAGE_PHP_7_3**
      //     *   **IMAGE_PHP_7_3_ALPINE**
      shared_ptr<string> packageType_ {};
      // The URL of the deployment package. This parameter is returned only if the **PackageType** parameter is set to **FatJar**, **War**, or **PhpZip**.
      shared_ptr<string> packageUrl_ {};
      // The version of the deployment package. This parameter is returned only if the **PackageType** parameter is set to **FatJar**, **War**, or **PhpZip**. The value of this parameter is automatically generated only if the **ImageUrl** is returned.
      shared_ptr<string> packageVersion_ {};
      shared_ptr<string> packageVersionId_ {};
      // The total number of instances.
      shared_ptr<int32_t> replicas_ {};
      // The number of running instances.
      shared_ptr<int32_t> runningInstances_ {};
      // The version of the Tomcat container on which the deployment package depends. This parameter is not returned if the **PackageType** parameter is set to **Image**.
      shared_ptr<string> webContainer_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApplicationGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApplicationGroupsResponseBody::Data>) };
    inline vector<DescribeApplicationGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApplicationGroupsResponseBody::Data>) };
    inline DescribeApplicationGroupsResponseBody& setData(const vector<DescribeApplicationGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationGroupsResponseBody& setData(vector<DescribeApplicationGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationGroupsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationGroupsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The information about the instance groups of the application.
    shared_ptr<vector<DescribeApplicationGroupsResponseBody::Data>> data_ {};
    // The error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the instance groups of an application were obtained. Valid values:
    // 
    // *   **true**: The instance groups were obtained.
    // *   **false**: The instance groups failed to be obtained.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
