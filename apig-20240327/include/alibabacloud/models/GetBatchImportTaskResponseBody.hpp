// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHIMPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHIMPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetBatchImportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchImportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchImportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetBatchImportTaskResponseBody() = default ;
    GetBatchImportTaskResponseBody(const GetBatchImportTaskResponseBody &) = default ;
    GetBatchImportTaskResponseBody(GetBatchImportTaskResponseBody &&) = default ;
    GetBatchImportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchImportTaskResponseBody() = default ;
    GetBatchImportTaskResponseBody& operator=(const GetBatchImportTaskResponseBody &) = default ;
    GetBatchImportTaskResponseBody& operator=(GetBatchImportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(processedCount, processedCount_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(processedCount, processedCount_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(apiType, apiType_);
          DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
          DARABONBA_PTR_TO_JSON(dryRunResults, dryRunResults_);
          DARABONBA_PTR_TO_JSON(failureItems, failureItems_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(importRequest, importRequest_);
          DARABONBA_PTR_TO_JSON(successItems, successItems_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(apiType, apiType_);
          DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
          DARABONBA_PTR_FROM_JSON(dryRunResults, dryRunResults_);
          DARABONBA_PTR_FROM_JSON(failureItems, failureItems_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(importRequest, importRequest_);
          DARABONBA_PTR_FROM_JSON(successItems, successItems_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SuccessItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SuccessItems& obj) { 
            DARABONBA_PTR_TO_JSON(apiId, apiId_);
            DARABONBA_PTR_TO_JSON(apiName, apiName_);
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
          };
          friend void from_json(const Darabonba::Json& j, SuccessItems& obj) { 
            DARABONBA_PTR_FROM_JSON(apiId, apiId_);
            DARABONBA_PTR_FROM_JSON(apiName, apiName_);
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          };
          SuccessItems() = default ;
          SuccessItems(const SuccessItems &) = default ;
          SuccessItems(SuccessItems &&) = default ;
          SuccessItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SuccessItems() = default ;
          SuccessItems& operator=(const SuccessItems &) = default ;
          SuccessItems& operator=(SuccessItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->errorMessage_ == nullptr && this->fileName_ == nullptr; };
          // apiId Field Functions 
          bool hasApiId() const { return this->apiId_ != nullptr;};
          void deleteApiId() { this->apiId_ = nullptr;};
          inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
          inline SuccessItems& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


          // apiName Field Functions 
          bool hasApiName() const { return this->apiName_ != nullptr;};
          void deleteApiName() { this->apiName_ = nullptr;};
          inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
          inline SuccessItems& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline SuccessItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline SuccessItems& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        protected:
          shared_ptr<string> apiId_ {};
          shared_ptr<string> apiName_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> fileName_ {};
        };

        class ImportRequest : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImportRequest& obj) { 
            DARABONBA_PTR_TO_JSON(allowUpdate, allowUpdate_);
            DARABONBA_PTR_TO_JSON(apiType, apiType_);
            DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
            DARABONBA_PTR_TO_JSON(specFileUrl, specFileUrl_);
            DARABONBA_PTR_TO_JSON(specOssConfig, specOssConfig_);
            DARABONBA_PTR_TO_JSON(strategy, strategy_);
            DARABONBA_PTR_TO_JSON(withGatewayExtension, withGatewayExtension_);
          };
          friend void from_json(const Darabonba::Json& j, ImportRequest& obj) { 
            DARABONBA_PTR_FROM_JSON(allowUpdate, allowUpdate_);
            DARABONBA_PTR_FROM_JSON(apiType, apiType_);
            DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
            DARABONBA_PTR_FROM_JSON(specFileUrl, specFileUrl_);
            DARABONBA_PTR_FROM_JSON(specOssConfig, specOssConfig_);
            DARABONBA_PTR_FROM_JSON(strategy, strategy_);
            DARABONBA_PTR_FROM_JSON(withGatewayExtension, withGatewayExtension_);
          };
          ImportRequest() = default ;
          ImportRequest(const ImportRequest &) = default ;
          ImportRequest(ImportRequest &&) = default ;
          ImportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImportRequest() = default ;
          ImportRequest& operator=(const ImportRequest &) = default ;
          ImportRequest& operator=(ImportRequest &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SpecOssConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SpecOssConfig& obj) { 
              DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
              DARABONBA_PTR_TO_JSON(objectKey, objectKey_);
              DARABONBA_PTR_TO_JSON(regionId, regionId_);
            };
            friend void from_json(const Darabonba::Json& j, SpecOssConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
              DARABONBA_PTR_FROM_JSON(objectKey, objectKey_);
              DARABONBA_PTR_FROM_JSON(regionId, regionId_);
            };
            SpecOssConfig() = default ;
            SpecOssConfig(const SpecOssConfig &) = default ;
            SpecOssConfig(SpecOssConfig &&) = default ;
            SpecOssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SpecOssConfig() = default ;
            SpecOssConfig& operator=(const SpecOssConfig &) = default ;
            SpecOssConfig& operator=(SpecOssConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->objectKey_ == nullptr && this->regionId_ == nullptr; };
            // bucketName Field Functions 
            bool hasBucketName() const { return this->bucketName_ != nullptr;};
            void deleteBucketName() { this->bucketName_ = nullptr;};
            inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
            inline SpecOssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


            // objectKey Field Functions 
            bool hasObjectKey() const { return this->objectKey_ != nullptr;};
            void deleteObjectKey() { this->objectKey_ = nullptr;};
            inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
            inline SpecOssConfig& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline SpecOssConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          protected:
            shared_ptr<string> bucketName_ {};
            shared_ptr<string> objectKey_ {};
            shared_ptr<string> regionId_ {};
          };

          virtual bool empty() const override { return this->allowUpdate_ == nullptr
        && this->apiType_ == nullptr && this->dryRun_ == nullptr && this->gatewayId_ == nullptr && this->resourceGroupId_ == nullptr && this->specFileUrl_ == nullptr
        && this->specOssConfig_ == nullptr && this->strategy_ == nullptr && this->withGatewayExtension_ == nullptr; };
          // allowUpdate Field Functions 
          bool hasAllowUpdate() const { return this->allowUpdate_ != nullptr;};
          void deleteAllowUpdate() { this->allowUpdate_ = nullptr;};
          inline bool getAllowUpdate() const { DARABONBA_PTR_GET_DEFAULT(allowUpdate_, false) };
          inline ImportRequest& setAllowUpdate(bool allowUpdate) { DARABONBA_PTR_SET_VALUE(allowUpdate_, allowUpdate) };


          // apiType Field Functions 
          bool hasApiType() const { return this->apiType_ != nullptr;};
          void deleteApiType() { this->apiType_ = nullptr;};
          inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
          inline ImportRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


          // dryRun Field Functions 
          bool hasDryRun() const { return this->dryRun_ != nullptr;};
          void deleteDryRun() { this->dryRun_ = nullptr;};
          inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
          inline ImportRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline ImportRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline ImportRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


          // specFileUrl Field Functions 
          bool hasSpecFileUrl() const { return this->specFileUrl_ != nullptr;};
          void deleteSpecFileUrl() { this->specFileUrl_ = nullptr;};
          inline string getSpecFileUrl() const { DARABONBA_PTR_GET_DEFAULT(specFileUrl_, "") };
          inline ImportRequest& setSpecFileUrl(string specFileUrl) { DARABONBA_PTR_SET_VALUE(specFileUrl_, specFileUrl) };


          // specOssConfig Field Functions 
          bool hasSpecOssConfig() const { return this->specOssConfig_ != nullptr;};
          void deleteSpecOssConfig() { this->specOssConfig_ = nullptr;};
          inline const ImportRequest::SpecOssConfig & getSpecOssConfig() const { DARABONBA_PTR_GET_CONST(specOssConfig_, ImportRequest::SpecOssConfig) };
          inline ImportRequest::SpecOssConfig getSpecOssConfig() { DARABONBA_PTR_GET(specOssConfig_, ImportRequest::SpecOssConfig) };
          inline ImportRequest& setSpecOssConfig(const ImportRequest::SpecOssConfig & specOssConfig) { DARABONBA_PTR_SET_VALUE(specOssConfig_, specOssConfig) };
          inline ImportRequest& setSpecOssConfig(ImportRequest::SpecOssConfig && specOssConfig) { DARABONBA_PTR_SET_RVALUE(specOssConfig_, specOssConfig) };


          // strategy Field Functions 
          bool hasStrategy() const { return this->strategy_ != nullptr;};
          void deleteStrategy() { this->strategy_ = nullptr;};
          inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
          inline ImportRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


          // withGatewayExtension Field Functions 
          bool hasWithGatewayExtension() const { return this->withGatewayExtension_ != nullptr;};
          void deleteWithGatewayExtension() { this->withGatewayExtension_ = nullptr;};
          inline bool getWithGatewayExtension() const { DARABONBA_PTR_GET_DEFAULT(withGatewayExtension_, false) };
          inline ImportRequest& setWithGatewayExtension(bool withGatewayExtension) { DARABONBA_PTR_SET_VALUE(withGatewayExtension_, withGatewayExtension) };


        protected:
          shared_ptr<bool> allowUpdate_ {};
          shared_ptr<string> apiType_ {};
          shared_ptr<bool> dryRun_ {};
          shared_ptr<string> gatewayId_ {};
          shared_ptr<string> resourceGroupId_ {};
          shared_ptr<string> specFileUrl_ {};
          shared_ptr<ImportRequest::SpecOssConfig> specOssConfig_ {};
          shared_ptr<string> strategy_ {};
          shared_ptr<bool> withGatewayExtension_ {};
        };

        class FailureItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailureItems& obj) { 
            DARABONBA_PTR_TO_JSON(apiId, apiId_);
            DARABONBA_PTR_TO_JSON(apiName, apiName_);
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
          };
          friend void from_json(const Darabonba::Json& j, FailureItems& obj) { 
            DARABONBA_PTR_FROM_JSON(apiId, apiId_);
            DARABONBA_PTR_FROM_JSON(apiName, apiName_);
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          };
          FailureItems() = default ;
          FailureItems(const FailureItems &) = default ;
          FailureItems(FailureItems &&) = default ;
          FailureItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailureItems() = default ;
          FailureItems& operator=(const FailureItems &) = default ;
          FailureItems& operator=(FailureItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->errorMessage_ == nullptr && this->fileName_ == nullptr; };
          // apiId Field Functions 
          bool hasApiId() const { return this->apiId_ != nullptr;};
          void deleteApiId() { this->apiId_ = nullptr;};
          inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
          inline FailureItems& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


          // apiName Field Functions 
          bool hasApiName() const { return this->apiName_ != nullptr;};
          void deleteApiName() { this->apiName_ = nullptr;};
          inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
          inline FailureItems& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FailureItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline FailureItems& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        protected:
          shared_ptr<string> apiId_ {};
          shared_ptr<string> apiName_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> fileName_ {};
        };

        class DryRunResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DryRunResults& obj) { 
            DARABONBA_PTR_TO_JSON(apiName, apiName_);
            DARABONBA_PTR_TO_JSON(dryRunInfo, dryRunInfo_);
            DARABONBA_PTR_TO_JSON(error, error_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
          };
          friend void from_json(const Darabonba::Json& j, DryRunResults& obj) { 
            DARABONBA_PTR_FROM_JSON(apiName, apiName_);
            DARABONBA_PTR_FROM_JSON(dryRunInfo, dryRunInfo_);
            DARABONBA_PTR_FROM_JSON(error, error_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          };
          DryRunResults() = default ;
          DryRunResults(const DryRunResults &) = default ;
          DryRunResults(DryRunResults &&) = default ;
          DryRunResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DryRunResults() = default ;
          DryRunResults& operator=(const DryRunResults &) = default ;
          DryRunResults& operator=(DryRunResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DryRunInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DryRunInfo& obj) { 
              DARABONBA_PTR_TO_JSON(errorMessages, errorMessages_);
              DARABONBA_PTR_TO_JSON(existHttpApiInfo, existHttpApiInfo_);
              DARABONBA_PTR_TO_JSON(failureComponents, failureComponents_);
              DARABONBA_PTR_TO_JSON(failureOperations, failureOperations_);
              DARABONBA_PTR_TO_JSON(failureRoutes, failureRoutes_);
              DARABONBA_PTR_TO_JSON(successComponents, successComponents_);
              DARABONBA_PTR_TO_JSON(successOperations, successOperations_);
              DARABONBA_PTR_TO_JSON(successRoutes, successRoutes_);
              DARABONBA_PTR_TO_JSON(warningMessages, warningMessages_);
            };
            friend void from_json(const Darabonba::Json& j, DryRunInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(errorMessages, errorMessages_);
              DARABONBA_PTR_FROM_JSON(existHttpApiInfo, existHttpApiInfo_);
              DARABONBA_PTR_FROM_JSON(failureComponents, failureComponents_);
              DARABONBA_PTR_FROM_JSON(failureOperations, failureOperations_);
              DARABONBA_PTR_FROM_JSON(failureRoutes, failureRoutes_);
              DARABONBA_PTR_FROM_JSON(successComponents, successComponents_);
              DARABONBA_PTR_FROM_JSON(successOperations, successOperations_);
              DARABONBA_PTR_FROM_JSON(successRoutes, successRoutes_);
              DARABONBA_PTR_FROM_JSON(warningMessages, warningMessages_);
            };
            DryRunInfo() = default ;
            DryRunInfo(const DryRunInfo &) = default ;
            DryRunInfo(DryRunInfo &&) = default ;
            DryRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DryRunInfo() = default ;
            DryRunInfo& operator=(const DryRunInfo &) = default ;
            DryRunInfo& operator=(DryRunInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SuccessRoutes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SuccessRoutes& obj) { 
                DARABONBA_PTR_TO_JSON(action, action_);
                DARABONBA_PTR_TO_JSON(name, name_);
              };
              friend void from_json(const Darabonba::Json& j, SuccessRoutes& obj) { 
                DARABONBA_PTR_FROM_JSON(action, action_);
                DARABONBA_PTR_FROM_JSON(name, name_);
              };
              SuccessRoutes() = default ;
              SuccessRoutes(const SuccessRoutes &) = default ;
              SuccessRoutes(SuccessRoutes &&) = default ;
              SuccessRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SuccessRoutes() = default ;
              SuccessRoutes& operator=(const SuccessRoutes &) = default ;
              SuccessRoutes& operator=(SuccessRoutes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->action_ == nullptr
        && this->name_ == nullptr; };
              // action Field Functions 
              bool hasAction() const { return this->action_ != nullptr;};
              void deleteAction() { this->action_ = nullptr;};
              inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
              inline SuccessRoutes& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline SuccessRoutes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<string> action_ {};
              shared_ptr<string> name_ {};
            };

            class SuccessOperations : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SuccessOperations& obj) { 
                DARABONBA_PTR_TO_JSON(action, action_);
                DARABONBA_PTR_TO_JSON(method, method_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_PTR_TO_JSON(path, path_);
              };
              friend void from_json(const Darabonba::Json& j, SuccessOperations& obj) { 
                DARABONBA_PTR_FROM_JSON(action, action_);
                DARABONBA_PTR_FROM_JSON(method, method_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_PTR_FROM_JSON(path, path_);
              };
              SuccessOperations() = default ;
              SuccessOperations(const SuccessOperations &) = default ;
              SuccessOperations(SuccessOperations &&) = default ;
              SuccessOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SuccessOperations() = default ;
              SuccessOperations& operator=(const SuccessOperations &) = default ;
              SuccessOperations& operator=(SuccessOperations &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->action_ == nullptr
        && this->method_ == nullptr && this->name_ == nullptr && this->path_ == nullptr; };
              // action Field Functions 
              bool hasAction() const { return this->action_ != nullptr;};
              void deleteAction() { this->action_ = nullptr;};
              inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
              inline SuccessOperations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


              // method Field Functions 
              bool hasMethod() const { return this->method_ != nullptr;};
              void deleteMethod() { this->method_ = nullptr;};
              inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
              inline SuccessOperations& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline SuccessOperations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // path Field Functions 
              bool hasPath() const { return this->path_ != nullptr;};
              void deletePath() { this->path_ = nullptr;};
              inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
              inline SuccessOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


            protected:
              shared_ptr<string> action_ {};
              shared_ptr<string> method_ {};
              shared_ptr<string> name_ {};
              shared_ptr<string> path_ {};
            };

            class SuccessComponents : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SuccessComponents& obj) { 
                DARABONBA_PTR_TO_JSON(action, action_);
                DARABONBA_PTR_TO_JSON(name, name_);
              };
              friend void from_json(const Darabonba::Json& j, SuccessComponents& obj) { 
                DARABONBA_PTR_FROM_JSON(action, action_);
                DARABONBA_PTR_FROM_JSON(name, name_);
              };
              SuccessComponents() = default ;
              SuccessComponents(const SuccessComponents &) = default ;
              SuccessComponents(SuccessComponents &&) = default ;
              SuccessComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SuccessComponents() = default ;
              SuccessComponents& operator=(const SuccessComponents &) = default ;
              SuccessComponents& operator=(SuccessComponents &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->action_ == nullptr
        && this->name_ == nullptr; };
              // action Field Functions 
              bool hasAction() const { return this->action_ != nullptr;};
              void deleteAction() { this->action_ = nullptr;};
              inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
              inline SuccessComponents& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline SuccessComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<string> action_ {};
              shared_ptr<string> name_ {};
            };

            class FailureRoutes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const FailureRoutes& obj) { 
                DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
                DARABONBA_PTR_TO_JSON(name, name_);
              };
              friend void from_json(const Darabonba::Json& j, FailureRoutes& obj) { 
                DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
                DARABONBA_PTR_FROM_JSON(name, name_);
              };
              FailureRoutes() = default ;
              FailureRoutes(const FailureRoutes &) = default ;
              FailureRoutes(FailureRoutes &&) = default ;
              FailureRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~FailureRoutes() = default ;
              FailureRoutes& operator=(const FailureRoutes &) = default ;
              FailureRoutes& operator=(FailureRoutes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->name_ == nullptr; };
              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
              inline FailureRoutes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline FailureRoutes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<string> errorMessage_ {};
              shared_ptr<string> name_ {};
            };

            class FailureOperations : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const FailureOperations& obj) { 
                DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
                DARABONBA_PTR_TO_JSON(method, method_);
                DARABONBA_PTR_TO_JSON(path, path_);
              };
              friend void from_json(const Darabonba::Json& j, FailureOperations& obj) { 
                DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
                DARABONBA_PTR_FROM_JSON(method, method_);
                DARABONBA_PTR_FROM_JSON(path, path_);
              };
              FailureOperations() = default ;
              FailureOperations(const FailureOperations &) = default ;
              FailureOperations(FailureOperations &&) = default ;
              FailureOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~FailureOperations() = default ;
              FailureOperations& operator=(const FailureOperations &) = default ;
              FailureOperations& operator=(FailureOperations &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->method_ == nullptr && this->path_ == nullptr; };
              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
              inline FailureOperations& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


              // method Field Functions 
              bool hasMethod() const { return this->method_ != nullptr;};
              void deleteMethod() { this->method_ = nullptr;};
              inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
              inline FailureOperations& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


              // path Field Functions 
              bool hasPath() const { return this->path_ != nullptr;};
              void deletePath() { this->path_ = nullptr;};
              inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
              inline FailureOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


            protected:
              shared_ptr<string> errorMessage_ {};
              shared_ptr<string> method_ {};
              shared_ptr<string> path_ {};
            };

            class FailureComponents : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const FailureComponents& obj) { 
                DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
                DARABONBA_PTR_TO_JSON(name, name_);
              };
              friend void from_json(const Darabonba::Json& j, FailureComponents& obj) { 
                DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
                DARABONBA_PTR_FROM_JSON(name, name_);
              };
              FailureComponents() = default ;
              FailureComponents(const FailureComponents &) = default ;
              FailureComponents(FailureComponents &&) = default ;
              FailureComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~FailureComponents() = default ;
              FailureComponents& operator=(const FailureComponents &) = default ;
              FailureComponents& operator=(FailureComponents &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->name_ == nullptr; };
              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
              inline FailureComponents& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline FailureComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<string> errorMessage_ {};
              shared_ptr<string> name_ {};
            };

            class ExistHttpApiInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExistHttpApiInfo& obj) { 
                DARABONBA_PTR_TO_JSON(basePath, basePath_);
                DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
                DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_PTR_TO_JSON(type, type_);
                DARABONBA_PTR_TO_JSON(versionInfo, versionInfo_);
              };
              friend void from_json(const Darabonba::Json& j, ExistHttpApiInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(basePath, basePath_);
                DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
                DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_PTR_FROM_JSON(type, type_);
                DARABONBA_PTR_FROM_JSON(versionInfo, versionInfo_);
              };
              ExistHttpApiInfo() = default ;
              ExistHttpApiInfo(const ExistHttpApiInfo &) = default ;
              ExistHttpApiInfo(ExistHttpApiInfo &&) = default ;
              ExistHttpApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExistHttpApiInfo() = default ;
              ExistHttpApiInfo& operator=(const ExistHttpApiInfo &) = default ;
              ExistHttpApiInfo& operator=(ExistHttpApiInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class VersionInfo : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const VersionInfo& obj) { 
                  DARABONBA_PTR_TO_JSON(enable, enable_);
                  DARABONBA_PTR_TO_JSON(headerName, headerName_);
                  DARABONBA_PTR_TO_JSON(queryName, queryName_);
                  DARABONBA_PTR_TO_JSON(scheme, scheme_);
                  DARABONBA_PTR_TO_JSON(version, version_);
                };
                friend void from_json(const Darabonba::Json& j, VersionInfo& obj) { 
                  DARABONBA_PTR_FROM_JSON(enable, enable_);
                  DARABONBA_PTR_FROM_JSON(headerName, headerName_);
                  DARABONBA_PTR_FROM_JSON(queryName, queryName_);
                  DARABONBA_PTR_FROM_JSON(scheme, scheme_);
                  DARABONBA_PTR_FROM_JSON(version, version_);
                };
                VersionInfo() = default ;
                VersionInfo(const VersionInfo &) = default ;
                VersionInfo(VersionInfo &&) = default ;
                VersionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~VersionInfo() = default ;
                VersionInfo& operator=(const VersionInfo &) = default ;
                VersionInfo& operator=(VersionInfo &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->enable_ == nullptr
        && this->headerName_ == nullptr && this->queryName_ == nullptr && this->scheme_ == nullptr && this->version_ == nullptr; };
                // enable Field Functions 
                bool hasEnable() const { return this->enable_ != nullptr;};
                void deleteEnable() { this->enable_ = nullptr;};
                inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
                inline VersionInfo& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


                // headerName Field Functions 
                bool hasHeaderName() const { return this->headerName_ != nullptr;};
                void deleteHeaderName() { this->headerName_ = nullptr;};
                inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
                inline VersionInfo& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


                // queryName Field Functions 
                bool hasQueryName() const { return this->queryName_ != nullptr;};
                void deleteQueryName() { this->queryName_ = nullptr;};
                inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
                inline VersionInfo& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


                // scheme Field Functions 
                bool hasScheme() const { return this->scheme_ != nullptr;};
                void deleteScheme() { this->scheme_ = nullptr;};
                inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
                inline VersionInfo& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


                // version Field Functions 
                bool hasVersion() const { return this->version_ != nullptr;};
                void deleteVersion() { this->version_ = nullptr;};
                inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
                inline VersionInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


              protected:
                shared_ptr<bool> enable_ {};
                shared_ptr<string> headerName_ {};
                shared_ptr<string> queryName_ {};
                shared_ptr<string> scheme_ {};
                shared_ptr<string> version_ {};
              };

              virtual bool empty() const override { return this->basePath_ == nullptr
        && this->gatewayId_ == nullptr && this->httpApiId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->versionInfo_ == nullptr; };
              // basePath Field Functions 
              bool hasBasePath() const { return this->basePath_ != nullptr;};
              void deleteBasePath() { this->basePath_ = nullptr;};
              inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
              inline ExistHttpApiInfo& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


              // gatewayId Field Functions 
              bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
              void deleteGatewayId() { this->gatewayId_ = nullptr;};
              inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
              inline ExistHttpApiInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


              // httpApiId Field Functions 
              bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
              void deleteHttpApiId() { this->httpApiId_ = nullptr;};
              inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
              inline ExistHttpApiInfo& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline ExistHttpApiInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline ExistHttpApiInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // versionInfo Field Functions 
              bool hasVersionInfo() const { return this->versionInfo_ != nullptr;};
              void deleteVersionInfo() { this->versionInfo_ = nullptr;};
              inline const ExistHttpApiInfo::VersionInfo & getVersionInfo() const { DARABONBA_PTR_GET_CONST(versionInfo_, ExistHttpApiInfo::VersionInfo) };
              inline ExistHttpApiInfo::VersionInfo getVersionInfo() { DARABONBA_PTR_GET(versionInfo_, ExistHttpApiInfo::VersionInfo) };
              inline ExistHttpApiInfo& setVersionInfo(const ExistHttpApiInfo::VersionInfo & versionInfo) { DARABONBA_PTR_SET_VALUE(versionInfo_, versionInfo) };
              inline ExistHttpApiInfo& setVersionInfo(ExistHttpApiInfo::VersionInfo && versionInfo) { DARABONBA_PTR_SET_RVALUE(versionInfo_, versionInfo) };


            protected:
              shared_ptr<string> basePath_ {};
              shared_ptr<string> gatewayId_ {};
              shared_ptr<string> httpApiId_ {};
              shared_ptr<string> name_ {};
              shared_ptr<string> type_ {};
              shared_ptr<ExistHttpApiInfo::VersionInfo> versionInfo_ {};
            };

            virtual bool empty() const override { return this->errorMessages_ == nullptr
        && this->existHttpApiInfo_ == nullptr && this->failureComponents_ == nullptr && this->failureOperations_ == nullptr && this->failureRoutes_ == nullptr && this->successComponents_ == nullptr
        && this->successOperations_ == nullptr && this->successRoutes_ == nullptr && this->warningMessages_ == nullptr; };
            // errorMessages Field Functions 
            bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
            void deleteErrorMessages() { this->errorMessages_ = nullptr;};
            inline const vector<string> & getErrorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, vector<string>) };
            inline vector<string> getErrorMessages() { DARABONBA_PTR_GET(errorMessages_, vector<string>) };
            inline DryRunInfo& setErrorMessages(const vector<string> & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
            inline DryRunInfo& setErrorMessages(vector<string> && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


            // existHttpApiInfo Field Functions 
            bool hasExistHttpApiInfo() const { return this->existHttpApiInfo_ != nullptr;};
            void deleteExistHttpApiInfo() { this->existHttpApiInfo_ = nullptr;};
            inline const DryRunInfo::ExistHttpApiInfo & getExistHttpApiInfo() const { DARABONBA_PTR_GET_CONST(existHttpApiInfo_, DryRunInfo::ExistHttpApiInfo) };
            inline DryRunInfo::ExistHttpApiInfo getExistHttpApiInfo() { DARABONBA_PTR_GET(existHttpApiInfo_, DryRunInfo::ExistHttpApiInfo) };
            inline DryRunInfo& setExistHttpApiInfo(const DryRunInfo::ExistHttpApiInfo & existHttpApiInfo) { DARABONBA_PTR_SET_VALUE(existHttpApiInfo_, existHttpApiInfo) };
            inline DryRunInfo& setExistHttpApiInfo(DryRunInfo::ExistHttpApiInfo && existHttpApiInfo) { DARABONBA_PTR_SET_RVALUE(existHttpApiInfo_, existHttpApiInfo) };


            // failureComponents Field Functions 
            bool hasFailureComponents() const { return this->failureComponents_ != nullptr;};
            void deleteFailureComponents() { this->failureComponents_ = nullptr;};
            inline const vector<DryRunInfo::FailureComponents> & getFailureComponents() const { DARABONBA_PTR_GET_CONST(failureComponents_, vector<DryRunInfo::FailureComponents>) };
            inline vector<DryRunInfo::FailureComponents> getFailureComponents() { DARABONBA_PTR_GET(failureComponents_, vector<DryRunInfo::FailureComponents>) };
            inline DryRunInfo& setFailureComponents(const vector<DryRunInfo::FailureComponents> & failureComponents) { DARABONBA_PTR_SET_VALUE(failureComponents_, failureComponents) };
            inline DryRunInfo& setFailureComponents(vector<DryRunInfo::FailureComponents> && failureComponents) { DARABONBA_PTR_SET_RVALUE(failureComponents_, failureComponents) };


            // failureOperations Field Functions 
            bool hasFailureOperations() const { return this->failureOperations_ != nullptr;};
            void deleteFailureOperations() { this->failureOperations_ = nullptr;};
            inline const vector<DryRunInfo::FailureOperations> & getFailureOperations() const { DARABONBA_PTR_GET_CONST(failureOperations_, vector<DryRunInfo::FailureOperations>) };
            inline vector<DryRunInfo::FailureOperations> getFailureOperations() { DARABONBA_PTR_GET(failureOperations_, vector<DryRunInfo::FailureOperations>) };
            inline DryRunInfo& setFailureOperations(const vector<DryRunInfo::FailureOperations> & failureOperations) { DARABONBA_PTR_SET_VALUE(failureOperations_, failureOperations) };
            inline DryRunInfo& setFailureOperations(vector<DryRunInfo::FailureOperations> && failureOperations) { DARABONBA_PTR_SET_RVALUE(failureOperations_, failureOperations) };


            // failureRoutes Field Functions 
            bool hasFailureRoutes() const { return this->failureRoutes_ != nullptr;};
            void deleteFailureRoutes() { this->failureRoutes_ = nullptr;};
            inline const vector<DryRunInfo::FailureRoutes> & getFailureRoutes() const { DARABONBA_PTR_GET_CONST(failureRoutes_, vector<DryRunInfo::FailureRoutes>) };
            inline vector<DryRunInfo::FailureRoutes> getFailureRoutes() { DARABONBA_PTR_GET(failureRoutes_, vector<DryRunInfo::FailureRoutes>) };
            inline DryRunInfo& setFailureRoutes(const vector<DryRunInfo::FailureRoutes> & failureRoutes) { DARABONBA_PTR_SET_VALUE(failureRoutes_, failureRoutes) };
            inline DryRunInfo& setFailureRoutes(vector<DryRunInfo::FailureRoutes> && failureRoutes) { DARABONBA_PTR_SET_RVALUE(failureRoutes_, failureRoutes) };


            // successComponents Field Functions 
            bool hasSuccessComponents() const { return this->successComponents_ != nullptr;};
            void deleteSuccessComponents() { this->successComponents_ = nullptr;};
            inline const vector<DryRunInfo::SuccessComponents> & getSuccessComponents() const { DARABONBA_PTR_GET_CONST(successComponents_, vector<DryRunInfo::SuccessComponents>) };
            inline vector<DryRunInfo::SuccessComponents> getSuccessComponents() { DARABONBA_PTR_GET(successComponents_, vector<DryRunInfo::SuccessComponents>) };
            inline DryRunInfo& setSuccessComponents(const vector<DryRunInfo::SuccessComponents> & successComponents) { DARABONBA_PTR_SET_VALUE(successComponents_, successComponents) };
            inline DryRunInfo& setSuccessComponents(vector<DryRunInfo::SuccessComponents> && successComponents) { DARABONBA_PTR_SET_RVALUE(successComponents_, successComponents) };


            // successOperations Field Functions 
            bool hasSuccessOperations() const { return this->successOperations_ != nullptr;};
            void deleteSuccessOperations() { this->successOperations_ = nullptr;};
            inline const vector<DryRunInfo::SuccessOperations> & getSuccessOperations() const { DARABONBA_PTR_GET_CONST(successOperations_, vector<DryRunInfo::SuccessOperations>) };
            inline vector<DryRunInfo::SuccessOperations> getSuccessOperations() { DARABONBA_PTR_GET(successOperations_, vector<DryRunInfo::SuccessOperations>) };
            inline DryRunInfo& setSuccessOperations(const vector<DryRunInfo::SuccessOperations> & successOperations) { DARABONBA_PTR_SET_VALUE(successOperations_, successOperations) };
            inline DryRunInfo& setSuccessOperations(vector<DryRunInfo::SuccessOperations> && successOperations) { DARABONBA_PTR_SET_RVALUE(successOperations_, successOperations) };


            // successRoutes Field Functions 
            bool hasSuccessRoutes() const { return this->successRoutes_ != nullptr;};
            void deleteSuccessRoutes() { this->successRoutes_ = nullptr;};
            inline const vector<DryRunInfo::SuccessRoutes> & getSuccessRoutes() const { DARABONBA_PTR_GET_CONST(successRoutes_, vector<DryRunInfo::SuccessRoutes>) };
            inline vector<DryRunInfo::SuccessRoutes> getSuccessRoutes() { DARABONBA_PTR_GET(successRoutes_, vector<DryRunInfo::SuccessRoutes>) };
            inline DryRunInfo& setSuccessRoutes(const vector<DryRunInfo::SuccessRoutes> & successRoutes) { DARABONBA_PTR_SET_VALUE(successRoutes_, successRoutes) };
            inline DryRunInfo& setSuccessRoutes(vector<DryRunInfo::SuccessRoutes> && successRoutes) { DARABONBA_PTR_SET_RVALUE(successRoutes_, successRoutes) };


            // warningMessages Field Functions 
            bool hasWarningMessages() const { return this->warningMessages_ != nullptr;};
            void deleteWarningMessages() { this->warningMessages_ = nullptr;};
            inline const vector<string> & getWarningMessages() const { DARABONBA_PTR_GET_CONST(warningMessages_, vector<string>) };
            inline vector<string> getWarningMessages() { DARABONBA_PTR_GET(warningMessages_, vector<string>) };
            inline DryRunInfo& setWarningMessages(const vector<string> & warningMessages) { DARABONBA_PTR_SET_VALUE(warningMessages_, warningMessages) };
            inline DryRunInfo& setWarningMessages(vector<string> && warningMessages) { DARABONBA_PTR_SET_RVALUE(warningMessages_, warningMessages) };


          protected:
            shared_ptr<vector<string>> errorMessages_ {};
            shared_ptr<DryRunInfo::ExistHttpApiInfo> existHttpApiInfo_ {};
            shared_ptr<vector<DryRunInfo::FailureComponents>> failureComponents_ {};
            shared_ptr<vector<DryRunInfo::FailureOperations>> failureOperations_ {};
            shared_ptr<vector<DryRunInfo::FailureRoutes>> failureRoutes_ {};
            shared_ptr<vector<DryRunInfo::SuccessComponents>> successComponents_ {};
            shared_ptr<vector<DryRunInfo::SuccessOperations>> successOperations_ {};
            shared_ptr<vector<DryRunInfo::SuccessRoutes>> successRoutes_ {};
            shared_ptr<vector<string>> warningMessages_ {};
          };

          virtual bool empty() const override { return this->apiName_ == nullptr
        && this->dryRunInfo_ == nullptr && this->error_ == nullptr && this->fileName_ == nullptr; };
          // apiName Field Functions 
          bool hasApiName() const { return this->apiName_ != nullptr;};
          void deleteApiName() { this->apiName_ = nullptr;};
          inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
          inline DryRunResults& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


          // dryRunInfo Field Functions 
          bool hasDryRunInfo() const { return this->dryRunInfo_ != nullptr;};
          void deleteDryRunInfo() { this->dryRunInfo_ = nullptr;};
          inline const DryRunResults::DryRunInfo & getDryRunInfo() const { DARABONBA_PTR_GET_CONST(dryRunInfo_, DryRunResults::DryRunInfo) };
          inline DryRunResults::DryRunInfo getDryRunInfo() { DARABONBA_PTR_GET(dryRunInfo_, DryRunResults::DryRunInfo) };
          inline DryRunResults& setDryRunInfo(const DryRunResults::DryRunInfo & dryRunInfo) { DARABONBA_PTR_SET_VALUE(dryRunInfo_, dryRunInfo) };
          inline DryRunResults& setDryRunInfo(DryRunResults::DryRunInfo && dryRunInfo) { DARABONBA_PTR_SET_RVALUE(dryRunInfo_, dryRunInfo) };


          // error Field Functions 
          bool hasError() const { return this->error_ != nullptr;};
          void deleteError() { this->error_ = nullptr;};
          inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
          inline DryRunResults& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline DryRunResults& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        protected:
          shared_ptr<string> apiName_ {};
          shared_ptr<DryRunResults::DryRunInfo> dryRunInfo_ {};
          shared_ptr<string> error_ {};
          shared_ptr<string> fileName_ {};
        };

        virtual bool empty() const override { return this->apiType_ == nullptr
        && this->dryRun_ == nullptr && this->dryRunResults_ == nullptr && this->failureItems_ == nullptr && this->gatewayId_ == nullptr && this->importRequest_ == nullptr
        && this->successItems_ == nullptr; };
        // apiType Field Functions 
        bool hasApiType() const { return this->apiType_ != nullptr;};
        void deleteApiType() { this->apiType_ = nullptr;};
        inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
        inline Result& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


        // dryRun Field Functions 
        bool hasDryRun() const { return this->dryRun_ != nullptr;};
        void deleteDryRun() { this->dryRun_ = nullptr;};
        inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
        inline Result& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


        // dryRunResults Field Functions 
        bool hasDryRunResults() const { return this->dryRunResults_ != nullptr;};
        void deleteDryRunResults() { this->dryRunResults_ = nullptr;};
        inline const vector<Result::DryRunResults> & getDryRunResults() const { DARABONBA_PTR_GET_CONST(dryRunResults_, vector<Result::DryRunResults>) };
        inline vector<Result::DryRunResults> getDryRunResults() { DARABONBA_PTR_GET(dryRunResults_, vector<Result::DryRunResults>) };
        inline Result& setDryRunResults(const vector<Result::DryRunResults> & dryRunResults) { DARABONBA_PTR_SET_VALUE(dryRunResults_, dryRunResults) };
        inline Result& setDryRunResults(vector<Result::DryRunResults> && dryRunResults) { DARABONBA_PTR_SET_RVALUE(dryRunResults_, dryRunResults) };


        // failureItems Field Functions 
        bool hasFailureItems() const { return this->failureItems_ != nullptr;};
        void deleteFailureItems() { this->failureItems_ = nullptr;};
        inline const vector<Result::FailureItems> & getFailureItems() const { DARABONBA_PTR_GET_CONST(failureItems_, vector<Result::FailureItems>) };
        inline vector<Result::FailureItems> getFailureItems() { DARABONBA_PTR_GET(failureItems_, vector<Result::FailureItems>) };
        inline Result& setFailureItems(const vector<Result::FailureItems> & failureItems) { DARABONBA_PTR_SET_VALUE(failureItems_, failureItems) };
        inline Result& setFailureItems(vector<Result::FailureItems> && failureItems) { DARABONBA_PTR_SET_RVALUE(failureItems_, failureItems) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Result& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // importRequest Field Functions 
        bool hasImportRequest() const { return this->importRequest_ != nullptr;};
        void deleteImportRequest() { this->importRequest_ = nullptr;};
        inline const Result::ImportRequest & getImportRequest() const { DARABONBA_PTR_GET_CONST(importRequest_, Result::ImportRequest) };
        inline Result::ImportRequest getImportRequest() { DARABONBA_PTR_GET(importRequest_, Result::ImportRequest) };
        inline Result& setImportRequest(const Result::ImportRequest & importRequest) { DARABONBA_PTR_SET_VALUE(importRequest_, importRequest) };
        inline Result& setImportRequest(Result::ImportRequest && importRequest) { DARABONBA_PTR_SET_RVALUE(importRequest_, importRequest) };


        // successItems Field Functions 
        bool hasSuccessItems() const { return this->successItems_ != nullptr;};
        void deleteSuccessItems() { this->successItems_ = nullptr;};
        inline const vector<Result::SuccessItems> & getSuccessItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<Result::SuccessItems>) };
        inline vector<Result::SuccessItems> getSuccessItems() { DARABONBA_PTR_GET(successItems_, vector<Result::SuccessItems>) };
        inline Result& setSuccessItems(const vector<Result::SuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
        inline Result& setSuccessItems(vector<Result::SuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


      protected:
        shared_ptr<string> apiType_ {};
        shared_ptr<bool> dryRun_ {};
        shared_ptr<vector<Result::DryRunResults>> dryRunResults_ {};
        shared_ptr<vector<Result::FailureItems>> failureItems_ {};
        shared_ptr<string> gatewayId_ {};
        shared_ptr<Result::ImportRequest> importRequest_ {};
        shared_ptr<vector<Result::SuccessItems>> successItems_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorMessage_ == nullptr && this->processedCount_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // processedCount Field Functions 
      bool hasProcessedCount() const { return this->processedCount_ != nullptr;};
      void deleteProcessedCount() { this->processedCount_ = nullptr;};
      inline int32_t getProcessedCount() const { DARABONBA_PTR_GET_DEFAULT(processedCount_, 0) };
      inline Data& setProcessedCount(int32_t processedCount) { DARABONBA_PTR_SET_VALUE(processedCount_, processedCount) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<int32_t> processedCount_ {};
      shared_ptr<Data::Result> result_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchImportTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBatchImportTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBatchImportTaskResponseBody::Data) };
    inline GetBatchImportTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBatchImportTaskResponseBody::Data) };
    inline GetBatchImportTaskResponseBody& setData(const GetBatchImportTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBatchImportTaskResponseBody& setData(GetBatchImportTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBatchImportTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchImportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBatchImportTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
