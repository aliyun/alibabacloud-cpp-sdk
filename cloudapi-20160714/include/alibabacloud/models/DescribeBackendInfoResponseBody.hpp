// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendInfo, backendInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendInfo, backendInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackendInfoResponseBody() = default ;
    DescribeBackendInfoResponseBody(const DescribeBackendInfoResponseBody &) = default ;
    DescribeBackendInfoResponseBody(DescribeBackendInfoResponseBody &&) = default ;
    DescribeBackendInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBody() = default ;
    DescribeBackendInfoResponseBody& operator=(const DescribeBackendInfoResponseBody &) = default ;
    DescribeBackendInfoResponseBody& operator=(DescribeBackendInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackendInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BackendId, backendId_);
        DARABONBA_PTR_TO_JSON(BackendModels, backendModels_);
        DARABONBA_PTR_TO_JSON(BackendName, backendName_);
        DARABONBA_PTR_TO_JSON(BackendType, backendType_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      };
      friend void from_json(const Darabonba::Json& j, BackendInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
        DARABONBA_PTR_FROM_JSON(BackendModels, backendModels_);
        DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
        DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      };
      BackendInfo() = default ;
      BackendInfo(const BackendInfo &) = default ;
      BackendInfo(BackendInfo &&) = default ;
      BackendInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendInfo() = default ;
      BackendInfo& operator=(const BackendInfo &) = default ;
      BackendInfo& operator=(BackendInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackendModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendModels& obj) { 
          DARABONBA_PTR_TO_JSON(BackendConfig, backendConfig_);
          DARABONBA_PTR_TO_JSON(BackendModelId, backendModelId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(StageModeId, stageModeId_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, BackendModels& obj) { 
          DARABONBA_PTR_FROM_JSON(BackendConfig, backendConfig_);
          DARABONBA_PTR_FROM_JSON(BackendModelId, backendModelId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(StageModeId, stageModeId_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        BackendModels() = default ;
        BackendModels(const BackendModels &) = default ;
        BackendModels(BackendModels &&) = default ;
        BackendModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendModels() = default ;
        BackendModels& operator=(const BackendModels &) = default ;
        BackendModels& operator=(BackendModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BackendConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BackendConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DiscoveryConfig, discoveryConfig_);
            DARABONBA_PTR_TO_JSON(EdasConfig, edasConfig_);
            DARABONBA_PTR_TO_JSON(EventBridgeConfig, eventBridgeConfig_);
            DARABONBA_PTR_TO_JSON(FunctionComputeConfig, functionComputeConfig_);
            DARABONBA_PTR_TO_JSON(HttpTargetHostName, httpTargetHostName_);
            DARABONBA_PTR_TO_JSON(MockConfig, mockConfig_);
            DARABONBA_PTR_TO_JSON(OssConfig, ossConfig_);
            DARABONBA_PTR_TO_JSON(ServiceAddress, serviceAddress_);
            DARABONBA_PTR_TO_JSON(ServiceTimeout, serviceTimeout_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
          };
          friend void from_json(const Darabonba::Json& j, BackendConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DiscoveryConfig, discoveryConfig_);
            DARABONBA_PTR_FROM_JSON(EdasConfig, edasConfig_);
            DARABONBA_PTR_FROM_JSON(EventBridgeConfig, eventBridgeConfig_);
            DARABONBA_PTR_FROM_JSON(FunctionComputeConfig, functionComputeConfig_);
            DARABONBA_PTR_FROM_JSON(HttpTargetHostName, httpTargetHostName_);
            DARABONBA_PTR_FROM_JSON(MockConfig, mockConfig_);
            DARABONBA_PTR_FROM_JSON(OssConfig, ossConfig_);
            DARABONBA_PTR_FROM_JSON(ServiceAddress, serviceAddress_);
            DARABONBA_PTR_FROM_JSON(ServiceTimeout, serviceTimeout_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
          };
          BackendConfig() = default ;
          BackendConfig(const BackendConfig &) = default ;
          BackendConfig(BackendConfig &&) = default ;
          BackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BackendConfig() = default ;
          BackendConfig& operator=(const BackendConfig &) = default ;
          BackendConfig& operator=(BackendConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VpcConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VpcConfig& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(VpcAccessId, vpcAccessId_);
              DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
              DARABONBA_PTR_TO_JSON(VpcScheme, vpcScheme_);
              DARABONBA_PTR_TO_JSON(VpcTargetHostName, vpcTargetHostName_);
            };
            friend void from_json(const Darabonba::Json& j, VpcConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(VpcAccessId, vpcAccessId_);
              DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
              DARABONBA_PTR_FROM_JSON(VpcScheme, vpcScheme_);
              DARABONBA_PTR_FROM_JSON(VpcTargetHostName, vpcTargetHostName_);
            };
            VpcConfig() = default ;
            VpcConfig(const VpcConfig &) = default ;
            VpcConfig(VpcConfig &&) = default ;
            VpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VpcConfig() = default ;
            VpcConfig& operator=(const VpcConfig &) = default ;
            VpcConfig& operator=(VpcConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->port_ == nullptr && this->vpcAccessId_ == nullptr && this->vpcId_ == nullptr && this->vpcScheme_ == nullptr
        && this->vpcTargetHostName_ == nullptr; };
            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline VpcConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline VpcConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
            inline VpcConfig& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // vpcAccessId Field Functions 
            bool hasVpcAccessId() const { return this->vpcAccessId_ != nullptr;};
            void deleteVpcAccessId() { this->vpcAccessId_ = nullptr;};
            inline string getVpcAccessId() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessId_, "") };
            inline VpcConfig& setVpcAccessId(string vpcAccessId) { DARABONBA_PTR_SET_VALUE(vpcAccessId_, vpcAccessId) };


            // vpcId Field Functions 
            bool hasVpcId() const { return this->vpcId_ != nullptr;};
            void deleteVpcId() { this->vpcId_ = nullptr;};
            inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
            inline VpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            // vpcScheme Field Functions 
            bool hasVpcScheme() const { return this->vpcScheme_ != nullptr;};
            void deleteVpcScheme() { this->vpcScheme_ = nullptr;};
            inline string getVpcScheme() const { DARABONBA_PTR_GET_DEFAULT(vpcScheme_, "") };
            inline VpcConfig& setVpcScheme(string vpcScheme) { DARABONBA_PTR_SET_VALUE(vpcScheme_, vpcScheme) };


            // vpcTargetHostName Field Functions 
            bool hasVpcTargetHostName() const { return this->vpcTargetHostName_ != nullptr;};
            void deleteVpcTargetHostName() { this->vpcTargetHostName_ = nullptr;};
            inline string getVpcTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(vpcTargetHostName_, "") };
            inline VpcConfig& setVpcTargetHostName(string vpcTargetHostName) { DARABONBA_PTR_SET_VALUE(vpcTargetHostName_, vpcTargetHostName) };


          protected:
            // The ID of the Elastic Compute Service (ECS) or Server Load Balancer (SLB) instance in the VPC.
            shared_ptr<string> instanceId_ {};
            // The name of the VPC configuration.
            shared_ptr<string> name_ {};
            // The port number that corresponds to the instance.
            shared_ptr<int64_t> port_ {};
            // The ID of the VPC access authorization.
            shared_ptr<string> vpcAccessId_ {};
            // The ID of the VPC.
            shared_ptr<string> vpcId_ {};
            // Indicates whether HTTP or HTTPS is used.
            shared_ptr<string> vpcScheme_ {};
            // The host of the VPC backend service.
            shared_ptr<string> vpcTargetHostName_ {};
          };

          class OssConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OssConfig& obj) { 
              DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
              DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
            };
            friend void from_json(const Darabonba::Json& j, OssConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
              DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
            };
            OssConfig() = default ;
            OssConfig(const OssConfig &) = default ;
            OssConfig(OssConfig &&) = default ;
            OssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OssConfig() = default ;
            OssConfig& operator=(const OssConfig &) = default ;
            OssConfig& operator=(OssConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->ossRegionId_ == nullptr; };
            // bucketName Field Functions 
            bool hasBucketName() const { return this->bucketName_ != nullptr;};
            void deleteBucketName() { this->bucketName_ = nullptr;};
            inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
            inline OssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


            // ossRegionId Field Functions 
            bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
            void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
            inline string getOssRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
            inline OssConfig& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


          protected:
            // The name of the OSS bucket.
            shared_ptr<string> bucketName_ {};
            // The region ID of the OSS bucket.
            shared_ptr<string> ossRegionId_ {};
          };

          class MockConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MockConfig& obj) { 
              DARABONBA_PTR_TO_JSON(MockHeaders, mockHeaders_);
              DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
              DARABONBA_PTR_TO_JSON(MockStatusCode, mockStatusCode_);
            };
            friend void from_json(const Darabonba::Json& j, MockConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(MockHeaders, mockHeaders_);
              DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
              DARABONBA_PTR_FROM_JSON(MockStatusCode, mockStatusCode_);
            };
            MockConfig() = default ;
            MockConfig(const MockConfig &) = default ;
            MockConfig(MockConfig &&) = default ;
            MockConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MockConfig() = default ;
            MockConfig& operator=(const MockConfig &) = default ;
            MockConfig& operator=(MockConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class MockHeaders : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MockHeaders& obj) { 
                DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
                DARABONBA_PTR_TO_JSON(HeaderValue, headerValue_);
              };
              friend void from_json(const Darabonba::Json& j, MockHeaders& obj) { 
                DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
                DARABONBA_PTR_FROM_JSON(HeaderValue, headerValue_);
              };
              MockHeaders() = default ;
              MockHeaders(const MockHeaders &) = default ;
              MockHeaders(MockHeaders &&) = default ;
              MockHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~MockHeaders() = default ;
              MockHeaders& operator=(const MockHeaders &) = default ;
              MockHeaders& operator=(MockHeaders &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->headerName_ == nullptr
        && this->headerValue_ == nullptr; };
              // headerName Field Functions 
              bool hasHeaderName() const { return this->headerName_ != nullptr;};
              void deleteHeaderName() { this->headerName_ = nullptr;};
              inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
              inline MockHeaders& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


              // headerValue Field Functions 
              bool hasHeaderValue() const { return this->headerValue_ != nullptr;};
              void deleteHeaderValue() { this->headerValue_ = nullptr;};
              inline string getHeaderValue() const { DARABONBA_PTR_GET_DEFAULT(headerValue_, "") };
              inline MockHeaders& setHeaderValue(string headerValue) { DARABONBA_PTR_SET_VALUE(headerValue_, headerValue) };


            protected:
              // The header name.
              shared_ptr<string> headerName_ {};
              // The header value.
              shared_ptr<string> headerValue_ {};
            };

            virtual bool empty() const override { return this->mockHeaders_ == nullptr
        && this->mockResult_ == nullptr && this->mockStatusCode_ == nullptr; };
            // mockHeaders Field Functions 
            bool hasMockHeaders() const { return this->mockHeaders_ != nullptr;};
            void deleteMockHeaders() { this->mockHeaders_ = nullptr;};
            inline const vector<MockConfig::MockHeaders> & getMockHeaders() const { DARABONBA_PTR_GET_CONST(mockHeaders_, vector<MockConfig::MockHeaders>) };
            inline vector<MockConfig::MockHeaders> getMockHeaders() { DARABONBA_PTR_GET(mockHeaders_, vector<MockConfig::MockHeaders>) };
            inline MockConfig& setMockHeaders(const vector<MockConfig::MockHeaders> & mockHeaders) { DARABONBA_PTR_SET_VALUE(mockHeaders_, mockHeaders) };
            inline MockConfig& setMockHeaders(vector<MockConfig::MockHeaders> && mockHeaders) { DARABONBA_PTR_SET_RVALUE(mockHeaders_, mockHeaders) };


            // mockResult Field Functions 
            bool hasMockResult() const { return this->mockResult_ != nullptr;};
            void deleteMockResult() { this->mockResult_ = nullptr;};
            inline string getMockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
            inline MockConfig& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


            // mockStatusCode Field Functions 
            bool hasMockStatusCode() const { return this->mockStatusCode_ != nullptr;};
            void deleteMockStatusCode() { this->mockStatusCode_ = nullptr;};
            inline string getMockStatusCode() const { DARABONBA_PTR_GET_DEFAULT(mockStatusCode_, "") };
            inline MockConfig& setMockStatusCode(string mockStatusCode) { DARABONBA_PTR_SET_VALUE(mockStatusCode_, mockStatusCode) };


          protected:
            // The header in the mocked response.
            shared_ptr<vector<MockConfig::MockHeaders>> mockHeaders_ {};
            // The mocked response.
            shared_ptr<string> mockResult_ {};
            // The status code in the mocked response.
            shared_ptr<string> mockStatusCode_ {};
          };

          class FunctionComputeConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FunctionComputeConfig& obj) { 
              DARABONBA_PTR_TO_JSON(FcBaseUrl, fcBaseUrl_);
              DARABONBA_PTR_TO_JSON(FcRegionId, fcRegionId_);
              DARABONBA_PTR_TO_JSON(FcType, fcType_);
              DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
              DARABONBA_PTR_TO_JSON(OnlyBusinessPath, onlyBusinessPath_);
              DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
              DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
              DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
              DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
            };
            friend void from_json(const Darabonba::Json& j, FunctionComputeConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(FcBaseUrl, fcBaseUrl_);
              DARABONBA_PTR_FROM_JSON(FcRegionId, fcRegionId_);
              DARABONBA_PTR_FROM_JSON(FcType, fcType_);
              DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
              DARABONBA_PTR_FROM_JSON(OnlyBusinessPath, onlyBusinessPath_);
              DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
              DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
              DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
              DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
            };
            FunctionComputeConfig() = default ;
            FunctionComputeConfig(const FunctionComputeConfig &) = default ;
            FunctionComputeConfig(FunctionComputeConfig &&) = default ;
            FunctionComputeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FunctionComputeConfig() = default ;
            FunctionComputeConfig& operator=(const FunctionComputeConfig &) = default ;
            FunctionComputeConfig& operator=(FunctionComputeConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->fcBaseUrl_ == nullptr
        && this->fcRegionId_ == nullptr && this->fcType_ == nullptr && this->functionName_ == nullptr && this->onlyBusinessPath_ == nullptr && this->qualifier_ == nullptr
        && this->roleArn_ == nullptr && this->serviceName_ == nullptr && this->triggerName_ == nullptr; };
            // fcBaseUrl Field Functions 
            bool hasFcBaseUrl() const { return this->fcBaseUrl_ != nullptr;};
            void deleteFcBaseUrl() { this->fcBaseUrl_ = nullptr;};
            inline string getFcBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fcBaseUrl_, "") };
            inline FunctionComputeConfig& setFcBaseUrl(string fcBaseUrl) { DARABONBA_PTR_SET_VALUE(fcBaseUrl_, fcBaseUrl) };


            // fcRegionId Field Functions 
            bool hasFcRegionId() const { return this->fcRegionId_ != nullptr;};
            void deleteFcRegionId() { this->fcRegionId_ = nullptr;};
            inline string getFcRegionId() const { DARABONBA_PTR_GET_DEFAULT(fcRegionId_, "") };
            inline FunctionComputeConfig& setFcRegionId(string fcRegionId) { DARABONBA_PTR_SET_VALUE(fcRegionId_, fcRegionId) };


            // fcType Field Functions 
            bool hasFcType() const { return this->fcType_ != nullptr;};
            void deleteFcType() { this->fcType_ = nullptr;};
            inline string getFcType() const { DARABONBA_PTR_GET_DEFAULT(fcType_, "") };
            inline FunctionComputeConfig& setFcType(string fcType) { DARABONBA_PTR_SET_VALUE(fcType_, fcType) };


            // functionName Field Functions 
            bool hasFunctionName() const { return this->functionName_ != nullptr;};
            void deleteFunctionName() { this->functionName_ = nullptr;};
            inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
            inline FunctionComputeConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


            // onlyBusinessPath Field Functions 
            bool hasOnlyBusinessPath() const { return this->onlyBusinessPath_ != nullptr;};
            void deleteOnlyBusinessPath() { this->onlyBusinessPath_ = nullptr;};
            inline bool getOnlyBusinessPath() const { DARABONBA_PTR_GET_DEFAULT(onlyBusinessPath_, false) };
            inline FunctionComputeConfig& setOnlyBusinessPath(bool onlyBusinessPath) { DARABONBA_PTR_SET_VALUE(onlyBusinessPath_, onlyBusinessPath) };


            // qualifier Field Functions 
            bool hasQualifier() const { return this->qualifier_ != nullptr;};
            void deleteQualifier() { this->qualifier_ = nullptr;};
            inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
            inline FunctionComputeConfig& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


            // roleArn Field Functions 
            bool hasRoleArn() const { return this->roleArn_ != nullptr;};
            void deleteRoleArn() { this->roleArn_ = nullptr;};
            inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
            inline FunctionComputeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


            // serviceName Field Functions 
            bool hasServiceName() const { return this->serviceName_ != nullptr;};
            void deleteServiceName() { this->serviceName_ = nullptr;};
            inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
            inline FunctionComputeConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


            // triggerName Field Functions 
            bool hasTriggerName() const { return this->triggerName_ != nullptr;};
            void deleteTriggerName() { this->triggerName_ = nullptr;};
            inline string getTriggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
            inline FunctionComputeConfig& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


          protected:
            // The root path of the Function Compute service.
            shared_ptr<string> fcBaseUrl_ {};
            // The region ID of the Function Compute service.
            shared_ptr<string> fcRegionId_ {};
            // The type of the service in Function Compute.
            shared_ptr<string> fcType_ {};
            // The function name that is defined in Function Compute.
            shared_ptr<string> functionName_ {};
            // Indicates whether the backend service receives only the service path.
            shared_ptr<bool> onlyBusinessPath_ {};
            // The alias of the function.
            shared_ptr<string> qualifier_ {};
            // The Alibaba Cloud Resource Name (ARN) of the RAM role that is assumed by API Gateway to access Function Compute.
            shared_ptr<string> roleArn_ {};
            // The service name that is defined in Function Compute.
            shared_ptr<string> serviceName_ {};
            // The name of the trigger.
            // 
            // You can specify the TriggerName or TriggerUrl parameter. The TriggerName parameter is optional.
            shared_ptr<string> triggerName_ {};
          };

          class EventBridgeConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EventBridgeConfig& obj) { 
              DARABONBA_PTR_TO_JSON(EventBridgeRegionId, eventBridgeRegionId_);
              DARABONBA_PTR_TO_JSON(EventBus, eventBus_);
              DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
              DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
            };
            friend void from_json(const Darabonba::Json& j, EventBridgeConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(EventBridgeRegionId, eventBridgeRegionId_);
              DARABONBA_PTR_FROM_JSON(EventBus, eventBus_);
              DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
              DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
            };
            EventBridgeConfig() = default ;
            EventBridgeConfig(const EventBridgeConfig &) = default ;
            EventBridgeConfig(EventBridgeConfig &&) = default ;
            EventBridgeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EventBridgeConfig() = default ;
            EventBridgeConfig& operator=(const EventBridgeConfig &) = default ;
            EventBridgeConfig& operator=(EventBridgeConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->eventBridgeRegionId_ == nullptr
        && this->eventBus_ == nullptr && this->eventSource_ == nullptr && this->roleArn_ == nullptr; };
            // eventBridgeRegionId Field Functions 
            bool hasEventBridgeRegionId() const { return this->eventBridgeRegionId_ != nullptr;};
            void deleteEventBridgeRegionId() { this->eventBridgeRegionId_ = nullptr;};
            inline string getEventBridgeRegionId() const { DARABONBA_PTR_GET_DEFAULT(eventBridgeRegionId_, "") };
            inline EventBridgeConfig& setEventBridgeRegionId(string eventBridgeRegionId) { DARABONBA_PTR_SET_VALUE(eventBridgeRegionId_, eventBridgeRegionId) };


            // eventBus Field Functions 
            bool hasEventBus() const { return this->eventBus_ != nullptr;};
            void deleteEventBus() { this->eventBus_ = nullptr;};
            inline string getEventBus() const { DARABONBA_PTR_GET_DEFAULT(eventBus_, "") };
            inline EventBridgeConfig& setEventBus(string eventBus) { DARABONBA_PTR_SET_VALUE(eventBus_, eventBus) };


            // eventSource Field Functions 
            bool hasEventSource() const { return this->eventSource_ != nullptr;};
            void deleteEventSource() { this->eventSource_ = nullptr;};
            inline string getEventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
            inline EventBridgeConfig& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


            // roleArn Field Functions 
            bool hasRoleArn() const { return this->roleArn_ != nullptr;};
            void deleteRoleArn() { this->roleArn_ = nullptr;};
            inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
            inline EventBridgeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


          protected:
            // The region ID of the event bus in EventBridge.
            shared_ptr<string> eventBridgeRegionId_ {};
            // The event bus.
            shared_ptr<string> eventBus_ {};
            // The event source.
            shared_ptr<string> eventSource_ {};
            // The ARN of the RAM role to be assumed by API Gateway to access EventBridge.
            shared_ptr<string> roleArn_ {};
          };

          class EdasConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EdasConfig& obj) { 
              DARABONBA_PTR_TO_JSON(EdasAppId, edasAppId_);
              DARABONBA_PTR_TO_JSON(MicroserviceNamespace, microserviceNamespace_);
              DARABONBA_PTR_TO_JSON(MicroserviceNamespaceId, microserviceNamespaceId_);
              DARABONBA_PTR_TO_JSON(MicroserviceNamespaceName, microserviceNamespaceName_);
              DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
              DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
              DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
            };
            friend void from_json(const Darabonba::Json& j, EdasConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(EdasAppId, edasAppId_);
              DARABONBA_PTR_FROM_JSON(MicroserviceNamespace, microserviceNamespace_);
              DARABONBA_PTR_FROM_JSON(MicroserviceNamespaceId, microserviceNamespaceId_);
              DARABONBA_PTR_FROM_JSON(MicroserviceNamespaceName, microserviceNamespaceName_);
              DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
              DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
              DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
            };
            EdasConfig() = default ;
            EdasConfig(const EdasConfig &) = default ;
            EdasConfig(EdasConfig &&) = default ;
            EdasConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EdasConfig() = default ;
            EdasConfig& operator=(const EdasConfig &) = default ;
            EdasConfig& operator=(EdasConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->edasAppId_ == nullptr
        && this->microserviceNamespace_ == nullptr && this->microserviceNamespaceId_ == nullptr && this->microserviceNamespaceName_ == nullptr && this->mseInstanceId_ == nullptr && this->registryType_ == nullptr
        && this->serviceName_ == nullptr; };
            // edasAppId Field Functions 
            bool hasEdasAppId() const { return this->edasAppId_ != nullptr;};
            void deleteEdasAppId() { this->edasAppId_ = nullptr;};
            inline string getEdasAppId() const { DARABONBA_PTR_GET_DEFAULT(edasAppId_, "") };
            inline EdasConfig& setEdasAppId(string edasAppId) { DARABONBA_PTR_SET_VALUE(edasAppId_, edasAppId) };


            // microserviceNamespace Field Functions 
            bool hasMicroserviceNamespace() const { return this->microserviceNamespace_ != nullptr;};
            void deleteMicroserviceNamespace() { this->microserviceNamespace_ = nullptr;};
            inline string getMicroserviceNamespace() const { DARABONBA_PTR_GET_DEFAULT(microserviceNamespace_, "") };
            inline EdasConfig& setMicroserviceNamespace(string microserviceNamespace) { DARABONBA_PTR_SET_VALUE(microserviceNamespace_, microserviceNamespace) };


            // microserviceNamespaceId Field Functions 
            bool hasMicroserviceNamespaceId() const { return this->microserviceNamespaceId_ != nullptr;};
            void deleteMicroserviceNamespaceId() { this->microserviceNamespaceId_ = nullptr;};
            inline string getMicroserviceNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(microserviceNamespaceId_, "") };
            inline EdasConfig& setMicroserviceNamespaceId(string microserviceNamespaceId) { DARABONBA_PTR_SET_VALUE(microserviceNamespaceId_, microserviceNamespaceId) };


            // microserviceNamespaceName Field Functions 
            bool hasMicroserviceNamespaceName() const { return this->microserviceNamespaceName_ != nullptr;};
            void deleteMicroserviceNamespaceName() { this->microserviceNamespaceName_ = nullptr;};
            inline string getMicroserviceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(microserviceNamespaceName_, "") };
            inline EdasConfig& setMicroserviceNamespaceName(string microserviceNamespaceName) { DARABONBA_PTR_SET_VALUE(microserviceNamespaceName_, microserviceNamespaceName) };


            // mseInstanceId Field Functions 
            bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
            void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
            inline string getMseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
            inline EdasConfig& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


            // registryType Field Functions 
            bool hasRegistryType() const { return this->registryType_ != nullptr;};
            void deleteRegistryType() { this->registryType_ = nullptr;};
            inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
            inline EdasConfig& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


            // serviceName Field Functions 
            bool hasServiceName() const { return this->serviceName_ != nullptr;};
            void deleteServiceName() { this->serviceName_ = nullptr;};
            inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
            inline EdasConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


          protected:
            // The EDAS application ID.
            shared_ptr<string> edasAppId_ {};
            // The ID of the microservices namespace in EDAS.
            shared_ptr<string> microserviceNamespace_ {};
            // The ID of the microservices namespace in EDAS.
            shared_ptr<string> microserviceNamespaceId_ {};
            // The name of the microservices namespace in EDAS.
            shared_ptr<string> microserviceNamespaceName_ {};
            // The MSE instance ID.
            shared_ptr<string> mseInstanceId_ {};
            // The registration type.
            shared_ptr<string> registryType_ {};
            // The service name.
            shared_ptr<string> serviceName_ {};
          };

          class DiscoveryConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DiscoveryConfig& obj) { 
              DARABONBA_PTR_TO_JSON(NacosConfig, nacosConfig_);
              DARABONBA_PTR_TO_JSON(RcType, rcType_);
              DARABONBA_PTR_TO_JSON(ZookeeperConfig, zookeeperConfig_);
            };
            friend void from_json(const Darabonba::Json& j, DiscoveryConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(NacosConfig, nacosConfig_);
              DARABONBA_PTR_FROM_JSON(RcType, rcType_);
              DARABONBA_PTR_FROM_JSON(ZookeeperConfig, zookeeperConfig_);
            };
            DiscoveryConfig() = default ;
            DiscoveryConfig(const DiscoveryConfig &) = default ;
            DiscoveryConfig(DiscoveryConfig &&) = default ;
            DiscoveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DiscoveryConfig() = default ;
            DiscoveryConfig& operator=(const DiscoveryConfig &) = default ;
            DiscoveryConfig& operator=(DiscoveryConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ZookeeperConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ZookeeperConfig& obj) { 
                DARABONBA_PTR_TO_JSON(ConnectString, connectString_);
                DARABONBA_PTR_TO_JSON(Namespace, namespace_);
                DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
              };
              friend void from_json(const Darabonba::Json& j, ZookeeperConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(ConnectString, connectString_);
                DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
                DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
              };
              ZookeeperConfig() = default ;
              ZookeeperConfig(const ZookeeperConfig &) = default ;
              ZookeeperConfig(ZookeeperConfig &&) = default ;
              ZookeeperConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ZookeeperConfig() = default ;
              ZookeeperConfig& operator=(const ZookeeperConfig &) = default ;
              ZookeeperConfig& operator=(ZookeeperConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->connectString_ == nullptr
        && this->namespace_ == nullptr && this->serviceName_ == nullptr; };
              // connectString Field Functions 
              bool hasConnectString() const { return this->connectString_ != nullptr;};
              void deleteConnectString() { this->connectString_ = nullptr;};
              inline string getConnectString() const { DARABONBA_PTR_GET_DEFAULT(connectString_, "") };
              inline ZookeeperConfig& setConnectString(string connectString) { DARABONBA_PTR_SET_VALUE(connectString_, connectString) };


              // namespace Field Functions 
              bool hasNamespace() const { return this->namespace_ != nullptr;};
              void deleteNamespace() { this->namespace_ = nullptr;};
              inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
              inline ZookeeperConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


              // serviceName Field Functions 
              bool hasServiceName() const { return this->serviceName_ != nullptr;};
              void deleteServiceName() { this->serviceName_ = nullptr;};
              inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
              inline ZookeeperConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


            protected:
              // The connection URL of the ZooKeeper server.
              shared_ptr<string> connectString_ {};
              // The namespace.
              shared_ptr<string> namespace_ {};
              // Service name
              shared_ptr<string> serviceName_ {};
            };

            class NacosConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NacosConfig& obj) { 
                DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
                DARABONBA_PTR_TO_JSON(AuthType, authType_);
                DARABONBA_PTR_TO_JSON(Clusters, clusters_);
                DARABONBA_PTR_TO_JSON(GroupName, groupName_);
                DARABONBA_PTR_TO_JSON(Namespace, namespace_);
                DARABONBA_PTR_TO_JSON(Password, password_);
                DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
                DARABONBA_PTR_TO_JSON(ServerAddress, serverAddress_);
                DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
                DARABONBA_PTR_TO_JSON(UserName, userName_);
              };
              friend void from_json(const Darabonba::Json& j, NacosConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
                DARABONBA_PTR_FROM_JSON(AuthType, authType_);
                DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
                DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
                DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
                DARABONBA_PTR_FROM_JSON(Password, password_);
                DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
                DARABONBA_PTR_FROM_JSON(ServerAddress, serverAddress_);
                DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
                DARABONBA_PTR_FROM_JSON(UserName, userName_);
              };
              NacosConfig() = default ;
              NacosConfig(const NacosConfig &) = default ;
              NacosConfig(NacosConfig &&) = default ;
              NacosConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NacosConfig() = default ;
              NacosConfig& operator=(const NacosConfig &) = default ;
              NacosConfig& operator=(NacosConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->authType_ == nullptr && this->clusters_ == nullptr && this->groupName_ == nullptr && this->namespace_ == nullptr && this->password_ == nullptr
        && this->secretKey_ == nullptr && this->serverAddress_ == nullptr && this->serviceName_ == nullptr && this->userName_ == nullptr; };
              // accessKey Field Functions 
              bool hasAccessKey() const { return this->accessKey_ != nullptr;};
              void deleteAccessKey() { this->accessKey_ = nullptr;};
              inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
              inline NacosConfig& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


              // authType Field Functions 
              bool hasAuthType() const { return this->authType_ != nullptr;};
              void deleteAuthType() { this->authType_ = nullptr;};
              inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
              inline NacosConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


              // clusters Field Functions 
              bool hasClusters() const { return this->clusters_ != nullptr;};
              void deleteClusters() { this->clusters_ = nullptr;};
              inline string getClusters() const { DARABONBA_PTR_GET_DEFAULT(clusters_, "") };
              inline NacosConfig& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


              // groupName Field Functions 
              bool hasGroupName() const { return this->groupName_ != nullptr;};
              void deleteGroupName() { this->groupName_ = nullptr;};
              inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
              inline NacosConfig& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


              // namespace Field Functions 
              bool hasNamespace() const { return this->namespace_ != nullptr;};
              void deleteNamespace() { this->namespace_ = nullptr;};
              inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
              inline NacosConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


              // password Field Functions 
              bool hasPassword() const { return this->password_ != nullptr;};
              void deletePassword() { this->password_ = nullptr;};
              inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
              inline NacosConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


              // secretKey Field Functions 
              bool hasSecretKey() const { return this->secretKey_ != nullptr;};
              void deleteSecretKey() { this->secretKey_ = nullptr;};
              inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
              inline NacosConfig& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


              // serverAddress Field Functions 
              bool hasServerAddress() const { return this->serverAddress_ != nullptr;};
              void deleteServerAddress() { this->serverAddress_ = nullptr;};
              inline string getServerAddress() const { DARABONBA_PTR_GET_DEFAULT(serverAddress_, "") };
              inline NacosConfig& setServerAddress(string serverAddress) { DARABONBA_PTR_SET_VALUE(serverAddress_, serverAddress) };


              // serviceName Field Functions 
              bool hasServiceName() const { return this->serviceName_ != nullptr;};
              void deleteServiceName() { this->serviceName_ = nullptr;};
              inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
              inline NacosConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


              // userName Field Functions 
              bool hasUserName() const { return this->userName_ != nullptr;};
              void deleteUserName() { this->userName_ = nullptr;};
              inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
              inline NacosConfig& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


            protected:
              // The AccessKey of the RAM user that has the resource management permissions on Microservices Engine (MSE).
              shared_ptr<string> accessKey_ {};
              // The authentication method.
              shared_ptr<string> authType_ {};
              // The name of the cluster to which the microservice belongs.
              shared_ptr<string> clusters_ {};
              // The name of the group to which the microservice that is registered with Nacos belongs.
              shared_ptr<string> groupName_ {};
              // The ID of the namespace where the microservice that is registered with Nacos resides.
              shared_ptr<string> namespace_ {};
              // The password.
              shared_ptr<string> password_ {};
              // The SecretKey of the RAM user that has the resource management permissions on MSE.
              shared_ptr<string> secretKey_ {};
              // The Nacos service address.
              shared_ptr<string> serverAddress_ {};
              // The microservice name.
              shared_ptr<string> serviceName_ {};
              // The username.
              shared_ptr<string> userName_ {};
            };

            virtual bool empty() const override { return this->nacosConfig_ == nullptr
        && this->rcType_ == nullptr && this->zookeeperConfig_ == nullptr; };
            // nacosConfig Field Functions 
            bool hasNacosConfig() const { return this->nacosConfig_ != nullptr;};
            void deleteNacosConfig() { this->nacosConfig_ = nullptr;};
            inline const DiscoveryConfig::NacosConfig & getNacosConfig() const { DARABONBA_PTR_GET_CONST(nacosConfig_, DiscoveryConfig::NacosConfig) };
            inline DiscoveryConfig::NacosConfig getNacosConfig() { DARABONBA_PTR_GET(nacosConfig_, DiscoveryConfig::NacosConfig) };
            inline DiscoveryConfig& setNacosConfig(const DiscoveryConfig::NacosConfig & nacosConfig) { DARABONBA_PTR_SET_VALUE(nacosConfig_, nacosConfig) };
            inline DiscoveryConfig& setNacosConfig(DiscoveryConfig::NacosConfig && nacosConfig) { DARABONBA_PTR_SET_RVALUE(nacosConfig_, nacosConfig) };


            // rcType Field Functions 
            bool hasRcType() const { return this->rcType_ != nullptr;};
            void deleteRcType() { this->rcType_ = nullptr;};
            inline string getRcType() const { DARABONBA_PTR_GET_DEFAULT(rcType_, "") };
            inline DiscoveryConfig& setRcType(string rcType) { DARABONBA_PTR_SET_VALUE(rcType_, rcType) };


            // zookeeperConfig Field Functions 
            bool hasZookeeperConfig() const { return this->zookeeperConfig_ != nullptr;};
            void deleteZookeeperConfig() { this->zookeeperConfig_ = nullptr;};
            inline const DiscoveryConfig::ZookeeperConfig & getZookeeperConfig() const { DARABONBA_PTR_GET_CONST(zookeeperConfig_, DiscoveryConfig::ZookeeperConfig) };
            inline DiscoveryConfig::ZookeeperConfig getZookeeperConfig() { DARABONBA_PTR_GET(zookeeperConfig_, DiscoveryConfig::ZookeeperConfig) };
            inline DiscoveryConfig& setZookeeperConfig(const DiscoveryConfig::ZookeeperConfig & zookeeperConfig) { DARABONBA_PTR_SET_VALUE(zookeeperConfig_, zookeeperConfig) };
            inline DiscoveryConfig& setZookeeperConfig(DiscoveryConfig::ZookeeperConfig && zookeeperConfig) { DARABONBA_PTR_SET_RVALUE(zookeeperConfig_, zookeeperConfig) };


          protected:
            // The Nacos configurations.
            shared_ptr<DiscoveryConfig::NacosConfig> nacosConfig_ {};
            // The registry type.
            shared_ptr<string> rcType_ {};
            // The ZooKeeper configuration.
            shared_ptr<DiscoveryConfig::ZookeeperConfig> zookeeperConfig_ {};
          };

          virtual bool empty() const override { return this->discoveryConfig_ == nullptr
        && this->edasConfig_ == nullptr && this->eventBridgeConfig_ == nullptr && this->functionComputeConfig_ == nullptr && this->httpTargetHostName_ == nullptr && this->mockConfig_ == nullptr
        && this->ossConfig_ == nullptr && this->serviceAddress_ == nullptr && this->serviceTimeout_ == nullptr && this->type_ == nullptr && this->vpcConfig_ == nullptr; };
          // discoveryConfig Field Functions 
          bool hasDiscoveryConfig() const { return this->discoveryConfig_ != nullptr;};
          void deleteDiscoveryConfig() { this->discoveryConfig_ = nullptr;};
          inline const BackendConfig::DiscoveryConfig & getDiscoveryConfig() const { DARABONBA_PTR_GET_CONST(discoveryConfig_, BackendConfig::DiscoveryConfig) };
          inline BackendConfig::DiscoveryConfig getDiscoveryConfig() { DARABONBA_PTR_GET(discoveryConfig_, BackendConfig::DiscoveryConfig) };
          inline BackendConfig& setDiscoveryConfig(const BackendConfig::DiscoveryConfig & discoveryConfig) { DARABONBA_PTR_SET_VALUE(discoveryConfig_, discoveryConfig) };
          inline BackendConfig& setDiscoveryConfig(BackendConfig::DiscoveryConfig && discoveryConfig) { DARABONBA_PTR_SET_RVALUE(discoveryConfig_, discoveryConfig) };


          // edasConfig Field Functions 
          bool hasEdasConfig() const { return this->edasConfig_ != nullptr;};
          void deleteEdasConfig() { this->edasConfig_ = nullptr;};
          inline const BackendConfig::EdasConfig & getEdasConfig() const { DARABONBA_PTR_GET_CONST(edasConfig_, BackendConfig::EdasConfig) };
          inline BackendConfig::EdasConfig getEdasConfig() { DARABONBA_PTR_GET(edasConfig_, BackendConfig::EdasConfig) };
          inline BackendConfig& setEdasConfig(const BackendConfig::EdasConfig & edasConfig) { DARABONBA_PTR_SET_VALUE(edasConfig_, edasConfig) };
          inline BackendConfig& setEdasConfig(BackendConfig::EdasConfig && edasConfig) { DARABONBA_PTR_SET_RVALUE(edasConfig_, edasConfig) };


          // eventBridgeConfig Field Functions 
          bool hasEventBridgeConfig() const { return this->eventBridgeConfig_ != nullptr;};
          void deleteEventBridgeConfig() { this->eventBridgeConfig_ = nullptr;};
          inline const BackendConfig::EventBridgeConfig & getEventBridgeConfig() const { DARABONBA_PTR_GET_CONST(eventBridgeConfig_, BackendConfig::EventBridgeConfig) };
          inline BackendConfig::EventBridgeConfig getEventBridgeConfig() { DARABONBA_PTR_GET(eventBridgeConfig_, BackendConfig::EventBridgeConfig) };
          inline BackendConfig& setEventBridgeConfig(const BackendConfig::EventBridgeConfig & eventBridgeConfig) { DARABONBA_PTR_SET_VALUE(eventBridgeConfig_, eventBridgeConfig) };
          inline BackendConfig& setEventBridgeConfig(BackendConfig::EventBridgeConfig && eventBridgeConfig) { DARABONBA_PTR_SET_RVALUE(eventBridgeConfig_, eventBridgeConfig) };


          // functionComputeConfig Field Functions 
          bool hasFunctionComputeConfig() const { return this->functionComputeConfig_ != nullptr;};
          void deleteFunctionComputeConfig() { this->functionComputeConfig_ = nullptr;};
          inline const BackendConfig::FunctionComputeConfig & getFunctionComputeConfig() const { DARABONBA_PTR_GET_CONST(functionComputeConfig_, BackendConfig::FunctionComputeConfig) };
          inline BackendConfig::FunctionComputeConfig getFunctionComputeConfig() { DARABONBA_PTR_GET(functionComputeConfig_, BackendConfig::FunctionComputeConfig) };
          inline BackendConfig& setFunctionComputeConfig(const BackendConfig::FunctionComputeConfig & functionComputeConfig) { DARABONBA_PTR_SET_VALUE(functionComputeConfig_, functionComputeConfig) };
          inline BackendConfig& setFunctionComputeConfig(BackendConfig::FunctionComputeConfig && functionComputeConfig) { DARABONBA_PTR_SET_RVALUE(functionComputeConfig_, functionComputeConfig) };


          // httpTargetHostName Field Functions 
          bool hasHttpTargetHostName() const { return this->httpTargetHostName_ != nullptr;};
          void deleteHttpTargetHostName() { this->httpTargetHostName_ = nullptr;};
          inline string getHttpTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(httpTargetHostName_, "") };
          inline BackendConfig& setHttpTargetHostName(string httpTargetHostName) { DARABONBA_PTR_SET_VALUE(httpTargetHostName_, httpTargetHostName) };


          // mockConfig Field Functions 
          bool hasMockConfig() const { return this->mockConfig_ != nullptr;};
          void deleteMockConfig() { this->mockConfig_ = nullptr;};
          inline const BackendConfig::MockConfig & getMockConfig() const { DARABONBA_PTR_GET_CONST(mockConfig_, BackendConfig::MockConfig) };
          inline BackendConfig::MockConfig getMockConfig() { DARABONBA_PTR_GET(mockConfig_, BackendConfig::MockConfig) };
          inline BackendConfig& setMockConfig(const BackendConfig::MockConfig & mockConfig) { DARABONBA_PTR_SET_VALUE(mockConfig_, mockConfig) };
          inline BackendConfig& setMockConfig(BackendConfig::MockConfig && mockConfig) { DARABONBA_PTR_SET_RVALUE(mockConfig_, mockConfig) };


          // ossConfig Field Functions 
          bool hasOssConfig() const { return this->ossConfig_ != nullptr;};
          void deleteOssConfig() { this->ossConfig_ = nullptr;};
          inline const BackendConfig::OssConfig & getOssConfig() const { DARABONBA_PTR_GET_CONST(ossConfig_, BackendConfig::OssConfig) };
          inline BackendConfig::OssConfig getOssConfig() { DARABONBA_PTR_GET(ossConfig_, BackendConfig::OssConfig) };
          inline BackendConfig& setOssConfig(const BackendConfig::OssConfig & ossConfig) { DARABONBA_PTR_SET_VALUE(ossConfig_, ossConfig) };
          inline BackendConfig& setOssConfig(BackendConfig::OssConfig && ossConfig) { DARABONBA_PTR_SET_RVALUE(ossConfig_, ossConfig) };


          // serviceAddress Field Functions 
          bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
          void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
          inline string getServiceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
          inline BackendConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


          // serviceTimeout Field Functions 
          bool hasServiceTimeout() const { return this->serviceTimeout_ != nullptr;};
          void deleteServiceTimeout() { this->serviceTimeout_ = nullptr;};
          inline int32_t getServiceTimeout() const { DARABONBA_PTR_GET_DEFAULT(serviceTimeout_, 0) };
          inline BackendConfig& setServiceTimeout(int32_t serviceTimeout) { DARABONBA_PTR_SET_VALUE(serviceTimeout_, serviceTimeout) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline BackendConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // vpcConfig Field Functions 
          bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
          void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
          inline const BackendConfig::VpcConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, BackendConfig::VpcConfig) };
          inline BackendConfig::VpcConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, BackendConfig::VpcConfig) };
          inline BackendConfig& setVpcConfig(const BackendConfig::VpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
          inline BackendConfig& setVpcConfig(BackendConfig::VpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


        protected:
          // The information about the backend service when the backend service is of the Service Discovery type.
          shared_ptr<BackendConfig::DiscoveryConfig> discoveryConfig_ {};
          // The EDAS configuration.
          shared_ptr<BackendConfig::EdasConfig> edasConfig_ {};
          // The information about the backend service whose type is EventBridge.
          shared_ptr<BackendConfig::EventBridgeConfig> eventBridgeConfig_ {};
          // The information about the backend service whose type is Function Compute.
          shared_ptr<BackendConfig::FunctionComputeConfig> functionComputeConfig_ {};
          // The host of the HTTP backend service.
          shared_ptr<string> httpTargetHostName_ {};
          // The information about the backend service when the backend service is of the Mock type.
          shared_ptr<BackendConfig::MockConfig> mockConfig_ {};
          // The information about the backend service whose type is Object Storage Service (OSS).
          shared_ptr<BackendConfig::OssConfig> ossConfig_ {};
          // The URL of the backend service.
          shared_ptr<string> serviceAddress_ {};
          // The timeout period of the backend service, in millisecond.
          shared_ptr<int32_t> serviceTimeout_ {};
          // The type of the backend service.
          shared_ptr<string> type_ {};
          // The information about the backend service when the backend service is of the VPC type.
          shared_ptr<BackendConfig::VpcConfig> vpcConfig_ {};
        };

        virtual bool empty() const override { return this->backendConfig_ == nullptr
        && this->backendModelId_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->stageModeId_ == nullptr
        && this->stageName_ == nullptr; };
        // backendConfig Field Functions 
        bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
        void deleteBackendConfig() { this->backendConfig_ = nullptr;};
        inline const BackendModels::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, BackendModels::BackendConfig) };
        inline BackendModels::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, BackendModels::BackendConfig) };
        inline BackendModels& setBackendConfig(const BackendModels::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
        inline BackendModels& setBackendConfig(BackendModels::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


        // backendModelId Field Functions 
        bool hasBackendModelId() const { return this->backendModelId_ != nullptr;};
        void deleteBackendModelId() { this->backendModelId_ = nullptr;};
        inline string getBackendModelId() const { DARABONBA_PTR_GET_DEFAULT(backendModelId_, "") };
        inline BackendModels& setBackendModelId(string backendModelId) { DARABONBA_PTR_SET_VALUE(backendModelId_, backendModelId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BackendModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BackendModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BackendModels& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // stageModeId Field Functions 
        bool hasStageModeId() const { return this->stageModeId_ != nullptr;};
        void deleteStageModeId() { this->stageModeId_ = nullptr;};
        inline string getStageModeId() const { DARABONBA_PTR_GET_DEFAULT(stageModeId_, "") };
        inline BackendModels& setStageModeId(string stageModeId) { DARABONBA_PTR_SET_VALUE(stageModeId_, stageModeId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline BackendModels& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The backend service configurations.
        shared_ptr<BackendModels::BackendConfig> backendConfig_ {};
        // The ID of the backend service in the environment.
        shared_ptr<string> backendModelId_ {};
        // The description of the backend service.
        shared_ptr<string> description_ {};
        // The time when the backend service was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the backend service was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the environment.
        shared_ptr<string> stageModeId_ {};
        // The environment name.
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->backendId_ == nullptr
        && this->backendModels_ == nullptr && this->backendName_ == nullptr && this->backendType_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr
        && this->modifiedTime_ == nullptr; };
      // backendId Field Functions 
      bool hasBackendId() const { return this->backendId_ != nullptr;};
      void deleteBackendId() { this->backendId_ = nullptr;};
      inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
      inline BackendInfo& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


      // backendModels Field Functions 
      bool hasBackendModels() const { return this->backendModels_ != nullptr;};
      void deleteBackendModels() { this->backendModels_ = nullptr;};
      inline const vector<BackendInfo::BackendModels> & getBackendModels() const { DARABONBA_PTR_GET_CONST(backendModels_, vector<BackendInfo::BackendModels>) };
      inline vector<BackendInfo::BackendModels> getBackendModels() { DARABONBA_PTR_GET(backendModels_, vector<BackendInfo::BackendModels>) };
      inline BackendInfo& setBackendModels(const vector<BackendInfo::BackendModels> & backendModels) { DARABONBA_PTR_SET_VALUE(backendModels_, backendModels) };
      inline BackendInfo& setBackendModels(vector<BackendInfo::BackendModels> && backendModels) { DARABONBA_PTR_SET_RVALUE(backendModels_, backendModels) };


      // backendName Field Functions 
      bool hasBackendName() const { return this->backendName_ != nullptr;};
      void deleteBackendName() { this->backendName_ = nullptr;};
      inline string getBackendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
      inline BackendInfo& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


      // backendType Field Functions 
      bool hasBackendType() const { return this->backendType_ != nullptr;};
      void deleteBackendType() { this->backendType_ = nullptr;};
      inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
      inline BackendInfo& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline BackendInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BackendInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline BackendInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    protected:
      // The ID of the backend service.
      shared_ptr<string> backendId_ {};
      // The configurations of the backend service in the environment.
      shared_ptr<vector<BackendInfo::BackendModels>> backendModels_ {};
      // The name of the backend service.
      shared_ptr<string> backendName_ {};
      // The type of the backend service.
      shared_ptr<string> backendType_ {};
      // The time when the backend service was created.
      shared_ptr<string> createdTime_ {};
      // The description of the backend service.
      shared_ptr<string> description_ {};
      // The time when the backend service was modified.
      shared_ptr<string> modifiedTime_ {};
    };

    virtual bool empty() const override { return this->backendInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // backendInfo Field Functions 
    bool hasBackendInfo() const { return this->backendInfo_ != nullptr;};
    void deleteBackendInfo() { this->backendInfo_ = nullptr;};
    inline const DescribeBackendInfoResponseBody::BackendInfo & getBackendInfo() const { DARABONBA_PTR_GET_CONST(backendInfo_, DescribeBackendInfoResponseBody::BackendInfo) };
    inline DescribeBackendInfoResponseBody::BackendInfo getBackendInfo() { DARABONBA_PTR_GET(backendInfo_, DescribeBackendInfoResponseBody::BackendInfo) };
    inline DescribeBackendInfoResponseBody& setBackendInfo(const DescribeBackendInfoResponseBody::BackendInfo & backendInfo) { DARABONBA_PTR_SET_VALUE(backendInfo_, backendInfo) };
    inline DescribeBackendInfoResponseBody& setBackendInfo(DescribeBackendInfoResponseBody::BackendInfo && backendInfo) { DARABONBA_PTR_SET_RVALUE(backendInfo_, backendInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackendInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the backend service.
    shared_ptr<DescribeBackendInfoResponseBody::BackendInfo> backendInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
