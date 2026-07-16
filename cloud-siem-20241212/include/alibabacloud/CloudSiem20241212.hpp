// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDSIEM20241212_HPP_
#define ALIBABACLOUD_CLOUDSIEM20241212_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudSiem20241212Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudSiem20241212.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Checks for available version upgrades.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class that includes configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CheckUpgradeItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUpgradeItemResponse
       */
      Models::CheckUpgradeItemResponse checkUpgradeItemWithOptions(const Models::CheckUpgradeItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks for available version upgrades.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class that includes configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CheckUpgradeItemRequest
       * @return CheckUpgradeItemResponse
       */
      Models::CheckUpgradeItemResponse checkUpgradeItem(const Models::CheckUpgradeItemRequest &request);

      /**
       * @summary Creates an auto-dispose configuration.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. Refer to the helper class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for configuration examples.
       *
       * @param request CreateAutoDisposeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoDisposeConfigResponse
       */
      Models::CreateAutoDisposeConfigResponse createAutoDisposeConfigWithOptions(const Models::CreateAutoDisposeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an auto-dispose configuration.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. Refer to the helper class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for configuration examples.
       *
       * @param request CreateAutoDisposeConfigRequest
       * @return CreateAutoDisposeConfigResponse
       */
      Models::CreateAutoDisposeConfigResponse createAutoDisposeConfig(const Models::CreateAutoDisposeConfigRequest &request);

      /**
       * @summary Creates a data ingestion policy.
       *
       * @description The frequency and timing of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request CreateDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataIngestionResponse
       */
      Models::CreateDataIngestionResponse createDataIngestionWithOptions(const Models::CreateDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data ingestion policy.
       *
       * @description The frequency and timing of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request CreateDataIngestionRequest
       * @return CreateDataIngestionResponse
       */
      Models::CreateDataIngestionResponse createDataIngestion(const Models::CreateDataIngestionRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSetResponse
       */
      Models::CreateDataSetResponse createDataSetWithOptions(const Models::CreateDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDataSetRequest
       * @return CreateDataSetResponse
       */
      Models::CreateDataSetResponse createDataSet(const Models::CreateDataSetRequest &request);

      /**
       * @summary Creates a data source.
       *
       * @description The JsonConfig input parameter is a complex JSON object. For a configuration example, see the supporting tool class in the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source.
       *
       * @description The JsonConfig input parameter is a complex JSON object. For a configuration example, see the supporting tool class in the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary Creates a detection rule.
       *
       * @param request CreateDetectionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDetectionRuleResponse
       */
      Models::CreateDetectionRuleResponse createDetectionRuleWithOptions(const Models::CreateDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a detection rule.
       *
       * @param request CreateDetectionRuleRequest
       * @return CreateDetectionRuleResponse
       */
      Models::CreateDetectionRuleResponse createDetectionRule(const Models::CreateDetectionRuleRequest &request);

      /**
       * @summary Creates an export task.
       *
       * @param request CreateExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExportTaskResponse
       */
      Models::CreateExportTaskResponse createExportTaskWithOptions(const Models::CreateExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export task.
       *
       * @param request CreateExportTaskRequest
       * @return CreateExportTaskResponse
       */
      Models::CreateExportTaskResponse createExportTask(const Models::CreateExportTaskRequest &request);

      /**
       * @summary Configure client-side storage restrictions.
       *
       * @description The JsonConfig input parameter uses a complex JSON structure. A supporting tool class is provided to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogStoreResponse
       */
      Models::CreateLogStoreResponse createLogStoreWithOptions(const Models::CreateLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure client-side storage restrictions.
       *
       * @description The JsonConfig input parameter uses a complex JSON structure. A supporting tool class is provided to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateLogStoreRequest
       * @return CreateLogStoreResponse
       */
      Models::CreateLogStoreResponse createLogStore(const Models::CreateLogStoreRequest &request);

      /**
       * @summary Creates a normalization rule.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq CreateNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNormalizationRuleResponse
       */
      Models::CreateNormalizationRuleResponse createNormalizationRuleWithOptions(const Models::CreateNormalizationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a normalization rule.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateNormalizationRuleRequest
       * @return CreateNormalizationRuleResponse
       */
      Models::CreateNormalizationRuleResponse createNormalizationRule(const Models::CreateNormalizationRuleRequest &request);

      /**
       * @summary Creates a data source.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateNormalizationSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNormalizationSchemaResponse
       */
      Models::CreateNormalizationSchemaResponse createNormalizationSchemaWithOptions(const Models::CreateNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateNormalizationSchemaRequest
       * @return CreateNormalizationSchemaResponse
       */
      Models::CreateNormalizationSchemaResponse createNormalizationSchema(const Models::CreateNormalizationSchemaRequest &request);

      /**
       * @summary Creates a product.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a product.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @summary Creates an automatic response rule.
       *
       * @description Some parameters require complex JSON configurations. We provide a helper class with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateResponseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResponseRuleResponse
       */
      Models::CreateResponseRuleResponse createResponseRuleWithOptions(const Models::CreateResponseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic response rule.
       *
       * @description Some parameters require complex JSON configurations. We provide a helper class with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request CreateResponseRuleRequest
       * @return CreateResponseRuleResponse
       */
      Models::CreateResponseRuleResponse createResponseRule(const Models::CreateResponseRuleRequest &request);

      /**
       * @summary Creates a vendor.
       *
       * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
       *
       * @param request CreateVendorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVendorResponse
       */
      Models::CreateVendorResponse createVendorWithOptions(const Models::CreateVendorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vendor.
       *
       * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
       *
       * @param request CreateVendorRequest
       * @return CreateVendorResponse
       */
      Models::CreateVendorResponse createVendor(const Models::CreateVendorRequest &request);

      /**
       * @summary Deletes a data ingestion policy.
       *
       * @description Notifications are sent only between 08:00 and 20:00. Each user can receive a maximum of two notifications per day.
       *
       * @param request DeleteDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataIngestionResponse
       */
      Models::DeleteDataIngestionResponse deleteDataIngestionWithOptions(const Models::DeleteDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data ingestion policy.
       *
       * @description Notifications are sent only between 08:00 and 20:00. Each user can receive a maximum of two notifications per day.
       *
       * @param request DeleteDataIngestionRequest
       * @return DeleteDataIngestionResponse
       */
      Models::DeleteDataIngestionResponse deleteDataIngestion(const Models::DeleteDataIngestionRequest &request);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSetWithOptions(const Models::DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteDataSetRequest
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSet(const Models::DeleteDataSetRequest &request);

      /**
       * @summary Deletes dataset records.
       *
       * @param request DeleteDataSetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSetRecordResponse
       */
      Models::DeleteDataSetRecordResponse deleteDataSetRecordWithOptions(const Models::DeleteDataSetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes dataset records.
       *
       * @param request DeleteDataSetRecordRequest
       * @return DeleteDataSetRecordResponse
       */
      Models::DeleteDataSetRecordResponse deleteDataSetRecord(const Models::DeleteDataSetRecordRequest &request);

      /**
       * @summary Deletes a data source.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Deletes a detection rule.
       *
       * @param request DeleteDetectionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDetectionRuleResponse
       */
      Models::DeleteDetectionRuleResponse deleteDetectionRuleWithOptions(const Models::DeleteDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a detection rule.
       *
       * @param request DeleteDetectionRuleRequest
       * @return DeleteDetectionRuleResponse
       */
      Models::DeleteDetectionRuleResponse deleteDetectionRule(const Models::DeleteDetectionRuleRequest &request);

      /**
       * @summary Deletes a Logstore.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class with configuration examples is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogStoreResponse
       */
      Models::DeleteLogStoreResponse deleteLogStoreWithOptions(const Models::DeleteLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Logstore.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class with configuration examples is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteLogStoreRequest
       * @return DeleteLogStoreResponse
       */
      Models::DeleteLogStoreResponse deleteLogStore(const Models::DeleteLogStoreRequest &request);

      /**
       * @summary Deletes a normalization rule.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNormalizationRuleResponse
       */
      Models::DeleteNormalizationRuleResponse deleteNormalizationRuleWithOptions(const Models::DeleteNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a normalization rule.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteNormalizationRuleRequest
       * @return DeleteNormalizationRuleResponse
       */
      Models::DeleteNormalizationRuleResponse deleteNormalizationRule(const Models::DeleteNormalizationRuleRequest &request);

      /**
       * @summary Deletes a normalization rule version.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteNormalizationRuleVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNormalizationRuleVersionResponse
       */
      Models::DeleteNormalizationRuleVersionResponse deleteNormalizationRuleVersionWithOptions(const Models::DeleteNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a normalization rule version.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteNormalizationRuleVersionRequest
       * @return DeleteNormalizationRuleVersionResponse
       */
      Models::DeleteNormalizationRuleVersionResponse deleteNormalizationRuleVersion(const Models::DeleteNormalizationRuleVersionRequest &request);

      /**
       * @summary Deletes a normalization schema.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteNormalizationSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNormalizationSchemaResponse
       */
      Models::DeleteNormalizationSchemaResponse deleteNormalizationSchemaWithOptions(const Models::DeleteNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a normalization schema.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteNormalizationSchemaRequest
       * @return DeleteNormalizationSchemaResponse
       */
      Models::DeleteNormalizationSchemaResponse deleteNormalizationSchema(const Models::DeleteNormalizationSchemaRequest &request);

      /**
       * @summary Deletes a product.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProductWithOptions(const Models::DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a product.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request DeleteProductRequest
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProduct(const Models::DeleteProductRequest &request);

      /**
       * @summary Deletes an automatic response rule.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request DeleteResponseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResponseRuleResponse
       */
      Models::DeleteResponseRuleResponse deleteResponseRuleWithOptions(const Models::DeleteResponseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic response rule.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request DeleteResponseRuleRequest
       * @return DeleteResponseRuleResponse
       */
      Models::DeleteResponseRuleResponse deleteResponseRule(const Models::DeleteResponseRuleRequest &request);

      /**
       * @summary Deletes a vendor.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
       *
       * @param request DeleteVendorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVendorResponse
       */
      Models::DeleteVendorResponse deleteVendorWithOptions(const Models::DeleteVendorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a vendor.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
       *
       * @param request DeleteVendorRequest
       * @return DeleteVendorResponse
       */
      Models::DeleteVendorResponse deleteVendor(const Models::DeleteVendorRequest &request);

      /**
       * @summary Disables a data ingestion policy.
       *
       * @description The frequency and time of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request DisableDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDataIngestionResponse
       */
      Models::DisableDataIngestionResponse disableDataIngestionWithOptions(const Models::DisableDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a data ingestion policy.
       *
       * @description The frequency and time of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request DisableDataIngestionRequest
       * @return DisableDataIngestionResponse
       */
      Models::DisableDataIngestionResponse disableDataIngestion(const Models::DisableDataIngestionRequest &request);

      /**
       * @summary Enables the data ingestion policy.
       *
       * @description Notification frequency is limited to a maximum of two per user per day. Notifications are sent only between 08:00 and 20:00.
       *
       * @param request EnableDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDataIngestionResponse
       */
      Models::EnableDataIngestionResponse enableDataIngestionWithOptions(const Models::EnableDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the data ingestion policy.
       *
       * @description Notification frequency is limited to a maximum of two per user per day. Notifications are sent only between 08:00 and 20:00.
       *
       * @param request EnableDataIngestionRequest
       * @return EnableDataIngestionResponse
       */
      Models::EnableDataIngestionResponse enableDataIngestion(const Models::EnableDataIngestionRequest &request);

      /**
       * @summary Manually handles alerts. Batch operations are supported.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ExecuteAutoDisposeRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAutoDisposeRecordsResponse
       */
      Models::ExecuteAutoDisposeRecordsResponse executeAutoDisposeRecordsWithOptions(const Models::ExecuteAutoDisposeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually handles alerts. Batch operations are supported.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ExecuteAutoDisposeRecordsRequest
       * @return ExecuteAutoDisposeRecordsResponse
       */
      Models::ExecuteAutoDisposeRecordsResponse executeAutoDisposeRecords(const Models::ExecuteAutoDisposeRecordsRequest &request);

      /**
       * @summary Executes a data query.
       *
       * @description The input parameter JsonConfig is a complex JSON Configurations. A utility class is provided to help with specific configuration examples. Refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ExecuteLogQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteLogQueryResponse
       */
      Models::ExecuteLogQueryResponse executeLogQueryWithOptions(const Models::ExecuteLogQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a data query.
       *
       * @description The input parameter JsonConfig is a complex JSON Configurations. A utility class is provided to help with specific configuration examples. Refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ExecuteLogQueryRequest
       * @return ExecuteLogQueryResponse
       */
      Models::ExecuteLogQueryResponse executeLogQuery(const Models::ExecuteLogQueryRequest &request);

      /**
       * @summary Performs a version upgrade.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ExecuteUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteUpgradeResponse
       */
      Models::ExecuteUpgradeResponse executeUpgradeWithOptions(const Models::ExecuteUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a version upgrade.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ExecuteUpgradeRequest
       * @return ExecuteUpgradeResponse
       */
      Models::ExecuteUpgradeResponse executeUpgrade(const Models::ExecuteUpgradeRequest &request);

      /**
       * @summary Retrieves the details of an alert.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertResponse
       */
      Models::GetAlertResponse getAlertWithOptions(const Models::GetAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an alert.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetAlertRequest
       * @return GetAlertResponse
       */
      Models::GetAlertResponse getAlert(const Models::GetAlertRequest &request);

      /**
       * @summary Retrieves the automatic response configuration.
       *
       * @description The `JsonConfig` input parameter uses a complex JSON structure. Refer to the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for a helper utility and configuration examples.
       *
       * @param request GetAutoDisposeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoDisposeConfigResponse
       */
      Models::GetAutoDisposeConfigResponse getAutoDisposeConfigWithOptions(const Models::GetAutoDisposeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the automatic response configuration.
       *
       * @description The `JsonConfig` input parameter uses a complex JSON structure. Refer to the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for a helper utility and configuration examples.
       *
       * @param request GetAutoDisposeConfigRequest
       * @return GetAutoDisposeConfigResponse
       */
      Models::GetAutoDisposeConfigResponse getAutoDisposeConfig(const Models::GetAutoDisposeConfigRequest &request);

      /**
       * @summary Retrieves the details of a batch data ingestion task.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetDataBatchIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataBatchIngestionResponse
       */
      Models::GetDataBatchIngestionResponse getDataBatchIngestionWithOptions(const Models::GetDataBatchIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a batch data ingestion task.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetDataBatchIngestionRequest
       * @return GetDataBatchIngestionResponse
       */
      Models::GetDataBatchIngestionResponse getDataBatchIngestion(const Models::GetDataBatchIngestionRequest &request);

      /**
       * @summary Retrieves the details of user logs in log management.
       *
       * @param request GetDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataStorageResponse
       */
      Models::GetDataStorageResponse getDataStorageWithOptions(const Models::GetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of user logs in log management.
       *
       * @param request GetDataStorageRequest
       * @return GetDataStorageResponse
       */
      Models::GetDataStorageResponse getDataStorage(const Models::GetDataStorageRequest &request);

      /**
       * @summary Retrieves the count of detection rules.
       *
       * @param request GetDetectionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetectionStatisticResponse
       */
      Models::GetDetectionStatisticResponse getDetectionStatisticWithOptions(const Models::GetDetectionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the count of detection rules.
       *
       * @param request GetDetectionStatisticRequest
       * @return GetDetectionStatisticResponse
       */
      Models::GetDetectionStatisticResponse getDetectionStatistic(const Models::GetDetectionStatisticRequest &request);

      /**
       * @summary Retrieves the progress of an export task.
       *
       * @param request GetExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExportTaskResponse
       */
      Models::GetExportTaskResponse getExportTaskWithOptions(const Models::GetExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the progress of an export task.
       *
       * @param request GetExportTaskRequest
       * @return GetExportTaskResponse
       */
      Models::GetExportTaskResponse getExportTask(const Models::GetExportTaskRequest &request);

      /**
       * @summary Retrieves the details of an event.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetIncidentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIncidentResponse
       */
      Models::GetIncidentResponse getIncidentWithOptions(const Models::GetIncidentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an event.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetIncidentRequest
       * @return GetIncidentResponse
       */
      Models::GetIncidentResponse getIncident(const Models::GetIncidentRequest &request);

      /**
       * @summary Retrieves a log ticket.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetLogTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogTicketResponse
       */
      Models::GetLogTicketResponse getLogTicketWithOptions(const Models::GetLogTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a log ticket.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetLogTicketRequest
       * @return GetLogTicketResponse
       */
      Models::GetLogTicketResponse getLogTicket(const Models::GetLogTicketRequest &request);

      /**
       * @summary Retrieves normalization rule information.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNormalizationRuleResponse
       */
      Models::GetNormalizationRuleResponse getNormalizationRuleWithOptions(const Models::GetNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves normalization rule information.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetNormalizationRuleRequest
       * @return GetNormalizationRuleResponse
       */
      Models::GetNormalizationRuleResponse getNormalizationRule(const Models::GetNormalizationRuleRequest &request);

      /**
       * @summary Retrieves information about a normalization rule version.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetNormalizationRuleVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNormalizationRuleVersionResponse
       */
      Models::GetNormalizationRuleVersionResponse getNormalizationRuleVersionWithOptions(const Models::GetNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a normalization rule version.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetNormalizationRuleVersionRequest
       * @return GetNormalizationRuleVersionResponse
       */
      Models::GetNormalizationRuleVersionResponse getNormalizationRuleVersion(const Models::GetNormalizationRuleVersionRequest &request);

      /**
       * @summary Retrieves a normalization schema.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration string. A supporting tool class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetNormalizationSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNormalizationSchemaResponse
       */
      Models::GetNormalizationSchemaResponse getNormalizationSchemaWithOptions(const Models::GetNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a normalization schema.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration string. A supporting tool class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetNormalizationSchemaRequest
       * @return GetNormalizationSchemaResponse
       */
      Models::GetNormalizationSchemaResponse getNormalizationSchema(const Models::GetNormalizationSchemaRequest &request);

      /**
       * @summary Retrieves the count of automated response rules.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
       *
       * @param request GetResponseRuleStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResponseRuleStatisticResponse
       */
      Models::GetResponseRuleStatisticResponse getResponseRuleStatisticWithOptions(const Models::GetResponseRuleStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the count of automated response rules.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
       *
       * @param request GetResponseRuleStatisticRequest
       * @return GetResponseRuleStatisticResponse
       */
      Models::GetResponseRuleStatisticResponse getResponseRuleStatistic(const Models::GetResponseRuleStatisticRequest &request);

      /**
       * @summary Retrieves user information.
       *
       * @description The JsonConfig request parameter is a complex JSON object. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserConfigResponse
       */
      Models::GetUserConfigResponse getUserConfigWithOptions(const Models::GetUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves user information.
       *
       * @description The JsonConfig request parameter is a complex JSON object. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetUserConfigRequest
       * @return GetUserConfigResponse
       */
      Models::GetUserConfigResponse getUserConfig(const Models::GetUserConfigRequest &request);

      /**
       * @summary Retrieves a list of alerts.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class with configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertsResponse
       */
      Models::ListAlertsResponse listAlertsWithOptions(const Models::ListAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of alerts.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class with configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListAlertsRequest
       * @return ListAlertsResponse
       */
      Models::ListAlertsResponse listAlerts(const Models::ListAlertsRequest &request);

      /**
       * @summary Get AI-analyzed entity list
       *
       * @description Each user can receive up to two notifications daily, but only between 08:00 and 20:00.
       *
       * @param tmpReq ListAutoDisposeEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoDisposeEntitiesResponse
       */
      Models::ListAutoDisposeEntitiesResponse listAutoDisposeEntitiesWithOptions(const Models::ListAutoDisposeEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get AI-analyzed entity list
       *
       * @description Each user can receive up to two notifications daily, but only between 08:00 and 20:00.
       *
       * @param request ListAutoDisposeEntitiesRequest
       * @return ListAutoDisposeEntitiesResponse
       */
      Models::ListAutoDisposeEntitiesResponse listAutoDisposeEntities(const Models::ListAutoDisposeEntitiesRequest &request);

      /**
       * @summary Queries collectors by paging.
       *
       * @param tmpReq ListDataConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataConnectorsResponse
       */
      Models::ListDataConnectorsResponse listDataConnectorsWithOptions(const Models::ListDataConnectorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries collectors by paging.
       *
       * @param request ListDataConnectorsRequest
       * @return ListDataConnectorsResponse
       */
      Models::ListDataConnectorsResponse listDataConnectors(const Models::ListDataConnectorsRequest &request);

      /**
       * @summary Queries data ingestion templates.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
       *
       * @param request ListDataIngestionTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataIngestionTemplatesResponse
       */
      Models::ListDataIngestionTemplatesResponse listDataIngestionTemplatesWithOptions(const Models::ListDataIngestionTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data ingestion templates.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
       *
       * @param request ListDataIngestionTemplatesRequest
       * @return ListDataIngestionTemplatesResponse
       */
      Models::ListDataIngestionTemplatesResponse listDataIngestionTemplates(const Models::ListDataIngestionTemplatesRequest &request);

      /**
       * @summary Retrieves a list of data access policies.
       *
       * @description Each user receives up to two notifications per day, sent only between 08:00 and 20:00.
       *
       * @param tmpReq ListDataIngestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataIngestionsResponse
       */
      Models::ListDataIngestionsResponse listDataIngestionsWithOptions(const Models::ListDataIngestionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data access policies.
       *
       * @description Each user receives up to two notifications per day, sent only between 08:00 and 20:00.
       *
       * @param request ListDataIngestionsRequest
       * @return ListDataIngestionsResponse
       */
      Models::ListDataIngestionsResponse listDataIngestions(const Models::ListDataIngestionsRequest &request);

      /**
       * @summary Retrieves a list of dataset records.
       *
       * @param request ListDataSetRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetRecordsResponse
       */
      Models::ListDataSetRecordsResponse listDataSetRecordsWithOptions(const Models::ListDataSetRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of dataset records.
       *
       * @param request ListDataSetRecordsRequest
       * @return ListDataSetRecordsResponse
       */
      Models::ListDataSetRecordsResponse listDataSetRecords(const Models::ListDataSetRecordsRequest &request);

      /**
       * @summary Retrieves a list of datasets.
       *
       * @param tmpReq ListDataSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetsResponse
       */
      Models::ListDataSetsResponse listDataSetsWithOptions(const Models::ListDataSetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of datasets.
       *
       * @param request ListDataSetsRequest
       * @return ListDataSetsResponse
       */
      Models::ListDataSetsResponse listDataSets(const Models::ListDataSetsRequest &request);

      /**
       * @summary Queries data source templates.
       *
       * @description Notifications are limited by frequency and time. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param tmpReq ListDataSourceTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTemplatesResponse
       */
      Models::ListDataSourceTemplatesResponse listDataSourceTemplatesWithOptions(const Models::ListDataSourceTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data source templates.
       *
       * @description Notifications are limited by frequency and time. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request ListDataSourceTemplatesRequest
       * @return ListDataSourceTemplatesResponse
       */
      Models::ListDataSourceTemplatesResponse listDataSourceTemplates(const Models::ListDataSourceTemplatesRequest &request);

      /**
       * @summary Lists data sources.
       *
       * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day, and only between 08:00 and 20:00.
       *
       * @param tmpReq ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists data sources.
       *
       * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day, and only between 08:00 and 20:00.
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary Retrieves a list of detection rules.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
       *
       * @param tmpReq ListDetectionRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDetectionRulesResponse
       */
      Models::ListDetectionRulesResponse listDetectionRulesWithOptions(const Models::ListDetectionRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of detection rules.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
       *
       * @param request ListDetectionRulesRequest
       * @return ListDetectionRulesResponse
       */
      Models::ListDetectionRulesResponse listDetectionRules(const Models::ListDetectionRulesRequest &request);

      /**
       * @summary Retrieves a list of events.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
       *
       * @param tmpReq ListIncidentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIncidentsResponse
       */
      Models::ListIncidentsResponse listIncidentsWithOptions(const Models::ListIncidentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of events.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
       *
       * @param request ListIncidentsRequest
       * @return ListIncidentsResponse
       */
      Models::ListIncidentsResponse listIncidents(const Models::ListIncidentsRequest &request);

      /**
       * @summary Lists log projects.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListLogProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogProjectsResponse
       */
      Models::ListLogProjectsResponse listLogProjectsWithOptions(const Models::ListLogProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists log projects.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListLogProjectsRequest
       * @return ListLogProjectsResponse
       */
      Models::ListLogProjectsResponse listLogProjects(const Models::ListLogProjectsRequest &request);

      /**
       * @summary Retrieves all regions.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListLogRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogRegionsResponse
       */
      Models::ListLogRegionsResponse listLogRegionsWithOptions(const Models::ListLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all regions.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListLogRegionsRequest
       * @return ListLogRegionsResponse
       */
      Models::ListLogRegionsResponse listLogRegions(const Models::ListLogRegionsRequest &request);

      /**
       * @summary Retrieves a list of Logstores.
       *
       * @description The notification frequency is limited. Each user can receive up to two notifications per day between 08:00 and 20:00. No notifications are sent outside this time frame.
       *
       * @param request ListLogStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogStoresResponse
       */
      Models::ListLogStoresResponse listLogStoresWithOptions(const Models::ListLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Logstores.
       *
       * @description The notification frequency is limited. Each user can receive up to two notifications per day between 08:00 and 20:00. No notifications are sent outside this time frame.
       *
       * @param request ListLogStoresRequest
       * @return ListLogStoresResponse
       */
      Models::ListLogStoresResponse listLogStores(const Models::ListLogStoresRequest &request);

      /**
       * @summary Lists normalization categories.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request ListNormalizationCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationCategoriesResponse
       */
      Models::ListNormalizationCategoriesResponse listNormalizationCategoriesWithOptions(const Models::ListNormalizationCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists normalization categories.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request ListNormalizationCategoriesRequest
       * @return ListNormalizationCategoriesResponse
       */
      Models::ListNormalizationCategoriesResponse listNormalizationCategories(const Models::ListNormalizationCategoriesRequest &request);

      /**
       * @summary Retrieves a list of normalization fields.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationFieldsResponse
       */
      Models::ListNormalizationFieldsResponse listNormalizationFieldsWithOptions(const Models::ListNormalizationFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of normalization fields.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationFieldsRequest
       * @return ListNormalizationFieldsResponse
       */
      Models::ListNormalizationFieldsResponse listNormalizationFields(const Models::ListNormalizationFieldsRequest &request);

      /**
       * @summary Lists the security capabilities of normalization rules.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A helper tool class is provided with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq ListNormalizationRuleCapacitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationRuleCapacitiesResponse
       */
      Models::ListNormalizationRuleCapacitiesResponse listNormalizationRuleCapacitiesWithOptions(const Models::ListNormalizationRuleCapacitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the security capabilities of normalization rules.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A helper tool class is provided with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationRuleCapacitiesRequest
       * @return ListNormalizationRuleCapacitiesResponse
       */
      Models::ListNormalizationRuleCapacitiesResponse listNormalizationRuleCapacities(const Models::ListNormalizationRuleCapacitiesRequest &request);

      /**
       * @summary Queries a list of normalization rule versions.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationRuleVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationRuleVersionsResponse
       */
      Models::ListNormalizationRuleVersionsResponse listNormalizationRuleVersionsWithOptions(const Models::ListNormalizationRuleVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of normalization rule versions.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationRuleVersionsRequest
       * @return ListNormalizationRuleVersionsResponse
       */
      Models::ListNormalizationRuleVersionsResponse listNormalizationRuleVersions(const Models::ListNormalizationRuleVersionsRequest &request);

      /**
       * @summary Retrieves a list of normalization rules.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
       *
       * @param tmpReq ListNormalizationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationRulesResponse
       */
      Models::ListNormalizationRulesResponse listNormalizationRulesWithOptions(const Models::ListNormalizationRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of normalization rules.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
       *
       * @param request ListNormalizationRulesRequest
       * @return ListNormalizationRulesResponse
       */
      Models::ListNormalizationRulesResponse listNormalizationRules(const Models::ListNormalizationRulesRequest &request);

      /**
       * @summary Retrieves a list of normalization schemas.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class with specific configuration examples is provided. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationSchemasResponse
       */
      Models::ListNormalizationSchemasResponse listNormalizationSchemasWithOptions(const Models::ListNormalizationSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of normalization schemas.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class with specific configuration examples is provided. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationSchemasRequest
       * @return ListNormalizationSchemasResponse
       */
      Models::ListNormalizationSchemasResponse listNormalizationSchemas(const Models::ListNormalizationSchemasRequest &request);

      /**
       * @summary Retrieves a list of security domains.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationSecurityDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationSecurityDomainsResponse
       */
      Models::ListNormalizationSecurityDomainsResponse listNormalizationSecurityDomainsWithOptions(const Models::ListNormalizationSecurityDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of security domains.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListNormalizationSecurityDomainsRequest
       * @return ListNormalizationSecurityDomainsResponse
       */
      Models::ListNormalizationSecurityDomainsResponse listNormalizationSecurityDomains(const Models::ListNormalizationSecurityDomainsRequest &request);

      /**
       * @summary Retrieves a list of products.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class is provided that contains configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of products.
       *
       * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class is provided that contains configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Retrieves a list of query views.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListQueryViewsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueryViewsResponse
       */
      Models::ListQueryViewsResponse listQueryViewsWithOptions(const Models::ListQueryViewsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of query views.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListQueryViewsRequest
       * @return ListQueryViewsResponse
       */
      Models::ListQueryViewsResponse listQueryViews(const Models::ListQueryViewsRequest &request);

      /**
       * @summary Retrieves the field list of automated response rules.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
       *
       * @param request ListResponseRuleFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResponseRuleFieldsResponse
       */
      Models::ListResponseRuleFieldsResponse listResponseRuleFieldsWithOptions(const Models::ListResponseRuleFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the field list of automated response rules.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
       *
       * @param request ListResponseRuleFieldsRequest
       * @return ListResponseRuleFieldsResponse
       */
      Models::ListResponseRuleFieldsResponse listResponseRuleFields(const Models::ListResponseRuleFieldsRequest &request);

      /**
       * @summary Paginated query of auto-response rules
       *
       * @description Each user can receive up to two notifications per day between 08:00 and 20:00.
       *
       * @param request ListResponseRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResponseRulesResponse
       */
      Models::ListResponseRulesResponse listResponseRulesWithOptions(const Models::ListResponseRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginated query of auto-response rules
       *
       * @description Each user can receive up to two notifications per day between 08:00 and 20:00.
       *
       * @param request ListResponseRulesRequest
       * @return ListResponseRulesResponse
       */
      Models::ListResponseRulesResponse listResponseRules(const Models::ListResponseRulesRequest &request);

      /**
       * @summary Queries a list of tags.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary Retrieves a list of traffic statistics.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq ListTrafficStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficStatisticsResponse
       */
      Models::ListTrafficStatisticsResponse listTrafficStatisticsWithOptions(const Models::ListTrafficStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of traffic statistics.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListTrafficStatisticsRequest
       * @return ListTrafficStatisticsResponse
       */
      Models::ListTrafficStatisticsResponse listTrafficStatistics(const Models::ListTrafficStatisticsRequest &request);

      /**
       * @summary Retrieves a list of upgrade items.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples for this configuration. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListUpgradeItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUpgradeItemsResponse
       */
      Models::ListUpgradeItemsResponse listUpgradeItemsWithOptions(const Models::ListUpgradeItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of upgrade items.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples for this configuration. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ListUpgradeItemsRequest
       * @return ListUpgradeItemsResponse
       */
      Models::ListUpgradeItemsResponse listUpgradeItems(const Models::ListUpgradeItemsRequest &request);

      /**
       * @summary Retrieves a list of vendors.
       *
       * @description The frequency and time of notifications are limited. Each user can receive a maximum of two notifications per day, which are sent only between 08:00 and 20:00.
       *
       * @param tmpReq ListVendorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVendorsResponse
       */
      Models::ListVendorsResponse listVendorsWithOptions(const Models::ListVendorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of vendors.
       *
       * @description The frequency and time of notifications are limited. Each user can receive a maximum of two notifications per day, which are sent only between 08:00 and 20:00.
       *
       * @param request ListVendorsRequest
       * @return ListVendorsResponse
       */
      Models::ListVendorsResponse listVendors(const Models::ListVendorsRequest &request);

      /**
       * @summary Refreshes a data source.
       *
       * @description There are limits on the frequency and time of notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time frame.
       *
       * @param request RefreshDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDataSourceResponse
       */
      Models::RefreshDataSourceResponse refreshDataSourceWithOptions(const Models::RefreshDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes a data source.
       *
       * @description There are limits on the frequency and time of notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time frame.
       *
       * @param request RefreshDataSourceRequest
       * @return RefreshDataSourceResponse
       */
      Models::RefreshDataSourceResponse refreshDataSource(const Models::RefreshDataSourceRequest &request);

      /**
       * @summary Resets the log storage for a user.
       *
       * @param request ResetDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDataStorageResponse
       */
      Models::ResetDataStorageResponse resetDataStorageWithOptions(const Models::ResetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the log storage for a user.
       *
       * @param request ResetDataStorageRequest
       * @return ResetDataStorageResponse
       */
      Models::ResetDataStorageResponse resetDataStorage(const Models::ResetDataStorageRequest &request);

      /**
       * @summary Sets the default version of a normalization rule.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
       *
       * @param request SetDefaultNormalizationRuleVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultNormalizationRuleVersionResponse
       */
      Models::SetDefaultNormalizationRuleVersionResponse setDefaultNormalizationRuleVersionWithOptions(const Models::SetDefaultNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the default version of a normalization rule.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
       *
       * @param request SetDefaultNormalizationRuleVersionRequest
       * @return SetDefaultNormalizationRuleVersionResponse
       */
      Models::SetDefaultNormalizationRuleVersionResponse setDefaultNormalizationRuleVersion(const Models::SetDefaultNormalizationRuleVersionRequest &request);

      /**
       * @summary Updates an alert.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
       *
       * @param request UpdateAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertResponse
       */
      Models::UpdateAlertResponse updateAlertWithOptions(const Models::UpdateAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
       *
       * @param request UpdateAlertRequest
       * @return UpdateAlertResponse
       */
      Models::UpdateAlertResponse updateAlert(const Models::UpdateAlertRequest &request);

      /**
       * @summary Updates the auto-dispose configuration.
       *
       * @description The `JsonConfig` parameter is a complex JSON configuration. See the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for helper utility classes and configuration examples.
       *
       * @param request UpdateAutoDisposeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoDisposeConfigResponse
       */
      Models::UpdateAutoDisposeConfigResponse updateAutoDisposeConfigWithOptions(const Models::UpdateAutoDisposeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the auto-dispose configuration.
       *
       * @description The `JsonConfig` parameter is a complex JSON configuration. See the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for helper utility classes and configuration examples.
       *
       * @param request UpdateAutoDisposeConfigRequest
       * @return UpdateAutoDisposeConfigResponse
       */
      Models::UpdateAutoDisposeConfigResponse updateAutoDisposeConfig(const Models::UpdateAutoDisposeConfigRequest &request);

      /**
       * @summary Updates an automatic alert analysis record.
       *
       * @description The AutoDecisionEntityList parameter is a JSON-formatted string. A helper class is available to simplify its creation. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateAutoDisposeRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoDisposeRecordResponse
       */
      Models::UpdateAutoDisposeRecordResponse updateAutoDisposeRecordWithOptions(const Models::UpdateAutoDisposeRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an automatic alert analysis record.
       *
       * @description The AutoDecisionEntityList parameter is a JSON-formatted string. A helper class is available to simplify its creation. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateAutoDisposeRecordRequest
       * @return UpdateAutoDisposeRecordResponse
       */
      Models::UpdateAutoDisposeRecordResponse updateAutoDisposeRecord(const Models::UpdateAutoDisposeRecordRequest &request);

      /**
       * @summary Updates a batch data ingestion task.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided to help you. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq UpdateDataBatchIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataBatchIngestionResponse
       */
      Models::UpdateDataBatchIngestionResponse updateDataBatchIngestionWithOptions(const Models::UpdateDataBatchIngestionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a batch data ingestion task.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided to help you. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateDataBatchIngestionRequest
       * @return UpdateDataBatchIngestionResponse
       */
      Models::UpdateDataBatchIngestionResponse updateDataBatchIngestion(const Models::UpdateDataBatchIngestionRequest &request);

      /**
       * @summary Updates a collector.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user can receive a maximum of two notifications per day between 08:00 and 20:00 (UTC+8). No notifications are sent outside this time range.
       *
       * @param request UpdateDataConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataConnectorResponse
       */
      Models::UpdateDataConnectorResponse updateDataConnectorWithOptions(const Models::UpdateDataConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a collector.
       *
       * @description Notifications are subject to frequency and time restrictions.
       * Each user can receive a maximum of two notifications per day between 08:00 and 20:00 (UTC+8). No notifications are sent outside this time range.
       *
       * @param request UpdateDataConnectorRequest
       * @return UpdateDataConnectorResponse
       */
      Models::UpdateDataConnectorResponse updateDataConnector(const Models::UpdateDataConnectorRequest &request);

      /**
       * @summary Updates a data ingestion policy.
       *
       * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day between 08:00 and 20:00.
       *
       * @param request UpdateDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataIngestionResponse
       */
      Models::UpdateDataIngestionResponse updateDataIngestionWithOptions(const Models::UpdateDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data ingestion policy.
       *
       * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day between 08:00 and 20:00.
       *
       * @param request UpdateDataIngestionRequest
       * @return UpdateDataIngestionResponse
       */
      Models::UpdateDataIngestionResponse updateDataIngestion(const Models::UpdateDataIngestionRequest &request);

      /**
       * @summary Updates a data ingestion template.
       *
       * @description Frequency and time limits apply to notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time period.
       *
       * @param request UpdateDataIngestionTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataIngestionTemplateResponse
       */
      Models::UpdateDataIngestionTemplateResponse updateDataIngestionTemplateWithOptions(const Models::UpdateDataIngestionTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data ingestion template.
       *
       * @description Frequency and time limits apply to notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time period.
       *
       * @param request UpdateDataIngestionTemplateRequest
       * @return UpdateDataIngestionTemplateResponse
       */
      Models::UpdateDataIngestionTemplateResponse updateDataIngestionTemplate(const Models::UpdateDataIngestionTemplateRequest &request);

      /**
       * @summary Updates a dataset.
       *
       * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time range.
       *
       * @param request UpdateDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSetResponse
       */
      Models::UpdateDataSetResponse updateDataSetWithOptions(const Models::UpdateDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dataset.
       *
       * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time range.
       *
       * @param request UpdateDataSetRequest
       * @return UpdateDataSetResponse
       */
      Models::UpdateDataSetResponse updateDataSet(const Models::UpdateDataSetRequest &request);

      /**
       * @summary Updates dataset records.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request UpdateDataSetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSetRecordResponse
       */
      Models::UpdateDataSetRecordResponse updateDataSetRecordWithOptions(const Models::UpdateDataSetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates dataset records.
       *
       * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
       *
       * @param request UpdateDataSetRecordRequest
       * @return UpdateDataSetRecordResponse
       */
      Models::UpdateDataSetRecordResponse updateDataSetRecord(const Models::UpdateDataSetRecordRequest &request);

      /**
       * @summary Updates a data source.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data source.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary Modifies a data source template.
       *
       * @description The JsonConfig input parameter accepts a complex JSON configuration. To simplify this process, a supporting tool class is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq UpdateDataSourceTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceTemplateResponse
       */
      Models::UpdateDataSourceTemplateResponse updateDataSourceTemplateWithOptions(const Models::UpdateDataSourceTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data source template.
       *
       * @description The JsonConfig input parameter accepts a complex JSON configuration. To simplify this process, a supporting tool class is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateDataSourceTemplateRequest
       * @return UpdateDataSourceTemplateResponse
       */
      Models::UpdateDataSourceTemplateResponse updateDataSourceTemplate(const Models::UpdateDataSourceTemplateRequest &request);

      /**
       * @summary Changes the log storage region for Log Management.
       *
       * @param request UpdateDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataStorageResponse
       */
      Models::UpdateDataStorageResponse updateDataStorageWithOptions(const Models::UpdateDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the log storage region for Log Management.
       *
       * @param request UpdateDataStorageRequest
       * @return UpdateDataStorageResponse
       */
      Models::UpdateDataStorageResponse updateDataStorage(const Models::UpdateDataStorageRequest &request);

      /**
       * @summary Updates the status of log delivery.
       *
       * @param request UpdateDataStorageDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataStorageDeliveryResponse
       */
      Models::UpdateDataStorageDeliveryResponse updateDataStorageDeliveryWithOptions(const Models::UpdateDataStorageDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of log delivery.
       *
       * @param request UpdateDataStorageDeliveryRequest
       * @return UpdateDataStorageDeliveryResponse
       */
      Models::UpdateDataStorageDeliveryResponse updateDataStorageDelivery(const Models::UpdateDataStorageDeliveryRequest &request);

      /**
       * @summary Modifies the storage duration for logs.
       *
       * @param request UpdateDataStorageTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataStorageTtlResponse
       */
      Models::UpdateDataStorageTtlResponse updateDataStorageTtlWithOptions(const Models::UpdateDataStorageTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the storage duration for logs.
       *
       * @param request UpdateDataStorageTtlRequest
       * @return UpdateDataStorageTtlResponse
       */
      Models::UpdateDataStorageTtlResponse updateDataStorageTtl(const Models::UpdateDataStorageTtlRequest &request);

      /**
       * @summary Updates a detection rule.
       *
       * @description Because this operation uses complex request parameters, a supporting tool class is provided to assist with the JSON configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateDetectionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDetectionRuleResponse
       */
      Models::UpdateDetectionRuleResponse updateDetectionRuleWithOptions(const Models::UpdateDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a detection rule.
       *
       * @description Because this operation uses complex request parameters, a supporting tool class is provided to assist with the JSON configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateDetectionRuleRequest
       * @return UpdateDetectionRuleResponse
       */
      Models::UpdateDetectionRuleResponse updateDetectionRule(const Models::UpdateDetectionRuleRequest &request);

      /**
       * @summary Updates a normalization rule.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. For configuration examples, see the supporting tool class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param tmpReq UpdateNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNormalizationRuleResponse
       */
      Models::UpdateNormalizationRuleResponse updateNormalizationRuleWithOptions(const Models::UpdateNormalizationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a normalization rule.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. For configuration examples, see the supporting tool class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateNormalizationRuleRequest
       * @return UpdateNormalizationRuleResponse
       */
      Models::UpdateNormalizationRuleResponse updateNormalizationRule(const Models::UpdateNormalizationRuleRequest &request);

      /**
       * @summary Updates a normalization schema.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateNormalizationSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNormalizationSchemaResponse
       */
      Models::UpdateNormalizationSchemaResponse updateNormalizationSchemaWithOptions(const Models::UpdateNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a normalization schema.
       *
       * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateNormalizationSchemaRequest
       * @return UpdateNormalizationSchemaResponse
       */
      Models::UpdateNormalizationSchemaResponse updateNormalizationSchema(const Models::UpdateNormalizationSchemaRequest &request);

      /**
       * @summary Updates a product.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. For an example of a supporting tool class with configuration examples, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProductWithOptions(const Models::UpdateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a product.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. For an example of a supporting tool class with configuration examples, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request UpdateProductRequest
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProduct(const Models::UpdateProductRequest &request);

      /**
       * @summary Updates an automatic response rule.
       *
       * @description Some request parameters require complex JSON configurations. We provide a helper utility class with configuration examples.
       *
       * @param request UpdateResponseRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResponseRuleResponse
       */
      Models::UpdateResponseRuleResponse updateResponseRuleWithOptions(const Models::UpdateResponseRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an automatic response rule.
       *
       * @description Some request parameters require complex JSON configurations. We provide a helper utility class with configuration examples.
       *
       * @param request UpdateResponseRuleRequest
       * @return UpdateResponseRuleResponse
       */
      Models::UpdateResponseRuleResponse updateResponseRule(const Models::UpdateResponseRuleRequest &request);

      /**
       * @summary Updates a vendor.
       *
       * @description The delivery of notifications is limited by frequency and time. A user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time period.
       *
       * @param request UpdateVendorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVendorResponse
       */
      Models::UpdateVendorResponse updateVendorWithOptions(const Models::UpdateVendorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a vendor.
       *
       * @description The delivery of notifications is limited by frequency and time. A user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time period.
       *
       * @param request UpdateVendorRequest
       * @return UpdateVendorResponse
       */
      Models::UpdateVendorResponse updateVendor(const Models::UpdateVendorRequest &request);

      /**
       * @summary Verify log storage.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For a code sample, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ValidateLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateLogStoreResponse
       */
      Models::ValidateLogStoreResponse validateLogStoreWithOptions(const Models::ValidateLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verify log storage.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For a code sample, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ValidateLogStoreRequest
       * @return ValidateLogStoreResponse
       */
      Models::ValidateLogStoreResponse validateLogStore(const Models::ValidateLogStoreRequest &request);

      /**
       * @summary Validates a normalization rule.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ValidateNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateNormalizationRuleResponse
       */
      Models::ValidateNormalizationRuleResponse validateNormalizationRuleWithOptions(const Models::ValidateNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates a normalization rule.
       *
       * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request ValidateNormalizationRuleRequest
       * @return ValidateNormalizationRuleResponse
       */
      Models::ValidateNormalizationRuleResponse validateNormalizationRule(const Models::ValidateNormalizationRuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
