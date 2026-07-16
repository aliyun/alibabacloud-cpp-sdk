// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ESA20240910_HPP_
#define ALIBABACLOUD_ESA20240910_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ESA20240910Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/ESA20240910.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates the client based on the certificate ID.
       *
       * @param request ActivateClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateClientCertificateResponse
       */
      Models::ActivateClientCertificateResponse activateClientCertificateWithOptions(const Models::ActivateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the client based on the certificate ID.
       *
       * @param request ActivateClientCertificateRequest
       * @return ActivateClientCertificateResponse
       */
      Models::ActivateClientCertificateResponse activateClientCertificate(const Models::ActivateClientCertificateRequest &request);

      /**
       * @summary Enables version management. This allows a site to support multiple configuration versions and multiple deployment environments, providing more flexible management of site traffic and configuration.
       *
       * @description Prerequisites for enabling site version management:
       * 1. The site plan must include the version management quota item `version_management_available`, and its value must be `true`.
       *
       * @param request ActivateVersionManagementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateVersionManagementResponse
       */
      Models::ActivateVersionManagementResponse activateVersionManagementWithOptions(const Models::ActivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables version management. This allows a site to support multiple configuration versions and multiple deployment environments, providing more flexible management of site traffic and configuration.
       *
       * @description Prerequisites for enabling site version management:
       * 1. The site plan must include the version management quota item `version_management_available`, and its value must be `true`.
       *
       * @param request ActivateVersionManagementRequest
       * @return ActivateVersionManagementResponse
       */
      Models::ActivateVersionManagementResponse activateVersionManagement(const Models::ActivateVersionManagementRequest &request);

      /**
       * @summary Creates a user opportunity order.
       *
       * @param request AddUserBusinessFormRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserBusinessFormResponse
       */
      Models::AddUserBusinessFormResponse addUserBusinessFormWithOptions(const Models::AddUserBusinessFormRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user opportunity order.
       *
       * @param request AddUserBusinessFormRequest
       * @return AddUserBusinessFormResponse
       */
      Models::AddUserBusinessFormResponse addUserBusinessForm(const Models::AddUserBusinessFormRequest &request);

      /**
       * @summary Applies for a free certificate.
       *
       * @param request ApplyCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificateWithOptions(const Models::ApplyCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a free certificate.
       *
       * @param request ApplyCertificateRequest
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificate(const Models::ApplyCertificateRequest &request);

      /**
       * @summary Requests a new free certificate for a Software as a Service (SaaS) domain name. Call this operation only if the previous certificate request failed, or the current certificate is about to expire or has expired.
       *
       * @param request ApplyCustomHostnameCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCustomHostnameCertificateResponse
       */
      Models::ApplyCustomHostnameCertificateResponse applyCustomHostnameCertificateWithOptions(const Models::ApplyCustomHostnameCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Requests a new free certificate for a Software as a Service (SaaS) domain name. Call this operation only if the previous certificate request failed, or the current certificate is about to expire or has expired.
       *
       * @param request ApplyCustomHostnameCertificateRequest
       * @return ApplyCustomHostnameCertificateResponse
       */
      Models::ApplyCustomHostnameCertificateResponse applyCustomHostnameCertificate(const Models::ApplyCustomHostnameCertificateRequest &request);

      /**
       * @summary Creates multiple DNS records in a batch. Multiple record types are supported.
       *
       * @description This API operation allows you to create or update multiple DNS records at a time. It is suitable for scenarios that require managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. Detailed configuration items are provided to meet specific requirements, such as Priority, Flag, Tag, and Weight. In addition, for specific record types such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are supported.
       * Successfully and unsuccessfully processed records are listed separately in the response, so that you can identify which records are processed, which records failed, and the failure reasons.
       *
       * @param tmpReq BatchCreateRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateRecordsResponse
       */
      Models::BatchCreateRecordsResponse batchCreateRecordsWithOptions(const Models::BatchCreateRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple DNS records in a batch. Multiple record types are supported.
       *
       * @description This API operation allows you to create or update multiple DNS records at a time. It is suitable for scenarios that require managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. Detailed configuration items are provided to meet specific requirements, such as Priority, Flag, Tag, and Weight. In addition, for specific record types such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are supported.
       * Successfully and unsuccessfully processed records are listed separately in the response, so that you can identify which records are processed, which records failed, and the failure reasons.
       *
       * @param request BatchCreateRecordsRequest
       * @return BatchCreateRecordsResponse
       */
      Models::BatchCreateRecordsResponse batchCreateRecords(const Models::BatchCreateRecordsRequest &request);

      /**
       * @summary Batch creates rules in a specified WAF phase. You can create multiple rules at a time and configure shared settings for these rules.
       *
       * @param tmpReq BatchCreateWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateWafRulesResponse
       */
      Models::BatchCreateWafRulesResponse batchCreateWafRulesWithOptions(const Models::BatchCreateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch creates rules in a specified WAF phase. You can create multiple rules at a time and configure shared settings for these rules.
       *
       * @param request BatchCreateWafRulesRequest
       * @return BatchCreateWafRulesResponse
       */
      Models::BatchCreateWafRulesResponse batchCreateWafRules(const Models::BatchCreateWafRulesRequest &request);

      /**
       * @summary Delete key-value pairs in bulk from a specified namespace.
       *
       * @param tmpReq BatchDeleteKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteKvResponse
       */
      Models::BatchDeleteKvResponse batchDeleteKvWithOptions(const Models::BatchDeleteKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete key-value pairs in bulk from a specified namespace.
       *
       * @param request BatchDeleteKvRequest
       * @return BatchDeleteKvResponse
       */
      Models::BatchDeleteKvResponse batchDeleteKv(const Models::BatchDeleteKvRequest &request);

      /**
       * @summary Batch deletes key-value pairs from a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
       *
       * @description >Notice: 
       * Prerequisites for non-SDK calls: (1) You must have an OSS bucket with read and write permissions. (2) You must be able to generate a pre-signed HTTPS GET URL by using the OSS SDK or API. (3) The uploaded JSON file must use the same format as the BatchDeleteKv request body..
       * This operation provides the same functionality as [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html), but allows a larger request body. If the request body is small, use the [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchDeleteKvWithHighCapacityAdvance function.
       * ```
       * func TestBatchDeleteWithHighCapacity() error {
       * 	// Initialize the configuration
       * 	cfg := new(openapi.Config)
       * 	cfg.SetAccessKeyId("xxxxxxxxx")
       * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
       * 	cli, err := NewClient(cfg)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	runtime := &util.RuntimeOptions{}.
       * 	// Construct the batch delete request for key-value pairs
       * 	namespace := "test_batch_put"
       * 	rawReq := BatchDeleteKvRequest{
       * 		Namespace: &namespace,
       * 	}
       * 	for i := 0; i < 10000; i++ {
       * 		key := fmt.Sprintf("test_key_%d", i)
       * 		rawReq.Keys = append(rawReq.Keys, &key)
       * 	}
       * 	payload, err := json.Marshal(rawReq)
       * 	if err != nil {
       * 		return err
       * 	}.
       * 	// If the payload is larger than 2 MB, call the high-capacity operation to delete the key-value pairs
       * 	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
       * 		Namespace: &namespace,
       * 		UrlObject: bytes.NewReader(payload),
       * 	}
       * 	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	return nil
       * }.
       *
       * @param request BatchDeleteKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteKvWithHighCapacityResponse
       */
      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityWithOptions(const Models::BatchDeleteKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch deletes key-value pairs from a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
       *
       * @description >Notice: 
       * Prerequisites for non-SDK calls: (1) You must have an OSS bucket with read and write permissions. (2) You must be able to generate a pre-signed HTTPS GET URL by using the OSS SDK or API. (3) The uploaded JSON file must use the same format as the BatchDeleteKv request body..
       * This operation provides the same functionality as [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html), but allows a larger request body. If the request body is small, use the [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchDeleteKvWithHighCapacityAdvance function.
       * ```
       * func TestBatchDeleteWithHighCapacity() error {
       * 	// Initialize the configuration
       * 	cfg := new(openapi.Config)
       * 	cfg.SetAccessKeyId("xxxxxxxxx")
       * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
       * 	cli, err := NewClient(cfg)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	runtime := &util.RuntimeOptions{}.
       * 	// Construct the batch delete request for key-value pairs
       * 	namespace := "test_batch_put"
       * 	rawReq := BatchDeleteKvRequest{
       * 		Namespace: &namespace,
       * 	}
       * 	for i := 0; i < 10000; i++ {
       * 		key := fmt.Sprintf("test_key_%d", i)
       * 		rawReq.Keys = append(rawReq.Keys, &key)
       * 	}
       * 	payload, err := json.Marshal(rawReq)
       * 	if err != nil {
       * 		return err
       * 	}.
       * 	// If the payload is larger than 2 MB, call the high-capacity operation to delete the key-value pairs
       * 	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
       * 		Namespace: &namespace,
       * 		UrlObject: bytes.NewReader(payload),
       * 	}
       * 	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	return nil
       * }.
       *
       * @param request BatchDeleteKvWithHighCapacityRequest
       * @return BatchDeleteKvWithHighCapacityResponse
       */
      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacity(const Models::BatchDeleteKvWithHighCapacityRequest &request);

      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityAdvance(const Models::BatchDeleteKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves matching items for expressions in batches.
       *
       * @param tmpReq BatchGetExpressionFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetExpressionFieldsResponse
       */
      Models::BatchGetExpressionFieldsResponse batchGetExpressionFieldsWithOptions(const Models::BatchGetExpressionFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves matching items for expressions in batches.
       *
       * @param request BatchGetExpressionFieldsRequest
       * @return BatchGetExpressionFieldsResponse
       */
      Models::BatchGetExpressionFieldsResponse batchGetExpressionFields(const Models::BatchGetExpressionFieldsRequest &request);

      /**
       * @summary Sets multiple key-value pairs in a specified namespace.
       *
       * @param tmpReq BatchPutKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutKvResponse
       */
      Models::BatchPutKvResponse batchPutKvWithOptions(const Models::BatchPutKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets multiple key-value pairs in a specified namespace.
       *
       * @param request BatchPutKvRequest
       * @return BatchPutKvResponse
       */
      Models::BatchPutKvResponse batchPutKv(const Models::BatchPutKvRequest &request);

      /**
       * @summary Batch sets key-value pairs in a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
       *
       * @description This operation provides the same functionality as [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html), but allows larger request bodies. If the request body is small, use the [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchPutKvWithHighCapacityAdvance function.
       * ```
       * func TestBatchPutKvWithHighCapacity() error {
       * 	// Initialize the configuration
       * 	cfg := new(openapi.Config)
       * 	cfg.SetAccessKeyId("xxxxxxxxx")
       * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
       * 	cli, err := NewClient(cfg)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	runtime := &util.RuntimeOptions{}.
       * 	// Construct the key-value pairs for batch upload
       * 	namespace := "test_batch_put"
       * 	numKv := 10000
       * 	kvList := make([]*BatchPutKvRequestKvList, numKv)
       * 	test_value := strings.Repeat("a", 10*1024)
       * 	for i := 0; i < numKv; i++ {
       * 		key := fmt.Sprintf("test_key_%d", i)
       * 		value := test_value
       * 		kvList[i] = &BatchPutKvRequestKvList{
       * 			Key:   &key,
       * 			Value: &value,
       * 		}
       * 	}
       * 	rawReq := BatchPutKvRequest{
       * 		Namespace: &namespace,
       * 		KvList:    kvList,
       * 	}.
       * 	payload, err := json.Marshal(rawReq)
       * 	if err != nil {
       * 		return err
       * 	}.
       * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
       * 	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
       * 		Namespace: &namespace,
       * 		UrlObject: bytes.NewReader(payload),
       * 	}
       * 	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	return nil
       * }.
       *
       * @param request BatchPutKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutKvWithHighCapacityResponse
       */
      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityWithOptions(const Models::BatchPutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch sets key-value pairs in a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
       *
       * @description This operation provides the same functionality as [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html), but allows larger request bodies. If the request body is small, use the [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchPutKvWithHighCapacityAdvance function.
       * ```
       * func TestBatchPutKvWithHighCapacity() error {
       * 	// Initialize the configuration
       * 	cfg := new(openapi.Config)
       * 	cfg.SetAccessKeyId("xxxxxxxxx")
       * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
       * 	cli, err := NewClient(cfg)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	runtime := &util.RuntimeOptions{}.
       * 	// Construct the key-value pairs for batch upload
       * 	namespace := "test_batch_put"
       * 	numKv := 10000
       * 	kvList := make([]*BatchPutKvRequestKvList, numKv)
       * 	test_value := strings.Repeat("a", 10*1024)
       * 	for i := 0; i < numKv; i++ {
       * 		key := fmt.Sprintf("test_key_%d", i)
       * 		value := test_value
       * 		kvList[i] = &BatchPutKvRequestKvList{
       * 			Key:   &key,
       * 			Value: &value,
       * 		}
       * 	}
       * 	rawReq := BatchPutKvRequest{
       * 		Namespace: &namespace,
       * 		KvList:    kvList,
       * 	}.
       * 	payload, err := json.Marshal(rawReq)
       * 	if err != nil {
       * 		return err
       * 	}.
       * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
       * 	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
       * 		Namespace: &namespace,
       * 		UrlObject: bytes.NewReader(payload),
       * 	}
       * 	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	return nil
       * }.
       *
       * @param request BatchPutKvWithHighCapacityRequest
       * @return BatchPutKvWithHighCapacityResponse
       */
      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacity(const Models::BatchPutKvWithHighCapacityRequest &request);

      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityAdvance(const Models::BatchPutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch updates rules in a specified WAF ruleset. You can use this operation to update the configurations of multiple rules at a time.
       *
       * @param tmpReq BatchUpdateWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateWafRulesResponse
       */
      Models::BatchUpdateWafRulesResponse batchUpdateWafRulesWithOptions(const Models::BatchUpdateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch updates rules in a specified WAF ruleset. You can use this operation to update the configurations of multiple rules at a time.
       *
       * @param request BatchUpdateWafRulesRequest
       * @return BatchUpdateWafRulesResponse
       */
      Models::BatchUpdateWafRulesResponse batchUpdateWafRules(const Models::BatchUpdateWafRulesRequest &request);

      /**
       * @summary Blocks access to specified URLs.
       *
       * @param tmpReq BlockObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlockObjectResponse
       */
      Models::BlockObjectResponse blockObjectWithOptions(const Models::BlockObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Blocks access to specified URLs.
       *
       * @param request BlockObjectRequest
       * @return BlockObjectResponse
       */
      Models::BlockObjectResponse blockObject(const Models::BlockObjectRequest &request);

      /**
       * @summary 检查实时日志slr角色是否已创建
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAssumeSlrRoleResponse
       */
      Models::CheckAssumeSlrRoleResponse checkAssumeSlrRoleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查实时日志slr角色是否已创建
       *
       * @return CheckAssumeSlrRoleResponse
       */
      Models::CheckAssumeSlrRoleResponse checkAssumeSlrRole();

      /**
       * @summary Validates whether a site is compatible with the target plan during site plan migration.
       *
       * @param request CheckSiteFeaturesMatchPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSiteFeaturesMatchPlanResponse
       */
      Models::CheckSiteFeaturesMatchPlanResponse checkSiteFeaturesMatchPlanWithOptions(const Models::CheckSiteFeaturesMatchPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates whether a site is compatible with the target plan during site plan migration.
       *
       * @param request CheckSiteFeaturesMatchPlanRequest
       * @return CheckSiteFeaturesMatchPlanResponse
       */
      Models::CheckSiteFeaturesMatchPlanResponse checkSiteFeaturesMatchPlan(const Models::CheckSiteFeaturesMatchPlanRequest &request);

      /**
       * @summary Checks whether a specified website name is available.
       *
       * @param request CheckSiteNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSiteNameResponse
       */
      Models::CheckSiteNameResponse checkSiteNameWithOptions(const Models::CheckSiteNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a specified website name is available.
       *
       * @param request CheckSiteNameRequest
       * @return CheckSiteNameResponse
       */
      Models::CheckSiteNameResponse checkSiteName(const Models::CheckSiteNameRequest &request);

      /**
       * @summary Checks the name of a real-time log delivery task.
       *
       * @param request CheckSiteProjectNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSiteProjectNameResponse
       */
      Models::CheckSiteProjectNameResponse checkSiteProjectNameWithOptions(const Models::CheckSiteProjectNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the name of a real-time log delivery task.
       *
       * @param request CheckSiteProjectNameRequest
       * @return CheckSiteProjectNameResponse
       */
      Models::CheckSiteProjectNameResponse checkSiteProjectName(const Models::CheckSiteProjectNameRequest &request);

      /**
       * @summary Checks the name of a real-time log delivery task by account.
       *
       * @param request CheckUserProjectNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUserProjectNameResponse
       */
      Models::CheckUserProjectNameResponse checkUserProjectNameWithOptions(const Models::CheckUserProjectNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the name of a real-time log delivery task by account.
       *
       * @param request CheckUserProjectNameRequest
       * @return CheckUserProjectNameResponse
       */
      Models::CheckUserProjectNameResponse checkUserProjectName(const Models::CheckUserProjectNameRequest &request);

      /**
       * @summary Clones a new site version based on a specified site version.
       *
       * @param request CloneVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneVersionResponse
       */
      Models::CloneVersionResponse cloneVersionWithOptions(const Models::CloneVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a new site version based on a specified site version.
       *
       * @param request CloneVersionRequest
       * @return CloneVersionResponse
       */
      Models::CloneVersionResponse cloneVersion(const Models::CloneVersionRequest &request);

      /**
       * @summary Submits the staging (unstable) code of an Edge Routine and generates a production version.
       * Prerequisite: Before calling this API operation, call GetRoutineStagingCodeUploadInfo to obtain OSS upload credentials. Upload the code file through OSS POST. After the upload callback succeeds, call this API operation to submit the code.
       *
       * @param request CommitRoutineStagingCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitRoutineStagingCodeResponse
       */
      Models::CommitRoutineStagingCodeResponse commitRoutineStagingCodeWithOptions(const Models::CommitRoutineStagingCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits the staging (unstable) code of an Edge Routine and generates a production version.
       * Prerequisite: Before calling this API operation, call GetRoutineStagingCodeUploadInfo to obtain OSS upload credentials. Upload the code file through OSS POST. After the upload callback succeeds, call this API operation to submit the code.
       *
       * @param request CommitRoutineStagingCodeRequest
       * @return CommitRoutineStagingCodeResponse
       */
      Models::CommitRoutineStagingCodeResponse commitRoutineStagingCode(const Models::CommitRoutineStagingCodeRequest &request);

      /**
       * @summary Create a Site Cache Configuration.
       *
       * @param request CreateCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCacheRuleResponse
       */
      Models::CreateCacheRuleResponse createCacheRuleWithOptions(const Models::CreateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Site Cache Configuration.
       *
       * @param request CreateCacheRuleRequest
       * @return CreateCacheRuleResponse
       */
      Models::CreateCacheRuleResponse createCacheRule(const Models::CreateCacheRuleRequest &request);

      /**
       * @summary Issues a client certificate by using the ESA certificate authority (CA).
       *
       * @param request CreateClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientCertificateResponse
       */
      Models::CreateClientCertificateResponse createClientCertificateWithOptions(const Models::CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues a client certificate by using the ESA certificate authority (CA).
       *
       * @param request CreateClientCertificateRequest
       * @return CreateClientCertificateResponse
       */
      Models::CreateClientCertificateResponse createClientCertificate(const Models::CreateClientCertificateRequest &request);

      /**
       * @summary Creates a compression rule configuration for a site.
       *
       * @param request CreateCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompressionRuleResponse
       */
      Models::CreateCompressionRuleResponse createCompressionRuleWithOptions(const Models::CreateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a compression rule configuration for a site.
       *
       * @param request CreateCompressionRuleRequest
       * @return CreateCompressionRuleResponse
       */
      Models::CreateCompressionRuleResponse createCompressionRule(const Models::CreateCompressionRuleRequest &request);

      /**
       * @summary Creates a SaaS domain name for a site.
       *
       * @description - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a valid China Internet Content Provider (ICP) filing.
       * - Each user can invoke this operation up to 100 times per hour.
       *
       * @param request CreateCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomHostnameResponse
       */
      Models::CreateCustomHostnameResponse createCustomHostnameWithOptions(const Models::CreateCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a SaaS domain name for a site.
       *
       * @description - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a valid China Internet Content Provider (ICP) filing.
       * - Each user can invoke this operation up to 100 times per hour.
       *
       * @param request CreateCustomHostnameRequest
       * @return CreateCustomHostnameResponse
       */
      Models::CreateCustomHostnameResponse createCustomHostname(const Models::CreateCustomHostnameRequest &request);

      /**
       * @summary Creates a custom response code rule for a site.
       *
       * @param request CreateCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomResponseCodeRuleResponse
       */
      Models::CreateCustomResponseCodeRuleResponse createCustomResponseCodeRuleWithOptions(const Models::CreateCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom response code rule for a site.
       *
       * @param request CreateCustomResponseCodeRuleRequest
       * @return CreateCustomResponseCodeRuleResponse
       */
      Models::CreateCustomResponseCodeRuleResponse createCustomResponseCodeRule(const Models::CreateCustomResponseCodeRuleRequest &request);

      /**
       * @summary Creates a user-level custom scene policy. After you associate the policy with one or more sites, the policy applies to those sites.
       *
       * @param request CreateCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomScenePolicyResponse
       */
      Models::CreateCustomScenePolicyResponse createCustomScenePolicyWithOptions(const Models::CreateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-level custom scene policy. After you associate the policy with one or more sites, the policy applies to those sites.
       *
       * @param request CreateCustomScenePolicyRequest
       * @return CreateCustomScenePolicyResponse
       */
      Models::CreateCustomScenePolicyResponse createCustomScenePolicy(const Models::CreateCustomScenePolicyRequest &request);

      /**
       * @summary Creates an application for edge containers. You can deploy and publish application versions to containerize edge services.
       * Note: You must activate the EdgeContainer service in the console before calling this operation. Calls from accounts that have not activated the service will return a service activation error.
       *
       * @param request CreateEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppResponse
       */
      Models::CreateEdgeContainerAppResponse createEdgeContainerAppWithOptions(const Models::CreateEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application for edge containers. You can deploy and publish application versions to containerize edge services.
       * Note: You must activate the EdgeContainer service in the console before calling this operation. Calls from accounts that have not activated the service will return a service activation error.
       *
       * @param request CreateEdgeContainerAppRequest
       * @return CreateEdgeContainerAppResponse
       */
      Models::CreateEdgeContainerAppResponse createEdgeContainerApp(const Models::CreateEdgeContainerAppRequest &request);

      /**
       * @summary Create an image secret for the edge container application
       *
       * @param request CreateEdgeContainerAppImageSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppImageSecretResponse
       */
      Models::CreateEdgeContainerAppImageSecretResponse createEdgeContainerAppImageSecretWithOptions(const Models::CreateEdgeContainerAppImageSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an image secret for the edge container application
       *
       * @param request CreateEdgeContainerAppImageSecretRequest
       * @return CreateEdgeContainerAppImageSecretResponse
       */
      Models::CreateEdgeContainerAppImageSecretResponse createEdgeContainerAppImageSecret(const Models::CreateEdgeContainerAppImageSecretRequest &request);

      /**
       * @summary Associates a domain name with a containerized application. This way, requests destined for the associated domain name are forwarded to the application.
       *
       * @param request CreateEdgeContainerAppRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppRecordResponse
       */
      Models::CreateEdgeContainerAppRecordResponse createEdgeContainerAppRecordWithOptions(const Models::CreateEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a domain name with a containerized application. This way, requests destined for the associated domain name are forwarded to the application.
       *
       * @param request CreateEdgeContainerAppRecordRequest
       * @return CreateEdgeContainerAppRecordResponse
       */
      Models::CreateEdgeContainerAppRecordResponse createEdgeContainerAppRecord(const Models::CreateEdgeContainerAppRecordRequest &request);

      /**
       * @summary Creates an edge container application version. You can iteratively publish applications by version.
       * Note:
       * 1) Your account must have an ESA plan with the Edge Container feature enabled.
       * 2) Call CreateEdgeContainerApp first to create an application and obtain the AppId.
       * 3) Complete call chain example: CreateEdgeContainerApp → ListEdgeContainerApps → CreateEdgeContainerAppVersion.
       *
       * @param tmpReq CreateEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppVersionResponse
       */
      Models::CreateEdgeContainerAppVersionResponse createEdgeContainerAppVersionWithOptions(const Models::CreateEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge container application version. You can iteratively publish applications by version.
       * Note:
       * 1) Your account must have an ESA plan with the Edge Container feature enabled.
       * 2) Call CreateEdgeContainerApp first to create an application and obtain the AppId.
       * 3) Complete call chain example: CreateEdgeContainerApp → ListEdgeContainerApps → CreateEdgeContainerAppVersion.
       *
       * @param request CreateEdgeContainerAppVersionRequest
       * @return CreateEdgeContainerAppVersionResponse
       */
      Models::CreateEdgeContainerAppVersionResponse createEdgeContainerAppVersion(const Models::CreateEdgeContainerAppVersionRequest &request);

      /**
       * @summary Creates a site environment.
       *
       * @param request CreateEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironmentWithOptions(const Models::CreateEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a site environment.
       *
       * @param request CreateEnvironmentRequest
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironment(const Models::CreateEnvironmentRequest &request);

      /**
       * @summary Creates a configuration for modifying HTTP inbound request headers for a site.
       *
       * @param tmpReq CreateHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingRequestHeaderModificationRuleResponse createHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::CreateHttpIncomingRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration for modifying HTTP inbound request headers for a site.
       *
       * @param request CreateHttpIncomingRequestHeaderModificationRuleRequest
       * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingRequestHeaderModificationRuleResponse createHttpIncomingRequestHeaderModificationRule(const Models::CreateHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Creates a configuration for modifying HTTP inbound response headers for a site.
       *
       * @param tmpReq CreateHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingResponseHeaderModificationRuleResponse createHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::CreateHttpIncomingResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration for modifying HTTP inbound response headers for a site.
       *
       * @param request CreateHttpIncomingResponseHeaderModificationRuleRequest
       * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpIncomingResponseHeaderModificationRuleResponse createHttpIncomingResponseHeaderModificationRule(const Models::CreateHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Creates an HTTP request header modification configuration for a site.
       *
       * @param tmpReq CreateHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpRequestHeaderModificationRuleResponse createHttpRequestHeaderModificationRuleWithOptions(const Models::CreateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTP request header modification configuration for a site.
       *
       * @param request CreateHttpRequestHeaderModificationRuleRequest
       * @return CreateHttpRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpRequestHeaderModificationRuleResponse createHttpRequestHeaderModificationRule(const Models::CreateHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Creates an HTTP response header modification configuration.
       *
       * @param tmpReq CreateHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpResponseHeaderModificationRuleResponse createHttpResponseHeaderModificationRuleWithOptions(const Models::CreateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTP response header modification configuration.
       *
       * @param request CreateHttpResponseHeaderModificationRuleRequest
       * @return CreateHttpResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpResponseHeaderModificationRuleResponse createHttpResponseHeaderModificationRule(const Models::CreateHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Adds an HTTPS application configuration to a site.
       *
       * @param request CreateHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpsApplicationConfigurationResponse
       */
      Models::CreateHttpsApplicationConfigurationResponse createHttpsApplicationConfigurationWithOptions(const Models::CreateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an HTTPS application configuration to a site.
       *
       * @param request CreateHttpsApplicationConfigurationRequest
       * @return CreateHttpsApplicationConfigurationResponse
       */
      Models::CreateHttpsApplicationConfigurationResponse createHttpsApplicationConfiguration(const Models::CreateHttpsApplicationConfigurationRequest &request);

      /**
       * @summary Create HTTPS basic configuration for a site.
       *
       * @description A site supports only one global configuration (without Rule-related parameters). To exceed this limit, you must provide the RuleName, Rule, and RuleEnable parameters to create a rule-based configuration.
       *
       * @param request CreateHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpsBasicConfigurationResponse
       */
      Models::CreateHttpsBasicConfigurationResponse createHttpsBasicConfigurationWithOptions(const Models::CreateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create HTTPS basic configuration for a site.
       *
       * @description A site supports only one global configuration (without Rule-related parameters). To exceed this limit, you must provide the RuleName, Rule, and RuleEnable parameters to create a rule-based configuration.
       *
       * @param request CreateHttpsBasicConfigurationRequest
       * @return CreateHttpsBasicConfigurationResponse
       */
      Models::CreateHttpsBasicConfigurationResponse createHttpsBasicConfiguration(const Models::CreateHttpsBasicConfigurationRequest &request);

      /**
       * @summary Creates an image transformation configuration for a site.
       *
       * @param request CreateImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageTransformResponse
       */
      Models::CreateImageTransformResponse createImageTransformWithOptions(const Models::CreateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image transformation configuration for a site.
       *
       * @param request CreateImageTransformRequest
       * @return CreateImageTransformResponse
       */
      Models::CreateImageTransformResponse createImageTransform(const Models::CreateImageTransformRequest &request);

      /**
       * @summary Creates a KV namespace in the current account.
       *
       * @param request CreateKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKvNamespaceResponse
       */
      Models::CreateKvNamespaceResponse createKvNamespaceWithOptions(const Models::CreateKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a KV namespace in the current account.
       *
       * @param request CreateKvNamespaceRequest
       * @return CreateKvNamespaceResponse
       */
      Models::CreateKvNamespaceResponse createKvNamespace(const Models::CreateKvNamespaceRequest &request);

      /**
       * @summary Creates a custom list. Custom lists are typically referenced by the rule matching engine for values used in various security policies to implement complex logic and control.
       *
       * @param tmpReq CreateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListResponse
       */
      Models::CreateListResponse createListWithOptions(const Models::CreateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom list. Custom lists are typically referenced by the rule matching engine for values used in various security policies to implement complex logic and control.
       *
       * @param request CreateListRequest
       * @return CreateListResponse
       */
      Models::CreateListResponse createList(const Models::CreateListRequest &request);

      /**
       * @summary Creates a load balancer instance that supports custom routing policies, session persistence, monitoring configurations, and other advanced features.
       *
       * @description Creates a load balancing service based on your business requirements. You can configure settings such as adaptive routing, weighted polling, rule matching, and health checks to effectively manage and optimize traffic.
       * Only Enterprise plans support the load balancing service. To use this feature, contact Alibaba Cloud sales to apply for an Enterprise plan.
       *
       * @param tmpReq CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a load balancer instance that supports custom routing policies, session persistence, monitoring configurations, and other advanced features.
       *
       * @description Creates a load balancing service based on your business requirements. You can configure settings such as adaptive routing, weighted polling, rule matching, and health checks to effectively manage and optimize traffic.
       * Only Enterprise plans support the load balancing service. To use this feature, contact Alibaba Cloud sales to apply for an Enterprise plan.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Adds a network optimization configuration for a site.
       *
       * @description The site plan must be Standard Edition or higher to use the WebSocket feature. When calling this API, you must provide at least one feature configuration parameter. Providing only SiteId returns an error.
       *
       * @param request CreateNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkOptimizationResponse
       */
      Models::CreateNetworkOptimizationResponse createNetworkOptimizationWithOptions(const Models::CreateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a network optimization configuration for a site.
       *
       * @description The site plan must be Standard Edition or higher to use the WebSocket feature. When calling this API, you must provide at least one feature configuration parameter. Providing only SiteId returns an error.
       *
       * @param request CreateNetworkOptimizationRequest
       * @return CreateNetworkOptimizationResponse
       */
      Models::CreateNetworkOptimizationResponse createNetworkOptimization(const Models::CreateNetworkOptimizationRequest &request);

      /**
       * @summary Creates an origin pool for a site. You can then use the origin pool with a Server Load Balancer or for direct back-to-origin requests.
       *
       * @description You can add multiple origins to an origin pool, such as a domain name, IP, OSS, or S3. Back-to-origin authentication is available for OSS and S3 origins.
       *
       * @param tmpReq CreateOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginPoolResponse
       */
      Models::CreateOriginPoolResponse createOriginPoolWithOptions(const Models::CreateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an origin pool for a site. You can then use the origin pool with a Server Load Balancer or for direct back-to-origin requests.
       *
       * @description You can add multiple origins to an origin pool, such as a domain name, IP, OSS, or S3. Back-to-origin authentication is available for OSS and S3 origins.
       *
       * @param request CreateOriginPoolRequest
       * @return CreateOriginPoolResponse
       */
      Models::CreateOriginPoolResponse createOriginPool(const Models::CreateOriginPoolRequest &request);

      /**
       * @summary Enables origin protection.
       *
       * @param request CreateOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginProtectionResponse
       */
      Models::CreateOriginProtectionResponse createOriginProtectionWithOptions(const Models::CreateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables origin protection.
       *
       * @param request CreateOriginProtectionRequest
       * @return CreateOriginProtectionResponse
       */
      Models::CreateOriginProtectionResponse createOriginProtection(const Models::CreateOriginProtectionRequest &request);

      /**
       * @summary Create a Back-to-Origin Rule for a Site.
       *
       * @param request CreateOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginRuleResponse
       */
      Models::CreateOriginRuleResponse createOriginRuleWithOptions(const Models::CreateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Back-to-Origin Rule for a Site.
       *
       * @param request CreateOriginRuleRequest
       * @return CreateOriginRuleResponse
       */
      Models::CreateOriginRuleResponse createOriginRule(const Models::CreateOriginRuleRequest &request);

      /**
       * @summary Creates a custom error response page. When a user request is blocked by Web Application Firewall (WAF), these custom error pages can be displayed. You can configure the page HTML content, page type, description, and other information, and submit the page content in BASE64 encoding.
       *
       * @param tmpReq CreatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePageResponse
       */
      Models::CreatePageResponse createPageWithOptions(const Models::CreatePageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom error response page. When a user request is blocked by Web Application Firewall (WAF), these custom error pages can be displayed. You can configure the page HTML content, page type, description, and other information, and submit the page content in BASE64 encoding.
       *
       * @param request CreatePageRequest
       * @return CreatePageResponse
       */
      Models::CreatePageResponse createPage(const Models::CreatePageRequest &request);

      /**
       * @summary Create a DNS record under a site.
       *
       * @param tmpReq CreateRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecordResponse
       */
      Models::CreateRecordResponse createRecordWithOptions(const Models::CreateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a DNS record under a site.
       *
       * @param request CreateRecordRequest
       * @return CreateRecordResponse
       */
      Models::CreateRecordResponse createRecord(const Models::CreateRecordRequest &request);

      /**
       * @summary Creates a redirect configuration for a site.
       *
       * @param request CreateRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRedirectRuleResponse
       */
      Models::CreateRedirectRuleResponse createRedirectRuleWithOptions(const Models::CreateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a redirect configuration for a site.
       *
       * @param request CreateRedirectRuleRequest
       * @return CreateRedirectRuleResponse
       */
      Models::CreateRedirectRuleResponse createRedirectRule(const Models::CreateRedirectRuleRequest &request);

      /**
       * @summary Create a rewrite URL rule configuration for a site.
       *
       * @param request CreateRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRewriteUrlRuleResponse
       */
      Models::CreateRewriteUrlRuleResponse createRewriteUrlRuleWithOptions(const Models::CreateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a rewrite URL rule configuration for a site.
       *
       * @param request CreateRewriteUrlRuleRequest
       * @return CreateRewriteUrlRuleResponse
       */
      Models::CreateRewriteUrlRuleResponse createRewriteUrlRule(const Models::CreateRewriteUrlRuleRequest &request);

      /**
       * @summary Creates an Edge Routine.
       *
       * @param request CreateRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutineWithOptions(const Models::CreateRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Edge Routine.
       *
       * @param request CreateRoutineRequest
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutine(const Models::CreateRoutineRequest &request);

      /**
       * @summary Creates a percentage-based canary deployment for a Routine code version in a specified environment.
       *
       * @description ## Usage notes
       * - When creating a Routine code version deployment, the `Env` parameter only supports `staging` for the staging environment or `production` for the production environment.
       * - The `CodeVersions` parameter supports a maximum of two versions for canary release, and the total percentage of these versions must equal 100%.
       *
       * @param tmpReq CreateRoutineCodeDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineCodeDeploymentResponse
       */
      Models::CreateRoutineCodeDeploymentResponse createRoutineCodeDeploymentWithOptions(const Models::CreateRoutineCodeDeploymentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a percentage-based canary deployment for a Routine code version in a specified environment.
       *
       * @description ## Usage notes
       * - When creating a Routine code version deployment, the `Env` parameter only supports `staging` for the staging environment or `production` for the production environment.
       * - The `CodeVersions` parameter supports a maximum of two versions for canary release, and the total percentage of these versions must equal 100%.
       *
       * @param request CreateRoutineCodeDeploymentRequest
       * @return CreateRoutineCodeDeploymentResponse
       */
      Models::CreateRoutineCodeDeploymentResponse createRoutineCodeDeployment(const Models::CreateRoutineCodeDeploymentRequest &request);

      /**
       * @summary Adds an associated site record for an Edge Routine function. This creates a new record under the site to trigger the execution of the Edge Routine function code.
       *
       * @param request CreateRoutineRelatedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineRelatedRecordResponse
       */
      Models::CreateRoutineRelatedRecordResponse createRoutineRelatedRecordWithOptions(const Models::CreateRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an associated site record for an Edge Routine function. This creates a new record under the site to trigger the execution of the Edge Routine function code.
       *
       * @param request CreateRoutineRelatedRecordRequest
       * @return CreateRoutineRelatedRecordResponse
       */
      Models::CreateRoutineRelatedRecordResponse createRoutineRelatedRecord(const Models::CreateRoutineRelatedRecordRequest &request);

      /**
       * @summary Creates an Edge Routine route configuration.
       *
       * @param request CreateRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineRouteResponse
       */
      Models::CreateRoutineRouteResponse createRoutineRouteWithOptions(const Models::CreateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Edge Routine route configuration.
       *
       * @param request CreateRoutineRouteRequest
       * @return CreateRoutineRouteResponse
       */
      Models::CreateRoutineRouteResponse createRoutineRoute(const Models::CreateRoutineRouteRequest &request);

      /**
       * @summary 创建带Assets资源的Routine代码版本
       *
       * @param tmpReq CreateRoutineWithAssetsCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineWithAssetsCodeVersionResponse
       */
      Models::CreateRoutineWithAssetsCodeVersionResponse createRoutineWithAssetsCodeVersionWithOptions(const Models::CreateRoutineWithAssetsCodeVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建带Assets资源的Routine代码版本
       *
       * @param request CreateRoutineWithAssetsCodeVersionRequest
       * @return CreateRoutineWithAssetsCodeVersionResponse
       */
      Models::CreateRoutineWithAssetsCodeVersionResponse createRoutineWithAssetsCodeVersion(const Models::CreateRoutineWithAssetsCodeVersionRequest &request);

      /**
       * @summary Creates execution plans for batch scheduled prefetch tasks.
       *
       * @param tmpReq CreateScheduledPreloadExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPreloadExecutionsResponse
       */
      Models::CreateScheduledPreloadExecutionsResponse createScheduledPreloadExecutionsWithOptions(const Models::CreateScheduledPreloadExecutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates execution plans for batch scheduled prefetch tasks.
       *
       * @param request CreateScheduledPreloadExecutionsRequest
       * @return CreateScheduledPreloadExecutionsResponse
       */
      Models::CreateScheduledPreloadExecutionsResponse createScheduledPreloadExecutions(const Models::CreateScheduledPreloadExecutionsRequest &request);

      /**
       * @summary Add a scheduled prefetch task.
       *
       * @param request CreateScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPreloadJobResponse
       */
      Models::CreateScheduledPreloadJobResponse createScheduledPreloadJobWithOptions(const Models::CreateScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a scheduled prefetch task.
       *
       * @param request CreateScheduledPreloadJobRequest
       * @return CreateScheduledPreloadJobResponse
       */
      Models::CreateScheduledPreloadJobResponse createScheduledPreloadJob(const Models::CreateScheduledPreloadJobRequest &request);

      /**
       * @summary Creates a site.
       *
       * @description - Before creating a site, you must have an active plan instance.
       * - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a completed Internet Content Provider (ICP) filing.
       * - Each user can invoke this operation up to 100 times per hour.
       *
       * @param request CreateSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteResponse
       */
      Models::CreateSiteResponse createSiteWithOptions(const Models::CreateSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a site.
       *
       * @description - Before creating a site, you must have an active plan instance.
       * - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a completed Internet Content Provider (ICP) filing.
       * - Each user can invoke this operation up to 100 times per hour.
       *
       * @param request CreateSiteRequest
       * @return CreateSiteResponse
       */
      Models::CreateSiteResponse createSite(const Models::CreateSiteRequest &request);

      /**
       * @summary Adds the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
       *
       * @description *   **Custom field limits**: The key name of a custom field can contain only letters, digits, underscores (_), and spaces. The key name cannot contain other characters. Otherwise, errors may occur.
       * *   **Parameter passing**: Submit `SiteId`, `RequestHeaders`, `ResponseHeaders`, and `Cookies` by using `formData`. Each array element matches a custom field name.
       * *   **(Required) SiteId**: Although `SiteId` is not marked as required in the Required column, you must specify a website ID by using this parameter when you can call this API operation.
       *
       * @param tmpReq CreateSiteCustomLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteCustomLogResponse
       */
      Models::CreateSiteCustomLogResponse createSiteCustomLogWithOptions(const Models::CreateSiteCustomLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
       *
       * @description *   **Custom field limits**: The key name of a custom field can contain only letters, digits, underscores (_), and spaces. The key name cannot contain other characters. Otherwise, errors may occur.
       * *   **Parameter passing**: Submit `SiteId`, `RequestHeaders`, `ResponseHeaders`, and `Cookies` by using `formData`. Each array element matches a custom field name.
       * *   **(Required) SiteId**: Although `SiteId` is not marked as required in the Required column, you must specify a website ID by using this parameter when you can call this API operation.
       *
       * @param request CreateSiteCustomLogRequest
       * @return CreateSiteCustomLogResponse
       */
      Models::CreateSiteCustomLogResponse createSiteCustomLog(const Models::CreateSiteCustomLogRequest &request);

      /**
       * @summary Create a real-time log shipping task.
       *
       * @param tmpReq CreateSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteDeliveryTaskResponse
       */
      Models::CreateSiteDeliveryTaskResponse createSiteDeliveryTaskWithOptions(const Models::CreateSiteDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a real-time log shipping task.
       *
       * @param request CreateSiteDeliveryTaskRequest
       * @return CreateSiteDeliveryTaskResponse
       */
      Models::CreateSiteDeliveryTaskResponse createSiteDeliveryTask(const Models::CreateSiteDeliveryTaskRequest &request);

      /**
       * @summary 创建一个实时日志slr角色
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlrRoleForRealtimeLogResponse
       */
      Models::CreateSlrRoleForRealtimeLogResponse createSlrRoleForRealtimeLogWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个实时日志slr角色
       *
       * @return CreateSlrRoleForRealtimeLogResponse
       */
      Models::CreateSlrRoleForRealtimeLogResponse createSlrRoleForRealtimeLog();

      /**
       * @summary Creates a Layer 4 acceleration application.
       *
       * @description The selected site must be activated. After you create a site, call the VerifySite operation to verify the site. A site that passes verification is automatically activated, which means the Passed response parameter is set to true.
       *
       * @param tmpReq CreateTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransportLayerApplicationResponse
       */
      Models::CreateTransportLayerApplicationResponse createTransportLayerApplicationWithOptions(const Models::CreateTransportLayerApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Layer 4 acceleration application.
       *
       * @description The selected site must be activated. After you create a site, call the VerifySite operation to verify the site. A site that passes verification is automatically activated, which means the Passed response parameter is set to true.
       *
       * @param request CreateTransportLayerApplicationRequest
       * @return CreateTransportLayerApplicationResponse
       */
      Models::CreateTransportLayerApplicationResponse createTransportLayerApplication(const Models::CreateTransportLayerApplicationRequest &request);

      /**
       * @summary Creates a web monitoring configuration.
       *
       * @param request CreateUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUrlObservationResponse
       */
      Models::CreateUrlObservationResponse createUrlObservationWithOptions(const Models::CreateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a web monitoring configuration.
       *
       * @param request CreateUrlObservationRequest
       * @return CreateUrlObservationResponse
       */
      Models::CreateUrlObservationResponse createUrlObservation(const Models::CreateUrlObservationRequest &request);

      /**
       * @summary Creates a custom log shipping task to SLS, HTTP, OSS, S3, or Kafka.
       *
       * @description Use this API to create a delivery task for specific log data. It supports multiple delivery destinations, including SLS, HTTP services, Alibaba Cloud OSS, S3-compatible storage, and Kafka message queues. You can set a custom task name, select log fields, specify a data center, set the discard rate, choose a delivery type, and configure delivery details for the selected type.
       * - **Field Filtering**: Use `FieldName` to specify the log fields to deliver.
       * - **Filter Rules**: Use `FilterRules` to filter log data before delivery.
       * - **Supported delivery destinations**: Deliver logs to various destinations, including SLS, HTTP(S), Alibaba Cloud OSS, S3-compatible storage, and Kafka. Each method has specific configuration parameters.
       * ## Notes
       * - Ensure that your AccessKey and SecretKey have the required permissions for the delivery operation.
       * - If a delivery method requires encryption or authentication, configure its security parameters accordingly.
       * - Verify that the `FilterRules` syntax is correct.
       * - Adjust advanced parameters, such as the number of retries and timeout, to optimize delivery efficiency and stability.
       *
       * @param tmpReq CreateUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserDeliveryTaskResponse
       */
      Models::CreateUserDeliveryTaskResponse createUserDeliveryTaskWithOptions(const Models::CreateUserDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom log shipping task to SLS, HTTP, OSS, S3, or Kafka.
       *
       * @description Use this API to create a delivery task for specific log data. It supports multiple delivery destinations, including SLS, HTTP services, Alibaba Cloud OSS, S3-compatible storage, and Kafka message queues. You can set a custom task name, select log fields, specify a data center, set the discard rate, choose a delivery type, and configure delivery details for the selected type.
       * - **Field Filtering**: Use `FieldName` to specify the log fields to deliver.
       * - **Filter Rules**: Use `FilterRules` to filter log data before delivery.
       * - **Supported delivery destinations**: Deliver logs to various destinations, including SLS, HTTP(S), Alibaba Cloud OSS, S3-compatible storage, and Kafka. Each method has specific configuration parameters.
       * ## Notes
       * - Ensure that your AccessKey and SecretKey have the required permissions for the delivery operation.
       * - If a delivery method requires encryption or authentication, configure its security parameters accordingly.
       * - Verify that the `FilterRules` syntax is correct.
       * - Adjust advanced parameters, such as the number of retries and timeout, to optimize delivery efficiency and stability.
       *
       * @param request CreateUserDeliveryTaskRequest
       * @return CreateUserDeliveryTaskResponse
       */
      Models::CreateUserDeliveryTaskResponse createUserDeliveryTask(const Models::CreateUserDeliveryTaskRequest &request);

      /**
       * @summary Creates an instance-level Web Application Firewall (WAF) ruleset that supports multiple types of protection rules.
       *
       * @description ## Operation description
       * - This API operation allows you to create a WAF ruleset for a specified instance.
       * - InstanceId is a required parameter that specifies the instance for which you want to create the ruleset.
       * - The Phase parameter defines the phase in which the ruleset is applied, such as custom rules or rate limiting.
       * - Name and Expression are required parameters that specify the ruleset name and the match expression.
       * - The optional Description parameter provides a text description of the ruleset function or purpose.
       * - Status controls whether the ruleset takes effect immediately (`on`) or is disabled (`off`).
       * - Use the Rules parameter to configure a detailed list of rules. Each rule contains properties such as name, position, expression, and action.
       * - A successful response returns the unique identifier Id of the newly created ruleset and the RuleIds list of all associated rule IDs.
       *
       * @param tmpReq CreateUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserWafRulesetResponse
       */
      Models::CreateUserWafRulesetResponse createUserWafRulesetWithOptions(const Models::CreateUserWafRulesetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance-level Web Application Firewall (WAF) ruleset that supports multiple types of protection rules.
       *
       * @description ## Operation description
       * - This API operation allows you to create a WAF ruleset for a specified instance.
       * - InstanceId is a required parameter that specifies the instance for which you want to create the ruleset.
       * - The Phase parameter defines the phase in which the ruleset is applied, such as custom rules or rate limiting.
       * - Name and Expression are required parameters that specify the ruleset name and the match expression.
       * - The optional Description parameter provides a text description of the ruleset function or purpose.
       * - Status controls whether the ruleset takes effect immediately (`on`) or is disabled (`off`).
       * - Use the Rules parameter to configure a detailed list of rules. Each rule contains properties such as name, position, expression, and action.
       * - A successful response returns the unique identifier Id of the newly created ruleset and the RuleIds list of all associated rule IDs.
       *
       * @param request CreateUserWafRulesetRequest
       * @return CreateUserWafRulesetResponse
       */
      Models::CreateUserWafRulesetResponse createUserWafRuleset(const Models::CreateUserWafRulesetRequest &request);

      /**
       * @summary Create a site video processing configuration.
       *
       * @param request CreateVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoProcessingResponse
       */
      Models::CreateVideoProcessingResponse createVideoProcessingWithOptions(const Models::CreateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a site video processing configuration.
       *
       * @param request CreateVideoProcessingRequest
       * @return CreateVideoProcessingResponse
       */
      Models::CreateVideoProcessingResponse createVideoProcessing(const Models::CreateVideoProcessingRequest &request);

      /**
       * @summary Creates a rule in Web Application Firewall (WAF). You can use this operation to refine firewall behavior and improve the security of your website or application.
       *
       * @param tmpReq CreateWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWafRuleResponse
       */
      Models::CreateWafRuleResponse createWafRuleWithOptions(const Models::CreateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule in Web Application Firewall (WAF). You can use this operation to refine firewall behavior and improve the security of your website or application.
       *
       * @param request CreateWafRuleRequest
       * @return CreateWafRuleResponse
       */
      Models::CreateWafRuleResponse createWafRule(const Models::CreateWafRuleRequest &request);

      /**
       * @summary Creates a WAF ruleset.
       *
       * @param request CreateWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWafRulesetResponse
       */
      Models::CreateWafRulesetResponse createWafRulesetWithOptions(const Models::CreateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a WAF ruleset.
       *
       * @param request CreateWafRulesetRequest
       * @return CreateWafRulesetResponse
       */
      Models::CreateWafRulesetResponse createWafRuleset(const Models::CreateWafRulesetRequest &request);

      /**
       * @summary Creates a waiting room for a website.
       *
       * @param tmpReq CreateWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomResponse
       */
      Models::CreateWaitingRoomResponse createWaitingRoomWithOptions(const Models::CreateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a waiting room for a website.
       *
       * @param request CreateWaitingRoomRequest
       * @return CreateWaitingRoomResponse
       */
      Models::CreateWaitingRoomResponse createWaitingRoom(const Models::CreateWaitingRoomRequest &request);

      /**
       * @summary Creates a waiting room event. You can specify the queuing method and type.
       *
       * @description Your site plan must be Advanced or higher to use this feature. The number of configurations for this feature cannot exceed the quota included in your site plan.
       *
       * @param request CreateWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomEventResponse
       */
      Models::CreateWaitingRoomEventResponse createWaitingRoomEventWithOptions(const Models::CreateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a waiting room event. You can specify the queuing method and type.
       *
       * @description Your site plan must be Advanced or higher to use this feature. The number of configurations for this feature cannot exceed the quota included in your site plan.
       *
       * @param request CreateWaitingRoomEventRequest
       * @return CreateWaitingRoomEventResponse
       */
      Models::CreateWaitingRoomEventResponse createWaitingRoomEvent(const Models::CreateWaitingRoomEventRequest &request);

      /**
       * @summary Creates a waiting room bypass rule.
       *
       * @description Your site plan must be Enterprise Edition or higher to use this feature, and the site plan must support this feature.
       *
       * @param request CreateWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomRuleResponse
       */
      Models::CreateWaitingRoomRuleResponse createWaitingRoomRuleWithOptions(const Models::CreateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a waiting room bypass rule.
       *
       * @description Your site plan must be Enterprise Edition or higher to use this feature, and the site plan must support this feature.
       *
       * @param request CreateWaitingRoomRuleRequest
       * @return CreateWaitingRoomRuleResponse
       */
      Models::CreateWaitingRoomRuleResponse createWaitingRoomRule(const Models::CreateWaitingRoomRuleRequest &request);

      /**
       * @summary Disables the version management feature for a site.
       *
       * @description Version management must be enabled through the ActivateVersionManagement operation (the site VersionManagement status is true). Version management can be disabled only when only version 0 and the default environment exist.
       *
       * @param request DeactivateVersionManagementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateVersionManagementResponse
       */
      Models::DeactivateVersionManagementResponse deactivateVersionManagementWithOptions(const Models::DeactivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the version management feature for a site.
       *
       * @description Version management must be enabled through the ActivateVersionManagement operation (the site VersionManagement status is true). Version management can be disabled only when only version 0 and the default environment exist.
       *
       * @param request DeactivateVersionManagementRequest
       * @return DeactivateVersionManagementResponse
       */
      Models::DeactivateVersionManagementResponse deactivateVersionManagement(const Models::DeactivateVersionManagementRequest &request);

      /**
       * @summary Delete Cache Configuration
       *
       * @param request DeleteCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCacheRuleResponse
       */
      Models::DeleteCacheRuleResponse deleteCacheRuleWithOptions(const Models::DeleteCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Cache Configuration
       *
       * @param request DeleteCacheRuleRequest
       * @return DeleteCacheRuleResponse
       */
      Models::DeleteCacheRuleResponse deleteCacheRule(const Models::DeleteCacheRuleRequest &request);

      /**
       * @summary Deletes a certificate for a website.
       *
       * @param request DeleteCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificateWithOptions(const Models::DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate for a website.
       *
       * @param request DeleteCertificateRequest
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificate(const Models::DeleteCertificateRequest &request);

      /**
       * @summary Deletes a client CA certificate.
       *
       * @param request DeleteClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientCaCertificateResponse
       */
      Models::DeleteClientCaCertificateResponse deleteClientCaCertificateWithOptions(const Models::DeleteClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client CA certificate.
       *
       * @param request DeleteClientCaCertificateRequest
       * @return DeleteClientCaCertificateResponse
       */
      Models::DeleteClientCaCertificateResponse deleteClientCaCertificate(const Models::DeleteClientCaCertificateRequest &request);

      /**
       * @summary Deletes a revoked client certificate.
       *
       * @param request DeleteClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientCertificateResponse
       */
      Models::DeleteClientCertificateResponse deleteClientCertificateWithOptions(const Models::DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a revoked client certificate.
       *
       * @param request DeleteClientCertificateRequest
       * @return DeleteClientCertificateResponse
       */
      Models::DeleteClientCertificateResponse deleteClientCertificate(const Models::DeleteClientCertificateRequest &request);

      /**
       * @summary Delete compression rule
       *
       * @param request DeleteCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCompressionRuleResponse
       */
      Models::DeleteCompressionRuleResponse deleteCompressionRuleWithOptions(const Models::DeleteCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete compression rule
       *
       * @param request DeleteCompressionRuleRequest
       * @return DeleteCompressionRuleResponse
       */
      Models::DeleteCompressionRuleResponse deleteCompressionRule(const Models::DeleteCompressionRuleRequest &request);

      /**
       * @summary Deletes a custom domain name from a Software as a Service (SaaS) site based on its HostnameId.
       *
       * @param request DeleteCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomHostnameResponse
       */
      Models::DeleteCustomHostnameResponse deleteCustomHostnameWithOptions(const Models::DeleteCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom domain name from a Software as a Service (SaaS) site based on its HostnameId.
       *
       * @param request DeleteCustomHostnameRequest
       * @return DeleteCustomHostnameResponse
       */
      Models::DeleteCustomHostnameResponse deleteCustomHostname(const Models::DeleteCustomHostnameRequest &request);

      /**
       * @summary Deletes a custom response code configuration for a site.
       *
       * @param request DeleteCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomResponseCodeRuleResponse
       */
      Models::DeleteCustomResponseCodeRuleResponse deleteCustomResponseCodeRuleWithOptions(const Models::DeleteCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom response code configuration for a site.
       *
       * @param request DeleteCustomResponseCodeRuleRequest
       * @return DeleteCustomResponseCodeRuleResponse
       */
      Models::DeleteCustomResponseCodeRuleResponse deleteCustomResponseCodeRule(const Models::DeleteCustomResponseCodeRuleRequest &request);

      /**
       * @summary Deletes a scenario-specific custom policy.
       *
       * @param request DeleteCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomScenePolicyResponse
       */
      Models::DeleteCustomScenePolicyResponse deleteCustomScenePolicyWithOptions(const Models::DeleteCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scenario-specific custom policy.
       *
       * @param request DeleteCustomScenePolicyRequest
       * @return DeleteCustomScenePolicyResponse
       */
      Models::DeleteCustomScenePolicyResponse deleteCustomScenePolicy(const Models::DeleteCustomScenePolicyRequest &request);

      /**
       * @summary Deletes an edge container application that is no longer needed by application ID.
       *
       * @param request DeleteEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppResponse
       */
      Models::DeleteEdgeContainerAppResponse deleteEdgeContainerAppWithOptions(const Models::DeleteEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an edge container application that is no longer needed by application ID.
       *
       * @param request DeleteEdgeContainerAppRequest
       * @return DeleteEdgeContainerAppResponse
       */
      Models::DeleteEdgeContainerAppResponse deleteEdgeContainerApp(const Models::DeleteEdgeContainerAppRequest &request);

      /**
       * @summary Deletes the image secret for an edge containerized application.
       *
       * @param request DeleteEdgeContainerAppImageSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppImageSecretResponse
       */
      Models::DeleteEdgeContainerAppImageSecretResponse deleteEdgeContainerAppImageSecretWithOptions(const Models::DeleteEdgeContainerAppImageSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the image secret for an edge containerized application.
       *
       * @param request DeleteEdgeContainerAppImageSecretRequest
       * @return DeleteEdgeContainerAppImageSecretResponse
       */
      Models::DeleteEdgeContainerAppImageSecretResponse deleteEdgeContainerAppImageSecret(const Models::DeleteEdgeContainerAppImageSecretRequest &request);

      /**
       * @summary Deletes an associated domain name from an edge container application. After deletion, the edge container service can no longer be accessed through this domain name.
       * Note: 1) Call CreateEdgeContainerApp first to create an edge container application and record the returned AppId.
       * 2) Call CreateEdgeContainerAppRecord first to bindomain name record (RecordName) to the application.
       * 3) Provide a complete three-step call example: create → bindomain → delete.
       *
       * @param request DeleteEdgeContainerAppRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppRecordResponse
       */
      Models::DeleteEdgeContainerAppRecordResponse deleteEdgeContainerAppRecordWithOptions(const Models::DeleteEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an associated domain name from an edge container application. After deletion, the edge container service can no longer be accessed through this domain name.
       * Note: 1) Call CreateEdgeContainerApp first to create an edge container application and record the returned AppId.
       * 2) Call CreateEdgeContainerAppRecord first to bindomain name record (RecordName) to the application.
       * 3) Provide a complete three-step call example: create → bindomain → delete.
       *
       * @param request DeleteEdgeContainerAppRecordRequest
       * @return DeleteEdgeContainerAppRecordResponse
       */
      Models::DeleteEdgeContainerAppRecordResponse deleteEdgeContainerAppRecord(const Models::DeleteEdgeContainerAppRecordRequest &request);

      /**
       * @summary Deletes a version of a containerized application.
       *
       * @param request DeleteEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppVersionResponse
       */
      Models::DeleteEdgeContainerAppVersionResponse deleteEdgeContainerAppVersionWithOptions(const Models::DeleteEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a version of a containerized application.
       *
       * @param request DeleteEdgeContainerAppVersionRequest
       * @return DeleteEdgeContainerAppVersionResponse
       */
      Models::DeleteEdgeContainerAppVersionResponse deleteEdgeContainerAppVersion(const Models::DeleteEdgeContainerAppVersionRequest &request);

      /**
       * @summary Deletes a site environment. The default environment cannot be deleted.
       *
       * @param request DeleteEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironmentWithOptions(const Models::DeleteEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a site environment. The default environment cannot be deleted.
       *
       * @param request DeleteEnvironmentRequest
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironment(const Models::DeleteEnvironmentRequest &request);

      /**
       * @summary Deletes a rule created by Deep Learning and Protection.
       *
       * @param request DeleteHttpDDoSIntelligentRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpDDoSIntelligentRuleResponse
       */
      Models::DeleteHttpDDoSIntelligentRuleResponse deleteHttpDDoSIntelligentRuleWithOptions(const Models::DeleteHttpDDoSIntelligentRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule created by Deep Learning and Protection.
       *
       * @param request DeleteHttpDDoSIntelligentRuleRequest
       * @return DeleteHttpDDoSIntelligentRuleResponse
       */
      Models::DeleteHttpDDoSIntelligentRuleResponse deleteHttpDDoSIntelligentRule(const Models::DeleteHttpDDoSIntelligentRuleRequest &request);

      /**
       * @summary Deletes the configuration of modifying incoming HTTP request headers for a website.
       *
       * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingRequestHeaderModificationRuleResponse deleteHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::DeleteHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of modifying incoming HTTP request headers for a website.
       *
       * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
       * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingRequestHeaderModificationRuleResponse deleteHttpIncomingRequestHeaderModificationRule(const Models::DeleteHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Deletes the configuration of modifying HTTP response headers for a website.
       *
       * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingResponseHeaderModificationRuleResponse deleteHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::DeleteHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of modifying HTTP response headers for a website.
       *
       * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
       * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpIncomingResponseHeaderModificationRuleResponse deleteHttpIncomingResponseHeaderModificationRule(const Models::DeleteHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Deletes the configuration of modifying HTTP request headers for a website.
       *
       * @param request DeleteHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpRequestHeaderModificationRuleResponse deleteHttpRequestHeaderModificationRuleWithOptions(const Models::DeleteHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of modifying HTTP request headers for a website.
       *
       * @param request DeleteHttpRequestHeaderModificationRuleRequest
       * @return DeleteHttpRequestHeaderModificationRuleResponse
       */
      Models::DeleteHttpRequestHeaderModificationRuleResponse deleteHttpRequestHeaderModificationRule(const Models::DeleteHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Deletes the configuration of modifying HTTP response headers for a website.
       *
       * @param request DeleteHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpResponseHeaderModificationRuleResponse deleteHttpResponseHeaderModificationRuleWithOptions(const Models::DeleteHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of modifying HTTP response headers for a website.
       *
       * @param request DeleteHttpResponseHeaderModificationRuleRequest
       * @return DeleteHttpResponseHeaderModificationRuleResponse
       */
      Models::DeleteHttpResponseHeaderModificationRuleResponse deleteHttpResponseHeaderModificationRule(const Models::DeleteHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Delete HTTPS Application Configuration
       *
       * @param request DeleteHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpsApplicationConfigurationResponse
       */
      Models::DeleteHttpsApplicationConfigurationResponse deleteHttpsApplicationConfigurationWithOptions(const Models::DeleteHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete HTTPS Application Configuration
       *
       * @param request DeleteHttpsApplicationConfigurationRequest
       * @return DeleteHttpsApplicationConfigurationResponse
       */
      Models::DeleteHttpsApplicationConfigurationResponse deleteHttpsApplicationConfiguration(const Models::DeleteHttpsApplicationConfigurationRequest &request);

      /**
       * @summary Delete HTTPS Basic Configuration
       *
       * @param request DeleteHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpsBasicConfigurationResponse
       */
      Models::DeleteHttpsBasicConfigurationResponse deleteHttpsBasicConfigurationWithOptions(const Models::DeleteHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete HTTPS Basic Configuration
       *
       * @param request DeleteHttpsBasicConfigurationRequest
       * @return DeleteHttpsBasicConfigurationResponse
       */
      Models::DeleteHttpsBasicConfigurationResponse deleteHttpsBasicConfiguration(const Models::DeleteHttpsBasicConfigurationRequest &request);

      /**
       * @summary Delete Site Image Transformation Configuration
       *
       * @param request DeleteImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageTransformResponse
       */
      Models::DeleteImageTransformResponse deleteImageTransformWithOptions(const Models::DeleteImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Site Image Transformation Configuration
       *
       * @param request DeleteImageTransformRequest
       * @return DeleteImageTransformResponse
       */
      Models::DeleteImageTransformResponse deleteImageTransform(const Models::DeleteImageTransformRequest &request);

      /**
       * @summary Deletes a keyless server configuration.
       *
       * @param request DeleteKeylessServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeylessServerResponse
       */
      Models::DeleteKeylessServerResponse deleteKeylessServerWithOptions(const Models::DeleteKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a keyless server configuration.
       *
       * @param request DeleteKeylessServerRequest
       * @return DeleteKeylessServerResponse
       */
      Models::DeleteKeylessServerResponse deleteKeylessServer(const Models::DeleteKeylessServerRequest &request);

      /**
       * @summary Delete a specific key-value pair from a namespace.
       *
       * @param request DeleteKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKvResponse
       */
      Models::DeleteKvResponse deleteKvWithOptions(const Models::DeleteKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a specific key-value pair from a namespace.
       *
       * @param request DeleteKvRequest
       * @return DeleteKvResponse
       */
      Models::DeleteKvResponse deleteKv(const Models::DeleteKvRequest &request);

      /**
       * @summary Deletes a namespace from your account.
       *
       * @param request DeleteKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKvNamespaceResponse
       */
      Models::DeleteKvNamespaceResponse deleteKvNamespaceWithOptions(const Models::DeleteKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace from your account.
       *
       * @param request DeleteKvNamespaceRequest
       * @return DeleteKvNamespaceResponse
       */
      Models::DeleteKvNamespaceResponse deleteKvNamespace(const Models::DeleteKvNamespaceRequest &request);

      /**
       * @summary Deletes a custom list that is no longer needed.
       *
       * @param request DeleteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteListResponse
       */
      Models::DeleteListResponse deleteListWithOptions(const Models::DeleteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom list that is no longer needed.
       *
       * @param request DeleteListRequest
       * @return DeleteListResponse
       */
      Models::DeleteListResponse deleteList(const Models::DeleteListRequest &request);

      /**
       * @summary Delete Load Balancer
       *
       * @description Delete a load balancer by its ID, only one can be deleted at a time.
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Load Balancer
       *
       * @description Delete a load balancer by its ID, only one can be deleted at a time.
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary Delete Network Optimization Configuration
       *
       * @param request DeleteNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkOptimizationResponse
       */
      Models::DeleteNetworkOptimizationResponse deleteNetworkOptimizationWithOptions(const Models::DeleteNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Network Optimization Configuration
       *
       * @param request DeleteNetworkOptimizationRequest
       * @return DeleteNetworkOptimizationResponse
       */
      Models::DeleteNetworkOptimizationResponse deleteNetworkOptimization(const Models::DeleteNetworkOptimizationRequest &request);

      /**
       * @summary Deletes an origin CA certificate.
       *
       * @param request DeleteOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginCaCertificateResponse
       */
      Models::DeleteOriginCaCertificateResponse deleteOriginCaCertificateWithOptions(const Models::DeleteOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an origin CA certificate.
       *
       * @param request DeleteOriginCaCertificateRequest
       * @return DeleteOriginCaCertificateResponse
       */
      Models::DeleteOriginCaCertificateResponse deleteOriginCaCertificate(const Models::DeleteOriginCaCertificateRequest &request);

      /**
       * @summary Deletes an origin client certificate for a specific site.
       *
       * @param request DeleteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginClientCertificateResponse
       */
      Models::DeleteOriginClientCertificateResponse deleteOriginClientCertificateWithOptions(const Models::DeleteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an origin client certificate for a specific site.
       *
       * @param request DeleteOriginClientCertificateRequest
       * @return DeleteOriginClientCertificateResponse
       */
      Models::DeleteOriginClientCertificateResponse deleteOriginClientCertificate(const Models::DeleteOriginClientCertificateRequest &request);

      /**
       * @summary Delete Origin Address Pool
       *
       * @param request DeleteOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginPoolResponse
       */
      Models::DeleteOriginPoolResponse deleteOriginPoolWithOptions(const Models::DeleteOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Origin Address Pool
       *
       * @param request DeleteOriginPoolRequest
       * @return DeleteOriginPoolResponse
       */
      Models::DeleteOriginPoolResponse deleteOriginPool(const Models::DeleteOriginPoolRequest &request);

      /**
       * @summary Disable origin protection.
       *
       * @param request DeleteOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginProtectionResponse
       */
      Models::DeleteOriginProtectionResponse deleteOriginProtectionWithOptions(const Models::DeleteOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disable origin protection.
       *
       * @param request DeleteOriginProtectionRequest
       * @return DeleteOriginProtectionResponse
       */
      Models::DeleteOriginProtectionResponse deleteOriginProtection(const Models::DeleteOriginProtectionRequest &request);

      /**
       * @summary Delete Origin Rule Configuration
       *
       * @param request DeleteOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginRuleResponse
       */
      Models::DeleteOriginRuleResponse deleteOriginRuleWithOptions(const Models::DeleteOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Origin Rule Configuration
       *
       * @param request DeleteOriginRuleRequest
       * @return DeleteOriginRuleResponse
       */
      Models::DeleteOriginRuleResponse deleteOriginRule(const Models::DeleteOriginRuleRequest &request);

      /**
       * @summary Deletes a custom error page that is no longer needed.
       *
       * @param request DeletePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePageResponse
       */
      Models::DeletePageResponse deletePageWithOptions(const Models::DeletePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom error page that is no longer needed.
       *
       * @param request DeletePageRequest
       * @return DeletePageResponse
       */
      Models::DeletePageResponse deletePage(const Models::DeletePageRequest &request);

      /**
       * @summary Deletes a DNS record based on its RecordId.
       *
       * @param request DeleteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecordWithOptions(const Models::DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DNS record based on its RecordId.
       *
       * @param request DeleteRecordRequest
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecord(const Models::DeleteRecordRequest &request);

      /**
       * @summary Deletes a URL redirect rule for a website.
       *
       * @param request DeleteRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRedirectRuleResponse
       */
      Models::DeleteRedirectRuleResponse deleteRedirectRuleWithOptions(const Models::DeleteRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a URL redirect rule for a website.
       *
       * @param request DeleteRedirectRuleRequest
       * @return DeleteRedirectRuleResponse
       */
      Models::DeleteRedirectRuleResponse deleteRedirectRule(const Models::DeleteRedirectRuleRequest &request);

      /**
       * @summary Deletes a URL rewrite rule for a website.
       *
       * @param request DeleteRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRewriteUrlRuleResponse
       */
      Models::DeleteRewriteUrlRuleResponse deleteRewriteUrlRuleWithOptions(const Models::DeleteRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a URL rewrite rule for a website.
       *
       * @param request DeleteRewriteUrlRuleRequest
       * @return DeleteRewriteUrlRuleResponse
       */
      Models::DeleteRewriteUrlRuleResponse deleteRewriteUrlRule(const Models::DeleteRewriteUrlRuleRequest &request);

      /**
       * @summary Deletes an Edge Routine.
       *
       * @param request DeleteRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutineWithOptions(const Models::DeleteRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Edge Routine.
       *
       * @param request DeleteRoutineRequest
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutine(const Models::DeleteRoutineRequest &request);

      /**
       * @summary Deletes a code version of a routine.
       *
       * @param request DeleteRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineCodeVersionResponse
       */
      Models::DeleteRoutineCodeVersionResponse deleteRoutineCodeVersionWithOptions(const Models::DeleteRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a code version of a routine.
       *
       * @param request DeleteRoutineCodeVersionRequest
       * @return DeleteRoutineCodeVersionResponse
       */
      Models::DeleteRoutineCodeVersionResponse deleteRoutineCodeVersion(const Models::DeleteRoutineCodeVersionRequest &request);

      /**
       * @summary Deletes an association record of an Edge Routine.
       *
       * @param request DeleteRoutineRelatedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineRelatedRecordResponse
       */
      Models::DeleteRoutineRelatedRecordResponse deleteRoutineRelatedRecordWithOptions(const Models::DeleteRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an association record of an Edge Routine.
       *
       * @param request DeleteRoutineRelatedRecordRequest
       * @return DeleteRoutineRelatedRecordResponse
       */
      Models::DeleteRoutineRelatedRecordResponse deleteRoutineRelatedRecord(const Models::DeleteRoutineRelatedRecordRequest &request);

      /**
       * @summary Deletes the route configuration of an edge function.
       *
       * @param request DeleteRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineRouteResponse
       */
      Models::DeleteRoutineRouteResponse deleteRoutineRouteWithOptions(const Models::DeleteRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the route configuration of an edge function.
       *
       * @param request DeleteRoutineRouteRequest
       * @return DeleteRoutineRouteResponse
       */
      Models::DeleteRoutineRouteResponse deleteRoutineRoute(const Models::DeleteRoutineRouteRequest &request);

      /**
       * @summary Deletes a single scheduled preload plan.
       *
       * @param request DeleteScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPreloadExecutionResponse
       */
      Models::DeleteScheduledPreloadExecutionResponse deleteScheduledPreloadExecutionWithOptions(const Models::DeleteScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a single scheduled preload plan.
       *
       * @param request DeleteScheduledPreloadExecutionRequest
       * @return DeleteScheduledPreloadExecutionResponse
       */
      Models::DeleteScheduledPreloadExecutionResponse deleteScheduledPreloadExecution(const Models::DeleteScheduledPreloadExecutionRequest &request);

      /**
       * @summary Deletes a specified scheduled preload job.
       *
       * @param request DeleteScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPreloadJobResponse
       */
      Models::DeleteScheduledPreloadJobResponse deleteScheduledPreloadJobWithOptions(const Models::DeleteScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified scheduled preload job.
       *
       * @param request DeleteScheduledPreloadJobRequest
       * @return DeleteScheduledPreloadJobResponse
       */
      Models::DeleteScheduledPreloadJobResponse deleteScheduledPreloadJob(const Models::DeleteScheduledPreloadJobRequest &request);

      /**
       * @summary Deletes a site by site ID.
       *
       * @param request DeleteSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteResponse
       */
      Models::DeleteSiteResponse deleteSiteWithOptions(const Models::DeleteSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a site by site ID.
       *
       * @param request DeleteSiteRequest
       * @return DeleteSiteResponse
       */
      Models::DeleteSiteResponse deleteSite(const Models::DeleteSiteRequest &request);

      /**
       * @summary Deletes a real-time log delivery task.
       *
       * @param request DeleteSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteDeliveryTaskResponse
       */
      Models::DeleteSiteDeliveryTaskResponse deleteSiteDeliveryTaskWithOptions(const Models::DeleteSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a real-time log delivery task.
       *
       * @param request DeleteSiteDeliveryTaskRequest
       * @return DeleteSiteDeliveryTaskResponse
       */
      Models::DeleteSiteDeliveryTaskResponse deleteSiteDeliveryTask(const Models::DeleteSiteDeliveryTaskRequest &request);

      /**
       * @summary Deletes a site-level origin client certificate.
       *
       * @param request DeleteSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteOriginClientCertificateResponse
       */
      Models::DeleteSiteOriginClientCertificateResponse deleteSiteOriginClientCertificateWithOptions(const Models::DeleteSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a site-level origin client certificate.
       *
       * @param request DeleteSiteOriginClientCertificateRequest
       * @return DeleteSiteOriginClientCertificateResponse
       */
      Models::DeleteSiteOriginClientCertificateResponse deleteSiteOriginClientCertificate(const Models::DeleteSiteOriginClientCertificateRequest &request);

      /**
       * @summary Delete Transport Layer Application
       *
       * @param request DeleteTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTransportLayerApplicationResponse
       */
      Models::DeleteTransportLayerApplicationResponse deleteTransportLayerApplicationWithOptions(const Models::DeleteTransportLayerApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Transport Layer Application
       *
       * @param request DeleteTransportLayerApplicationRequest
       * @return DeleteTransportLayerApplicationResponse
       */
      Models::DeleteTransportLayerApplicationResponse deleteTransportLayerApplication(const Models::DeleteTransportLayerApplicationRequest &request);

      /**
       * @summary Deletes page monitoring configurations.
       *
       * @param request DeleteUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUrlObservationResponse
       */
      Models::DeleteUrlObservationResponse deleteUrlObservationWithOptions(const Models::DeleteUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes page monitoring configurations.
       *
       * @param request DeleteUrlObservationRequest
       * @return DeleteUrlObservationResponse
       */
      Models::DeleteUrlObservationResponse deleteUrlObservation(const Models::DeleteUrlObservationRequest &request);

      /**
       * @summary Deletes a log delivery task from your Alibaba Cloud account.
       *
       * @description ******> 
       * *   Deleted tasks cannot be restored. Proceed with caution.
       * *   To call this operation, you must have an account that has the required permissions.
       * *   The returned `RequestId` value can be used to track the request processing progress and troubleshoot issues.
       *
       * @param request DeleteUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserDeliveryTaskResponse
       */
      Models::DeleteUserDeliveryTaskResponse deleteUserDeliveryTaskWithOptions(const Models::DeleteUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a log delivery task from your Alibaba Cloud account.
       *
       * @description ******> 
       * *   Deleted tasks cannot be restored. Proceed with caution.
       * *   To call this operation, you must have an account that has the required permissions.
       * *   The returned `RequestId` value can be used to track the request processing progress and troubleshoot issues.
       *
       * @param request DeleteUserDeliveryTaskRequest
       * @return DeleteUserDeliveryTaskResponse
       */
      Models::DeleteUserDeliveryTaskResponse deleteUserDeliveryTask(const Models::DeleteUserDeliveryTaskRequest &request);

      /**
       * @summary Deletes a WAF ruleset from a specified instance.
       *
       * @description ## Request description
       * - The `InstanceId` and `Id` parameters are required. These parameters specify the ID of the WAF instance and the ID of the ruleset to delete.
       *
       * @param request DeleteUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserWafRulesetResponse
       */
      Models::DeleteUserWafRulesetResponse deleteUserWafRulesetWithOptions(const Models::DeleteUserWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a WAF ruleset from a specified instance.
       *
       * @description ## Request description
       * - The `InstanceId` and `Id` parameters are required. These parameters specify the ID of the WAF instance and the ID of the ruleset to delete.
       *
       * @param request DeleteUserWafRulesetRequest
       * @return DeleteUserWafRulesetResponse
       */
      Models::DeleteUserWafRulesetResponse deleteUserWafRuleset(const Models::DeleteUserWafRulesetRequest &request);

      /**
       * @summary Deletes a version of a site. Version 0 cannot be deleted.
       *
       * @param request DeleteVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVersionResponse
       */
      Models::DeleteVersionResponse deleteVersionWithOptions(const Models::DeleteVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a version of a site. Version 0 cannot be deleted.
       *
       * @param request DeleteVersionRequest
       * @return DeleteVersionResponse
       */
      Models::DeleteVersionResponse deleteVersion(const Models::DeleteVersionRequest &request);

      /**
       * @summary Deletes a video processing configuration.
       *
       * @param request DeleteVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVideoProcessingResponse
       */
      Models::DeleteVideoProcessingResponse deleteVideoProcessingWithOptions(const Models::DeleteVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a video processing configuration.
       *
       * @param request DeleteVideoProcessingRequest
       * @return DeleteVideoProcessingResponse
       */
      Models::DeleteVideoProcessingResponse deleteVideoProcessing(const Models::DeleteVideoProcessingRequest &request);

      /**
       * @summary Deletes a specified rule in Web Application Firewall (WAF). This operation also deletes the configurations and conditions associated with the rule.
       *
       * @param request DeleteWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWafRuleResponse
       */
      Models::DeleteWafRuleResponse deleteWafRuleWithOptions(const Models::DeleteWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified rule in Web Application Firewall (WAF). This operation also deletes the configurations and conditions associated with the rule.
       *
       * @param request DeleteWafRuleRequest
       * @return DeleteWafRuleResponse
       */
      Models::DeleteWafRuleResponse deleteWafRule(const Models::DeleteWafRuleRequest &request);

      /**
       * @summary Deletes a specified Web Application Firewall (WAF) ruleset.
       *
       * @param request DeleteWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWafRulesetResponse
       */
      Models::DeleteWafRulesetResponse deleteWafRulesetWithOptions(const Models::DeleteWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Web Application Firewall (WAF) ruleset.
       *
       * @param request DeleteWafRulesetRequest
       * @return DeleteWafRulesetResponse
       */
      Models::DeleteWafRulesetResponse deleteWafRuleset(const Models::DeleteWafRulesetRequest &request);

      /**
       * @summary Deletes a waiting room.
       *
       * @param request DeleteWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaitingRoomResponse
       */
      Models::DeleteWaitingRoomResponse deleteWaitingRoomWithOptions(const Models::DeleteWaitingRoomRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a waiting room.
       *
       * @param request DeleteWaitingRoomRequest
       * @return DeleteWaitingRoomResponse
       */
      Models::DeleteWaitingRoomResponse deleteWaitingRoom(const Models::DeleteWaitingRoomRequest &request);

      /**
       * @summary Deletes a waiting room event.
       *
       * @param request DeleteWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaitingRoomEventResponse
       */
      Models::DeleteWaitingRoomEventResponse deleteWaitingRoomEventWithOptions(const Models::DeleteWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a waiting room event.
       *
       * @param request DeleteWaitingRoomEventRequest
       * @return DeleteWaitingRoomEventResponse
       */
      Models::DeleteWaitingRoomEventResponse deleteWaitingRoomEvent(const Models::DeleteWaitingRoomEventRequest &request);

      /**
       * @summary Deletes a waiting room bypass rule.
       *
       * @param request DeleteWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaitingRoomRuleResponse
       */
      Models::DeleteWaitingRoomRuleResponse deleteWaitingRoomRuleWithOptions(const Models::DeleteWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a waiting room bypass rule.
       *
       * @param request DeleteWaitingRoomRuleRequest
       * @return DeleteWaitingRoomRuleResponse
       */
      Models::DeleteWaitingRoomRuleResponse deleteWaitingRoomRule(const Models::DeleteWaitingRoomRuleRequest &request);

      /**
       * @summary Queries the price of a bot instance.
       *
       * @param request DescribeBotPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBotPriceResponse
       */
      Models::DescribeBotPriceResponse describeBotPriceWithOptions(const Models::DescribeBotPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of a bot instance.
       *
       * @param request DescribeBotPriceRequest
       * @return DescribeBotPriceResponse
       */
      Models::DescribeBotPriceResponse describeBotPrice(const Models::DescribeBotPriceRequest &request);

      /**
       * @summary Invokes DescribeCacheReservePrice to query the price of a query cache reserve instance.
       *
       * @param request DescribeCacheReservePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCacheReservePriceResponse
       */
      Models::DescribeCacheReservePriceResponse describeCacheReservePriceWithOptions(const Models::DescribeCacheReservePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeCacheReservePrice to query the price of a query cache reserve instance.
       *
       * @param request DescribeCacheReservePriceRequest
       * @return DescribeCacheReservePriceResponse
       */
      Models::DescribeCacheReservePriceResponse describeCacheReservePrice(const Models::DescribeCacheReservePriceRequest &request);

      /**
       * @summary Queries the price for a cache-retained specification change.
       *
       * @param request DescribeCacheReservePriceGapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCacheReservePriceGapResponse
       */
      Models::DescribeCacheReservePriceGapResponse describeCacheReservePriceGapWithOptions(const Models::DescribeCacheReservePriceGapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for a cache-retained specification change.
       *
       * @param request DescribeCacheReservePriceGapRequest
       * @return DescribeCacheReservePriceGapResponse
       */
      Models::DescribeCacheReservePriceGapResponse describeCacheReservePriceGap(const Models::DescribeCacheReservePriceGapRequest &request);

      /**
       * @summary Queries the region information supported by the rules engine, including information in three dimensions: country, region, and ISP.
       *
       * @param request DescribeConditionIPBInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConditionIPBInfoResponse
       */
      Models::DescribeConditionIPBInfoResponse describeConditionIPBInfoWithOptions(const Models::DescribeConditionIPBInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region information supported by the rules engine, including information in three dimensions: country, region, and ISP.
       *
       * @param request DescribeConditionIPBInfoRequest
       * @return DescribeConditionIPBInfoResponse
       */
      Models::DescribeConditionIPBInfoResponse describeConditionIPBInfo(const Models::DescribeConditionIPBInfoRequest &request);

      /**
       * @summary Retrieves the configurations of custom scene policies.
       *
       * @param request DescribeCustomScenePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomScenePoliciesResponse
       */
      Models::DescribeCustomScenePoliciesResponse describeCustomScenePoliciesWithOptions(const Models::DescribeCustomScenePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configurations of custom scene policies.
       *
       * @param request DescribeCustomScenePoliciesRequest
       * @return DescribeCustomScenePoliciesResponse
       */
      Models::DescribeCustomScenePoliciesResponse describeCustomScenePolicies(const Models::DescribeCustomScenePoliciesRequest &request);

      /**
       * @summary Gets a list of DDoS attack events.
       *
       * @param request DescribeDDoSAllEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSAllEventListResponse
       */
      Models::DescribeDDoSAllEventListResponse describeDDoSAllEventListWithOptions(const Models::DescribeDDoSAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a list of DDoS attack events.
       *
       * @param request DescribeDDoSAllEventListRequest
       * @return DescribeDDoSAllEventListResponse
       */
      Models::DescribeDDoSAllEventListResponse describeDDoSAllEventList(const Models::DescribeDDoSAllEventListRequest &request);

      /**
       * @summary Query DCDN DDoS user bps and pps data
       *
       * @param request DescribeDDoSBpsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSBpsListResponse
       */
      Models::DescribeDDoSBpsListResponse describeDDoSBpsListWithOptions(const Models::DescribeDDoSBpsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query DCDN DDoS user bps and pps data
       *
       * @param request DescribeDDoSBpsListRequest
       * @return DescribeDDoSBpsListResponse
       */
      Models::DescribeDDoSBpsListResponse describeDDoSBpsList(const Models::DescribeDDoSBpsListRequest &request);

      /**
       * @summary Queries the peak bits per second (BPS) and packets per second (PPS) data of DDoS attacks at the network layer.
       *
       * @param request DescribeDDoSBpsMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSBpsMaxResponse
       */
      Models::DescribeDDoSBpsMaxResponse describeDDoSBpsMaxWithOptions(const Models::DescribeDDoSBpsMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak bits per second (BPS) and packets per second (PPS) data of DDoS attacks at the network layer.
       *
       * @param request DescribeDDoSBpsMaxRequest
       * @return DescribeDDoSBpsMaxResponse
       */
      Models::DescribeDDoSBpsMaxResponse describeDDoSBpsMax(const Models::DescribeDDoSBpsMaxRequest &request);

      /**
       * @summary Queries the peak values of DDoS attack events within a specified time range.
       *
       * @param request DescribeDDoSEventMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSEventMaxResponse
       */
      Models::DescribeDDoSEventMaxResponse describeDDoSEventMaxWithOptions(const Models::DescribeDDoSEventMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak values of DDoS attack events within a specified time range.
       *
       * @param request DescribeDDoSEventMaxRequest
       * @return DescribeDDoSEventMaxResponse
       */
      Models::DescribeDDoSEventMaxResponse describeDDoSEventMax(const Models::DescribeDDoSEventMaxRequest &request);

      /**
       * @summary DDoS Analysis Layer 7 QPS Trend Chart API
       *
       * @param request DescribeDDoSL7QpsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSL7QpsListResponse
       */
      Models::DescribeDDoSL7QpsListResponse describeDDoSL7QpsListWithOptions(const Models::DescribeDDoSL7QpsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DDoS Analysis Layer 7 QPS Trend Chart API
       *
       * @param request DescribeDDoSL7QpsListRequest
       * @return DescribeDDoSL7QpsListResponse
       */
      Models::DescribeDDoSL7QpsListResponse describeDDoSL7QpsList(const Models::DescribeDDoSL7QpsListRequest &request);

      /**
       * @summary Queries the number of DDoS attacks outside China.
       *
       * @param request DescribeDDoSOverseasAttackCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSOverseasAttackCountResponse
       */
      Models::DescribeDDoSOverseasAttackCountResponse describeDDoSOverseasAttackCountWithOptions(const Models::DescribeDDoSOverseasAttackCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of DDoS attacks outside China.
       *
       * @param request DescribeDDoSOverseasAttackCountRequest
       * @return DescribeDDoSOverseasAttackCountResponse
       */
      Models::DescribeDDoSOverseasAttackCountResponse describeDDoSOverseasAttackCount(const Models::DescribeDDoSOverseasAttackCountRequest &request);

      /**
       * @summary Queries the maximum burst bandwidth for a DDoS instance in mainland China.
       *
       * @param request DescribeDdosMaxBurstGbpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosMaxBurstGbpsResponse
       */
      Models::DescribeDdosMaxBurstGbpsResponse describeDdosMaxBurstGbpsWithOptions(const Models::DescribeDdosMaxBurstGbpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum burst bandwidth for a DDoS instance in mainland China.
       *
       * @param request DescribeDdosMaxBurstGbpsRequest
       * @return DescribeDdosMaxBurstGbpsResponse
       */
      Models::DescribeDdosMaxBurstGbpsResponse describeDdosMaxBurstGbps(const Models::DescribeDdosMaxBurstGbpsRequest &request);

      /**
       * @summary Retrieves monitoring data for metrics of Edge Service Agent (ESA) edge containers.
       *
       * @param request DescribeEdgeContainerAppStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEdgeContainerAppStatsResponse
       */
      Models::DescribeEdgeContainerAppStatsResponse describeEdgeContainerAppStatsWithOptions(const Models::DescribeEdgeContainerAppStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves monitoring data for metrics of Edge Service Agent (ESA) edge containers.
       *
       * @param request DescribeEdgeContainerAppStatsRequest
       * @return DescribeEdgeContainerAppStatsResponse
       */
      Models::DescribeEdgeContainerAppStatsResponse describeEdgeContainerAppStats(const Models::DescribeEdgeContainerAppStatsRequest &request);

      /**
       * @summary Retrieves the HTTP DDoS intelligent protection configuration, including the protection mode and protection level.
       *
       * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::DescribeHttpDDoSAttackIntelligentProtectionResponse describeHttpDDoSAttackIntelligentProtectionWithOptions(const Models::DescribeHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the HTTP DDoS intelligent protection configuration, including the protection mode and protection level.
       *
       * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
       * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::DescribeHttpDDoSAttackIntelligentProtectionResponse describeHttpDDoSAttackIntelligentProtection(const Models::DescribeHttpDDoSAttackIntelligentProtectionRequest &request);

      /**
       * @summary Queries the configurations of HTTP DDoS attack protection.
       *
       * @param request DescribeHttpDDoSAttackProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackProtectionResponse
       */
      Models::DescribeHttpDDoSAttackProtectionResponse describeHttpDDoSAttackProtectionWithOptions(const Models::DescribeHttpDDoSAttackProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of HTTP DDoS attack protection.
       *
       * @param request DescribeHttpDDoSAttackProtectionRequest
       * @return DescribeHttpDDoSAttackProtectionResponse
       */
      Models::DescribeHttpDDoSAttackProtectionResponse describeHttpDDoSAttackProtection(const Models::DescribeHttpDDoSAttackProtectionRequest &request);

      /**
       * @summary Queries HTTP DDoS attack protection rules.
       *
       * @param request DescribeHttpDDoSAttackRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackRulesResponse
       */
      Models::DescribeHttpDDoSAttackRulesResponse describeHttpDDoSAttackRulesWithOptions(const Models::DescribeHttpDDoSAttackRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries HTTP DDoS attack protection rules.
       *
       * @param request DescribeHttpDDoSAttackRulesRequest
       * @return DescribeHttpDDoSAttackRulesResponse
       */
      Models::DescribeHttpDDoSAttackRulesResponse describeHttpDDoSAttackRules(const Models::DescribeHttpDDoSAttackRulesRequest &request);

      /**
       * @summary Describes the accurate access control rules created by Deep Learning and Protection.
       *
       * @param request DescribeHttpDDoSIntelligentAclRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSIntelligentAclRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentAclRulesResponse describeHttpDDoSIntelligentAclRulesWithOptions(const Models::DescribeHttpDDoSIntelligentAclRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the accurate access control rules created by Deep Learning and Protection.
       *
       * @param request DescribeHttpDDoSIntelligentAclRulesRequest
       * @return DescribeHttpDDoSIntelligentAclRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentAclRulesResponse describeHttpDDoSIntelligentAclRules(const Models::DescribeHttpDDoSIntelligentAclRulesRequest &request);

      /**
       * @summary Queries the frequency control rules generated by Deep Learning and Protection.
       *
       * @param request DescribeHttpDDoSIntelligentRateLimitRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSIntelligentRateLimitRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentRateLimitRulesResponse describeHttpDDoSIntelligentRateLimitRulesWithOptions(const Models::DescribeHttpDDoSIntelligentRateLimitRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the frequency control rules generated by Deep Learning and Protection.
       *
       * @param request DescribeHttpDDoSIntelligentRateLimitRulesRequest
       * @return DescribeHttpDDoSIntelligentRateLimitRulesResponse
       */
      Models::DescribeHttpDDoSIntelligentRateLimitRulesResponse describeHttpDDoSIntelligentRateLimitRules(const Models::DescribeHttpDDoSIntelligentRateLimitRulesRequest &request);

      /**
       * @summary Queries the status of an account in the KV service.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKvAccountStatusResponse
       */
      Models::DescribeKvAccountStatusResponse describeKvAccountStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an account in the KV service.
       *
       * @return DescribeKvAccountStatusResponse
       */
      Models::DescribeKvAccountStatusResponse describeKvAccountStatus();

      /**
       * @summary Queries prefetch tasks by time, task status, or prefetch URL.
       *
       * @param request DescribePreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreloadTasksResponse
       */
      Models::DescribePreloadTasksResponse describePreloadTasksWithOptions(const Models::DescribePreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries prefetch tasks by time, task status, or prefetch URL.
       *
       * @param request DescribePreloadTasksRequest
       * @return DescribePreloadTasksResponse
       */
      Models::DescribePreloadTasksResponse describePreloadTasks(const Models::DescribePreloadTasksRequest &request);

      /**
       * @summary Queries the execution status of refresh tasks.
       *
       * @param request DescribePurgeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurgeTasksResponse
       */
      Models::DescribePurgeTasksResponse describePurgeTasksWithOptions(const Models::DescribePurgeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of refresh tasks.
       *
       * @param request DescribePurgeTasksRequest
       * @return DescribePurgeTasksResponse
       */
      Models::DescribePurgeTasksResponse describePurgeTasks(const Models::DescribePurgeTasksRequest &request);

      /**
       * @summary Queries the status of an instance that uses a plan.
       *
       * @description You can query the status of an instance after you purchase a plan for the instance.
       *
       * @param request DescribeRatePlanInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRatePlanInstanceStatusResponse
       */
      Models::DescribeRatePlanInstanceStatusResponse describeRatePlanInstanceStatusWithOptions(const Models::DescribeRatePlanInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an instance that uses a plan.
       *
       * @description You can query the status of an instance after you purchase a plan for the instance.
       *
       * @param request DescribeRatePlanInstanceStatusRequest
       * @return DescribeRatePlanInstanceStatusResponse
       */
      Models::DescribeRatePlanInstanceStatusResponse describeRatePlanInstanceStatus(const Models::DescribeRatePlanInstanceStatusRequest &request);

      /**
       * @summary Queries the price of a plan, including its type and status.
       *
       * @description The purchase period is measured in months.
       *
       * @param request DescribeRatePlanPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRatePlanPriceResponse
       */
      Models::DescribeRatePlanPriceResponse describeRatePlanPriceWithOptions(const Models::DescribeRatePlanPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of a plan, including its type and status.
       *
       * @description The purchase period is measured in months.
       *
       * @param request DescribeRatePlanPriceRequest
       * @return DescribeRatePlanPriceResponse
       */
      Models::DescribeRatePlanPriceResponse describeRatePlanPrice(const Models::DescribeRatePlanPriceRequest &request);

      /**
       * @summary Queries the price difference for a plan specification change by calling DescribeRatePlanPriceGap.
       *
       * @description The plan name and plan code can be obtained from the [DescribeRatePlanPrice](~~DescribeRatePlanPrice~~) operation.
       *
       * @param request DescribeRatePlanPriceGapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRatePlanPriceGapResponse
       */
      Models::DescribeRatePlanPriceGapResponse describeRatePlanPriceGapWithOptions(const Models::DescribeRatePlanPriceGapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price difference for a plan specification change by calling DescribeRatePlanPriceGap.
       *
       * @description The plan name and plan code can be obtained from the [DescribeRatePlanPrice](~~DescribeRatePlanPrice~~) operation.
       *
       * @param request DescribeRatePlanPriceGapRequest
       * @return DescribeRatePlanPriceGapResponse
       */
      Models::DescribeRatePlanPriceGapResponse describeRatePlanPriceGap(const Models::DescribeRatePlanPriceGapRequest &request);

      /**
       * @summary Retrieves metadata related to the rules engine.
       *
       * @param request DescribeRuleMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleMetadataResponse
       */
      Models::DescribeRuleMetadataResponse describeRuleMetadataWithOptions(const Models::DescribeRuleMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves metadata related to the rules engine.
       *
       * @param request DescribeRuleMetadataRequest
       * @return DescribeRuleMetadataResponse
       */
      Models::DescribeRuleMetadataResponse describeRuleMetadata(const Models::DescribeRuleMetadataRequest &request);

      /**
       * @summary Queries the URLs from which you can download the raw access logs of a website.
       *
       * @description - If you do not specify StartTime and EndTime, log data from the last 24 hours is returned by default. If you specify StartTime and EndTime, log data for the specified time range is returned.
       * - The time granularity for data queries is one hour.
       * - The maximum number of calls per user: 50 calls per second.
       * - Only log records from the last month can be queried (the time span between the start time and the current time cannot exceed 31 days).
       *
       * @param request DescribeSiteLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteLogsResponse
       */
      Models::DescribeSiteLogsResponse describeSiteLogsWithOptions(const Models::DescribeSiteLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URLs from which you can download the raw access logs of a website.
       *
       * @description - If you do not specify StartTime and EndTime, log data from the last 24 hours is returned by default. If you specify StartTime and EndTime, log data for the specified time range is returned.
       * - The time granularity for data queries is one hour.
       * - The maximum number of calls per user: 50 calls per second.
       * - Only log records from the last month can be queried (the time span between the start time and the current time cannot exceed 31 days).
       *
       * @param request DescribeSiteLogsRequest
       * @return DescribeSiteLogsResponse
       */
      Models::DescribeSiteLogsResponse describeSiteLogs(const Models::DescribeSiteLogsRequest &request);

      /**
       * @summary Query traffic analysis time series data
       *
       * @description - If you do not specify `StartTime` and `EndTime`, the API returns data for the past 24 hours; if you specify `StartTime` and `EndTime`, the API returns data for the specified time period.
       * - The API returns different time granularities based on the span between `StartTime` and `EndTime`.
       *   * For a span of 3 hours or less, it returns 1-minute granularity data.
       *   * For a span greater than 3 hours but no more than 12 hours, it returns 5-minute granularity data.
       *   * For a span greater than 12 hours but no more than 1 day, it returns 15-minute granularity data.
       *   * For a span greater than 1 day but no more than 10 days, it returns hourly granularity data.
       *   * For a span greater than 10 days but no more than 31 days, it returns daily granularity data.
       * - Due to the high number of accesses during the query period, the data analysis may be sampled.
       *
       * @param tmpReq DescribeSiteTimeSeriesDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteTimeSeriesDataResponse
       */
      Models::DescribeSiteTimeSeriesDataResponse describeSiteTimeSeriesDataWithOptions(const Models::DescribeSiteTimeSeriesDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query traffic analysis time series data
       *
       * @description - If you do not specify `StartTime` and `EndTime`, the API returns data for the past 24 hours; if you specify `StartTime` and `EndTime`, the API returns data for the specified time period.
       * - The API returns different time granularities based on the span between `StartTime` and `EndTime`.
       *   * For a span of 3 hours or less, it returns 1-minute granularity data.
       *   * For a span greater than 3 hours but no more than 12 hours, it returns 5-minute granularity data.
       *   * For a span greater than 12 hours but no more than 1 day, it returns 15-minute granularity data.
       *   * For a span greater than 1 day but no more than 10 days, it returns hourly granularity data.
       *   * For a span greater than 10 days but no more than 31 days, it returns daily granularity data.
       * - Due to the high number of accesses during the query period, the data analysis may be sampled.
       *
       * @param request DescribeSiteTimeSeriesDataRequest
       * @return DescribeSiteTimeSeriesDataResponse
       */
      Models::DescribeSiteTimeSeriesDataResponse describeSiteTimeSeriesData(const Models::DescribeSiteTimeSeriesDataRequest &request);

      /**
       * @summary Queries the top-ranking records in a traffic analytics report by website or Alibaba Cloud account.
       *
       * @description - If you do not specify StartTime and EndTime, data from the last 24 hours is returned. If you specify StartTime and EndTime, data for the specified time range is returned.
       * - Due to a large number of visits during the queried time range, the data analytics results may be sampled.
       *
       * @param tmpReq DescribeSiteTopDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteTopDataResponse
       */
      Models::DescribeSiteTopDataResponse describeSiteTopDataWithOptions(const Models::DescribeSiteTopDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top-ranking records in a traffic analytics report by website or Alibaba Cloud account.
       *
       * @description - If you do not specify StartTime and EndTime, data from the last 24 hours is returned. If you specify StartTime and EndTime, data for the specified time range is returned.
       * - Due to a large number of visits during the queried time range, the data analytics results may be sampled.
       *
       * @param request DescribeSiteTopDataRequest
       * @return DescribeSiteTopDataResponse
       */
      Models::DescribeSiteTopDataResponse describeSiteTopData(const Models::DescribeSiteTopDataRequest &request);

      /**
       * @summary Retrieves time series data for WAF event analysis of a website.
       *
       * @description - If you do not specify StartTime and EndTime, this operation returns data from the past 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * - The time granularity of the returned data varies based on the time span between StartTime and EndTime.
       *   * Less than or equal to 3 hours: returns data at a 1-minute granularity.
       *   * Greater than 3 hours and less than or equal to 12 hours: returns data at a 5-minute granularity.
       *   * Greater than 12 hours and less than or equal to 1 day: returns data at a 15-minute granularity.
       *   * Greater than 1 day and less than or equal to 10 days: returns data at an hourly granularity.
       *   * Greater than 10 days and less than or equal to 31 days: returns data at a daily granularity.
       * - Because the number of access requests during the query period may be large, the data analytics results may undergo sampling.
       *
       * @param tmpReq DescribeSiteWafTimeSeriesDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteWafTimeSeriesDataResponse
       */
      Models::DescribeSiteWafTimeSeriesDataResponse describeSiteWafTimeSeriesDataWithOptions(const Models::DescribeSiteWafTimeSeriesDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves time series data for WAF event analysis of a website.
       *
       * @description - If you do not specify StartTime and EndTime, this operation returns data from the past 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * - The time granularity of the returned data varies based on the time span between StartTime and EndTime.
       *   * Less than or equal to 3 hours: returns data at a 1-minute granularity.
       *   * Greater than 3 hours and less than or equal to 12 hours: returns data at a 5-minute granularity.
       *   * Greater than 12 hours and less than or equal to 1 day: returns data at a 15-minute granularity.
       *   * Greater than 1 day and less than or equal to 10 days: returns data at an hourly granularity.
       *   * Greater than 10 days and less than or equal to 31 days: returns data at a daily granularity.
       * - Because the number of access requests during the query period may be large, the data analytics results may undergo sampling.
       *
       * @param request DescribeSiteWafTimeSeriesDataRequest
       * @return DescribeSiteWafTimeSeriesDataResponse
       */
      Models::DescribeSiteWafTimeSeriesDataResponse describeSiteWafTimeSeriesData(const Models::DescribeSiteWafTimeSeriesDataRequest &request);

      /**
       * @summary Retrieves the top data from WAF event analysis for a website.
       *
       * @description - If you do not specify StartTime or EndTime, this operation returns data from the past 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * - Because of the high volume of access requests during the query period, data analytics may involve sampling.
       *
       * @param tmpReq DescribeSiteWafTopDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteWafTopDataResponse
       */
      Models::DescribeSiteWafTopDataResponse describeSiteWafTopDataWithOptions(const Models::DescribeSiteWafTopDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the top data from WAF event analysis for a website.
       *
       * @description - If you do not specify StartTime or EndTime, this operation returns data from the past 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * - Because of the high volume of access requests during the query period, data analytics may involve sampling.
       *
       * @param request DescribeSiteWafTopDataRequest
       * @return DescribeSiteWafTopDataResponse
       */
      Models::DescribeSiteWafTopDataResponse describeSiteWafTopData(const Models::DescribeSiteWafTopDataRequest &request);

      /**
       * @summary Retrieves the details of a diagnostic report. 1. Call GenerateTraceDiagnose to obtain a diagnostic link. 2. Open the link in a browser to complete client-side diagnostics. 3. Call ListTraceTasks to obtain the TaskId or TraceId. 4. Call this operation to retrieve the report.
       *
       * @description >Notice: Make sure that you have activated the Layer 4 acceleration service before calling this operation.1. Call GenerateTraceDiagnose to obtain a diagnostic link. 2. Open the link in a browser to complete client-side diagnostics. 3. Call ListTraceTasks to obtain the TaskId or TraceId. 4. Call this operation to retrieve the report.
       *
       * @param request DescribeTraceDiagnoseReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTraceDiagnoseReportResponse
       */
      Models::DescribeTraceDiagnoseReportResponse describeTraceDiagnoseReportWithOptions(const Models::DescribeTraceDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a diagnostic report. 1. Call GenerateTraceDiagnose to obtain a diagnostic link. 2. Open the link in a browser to complete client-side diagnostics. 3. Call ListTraceTasks to obtain the TaskId or TraceId. 4. Call this operation to retrieve the report.
       *
       * @description >Notice: Make sure that you have activated the Layer 4 acceleration service before calling this operation.1. Call GenerateTraceDiagnose to obtain a diagnostic link. 2. Open the link in a browser to complete client-side diagnostics. 3. Call ListTraceTasks to obtain the TaskId or TraceId. 4. Call this operation to retrieve the report.
       *
       * @param request DescribeTraceDiagnoseReportRequest
       * @return DescribeTraceDiagnoseReportResponse
       */
      Models::DescribeTraceDiagnoseReportResponse describeTraceDiagnoseReport(const Models::DescribeTraceDiagnoseReportRequest &request);

      /**
       * @summary Queries the page monitoring data.
       *
       * @param request DescribeUrlObservationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUrlObservationDataResponse
       */
      Models::DescribeUrlObservationDataResponse describeUrlObservationDataWithOptions(const Models::DescribeUrlObservationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the page monitoring data.
       *
       * @param request DescribeUrlObservationDataRequest
       * @return DescribeUrlObservationDataResponse
       */
      Models::DescribeUrlObservationDataResponse describeUrlObservationData(const Models::DescribeUrlObservationDataRequest &request);

      /**
       * @summary Queries the usage data of WAF by calling DescribeWafUsageData.
       *
       * @description * Maximum storage duration: 93 days.
       * * Maximum query time range: 31 days.
       * * Default time range: 24 hours.
       * All times are expressed in UTC+0.
       *
       * @param request DescribeWafUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWafUsageDataResponse
       */
      Models::DescribeWafUsageDataResponse describeWafUsageDataWithOptions(const Models::DescribeWafUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of WAF by calling DescribeWafUsageData.
       *
       * @description * Maximum storage duration: 93 days.
       * * Maximum query time range: 31 days.
       * * Default time range: 24 hours.
       * All times are expressed in UTC+0.
       *
       * @param request DescribeWafUsageDataRequest
       * @return DescribeWafUsageDataResponse
       */
      Models::DescribeWafUsageDataResponse describeWafUsageData(const Models::DescribeWafUsageDataRequest &request);

      /**
       * @summary Disables a scenario-specific policy.
       *
       * @param request DisableCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomScenePolicyResponse
       */
      Models::DisableCustomScenePolicyResponse disableCustomScenePolicyWithOptions(const Models::DisableCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a scenario-specific policy.
       *
       * @param request DisableCustomScenePolicyRequest
       * @return DisableCustomScenePolicyResponse
       */
      Models::DisableCustomScenePolicyResponse disableCustomScenePolicy(const Models::DisableCustomScenePolicyRequest &request);

      /**
       * @summary Edit WAF Configuration for a Site
       *
       * @param tmpReq EditSiteWafSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditSiteWafSettingsResponse
       */
      Models::EditSiteWafSettingsResponse editSiteWafSettingsWithOptions(const Models::EditSiteWafSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit WAF Configuration for a Site
       *
       * @param request EditSiteWafSettingsRequest
       * @return EditSiteWafSettingsResponse
       */
      Models::EditSiteWafSettingsResponse editSiteWafSettings(const Models::EditSiteWafSettingsRequest &request);

      /**
       * @summary Enables a scenario-specific policy.
       *
       * @param request EnableCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomScenePolicyResponse
       */
      Models::EnableCustomScenePolicyResponse enableCustomScenePolicyWithOptions(const Models::EnableCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a scenario-specific policy.
       *
       * @param request EnableCustomScenePolicyRequest
       * @return EnableCustomScenePolicyResponse
       */
      Models::EnableCustomScenePolicyResponse enableCustomScenePolicy(const Models::EnableCustomScenePolicyRequest &request);

      /**
       * @summary Exports the CNAME values of all records under the current site. When the site access mode is switched to CNAME access, you can call this operation to retrieve pre-configured CNAME values to prevent service interruptions.
       *
       * @param request ExportRecordCnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportRecordCnamesResponse
       */
      Models::ExportRecordCnamesResponse exportRecordCnamesWithOptions(const Models::ExportRecordCnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the CNAME values of all records under the current site. When the site access mode is switched to CNAME access, you can call this operation to retrieve pre-configured CNAME values to prevent service interruptions.
       *
       * @param request ExportRecordCnamesRequest
       * @return ExportRecordCnamesResponse
       */
      Models::ExportRecordCnamesResponse exportRecordCnames(const Models::ExportRecordCnamesRequest &request);

      /**
       * @summary Exports all DNS records of a website domain as a TXT file.
       *
       * @param request ExportRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportRecordsResponse
       */
      Models::ExportRecordsResponse exportRecordsWithOptions(const Models::ExportRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports all DNS records of a website domain as a TXT file.
       *
       * @param request ExportRecordsRequest
       * @return ExportRecordsResponse
       */
      Models::ExportRecordsResponse exportRecords(const Models::ExportRecordsRequest &request);

      /**
       * @summary Generates a diagnosis link.
       *
       * @param request GenerateTraceDiagnoseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTraceDiagnoseResponse
       */
      Models::GenerateTraceDiagnoseResponse generateTraceDiagnoseWithOptions(const Models::GenerateTraceDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a diagnosis link.
       *
       * @param request GenerateTraceDiagnoseRequest
       * @return GenerateTraceDiagnoseResponse
       */
      Models::GenerateTraceDiagnoseResponse generateTraceDiagnose(const Models::GenerateTraceDiagnoseRequest &request);

      /**
       * @summary Retrieves usage information for an API schema validation plan.
       *
       * @param request GetApiSchemaUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiSchemaUsageResponse
       */
      Models::GetApiSchemaUsageResponse getApiSchemaUsageWithOptions(const Models::GetApiSchemaUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves usage information for an API schema validation plan.
       *
       * @param request GetApiSchemaUsageRequest
       * @return GetApiSchemaUsageResponse
       */
      Models::GetApiSchemaUsageResponse getApiSchemaUsage(const Models::GetApiSchemaUsageRequest &request);

      /**
       * @summary Queries the automatic frequency control configuration for a site.
       *
       * @param request GetAutomaticFrequencyControlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutomaticFrequencyControlConfigResponse
       */
      Models::GetAutomaticFrequencyControlConfigResponse getAutomaticFrequencyControlConfigWithOptions(const Models::GetAutomaticFrequencyControlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic frequency control configuration for a site.
       *
       * @param request GetAutomaticFrequencyControlConfigRequest
       * @return GetAutomaticFrequencyControlConfigResponse
       */
      Models::GetAutomaticFrequencyControlConfigResponse getAutomaticFrequencyControlConfig(const Models::GetAutomaticFrequencyControlConfigRequest &request);

      /**
       * @summary Queries the cache reserve configuration of a site.
       *
       * @param request GetCacheReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheReserveResponse
       */
      Models::GetCacheReserveResponse getCacheReserveWithOptions(const Models::GetCacheReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cache reserve configuration of a site.
       *
       * @param request GetCacheReserveRequest
       * @return GetCacheReserveResponse
       */
      Models::GetCacheReserveResponse getCacheReserve(const Models::GetCacheReserveRequest &request);

      /**
       * @summary Queries the available specifications of cache reserve instances.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheReserveSpecificationResponse
       */
      Models::GetCacheReserveSpecificationResponse getCacheReserveSpecificationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available specifications of cache reserve instances.
       *
       * @return GetCacheReserveSpecificationResponse
       */
      Models::GetCacheReserveSpecificationResponse getCacheReserveSpecification();

      /**
       * @summary Retrieves a single cache configuration.
       *
       * @param request GetCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheRuleResponse
       */
      Models::GetCacheRuleResponse getCacheRuleWithOptions(const Models::GetCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single cache configuration.
       *
       * @param request GetCacheRuleRequest
       * @return GetCacheRuleResponse
       */
      Models::GetCacheRuleResponse getCacheRule(const Models::GetCacheRuleRequest &request);

      /**
       * @summary Query Site Cache Tag Configuration
       *
       * @param request GetCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheTagResponse
       */
      Models::GetCacheTagResponse getCacheTagWithOptions(const Models::GetCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Site Cache Tag Configuration
       *
       * @param request GetCacheTagRequest
       * @return GetCacheTagResponse
       */
      Models::GetCacheTagResponse getCacheTag(const Models::GetCacheTagRequest &request);

      /**
       * @summary Retrieves information about a specified certificate for a site.
       *
       * @param request GetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificateWithOptions(const Models::GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified certificate for a site.
       *
       * @param request GetCertificateRequest
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificate(const Models::GetCertificateRequest &request);

      /**
       * @summary Queries the quota and usage of free certificates.
       *
       * @param request GetCertificateQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateQuotaResponse
       */
      Models::GetCertificateQuotaResponse getCertificateQuotaWithOptions(const Models::GetCertificateQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota and usage of free certificates.
       *
       * @param request GetCertificateQuotaRequest
       * @return GetCertificateQuotaResponse
       */
      Models::GetCertificateQuotaResponse getCertificateQuota(const Models::GetCertificateQuotaRequest &request);

      /**
       * @summary Retrieves a specified client CA certificate.
       *
       * @param request GetClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCaCertificateResponse
       */
      Models::GetClientCaCertificateResponse getClientCaCertificateWithOptions(const Models::GetClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a specified client CA certificate.
       *
       * @param request GetClientCaCertificateRequest
       * @return GetClientCaCertificateResponse
       */
      Models::GetClientCaCertificateResponse getClientCaCertificate(const Models::GetClientCaCertificateRequest &request);

      /**
       * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If no certificate is specified, this operation returns the list of hostnames bound to the ESA CA certificate.
       *
       * @param request GetClientCaCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCaCertificateHostnamesResponse
       */
      Models::GetClientCaCertificateHostnamesResponse getClientCaCertificateHostnamesWithOptions(const Models::GetClientCaCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If no certificate is specified, this operation returns the list of hostnames bound to the ESA CA certificate.
       *
       * @param request GetClientCaCertificateHostnamesRequest
       * @return GetClientCaCertificateHostnamesResponse
       */
      Models::GetClientCaCertificateHostnamesResponse getClientCaCertificateHostnames(const Models::GetClientCaCertificateHostnamesRequest &request);

      /**
       * @summary Retrieves information about a specified client certificate.
       *
       * @param request GetClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCertificateResponse
       */
      Models::GetClientCertificateResponse getClientCertificateWithOptions(const Models::GetClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified client certificate.
       *
       * @param request GetClientCertificateRequest
       * @return GetClientCertificateResponse
       */
      Models::GetClientCertificateResponse getClientCertificate(const Models::GetClientCertificateRequest &request);

      /**
       * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If you do not specify a certificate, the operation returns the list of hostnames for the ESA CA certificate.
       *
       * @param request GetClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCertificateHostnamesResponse
       */
      Models::GetClientCertificateHostnamesResponse getClientCertificateHostnamesWithOptions(const Models::GetClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If you do not specify a certificate, the operation returns the list of hostnames for the ESA CA certificate.
       *
       * @param request GetClientCertificateHostnamesRequest
       * @return GetClientCertificateHostnamesResponse
       */
      Models::GetClientCertificateHostnamesResponse getClientCertificateHostnames(const Models::GetClientCertificateHostnamesRequest &request);

      /**
       * @summary Queries the CNAME flattening configuration of a website
       *
       * @param request GetCnameFlatteningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCnameFlatteningResponse
       */
      Models::GetCnameFlatteningResponse getCnameFlatteningWithOptions(const Models::GetCnameFlatteningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CNAME flattening configuration of a website
       *
       * @param request GetCnameFlatteningRequest
       * @return GetCnameFlatteningResponse
       */
      Models::GetCnameFlatteningResponse getCnameFlattening(const Models::GetCnameFlatteningRequest &request);

      /**
       * @summary Query Compression Rule Details
       *
       * @param request GetCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompressionRuleResponse
       */
      Models::GetCompressionRuleResponse getCompressionRuleWithOptions(const Models::GetCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Compression Rule Details
       *
       * @param request GetCompressionRuleRequest
       * @return GetCompressionRuleResponse
       */
      Models::GetCompressionRuleResponse getCompressionRule(const Models::GetCompressionRuleRequest &request);

      /**
       * @summary Queries the configuration of Chinese mainland access optimization.
       *
       * @param request GetCrossBorderOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCrossBorderOptimizationResponse
       */
      Models::GetCrossBorderOptimizationResponse getCrossBorderOptimizationWithOptions(const Models::GetCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of Chinese mainland access optimization.
       *
       * @param request GetCrossBorderOptimizationRequest
       * @return GetCrossBorderOptimizationResponse
       */
      Models::GetCrossBorderOptimizationResponse getCrossBorderOptimization(const Models::GetCrossBorderOptimizationRequest &request);

      /**
       * @summary Retrieves the detailed configuration of a single SaaS domain name, including the domain verification TXT name, domain verification TXT content, and certificate expiration time (when SSL is enabled).
       *
       * @param request GetCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomHostnameResponse
       */
      Models::GetCustomHostnameResponse getCustomHostnameWithOptions(const Models::GetCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration of a single SaaS domain name, including the domain verification TXT name, domain verification TXT content, and certificate expiration time (when SSL is enabled).
       *
       * @param request GetCustomHostnameRequest
       * @return GetCustomHostnameResponse
       */
      Models::GetCustomHostnameResponse getCustomHostname(const Models::GetCustomHostnameRequest &request);

      /**
       * @summary Retrieve details about a site\\"s custom response code configuration.
       *
       * @param request GetCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomResponseCodeRuleResponse
       */
      Models::GetCustomResponseCodeRuleResponse getCustomResponseCodeRuleWithOptions(const Models::GetCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details about a site\\"s custom response code configuration.
       *
       * @param request GetCustomResponseCodeRuleRequest
       * @return GetCustomResponseCodeRuleResponse
       */
      Models::GetCustomResponseCodeRuleResponse getCustomResponseCodeRule(const Models::GetCustomResponseCodeRuleRequest &request);

      /**
       * @summary Retrieves the delegated DCV information.
       *
       * @param request GetDcvDelegationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDcvDelegationResponse
       */
      Models::GetDcvDelegationResponse getDcvDelegationWithOptions(const Models::GetDcvDelegationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the delegated DCV information.
       *
       * @param request GetDcvDelegationRequest
       * @return GetDcvDelegationResponse
       */
      Models::GetDcvDelegationResponse getDcvDelegation(const Models::GetDcvDelegationRequest &request);

      /**
       * @summary Query Site Developer Mode Configuration
       *
       * @param request GetDevelopmentModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDevelopmentModeResponse
       */
      Models::GetDevelopmentModeResponse getDevelopmentModeWithOptions(const Models::GetDevelopmentModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Site Developer Mode Configuration
       *
       * @param request GetDevelopmentModeRequest
       * @return GetDevelopmentModeResponse
       */
      Models::GetDevelopmentModeResponse getDevelopmentMode(const Models::GetDevelopmentModeRequest &request);

      /**
       * @summary Retrieves the details of an edge container plan instance.
       *
       * @param request GetEdgeContainerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerResponse
       */
      Models::GetEdgeContainerResponse getEdgeContainerWithOptions(const Models::GetEdgeContainerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an edge container plan instance.
       *
       * @param request GetEdgeContainerRequest
       * @return GetEdgeContainerResponse
       */
      Models::GetEdgeContainerResponse getEdgeContainer(const Models::GetEdgeContainerRequest &request);

      /**
       * @summary Queries the information about a containerized application, including basic application configurations and health check configurations.
       *
       * @param request GetEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResponse
       */
      Models::GetEdgeContainerAppResponse getEdgeContainerAppWithOptions(const Models::GetEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a containerized application, including basic application configurations and health check configurations.
       *
       * @param request GetEdgeContainerAppRequest
       * @return GetEdgeContainerAppResponse
       */
      Models::GetEdgeContainerAppResponse getEdgeContainerApp(const Models::GetEdgeContainerAppRequest &request);

      /**
       * @summary Retrieves the log collection configuration of an edge container application.
       *
       * @param request GetEdgeContainerAppLogRiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppLogRiverResponse
       */
      Models::GetEdgeContainerAppLogRiverResponse getEdgeContainerAppLogRiverWithOptions(const Models::GetEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the log collection configuration of an edge container application.
       *
       * @param request GetEdgeContainerAppLogRiverRequest
       * @return GetEdgeContainerAppLogRiverResponse
       */
      Models::GetEdgeContainerAppLogRiverResponse getEdgeContainerAppLogRiver(const Models::GetEdgeContainerAppLogRiverRequest &request);

      /**
       * @summary Get the resource capacity of an edge container application
       *
       * @param request GetEdgeContainerAppResourceCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceCapacityResponse
       */
      Models::GetEdgeContainerAppResourceCapacityResponse getEdgeContainerAppResourceCapacityWithOptions(const Models::GetEdgeContainerAppResourceCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the resource capacity of an edge container application
       *
       * @param request GetEdgeContainerAppResourceCapacityRequest
       * @return GetEdgeContainerAppResourceCapacityResponse
       */
      Models::GetEdgeContainerAppResourceCapacityResponse getEdgeContainerAppResourceCapacity(const Models::GetEdgeContainerAppResourceCapacityRequest &request);

      /**
       * @summary Retrieves the resource reservation configuration of an edge container application.
       *
       * @param request GetEdgeContainerAppResourceReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceReserveResponse
       */
      Models::GetEdgeContainerAppResourceReserveResponse getEdgeContainerAppResourceReserveWithOptions(const Models::GetEdgeContainerAppResourceReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the resource reservation configuration of an edge container application.
       *
       * @param request GetEdgeContainerAppResourceReserveRequest
       * @return GetEdgeContainerAppResourceReserveResponse
       */
      Models::GetEdgeContainerAppResourceReserveResponse getEdgeContainerAppResourceReserve(const Models::GetEdgeContainerAppResourceReserveRequest &request);

      /**
       * @summary Obtains the distribution of edge container application resources.
       *
       * @param request GetEdgeContainerAppResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceStatusResponse
       */
      Models::GetEdgeContainerAppResourceStatusResponse getEdgeContainerAppResourceStatusWithOptions(const Models::GetEdgeContainerAppResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the distribution of edge container application resources.
       *
       * @param request GetEdgeContainerAppResourceStatusRequest
       * @return GetEdgeContainerAppResourceStatusResponse
       */
      Models::GetEdgeContainerAppResourceStatusResponse getEdgeContainerAppResourceStatus(const Models::GetEdgeContainerAppResourceStatusRequest &request);

      /**
       * @summary Queries the status information about a containerized application, including the deployment, release, and rollback of the application.
       *
       * @param request GetEdgeContainerAppStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppStatusResponse
       */
      Models::GetEdgeContainerAppStatusResponse getEdgeContainerAppStatusWithOptions(const Models::GetEdgeContainerAppStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status information about a containerized application, including the deployment, release, and rollback of the application.
       *
       * @param request GetEdgeContainerAppStatusRequest
       * @return GetEdgeContainerAppStatusResponse
       */
      Models::GetEdgeContainerAppStatusResponse getEdgeContainerAppStatus(const Models::GetEdgeContainerAppStatusRequest &request);

      /**
       * @summary Queries the information about a version of a containerized application. You can select an application version to release based on the version information.
       *
       * @param request GetEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppVersionResponse
       */
      Models::GetEdgeContainerAppVersionResponse getEdgeContainerAppVersionWithOptions(const Models::GetEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a version of a containerized application. You can select an application version to release based on the version information.
       *
       * @param request GetEdgeContainerAppVersionRequest
       * @return GetEdgeContainerAppVersionResponse
       */
      Models::GetEdgeContainerAppVersionResponse getEdgeContainerAppVersion(const Models::GetEdgeContainerAppVersionRequest &request);

      /**
       * @summary Retrieves the deployment regions of an edge container application by application ID.
       *
       * @param request GetEdgeContainerDeployRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerDeployRegionsResponse
       */
      Models::GetEdgeContainerDeployRegionsResponse getEdgeContainerDeployRegionsWithOptions(const Models::GetEdgeContainerDeployRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the deployment regions of an edge container application by application ID.
       *
       * @param request GetEdgeContainerDeployRegionsRequest
       * @return GetEdgeContainerDeployRegionsResponse
       */
      Models::GetEdgeContainerDeployRegionsResponse getEdgeContainerDeployRegions(const Models::GetEdgeContainerDeployRegionsRequest &request);

      /**
       * @summary Retrieves log information for an edge container. You can specify the number of output lines.
       *
       * @param request GetEdgeContainerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerLogsResponse
       */
      Models::GetEdgeContainerLogsResponse getEdgeContainerLogsWithOptions(const Models::GetEdgeContainerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves log information for an edge container. You can specify the number of output lines.
       *
       * @param request GetEdgeContainerLogsRequest
       * @return GetEdgeContainerLogsResponse
       */
      Models::GetEdgeContainerLogsResponse getEdgeContainerLogs(const Models::GetEdgeContainerLogsRequest &request);

      /**
       * @summary Retrieves the staging environment deployment status of an application by application ID.
       *
       * @param request GetEdgeContainerStagingDeployStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerStagingDeployStatusResponse
       */
      Models::GetEdgeContainerStagingDeployStatusResponse getEdgeContainerStagingDeployStatusWithOptions(const Models::GetEdgeContainerStagingDeployStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the staging environment deployment status of an application by application ID.
       *
       * @param request GetEdgeContainerStagingDeployStatusRequest
       * @return GetEdgeContainerStagingDeployStatusResponse
       */
      Models::GetEdgeContainerStagingDeployStatusResponse getEdgeContainerStagingDeployStatus(const Models::GetEdgeContainerStagingDeployStatusRequest &request);

      /**
       * @summary Retrieves terminal information of an edge container application.
       *
       * @param request GetEdgeContainerTerminalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerTerminalResponse
       */
      Models::GetEdgeContainerTerminalResponse getEdgeContainerTerminalWithOptions(const Models::GetEdgeContainerTerminalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves terminal information of an edge container application.
       *
       * @param request GetEdgeContainerTerminalRequest
       * @return GetEdgeContainerTerminalResponse
       */
      Models::GetEdgeContainerTerminalResponse getEdgeContainerTerminal(const Models::GetEdgeContainerTerminalRequest &request);

      /**
       * @summary Checks the status of Edge Routine.
       *
       * @param request GetErServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErServiceResponse
       */
      Models::GetErServiceResponse getErServiceWithOptions(const Models::GetErServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the status of Edge Routine.
       *
       * @param request GetErServiceRequest
       * @return GetErServiceResponse
       */
      Models::GetErServiceResponse getErService(const Models::GetErServiceRequest &request);

      /**
       * @summary Downloads the failed file for a specified upload task.
       *
       * @param request GetFailFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFailFileResponse
       */
      Models::GetFailFileResponse getFailFileWithOptions(const Models::GetFailFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the failed file for a specified upload task.
       *
       * @param request GetFailFileRequest
       * @return GetFailFileResponse
       */
      Models::GetFailFileResponse getFailFile(const Models::GetFailFileRequest &request);

      /**
       * @summary Queries the configuration details of an HTTP request header modification rule for a website.
       *
       * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingRequestHeaderModificationRuleResponse getHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::GetHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration details of an HTTP request header modification rule for a website.
       *
       * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
       * @return GetHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingRequestHeaderModificationRuleResponse getHttpIncomingRequestHeaderModificationRule(const Models::GetHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Queries the configuration details of an incoming HTTP response header modification rule for a website.
       *
       * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingResponseHeaderModificationRuleResponse getHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::GetHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration details of an incoming HTTP response header modification rule for a website.
       *
       * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
       * @return GetHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::GetHttpIncomingResponseHeaderModificationRuleResponse getHttpIncomingResponseHeaderModificationRule(const Models::GetHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Retrieves the details of an HTTP request header modification rule for a site.
       *
       * @param request GetHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpRequestHeaderModificationRuleResponse
       */
      Models::GetHttpRequestHeaderModificationRuleResponse getHttpRequestHeaderModificationRuleWithOptions(const Models::GetHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an HTTP request header modification rule for a site.
       *
       * @param request GetHttpRequestHeaderModificationRuleRequest
       * @return GetHttpRequestHeaderModificationRuleResponse
       */
      Models::GetHttpRequestHeaderModificationRuleResponse getHttpRequestHeaderModificationRule(const Models::GetHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Queries the details of an HTTP response header modification rule for a site.
       *
       * @param request GetHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpResponseHeaderModificationRuleResponse
       */
      Models::GetHttpResponseHeaderModificationRuleResponse getHttpResponseHeaderModificationRuleWithOptions(const Models::GetHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an HTTP response header modification rule for a site.
       *
       * @param request GetHttpResponseHeaderModificationRuleRequest
       * @return GetHttpResponseHeaderModificationRuleResponse
       */
      Models::GetHttpResponseHeaderModificationRuleResponse getHttpResponseHeaderModificationRule(const Models::GetHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Retrieves a single HTTPS application configuration.
       *
       * @param request GetHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpsApplicationConfigurationResponse
       */
      Models::GetHttpsApplicationConfigurationResponse getHttpsApplicationConfigurationWithOptions(const Models::GetHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single HTTPS application configuration.
       *
       * @param request GetHttpsApplicationConfigurationRequest
       * @return GetHttpsApplicationConfigurationResponse
       */
      Models::GetHttpsApplicationConfigurationResponse getHttpsApplicationConfiguration(const Models::GetHttpsApplicationConfigurationRequest &request);

      /**
       * @summary Query a Single HTTPS Basic Configuration
       *
       * @param request GetHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpsBasicConfigurationResponse
       */
      Models::GetHttpsBasicConfigurationResponse getHttpsBasicConfigurationWithOptions(const Models::GetHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a Single HTTPS Basic Configuration
       *
       * @param request GetHttpsBasicConfigurationRequest
       * @return GetHttpsBasicConfigurationResponse
       */
      Models::GetHttpsBasicConfigurationResponse getHttpsBasicConfiguration(const Models::GetHttpsBasicConfigurationRequest &request);

      /**
       * @summary Queries the IPv6 configuration for a site.
       *
       * @param request GetIPv6Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIPv6Response
       */
      Models::GetIPv6Response getIPv6WithOptions(const Models::GetIPv6Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IPv6 configuration for a site.
       *
       * @param request GetIPv6Request
       * @return GetIPv6Response
       */
      Models::GetIPv6Response getIPv6(const Models::GetIPv6Request &request);

      /**
       * @summary Queries a single site image transformation configuration.
       *
       * @param request GetImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTransformResponse
       */
      Models::GetImageTransformResponse getImageTransformWithOptions(const Models::GetImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a single site image transformation configuration.
       *
       * @param request GetImageTransformRequest
       * @return GetImageTransformResponse
       */
      Models::GetImageTransformResponse getImageTransform(const Models::GetImageTransformRequest &request);

      /**
       * @summary Retrieves the configuration of a Keyless server.
       *
       * @param request GetKeylessServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKeylessServerResponse
       */
      Models::GetKeylessServerResponse getKeylessServerWithOptions(const Models::GetKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a Keyless server.
       *
       * @param request GetKeylessServerRequest
       * @return GetKeylessServerResponse
       */
      Models::GetKeylessServerResponse getKeylessServer(const Models::GetKeylessServerRequest &request);

      /**
       * @summary Retrieves the value of a specified key.
       *
       * @param request GetKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvResponse
       */
      Models::GetKvResponse getKvWithOptions(const Models::GetKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the value of a specified key.
       *
       * @param request GetKvRequest
       * @return GetKvResponse
       */
      Models::GetKvResponse getKv(const Models::GetKvRequest &request);

      /**
       * @summary Retrieves usage information for an account in the KV service, including a list of all namespaces.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvAccountResponse
       */
      Models::GetKvAccountResponse getKvAccountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves usage information for an account in the KV service, including a list of all namespaces.
       *
       * @return GetKvAccountResponse
       */
      Models::GetKvAccountResponse getKvAccount();

      /**
       * @summary Queries the value and time to live (TTL) of a key.
       *
       * @param request GetKvDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvDetailResponse
       */
      Models::GetKvDetailResponse getKvDetailWithOptions(const Models::GetKvDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the value and time to live (TTL) of a key.
       *
       * @param request GetKvDetailRequest
       * @return GetKvDetailResponse
       */
      Models::GetKvDetailResponse getKvDetail(const Models::GetKvDetailRequest &request);

      /**
       * @summary Retrieves information about a specific namespace.
       *
       * @param request GetKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvNamespaceResponse
       */
      Models::GetKvNamespaceResponse getKvNamespaceWithOptions(const Models::GetKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specific namespace.
       *
       * @param request GetKvNamespaceRequest
       * @return GetKvNamespaceResponse
       */
      Models::GetKvNamespaceResponse getKvNamespace(const Models::GetKvNamespaceRequest &request);

      /**
       * @summary Retrieves the details of a specific custom list. You can use this operation to query the properties of a specific list, including the name, description, kind, and list items.
       *
       * @param request GetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListResponse
       */
      Models::GetListResponse getListWithOptions(const Models::GetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific custom list. You can use this operation to query the properties of a specific list, including the name, description, kind, and list items.
       *
       * @param request GetListRequest
       * @return GetListResponse
       */
      Models::GetListResponse getList(const Models::GetListRequest &request);

      /**
       * @summary Retrieves the details of a specific load balancer based on the specified site ID and load balancer ID.
       *
       * @description This API allows you to query the configuration details of a specific load balancer by providing the required authentication information and resource identity. The details include but are not limited to the name, session persistence policy, and load balancing policy.
       *
       * @param request GetLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoadBalancerResponse
       */
      Models::GetLoadBalancerResponse getLoadBalancerWithOptions(const Models::GetLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific load balancer based on the specified site ID and load balancer ID.
       *
       * @description This API allows you to query the configuration details of a specific load balancer by providing the required authentication information and resource identity. The details include but are not limited to the name, session persistence policy, and load balancing policy.
       *
       * @param request GetLoadBalancerRequest
       * @return GetLoadBalancerResponse
       */
      Models::GetLoadBalancerResponse getLoadBalancer(const Models::GetLoadBalancerRequest &request);

      /**
       * @summary Queries the root domain name of a website.
       *
       * @param request GetMainDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMainDomainNameResponse
       */
      Models::GetMainDomainNameResponse getMainDomainNameWithOptions(const Models::GetMainDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the root domain name of a website.
       *
       * @param request GetMainDomainNameRequest
       * @return GetMainDomainNameResponse
       */
      Models::GetMainDomainNameResponse getMainDomainName(const Models::GetMainDomainNameRequest &request);

      /**
       * @summary Retrieves the managed transform configuration for a site.
       *
       * @param request GetManagedTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedTransformResponse
       */
      Models::GetManagedTransformResponse getManagedTransformWithOptions(const Models::GetManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the managed transform configuration for a site.
       *
       * @param request GetManagedTransformRequest
       * @return GetManagedTransformResponse
       */
      Models::GetManagedTransformResponse getManagedTransform(const Models::GetManagedTransformRequest &request);

      /**
       * @summary Retrieves the information of the longest-matching active site for a given record name under the current user. For example, if the input record name is www.test.example.com and the user has two active sites (test.example.com and example.com), the API returns the longest-matching active site test.example.com. If no matching active site is found, an error is returned.
       *
       * @description Used with the Edge Routine (ER) feature to automatically match an active site.
       *
       * @param request GetMatchSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMatchSiteResponse
       */
      Models::GetMatchSiteResponse getMatchSiteWithOptions(const Models::GetMatchSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of the longest-matching active site for a given record name under the current user. For example, if the input record name is www.test.example.com and the user has two active sites (test.example.com and example.com), the API returns the longest-matching active site test.example.com. If no matching active site is found, an error is returned.
       *
       * @description Used with the Edge Routine (ER) feature to automatically match an active site.
       *
       * @param request GetMatchSiteRequest
       * @return GetMatchSiteResponse
       */
      Models::GetMatchSiteResponse getMatchSite(const Models::GetMatchSiteRequest &request);

      /**
       * @summary Query a single network optimization configuration
       *
       * @param request GetNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkOptimizationResponse
       */
      Models::GetNetworkOptimizationResponse getNetworkOptimizationWithOptions(const Models::GetNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a single network optimization configuration
       *
       * @param request GetNetworkOptimizationRequest
       * @return GetNetworkOptimizationResponse
       */
      Models::GetNetworkOptimizationResponse getNetworkOptimization(const Models::GetNetworkOptimizationRequest &request);

      /**
       * @summary Retrieves the CA certificate information of an origin server.
       *
       * @param request GetOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginCaCertificateResponse
       */
      Models::GetOriginCaCertificateResponse getOriginCaCertificateWithOptions(const Models::GetOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the CA certificate information of an origin server.
       *
       * @param request GetOriginCaCertificateRequest
       * @return GetOriginCaCertificateResponse
       */
      Models::GetOriginCaCertificateResponse getOriginCaCertificate(const Models::GetOriginCaCertificateRequest &request);

      /**
       * @summary Retrieves the back-to-origin client certificate information at the domain name granularity.
       *
       * @param request GetOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginClientCertificateResponse
       */
      Models::GetOriginClientCertificateResponse getOriginClientCertificateWithOptions(const Models::GetOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the back-to-origin client certificate information at the domain name granularity.
       *
       * @param request GetOriginClientCertificateRequest
       * @return GetOriginClientCertificateResponse
       */
      Models::GetOriginClientCertificateResponse getOriginClientCertificate(const Models::GetOriginClientCertificateRequest &request);

      /**
       * @summary Retrieves the hostnames associated with a specific origin client certificate.
       *
       * @param request GetOriginClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginClientCertificateHostnamesResponse
       */
      Models::GetOriginClientCertificateHostnamesResponse getOriginClientCertificateHostnamesWithOptions(const Models::GetOriginClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the hostnames associated with a specific origin client certificate.
       *
       * @param request GetOriginClientCertificateHostnamesRequest
       * @return GetOriginClientCertificateHostnamesResponse
       */
      Models::GetOriginClientCertificateHostnamesResponse getOriginClientCertificateHostnames(const Models::GetOriginClientCertificateHostnamesRequest &request);

      /**
       * @summary Retrieves a specific source address pool by its source address pool ID.
       *
       * @param request GetOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginPoolResponse
       */
      Models::GetOriginPoolResponse getOriginPoolWithOptions(const Models::GetOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a specific source address pool by its source address pool ID.
       *
       * @param request GetOriginPoolRequest
       * @return GetOriginPoolResponse
       */
      Models::GetOriginPoolResponse getOriginPool(const Models::GetOriginPoolRequest &request);

      /**
       * @summary Queries site origin protection configurations, including the origin protection switch, the origin convergence switch, whether the origin IP whitelist needs to be updated, and detailed information about the origin IP whitelist, including the current origin IP whitelist used by the site, the latest origin IP whitelist, and the differences between them.
       *
       * @param request GetOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginProtectionResponse
       */
      Models::GetOriginProtectionResponse getOriginProtectionWithOptions(const Models::GetOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries site origin protection configurations, including the origin protection switch, the origin convergence switch, whether the origin IP whitelist needs to be updated, and detailed information about the origin IP whitelist, including the current origin IP whitelist used by the site, the latest origin IP whitelist, and the differences between them.
       *
       * @param request GetOriginProtectionRequest
       * @return GetOriginProtectionResponse
       */
      Models::GetOriginProtectionResponse getOriginProtection(const Models::GetOriginProtectionRequest &request);

      /**
       * @summary Queries the configurations of a single origin rule.
       *
       * @param request GetOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginRuleResponse
       */
      Models::GetOriginRuleResponse getOriginRuleWithOptions(const Models::GetOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a single origin rule.
       *
       * @param request GetOriginRuleRequest
       * @return GetOriginRuleResponse
       */
      Models::GetOriginRuleResponse getOriginRule(const Models::GetOriginRuleRequest &request);

      /**
       * @summary Retrieves the details of a custom response page by its ID.
       *
       * @param request GetPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageResponse
       */
      Models::GetPageResponse getPageWithOptions(const Models::GetPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a custom response page by its ID.
       *
       * @param request GetPageRequest
       * @return GetPageResponse
       */
      Models::GetPageResponse getPage(const Models::GetPageRequest &request);

      /**
       * @summary Queries the page protection configuration of a site.
       *
       * @param request GetPageShieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageShieldResponse
       */
      Models::GetPageShieldResponse getPageShieldWithOptions(const Models::GetPageShieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the page protection configuration of a site.
       *
       * @param request GetPageShieldRequest
       * @return GetPageShieldResponse
       */
      Models::GetPageShieldResponse getPageShield(const Models::GetPageShieldRequest &request);

      /**
       * @summary Queries the data quality collection configuration.
       *
       * @param request GetPerformanceDataCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPerformanceDataCollectionResponse
       */
      Models::GetPerformanceDataCollectionResponse getPerformanceDataCollectionWithOptions(const Models::GetPerformanceDataCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data quality collection configuration.
       *
       * @param request GetPerformanceDataCollectionRequest
       * @return GetPerformanceDataCollectionResponse
       */
      Models::GetPerformanceDataCollectionResponse getPerformanceDataCollection(const Models::GetPerformanceDataCollectionRequest &request);

      /**
       * @summary Retrieves the quota and used quota for different refresh types.
       *
       * @param request GetPurgeQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurgeQuotaResponse
       */
      Models::GetPurgeQuotaResponse getPurgeQuotaWithOptions(const Models::GetPurgeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the quota and used quota for different refresh types.
       *
       * @param request GetPurgeQuotaRequest
       * @return GetPurgeQuotaResponse
       */
      Models::GetPurgeQuotaResponse getPurgeQuota(const Models::GetPurgeQuotaRequest &request);

      /**
       * @summary Queries the fields in real-time logs based on the log category.
       *
       * @param request GetRealtimeDeliveryFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeDeliveryFieldResponse
       */
      Models::GetRealtimeDeliveryFieldResponse getRealtimeDeliveryFieldWithOptions(const Models::GetRealtimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fields in real-time logs based on the log category.
       *
       * @param request GetRealtimeDeliveryFieldRequest
       * @return GetRealtimeDeliveryFieldResponse
       */
      Models::GetRealtimeDeliveryFieldResponse getRealtimeDeliveryField(const Models::GetRealtimeDeliveryFieldRequest &request);

      /**
       * @summary Retrieves the detailed configuration of a single DNS record, including the record value, priority, and back-to-origin authentication configuration (exclusive to CNAME records).
       *
       * @param request GetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordResponse
       */
      Models::GetRecordResponse getRecordWithOptions(const Models::GetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration of a single DNS record, including the record value, priority, and back-to-origin authentication configuration (exclusive to CNAME records).
       *
       * @param request GetRecordRequest
       * @return GetRecordResponse
       */
      Models::GetRecordResponse getRecord(const Models::GetRecordRequest &request);

      /**
       * @summary Query Redirect Rule Details
       *
       * @param request GetRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRedirectRuleResponse
       */
      Models::GetRedirectRuleResponse getRedirectRuleWithOptions(const Models::GetRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Redirect Rule Details
       *
       * @param request GetRedirectRuleRequest
       * @return GetRedirectRuleResponse
       */
      Models::GetRedirectRuleResponse getRedirectRule(const Models::GetRedirectRuleRequest &request);

      /**
       * @summary Query details of the rewrite URL rule
       *
       * @param request GetRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRewriteUrlRuleResponse
       */
      Models::GetRewriteUrlRuleResponse getRewriteUrlRuleWithOptions(const Models::GetRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query details of the rewrite URL rule
       *
       * @param request GetRewriteUrlRuleRequest
       * @return GetRewriteUrlRuleResponse
       */
      Models::GetRewriteUrlRuleResponse getRewriteUrlRule(const Models::GetRewriteUrlRuleRequest &request);

      /**
       * @summary Queries all configuration information of an Edge Routine, including the code version list, environment configuration list, associated domain name configuration list, and associated route configuration list.
       *
       * @param request GetRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineResponse
       */
      Models::GetRoutineResponse getRoutineWithOptions(const Models::GetRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all configuration information of an Edge Routine, including the code version list, environment configuration list, associated domain name configuration list, and associated route configuration list.
       *
       * @param request GetRoutineRequest
       * @return GetRoutineResponse
       */
      Models::GetRoutineResponse getRoutine(const Models::GetRoutineRequest &request);

      /**
       * @summary 查询Routine默认访问记录访问鉴权token
       *
       * @param request GetRoutineAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineAccessTokenResponse
       */
      Models::GetRoutineAccessTokenResponse getRoutineAccessTokenWithOptions(const Models::GetRoutineAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine默认访问记录访问鉴权token
       *
       * @param request GetRoutineAccessTokenRequest
       * @return GetRoutineAccessTokenResponse
       */
      Models::GetRoutineAccessTokenResponse getRoutineAccessToken(const Models::GetRoutineAccessTokenRequest &request);

      /**
       * @summary Queries the code information of a specific version of an Edge Routine.
       *
       * @param request GetRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineCodeVersionResponse
       */
      Models::GetRoutineCodeVersionResponse getRoutineCodeVersionWithOptions(const Models::GetRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the code information of a specific version of an Edge Routine.
       *
       * @param request GetRoutineCodeVersionRequest
       * @return GetRoutineCodeVersionResponse
       */
      Models::GetRoutineCodeVersionResponse getRoutineCodeVersion(const Models::GetRoutineCodeVersionRequest &request);

      /**
       * @summary Queries the status and other information of a specific code version of a specified Routine.
       *
       * @description ## Operation description
       * By calling this API operation, you can retrieve detailed information about a specific code version of a Routine, including but not limited to the version status, creation time, and whether the version contains Assets resource files. You must specify the Routine name and the code version number as request parameters.
       *
       * @param request GetRoutineCodeVersionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineCodeVersionInfoResponse
       */
      Models::GetRoutineCodeVersionInfoResponse getRoutineCodeVersionInfoWithOptions(const Models::GetRoutineCodeVersionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status and other information of a specific code version of a specified Routine.
       *
       * @description ## Operation description
       * By calling this API operation, you can retrieve detailed information about a specific code version of a Routine, including but not limited to the version status, creation time, and whether the version contains Assets resource files. You must specify the Routine name and the code version number as request parameters.
       *
       * @param request GetRoutineCodeVersionInfoRequest
       * @return GetRoutineCodeVersionInfoResponse
       */
      Models::GetRoutineCodeVersionInfoResponse getRoutineCodeVersionInfo(const Models::GetRoutineCodeVersionInfoRequest &request);

      /**
       * @summary Queries the configuration of a single Edge Routine route.
       *
       * @param request GetRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineRouteResponse
       */
      Models::GetRoutineRouteResponse getRoutineRouteWithOptions(const Models::GetRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a single Edge Routine route.
       *
       * @param request GetRoutineRouteRequest
       * @return GetRoutineRouteResponse
       */
      Models::GetRoutineRouteResponse getRoutineRoute(const Models::GetRoutineRouteRequest &request);

      /**
       * @summary Obtains the release information about the routine code that is released to the staging environment. This information can be used to upload the test code to Object Storage Service (OSS).
       *
       * @description *   Every time the code of a routine is released to the staging environment, a version number is generated. Such code is for tests only.
       * *   A routine can retain a maximum of 10 code versions. If the number of versions reaches the limit, you must call the DeleteRoutineCodeRevision operation to delete unwanted versions.
       *
       * @param request GetRoutineStagingCodeUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineStagingCodeUploadInfoResponse
       */
      Models::GetRoutineStagingCodeUploadInfoResponse getRoutineStagingCodeUploadInfoWithOptions(const Models::GetRoutineStagingCodeUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the release information about the routine code that is released to the staging environment. This information can be used to upload the test code to Object Storage Service (OSS).
       *
       * @description *   Every time the code of a routine is released to the staging environment, a version number is generated. Such code is for tests only.
       * *   A routine can retain a maximum of 10 code versions. If the number of versions reaches the limit, you must call the DeleteRoutineCodeRevision operation to delete unwanted versions.
       *
       * @param request GetRoutineStagingCodeUploadInfoRequest
       * @return GetRoutineStagingCodeUploadInfoResponse
       */
      Models::GetRoutineStagingCodeUploadInfoResponse getRoutineStagingCodeUploadInfo(const Models::GetRoutineStagingCodeUploadInfoRequest &request);

      /**
       * @summary 查询边缘函数测试环境IP
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineStagingEnvIpResponse
       */
      Models::GetRoutineStagingEnvIpResponse getRoutineStagingEnvIpWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘函数测试环境IP
       *
       * @return GetRoutineStagingEnvIpResponse
       */
      Models::GetRoutineStagingEnvIpResponse getRoutineStagingEnvIp();

      /**
       * @summary 查询用户的Routine列表
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineUserInfoResponse
       */
      Models::GetRoutineUserInfoResponse getRoutineUserInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的Routine列表
       *
       * @return GetRoutineUserInfoResponse
       */
      Models::GetRoutineUserInfoResponse getRoutineUserInfo();

      /**
       * @summary Queries a single scheduled prefetch task by task ID.
       *
       * @param request GetScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledPreloadJobResponse
       */
      Models::GetScheduledPreloadJobResponse getScheduledPreloadJobWithOptions(const Models::GetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a single scheduled prefetch task by task ID.
       *
       * @param request GetScheduledPreloadJobRequest
       * @return GetScheduledPreloadJobResponse
       */
      Models::GetScheduledPreloadJobResponse getScheduledPreloadJob(const Models::GetScheduledPreloadJobRequest &request);

      /**
       * @summary Queries the configuration for search engine crawler of a website.
       *
       * @param request GetSeoBypassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSeoBypassResponse
       */
      Models::GetSeoBypassResponse getSeoBypassWithOptions(const Models::GetSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration for search engine crawler of a website.
       *
       * @param request GetSeoBypassRequest
       * @return GetSeoBypassResponse
       */
      Models::GetSeoBypassResponse getSeoBypass(const Models::GetSeoBypassRequest &request);

      /**
       * @summary Retrieves the details of a site by its ID.
       *
       * @param request GetSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteResponse
       */
      Models::GetSiteResponse getSiteWithOptions(const Models::GetSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a site by its ID.
       *
       * @param request GetSiteRequest
       * @return GetSiteResponse
       */
      Models::GetSiteResponse getSite(const Models::GetSiteRequest &request);

      /**
       * @summary Queries the nameservers configured for a website.
       *
       * @param request GetSiteCurrentNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteCurrentNSResponse
       */
      Models::GetSiteCurrentNSResponse getSiteCurrentNSWithOptions(const Models::GetSiteCurrentNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the nameservers configured for a website.
       *
       * @param request GetSiteCurrentNSRequest
       * @return GetSiteCurrentNSResponse
       */
      Models::GetSiteCurrentNSResponse getSiteCurrentNS(const Models::GetSiteCurrentNSRequest &request);

      /**
       * @summary Queries the configuration of custom log fields for a website.
       *
       * @description *   **Description**: You can call this operation to query the configuration of custom log fields for a website, including custom fields in request headers, response headers, and cookies.
       * *   **Scenarios**: You can call this operation in scenarios where you need to obtain specific HTTP headers or cookie information for log analysis.
       * *   ****
       *
       * @param request GetSiteCustomLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteCustomLogResponse
       */
      Models::GetSiteCustomLogResponse getSiteCustomLogWithOptions(const Models::GetSiteCustomLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of custom log fields for a website.
       *
       * @description *   **Description**: You can call this operation to query the configuration of custom log fields for a website, including custom fields in request headers, response headers, and cookies.
       * *   **Scenarios**: You can call this operation in scenarios where you need to obtain specific HTTP headers or cookie information for log analysis.
       * *   ****
       *
       * @param request GetSiteCustomLogRequest
       * @return GetSiteCustomLogResponse
       */
      Models::GetSiteCustomLogResponse getSiteCustomLog(const Models::GetSiteCustomLogRequest &request);

      /**
       * @summary Retrieves the details of a real-time log delivery task.
       *
       * @param request GetSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteDeliveryTaskResponse
       */
      Models::GetSiteDeliveryTaskResponse getSiteDeliveryTaskWithOptions(const Models::GetSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a real-time log delivery task.
       *
       * @param request GetSiteDeliveryTaskRequest
       * @return GetSiteDeliveryTaskResponse
       */
      Models::GetSiteDeliveryTaskResponse getSiteDeliveryTask(const Models::GetSiteDeliveryTaskRequest &request);

      /**
       * @summary Queries the remaining quota for delivering a specific category of real-time logs in a website.
       *
       * @description Use this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
       * **Take note of the following parameters:**
       * - \\`\\`
       * - `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
       * - `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
       * **Response:**
       * - If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
       *
       * @param request GetSiteLogDeliveryQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteLogDeliveryQuotaResponse
       */
      Models::GetSiteLogDeliveryQuotaResponse getSiteLogDeliveryQuotaWithOptions(const Models::GetSiteLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining quota for delivering a specific category of real-time logs in a website.
       *
       * @description Use this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
       * **Take note of the following parameters:**
       * - \\`\\`
       * - `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
       * - `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
       * **Response:**
       * - If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
       *
       * @param request GetSiteLogDeliveryQuotaRequest
       * @return GetSiteLogDeliveryQuotaResponse
       */
      Models::GetSiteLogDeliveryQuotaResponse getSiteLogDeliveryQuota(const Models::GetSiteLogDeliveryQuotaRequest &request);

      /**
       * @summary Queries the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
       *
       * @param request GetSiteNameExclusiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteNameExclusiveResponse
       */
      Models::GetSiteNameExclusiveResponse getSiteNameExclusiveWithOptions(const Models::GetSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
       *
       * @param request GetSiteNameExclusiveRequest
       * @return GetSiteNameExclusiveResponse
       */
      Models::GetSiteNameExclusiveResponse getSiteNameExclusive(const Models::GetSiteNameExclusiveRequest &request);

      /**
       * @summary Retrieves the back-to-origin client certificate information at the site level.
       *
       * @param request GetSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteOriginClientCertificateResponse
       */
      Models::GetSiteOriginClientCertificateResponse getSiteOriginClientCertificateWithOptions(const Models::GetSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the back-to-origin client certificate information at the site level.
       *
       * @param request GetSiteOriginClientCertificateRequest
       * @return GetSiteOriginClientCertificateResponse
       */
      Models::GetSiteOriginClientCertificateResponse getSiteOriginClientCertificate(const Models::GetSiteOriginClientCertificateRequest &request);

      /**
       * @summary Queries the site pause configuration.
       *
       * @description This API applies only to sites that use NS mode.
       *
       * @param request GetSitePauseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSitePauseResponse
       */
      Models::GetSitePauseResponse getSitePauseWithOptions(const Models::GetSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the site pause configuration.
       *
       * @description This API applies only to sites that use NS mode.
       *
       * @param request GetSitePauseRequest
       * @return GetSitePauseResponse
       */
      Models::GetSitePauseResponse getSitePause(const Models::GetSitePauseRequest &request);

      /**
       * @summary Queries the traffic sequences and their details for the current site.
       *
       * @param request GetSiteTrafficSequenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteTrafficSequenceResponse
       */
      Models::GetSiteTrafficSequenceResponse getSiteTrafficSequenceWithOptions(const Models::GetSiteTrafficSequenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic sequences and their details for the current site.
       *
       * @param request GetSiteTrafficSequenceRequest
       * @return GetSiteTrafficSequenceResponse
       */
      Models::GetSiteTrafficSequenceResponse getSiteTrafficSequence(const Models::GetSiteTrafficSequenceRequest &request);

      /**
       * @summary Get WAF Configuration for a Site
       *
       * @param request GetSiteWafSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteWafSettingsResponse
       */
      Models::GetSiteWafSettingsResponse getSiteWafSettingsWithOptions(const Models::GetSiteWafSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get WAF Configuration for a Site
       *
       * @param request GetSiteWafSettingsRequest
       * @return GetSiteWafSettingsResponse
       */
      Models::GetSiteWafSettingsResponse getSiteWafSettings(const Models::GetSiteWafSettingsRequest &request);

      /**
       * @summary Query Multi-level Cache Configuration for Site
       *
       * @param request GetTieredCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTieredCacheResponse
       */
      Models::GetTieredCacheResponse getTieredCacheWithOptions(const Models::GetTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Multi-level Cache Configuration for Site
       *
       * @param request GetTieredCacheRequest
       * @return GetTieredCacheResponse
       */
      Models::GetTieredCacheResponse getTieredCache(const Models::GetTieredCacheRequest &request);

      /**
       * @summary Queries the details of a Layer 4 application.
       *
       * @param request GetTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransportLayerApplicationResponse
       */
      Models::GetTransportLayerApplicationResponse getTransportLayerApplicationWithOptions(const Models::GetTransportLayerApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Layer 4 application.
       *
       * @param request GetTransportLayerApplicationRequest
       * @return GetTransportLayerApplicationResponse
       */
      Models::GetTransportLayerApplicationResponse getTransportLayerApplication(const Models::GetTransportLayerApplicationRequest &request);

      /**
       * @summary Queries the execution status and runtime information of a file upload task by task ID.
       *
       * @param request GetUploadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadTaskResponse
       */
      Models::GetUploadTaskResponse getUploadTaskWithOptions(const Models::GetUploadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status and runtime information of a file upload task by task ID.
       *
       * @param request GetUploadTaskRequest
       * @return GetUploadTaskResponse
       */
      Models::GetUploadTaskResponse getUploadTask(const Models::GetUploadTaskRequest &request);

      /**
       * @summary Queries the delivery configuration and status of a task for a specific user.
       *
       * @description - **Function**: This operation retrieves detailed delivery information for a specific task of an Alibaba Cloud user, including the task name, discard rate, region, business type, status, delivery type, delivery configuration, and filter rules.
       * - **Use case**: Use this operation to review the log processing and delivery configuration for a specific task. This helps you analyze processing efficiency or troubleshoot issues.
       *
       * @param request GetUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserDeliveryTaskResponse
       */
      Models::GetUserDeliveryTaskResponse getUserDeliveryTaskWithOptions(const Models::GetUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the delivery configuration and status of a task for a specific user.
       *
       * @description - **Function**: This operation retrieves detailed delivery information for a specific task of an Alibaba Cloud user, including the task name, discard rate, region, business type, status, delivery type, delivery configuration, and filter rules.
       * - **Use case**: Use this operation to review the log processing and delivery configuration for a specific task. This helps you analyze processing efficiency or troubleshoot issues.
       *
       * @param request GetUserDeliveryTaskRequest
       * @return GetUserDeliveryTaskResponse
       */
      Models::GetUserDeliveryTaskResponse getUserDeliveryTask(const Models::GetUserDeliveryTaskRequest &request);

      /**
       * @summary Queries the remaining log delivery quota of each log category in your account.
       *
       * @description This operation allows you to query the remaining real-time log delivery quota of each log category in your Alibaba Cloud account. You must provide your Alibaba Cloud account ID (aliUid) and log category (BusinessType). The system then returns the remaining quota of the log category to help you track the usage.
       *
       * @param request GetUserLogDeliveryQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserLogDeliveryQuotaResponse
       */
      Models::GetUserLogDeliveryQuotaResponse getUserLogDeliveryQuotaWithOptions(const Models::GetUserLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining log delivery quota of each log category in your account.
       *
       * @description This operation allows you to query the remaining real-time log delivery quota of each log category in your Alibaba Cloud account. You must provide your Alibaba Cloud account ID (aliUid) and log category (BusinessType). The system then returns the remaining quota of the log category to help you track the usage.
       *
       * @param request GetUserLogDeliveryQuotaRequest
       * @return GetUserLogDeliveryQuotaResponse
       */
      Models::GetUserLogDeliveryQuotaResponse getUserLogDeliveryQuota(const Models::GetUserLogDeliveryQuotaRequest &request);

      /**
       * @summary Queries the details of a WAF ruleset for a specified instance.
       *
       * @description ## Operation description
       * By calling the `GetUserWafRuleset` operation, you can retrieve information about a specific Web Application Firewall (WAF) ruleset based on the instance ID and ruleset ID. The returned information includes but is not limited to the position, name, description, status, and specific rules of the ruleset. Make sure that you correctly specify the required parameters to avoid request failures.
       *
       * @param request GetUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserWafRulesetResponse
       */
      Models::GetUserWafRulesetResponse getUserWafRulesetWithOptions(const Models::GetUserWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a WAF ruleset for a specified instance.
       *
       * @description ## Operation description
       * By calling the `GetUserWafRuleset` operation, you can retrieve information about a specific Web Application Firewall (WAF) ruleset based on the instance ID and ruleset ID. The returned information includes but is not limited to the position, name, description, status, and specific rules of the ruleset. Make sure that you correctly specify the required parameters to avoid request failures.
       *
       * @param request GetUserWafRulesetRequest
       * @return GetUserWafRulesetResponse
       */
      Models::GetUserWafRulesetResponse getUserWafRuleset(const Models::GetUserWafRulesetRequest &request);

      /**
       * @summary Queries the video processing configuration details of a site.
       *
       * @param request GetVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoProcessingResponse
       */
      Models::GetVideoProcessingResponse getVideoProcessingWithOptions(const Models::GetVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the video processing configuration details of a site.
       *
       * @param request GetVideoProcessingRequest
       * @return GetVideoProcessingResponse
       */
      Models::GetVideoProcessingResponse getVideoProcessing(const Models::GetVideoProcessingRequest &request);

      /**
       * @summary This interface is used to obtain the application key (AppKey) for the BOT behavior detection feature in the site\\"s Web Application Firewall (WAF). The key is typically used for authentication and data exchange with the WAF service.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafBotAppKeyResponse
       */
      Models::GetWafBotAppKeyResponse getWafBotAppKeyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to obtain the application key (AppKey) for the BOT behavior detection feature in the site\\"s Web Application Firewall (WAF). The key is typically used for authentication and data exchange with the WAF service.
       *
       * @return GetWafBotAppKeyResponse
       */
      Models::GetWafBotAppKeyResponse getWafBotAppKey();

      /**
       * @summary Retrieves matching engine information for a site at a given WAF phase, which defines how the WAF detects and handles various network requests.
       *
       * @param request GetWafFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafFilterResponse
       */
      Models::GetWafFilterResponse getWafFilterWithOptions(const Models::GetWafFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves matching engine information for a site at a given WAF phase, which defines how the WAF detects and handles various network requests.
       *
       * @param request GetWafFilterRequest
       * @return GetWafFilterResponse
       */
      Models::GetWafFilterResponse getWafFilter(const Models::GetWafFilterRequest &request);

      /**
       * @summary Retrieves quota details for Web Application Firewall (WAF) resources. These quotas define the quantity limits of corresponding resources that a customer can use, such as managed rule groups, custom lists, custom response pages, and scenario-specific protection rules.
       *
       * @param request GetWafQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafQuotaResponse
       */
      Models::GetWafQuotaResponse getWafQuotaWithOptions(const Models::GetWafQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves quota details for Web Application Firewall (WAF) resources. These quotas define the quantity limits of corresponding resources that a customer can use, such as managed rule groups, custom lists, custom response pages, and scenario-specific protection rules.
       *
       * @param request GetWafQuotaRequest
       * @return GetWafQuotaResponse
       */
      Models::GetWafQuotaResponse getWafQuota(const Models::GetWafQuotaRequest &request);

      /**
       * @summary Retrieves the details of a single rule in Web Application Firewall (WAF). You can use this operation to query the configuration and status of a specific rule.
       *
       * @param request GetWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafRuleResponse
       */
      Models::GetWafRuleResponse getWafRuleWithOptions(const Models::GetWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a single rule in Web Application Firewall (WAF). You can use this operation to query the configuration and status of a specific rule.
       *
       * @param request GetWafRuleRequest
       * @return GetWafRuleResponse
       */
      Models::GetWafRuleResponse getWafRule(const Models::GetWafRuleRequest &request);

      /**
       * @summary Retrieves the details of a specified WAF ruleset. You can call this operation to query the configuration and status information of a specific ruleset.
       *
       * @param request GetWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafRulesetResponse
       */
      Models::GetWafRulesetResponse getWafRulesetWithOptions(const Models::GetWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified WAF ruleset. You can call this operation to query the configuration and status information of a specific ruleset.
       *
       * @param request GetWafRulesetRequest
       * @return GetWafRulesetResponse
       */
      Models::GetWafRulesetResponse getWafRuleset(const Models::GetWafRulesetRequest &request);

      /**
       * @summary Queries the preview page URL of a waiting room.
       *
       * @param request GetWaitingRoomPreviewPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWaitingRoomPreviewPageResponse
       */
      Models::GetWaitingRoomPreviewPageResponse getWaitingRoomPreviewPageWithOptions(const Models::GetWaitingRoomPreviewPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the preview page URL of a waiting room.
       *
       * @param request GetWaitingRoomPreviewPageRequest
       * @return GetWaitingRoomPreviewPageResponse
       */
      Models::GetWaitingRoomPreviewPageResponse getWaitingRoomPreviewPage(const Models::GetWaitingRoomPreviewPageRequest &request);

      /**
       * @summary Queries the list of regions supported by AWS S3.
       *
       * @param request ListAWSRegionInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAWSRegionInfosResponse
       */
      Models::ListAWSRegionInfosResponse listAWSRegionInfosWithOptions(const Models::ListAWSRegionInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of regions supported by AWS S3.
       *
       * @param request ListAWSRegionInfosRequest
       * @return ListAWSRegionInfosResponse
       */
      Models::ListAWSRegionInfosResponse listAWSRegionInfos(const Models::ListAWSRegionInfosRequest &request);

      /**
       * @summary 查询异步任务列表
       *
       * @param request ListAsyncTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasksWithOptions(const Models::ListAsyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异步任务列表
       *
       * @param request ListAsyncTasksRequest
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasks(const Models::ListAsyncTasksRequest &request);

      /**
       * @summary Queries the cache reserve instances for your account.
       *
       * @param request ListCacheReserveInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCacheReserveInstancesResponse
       */
      Models::ListCacheReserveInstancesResponse listCacheReserveInstancesWithOptions(const Models::ListCacheReserveInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cache reserve instances for your account.
       *
       * @param request ListCacheReserveInstancesRequest
       * @return ListCacheReserveInstancesResponse
       */
      Models::ListCacheReserveInstancesResponse listCacheReserveInstances(const Models::ListCacheReserveInstancesRequest &request);

      /**
       * @summary Queries multiple cache configurations.
       *
       * @param request ListCacheRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCacheRulesResponse
       */
      Models::ListCacheRulesResponse listCacheRulesWithOptions(const Models::ListCacheRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multiple cache configurations.
       *
       * @param request ListCacheRulesRequest
       * @return ListCacheRulesResponse
       */
      Models::ListCacheRulesResponse listCacheRules(const Models::ListCacheRulesRequest &request);

      /**
       * @summary Queries the list of China Shield certificates.
       *
       * @param request ListCasCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCasCertificatesResponse
       */
      Models::ListCasCertificatesResponse listCasCertificatesWithOptions(const Models::ListCasCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of China Shield certificates.
       *
       * @param request ListCasCertificatesRequest
       * @return ListCasCertificatesResponse
       */
      Models::ListCasCertificatesResponse listCasCertificates(const Models::ListCasCertificatesRequest &request);

      /**
       * @summary Queries the certificate list for a specific site.
       *
       * @param request ListCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificatesWithOptions(const Models::ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate list for a specific site.
       *
       * @param request ListCertificatesRequest
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificates(const Models::ListCertificatesRequest &request);

      /**
       * @summary Queries the list of site certificates that match records. Batch record matching is supported.
       *
       * @param request ListCertificatesByRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesByRecordResponse
       */
      Models::ListCertificatesByRecordResponse listCertificatesByRecordWithOptions(const Models::ListCertificatesByRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of site certificates that match records. Batch record matching is supported.
       *
       * @param request ListCertificatesByRecordRequest
       * @return ListCertificatesByRecordResponse
       */
      Models::ListCertificatesByRecordResponse listCertificatesByRecord(const Models::ListCertificatesByRecordRequest &request);

      /**
       * @summary Query TLS Cipher Suite List
       *
       * @param request ListCiphersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCiphersResponse
       */
      Models::ListCiphersResponse listCiphersWithOptions(const Models::ListCiphersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query TLS Cipher Suite List
       *
       * @param request ListCiphersRequest
       * @return ListCiphersResponse
       */
      Models::ListCiphersResponse listCiphers(const Models::ListCiphersRequest &request);

      /**
       * @summary Retrieves the list of client CA certificates for a specified site.
       *
       * @param request ListClientCaCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientCaCertificatesResponse
       */
      Models::ListClientCaCertificatesResponse listClientCaCertificatesWithOptions(const Models::ListClientCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of client CA certificates for a specified site.
       *
       * @param request ListClientCaCertificatesRequest
       * @return ListClientCaCertificatesResponse
       */
      Models::ListClientCaCertificatesResponse listClientCaCertificates(const Models::ListClientCaCertificatesRequest &request);

      /**
       * @summary Retrieves the list of client certificates for a specified site.
       *
       * @param request ListClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientCertificatesResponse
       */
      Models::ListClientCertificatesResponse listClientCertificatesWithOptions(const Models::ListClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of client certificates for a specified site.
       *
       * @param request ListClientCertificatesRequest
       * @return ListClientCertificatesResponse
       */
      Models::ListClientCertificatesResponse listClientCertificates(const Models::ListClientCertificatesRequest &request);

      /**
       * @summary Queries the list of compression rule configurations.
       *
       * @param request ListCompressionRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompressionRulesResponse
       */
      Models::ListCompressionRulesResponse listCompressionRulesWithOptions(const Models::ListCompressionRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of compression rule configurations.
       *
       * @param request ListCompressionRulesRequest
       * @return ListCompressionRulesResponse
       */
      Models::ListCompressionRulesResponse listCompressionRules(const Models::ListCompressionRulesRequest &request);

      /**
       * @summary Queries the list of SaaS domain names under a site, including the ID, status, and domain name verification information of each SaaS domain name. You can filter results by SaaS domain name, site ID, or associated record ID.
       *
       * @param request ListCustomHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomHostnamesResponse
       */
      Models::ListCustomHostnamesResponse listCustomHostnamesWithOptions(const Models::ListCustomHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of SaaS domain names under a site, including the ID, status, and domain name verification information of each SaaS domain name. You can filter results by SaaS domain name, site ID, or associated record ID.
       *
       * @param request ListCustomHostnamesRequest
       * @return ListCustomHostnamesResponse
       */
      Models::ListCustomHostnamesResponse listCustomHostnames(const Models::ListCustomHostnamesRequest &request);

      /**
       * @summary Query the list of custom response code configurations for a site.
       *
       * @param request ListCustomResponseCodeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomResponseCodeRulesResponse
       */
      Models::ListCustomResponseCodeRulesResponse listCustomResponseCodeRulesWithOptions(const Models::ListCustomResponseCodeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of custom response code configurations for a site.
       *
       * @param request ListCustomResponseCodeRulesRequest
       * @return ListCustomResponseCodeRulesResponse
       */
      Models::ListCustomResponseCodeRulesResponse listCustomResponseCodeRules(const Models::ListCustomResponseCodeRulesRequest &request);

      /**
       * @summary Retrieves a list of purchased DDoS protection instances.
       *
       * @param request ListDDoSInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDDoSInstancesResponse
       */
      Models::ListDDoSInstancesResponse listDDoSInstancesWithOptions(const Models::ListDDoSInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of purchased DDoS protection instances.
       *
       * @param request ListDDoSInstancesRequest
       * @return ListDDoSInstancesResponse
       */
      Models::ListDDoSInstancesResponse listDDoSInstances(const Models::ListDDoSInstancesRequest &request);

      /**
       * @summary Batch query whether the IP address is included in the ESA resolution result.
       *
       * @description Checks whether vs_addr values in the vipInfo collection are VIPs.
       *
       * @param request ListESAIPInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListESAIPInfoResponse
       */
      Models::ListESAIPInfoResponse listESAIPInfoWithOptions(const Models::ListESAIPInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch query whether the IP address is included in the ESA resolution result.
       *
       * @description Checks whether vs_addr values in the vipInfo collection are VIPs.
       *
       * @param request ListESAIPInfoRequest
       * @return ListESAIPInfoResponse
       */
      Models::ListESAIPInfoResponse listESAIPInfo(const Models::ListESAIPInfoRequest &request);

      /**
       * @summary Retrieves the list of image secrets for an edge container application.
       *
       * @param request ListEdgeContainerAppImageSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppImageSecretsResponse
       */
      Models::ListEdgeContainerAppImageSecretsResponse listEdgeContainerAppImageSecretsWithOptions(const Models::ListEdgeContainerAppImageSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of image secrets for an edge container application.
       *
       * @param request ListEdgeContainerAppImageSecretsRequest
       * @return ListEdgeContainerAppImageSecretsResponse
       */
      Models::ListEdgeContainerAppImageSecretsResponse listEdgeContainerAppImageSecrets(const Models::ListEdgeContainerAppImageSecretsRequest &request);

      /**
       * @summary Lists domain names that are associated with a containerized application.
       *
       * @param request ListEdgeContainerAppRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppRecordsResponse
       */
      Models::ListEdgeContainerAppRecordsResponse listEdgeContainerAppRecordsWithOptions(const Models::ListEdgeContainerAppRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists domain names that are associated with a containerized application.
       *
       * @param request ListEdgeContainerAppRecordsRequest
       * @return ListEdgeContainerAppRecordsResponse
       */
      Models::ListEdgeContainerAppRecordsResponse listEdgeContainerAppRecords(const Models::ListEdgeContainerAppRecordsRequest &request);

      /**
       * @summary Lists versions of all containerized applications.
       *
       * @param request ListEdgeContainerAppVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppVersionsResponse
       */
      Models::ListEdgeContainerAppVersionsResponse listEdgeContainerAppVersionsWithOptions(const Models::ListEdgeContainerAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists versions of all containerized applications.
       *
       * @param request ListEdgeContainerAppVersionsRequest
       * @return ListEdgeContainerAppVersionsResponse
       */
      Models::ListEdgeContainerAppVersionsResponse listEdgeContainerAppVersions(const Models::ListEdgeContainerAppVersionsRequest &request);

      /**
       * @summary Queries all containerized applications in your Alibaba Cloud account.
       *
       * @param request ListEdgeContainerAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerAppsResponse
       */
      Models::ListEdgeContainerAppsResponse listEdgeContainerAppsWithOptions(const Models::ListEdgeContainerAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all containerized applications in your Alibaba Cloud account.
       *
       * @param request ListEdgeContainerAppsRequest
       * @return ListEdgeContainerAppsResponse
       */
      Models::ListEdgeContainerAppsResponse listEdgeContainerApps(const Models::ListEdgeContainerAppsRequest &request);

      /**
       * @summary Queries the records that are associated with Edge Container for a website.
       *
       * @param request ListEdgeContainerRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeContainerRecordsResponse
       */
      Models::ListEdgeContainerRecordsResponse listEdgeContainerRecordsWithOptions(const Models::ListEdgeContainerRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the records that are associated with Edge Container for a website.
       *
       * @param request ListEdgeContainerRecordsRequest
       * @return ListEdgeContainerRecordsResponse
       */
      Models::ListEdgeContainerRecordsResponse listEdgeContainerRecords(const Models::ListEdgeContainerRecordsRequest &request);

      /**
       * @summary Queries Edge Routine plans.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeRoutinePlansResponse
       */
      Models::ListEdgeRoutinePlansResponse listEdgeRoutinePlansWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Edge Routine plans.
       *
       * @return ListEdgeRoutinePlansResponse
       */
      Models::ListEdgeRoutinePlansResponse listEdgeRoutinePlans();

      /**
       * @summary Queries the list of edge routing records for a site.
       *
       * @description > API call frequency: 100 calls per second.
       *
       * @param request ListEdgeRoutineRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeRoutineRecordsResponse
       */
      Models::ListEdgeRoutineRecordsResponse listEdgeRoutineRecordsWithOptions(const Models::ListEdgeRoutineRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of edge routing records for a site.
       *
       * @description > API call frequency: 100 calls per second.
       *
       * @param request ListEdgeRoutineRecordsRequest
       * @return ListEdgeRoutineRecordsResponse
       */
      Models::ListEdgeRoutineRecordsResponse listEdgeRoutineRecords(const Models::ListEdgeRoutineRecordsRequest &request);

      /**
       * @summary Queries the list of environments for a site.
       *
       * @param request ListEnvironmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironmentsWithOptions(const Models::ListEnvironmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of environments for a site.
       *
       * @param request ListEnvironmentsRequest
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironments(const Models::ListEnvironmentsRequest &request);

      /**
       * @summary Queries the list of HTTP incoming request header modification configurations for a site.
       *
       * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpIncomingRequestHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingRequestHeaderModificationRulesResponse listHttpIncomingRequestHeaderModificationRulesWithOptions(const Models::ListHttpIncomingRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of HTTP incoming request header modification configurations for a site.
       *
       * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
       * @return ListHttpIncomingRequestHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingRequestHeaderModificationRulesResponse listHttpIncomingRequestHeaderModificationRules(const Models::ListHttpIncomingRequestHeaderModificationRulesRequest &request);

      /**
       * @summary Queries the list of configurations for modifying HTTP incoming response headers of a site.
       *
       * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpIncomingResponseHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingResponseHeaderModificationRulesResponse listHttpIncomingResponseHeaderModificationRulesWithOptions(const Models::ListHttpIncomingResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of configurations for modifying HTTP incoming response headers of a site.
       *
       * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
       * @return ListHttpIncomingResponseHeaderModificationRulesResponse
       */
      Models::ListHttpIncomingResponseHeaderModificationRulesResponse listHttpIncomingResponseHeaderModificationRules(const Models::ListHttpIncomingResponseHeaderModificationRulesRequest &request);

      /**
       * @summary Queries the list of HTTP request header modification configurations.
       *
       * @param request ListHttpRequestHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpRequestHeaderModificationRulesResponse
       */
      Models::ListHttpRequestHeaderModificationRulesResponse listHttpRequestHeaderModificationRulesWithOptions(const Models::ListHttpRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of HTTP request header modification configurations.
       *
       * @param request ListHttpRequestHeaderModificationRulesRequest
       * @return ListHttpRequestHeaderModificationRulesResponse
       */
      Models::ListHttpRequestHeaderModificationRulesResponse listHttpRequestHeaderModificationRules(const Models::ListHttpRequestHeaderModificationRulesRequest &request);

      /**
       * @summary Queries the list of HTTP response header modification configurations for a site.
       *
       * @param request ListHttpResponseHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpResponseHeaderModificationRulesResponse
       */
      Models::ListHttpResponseHeaderModificationRulesResponse listHttpResponseHeaderModificationRulesWithOptions(const Models::ListHttpResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of HTTP response header modification configurations for a site.
       *
       * @param request ListHttpResponseHeaderModificationRulesRequest
       * @return ListHttpResponseHeaderModificationRulesResponse
       */
      Models::ListHttpResponseHeaderModificationRulesResponse listHttpResponseHeaderModificationRules(const Models::ListHttpResponseHeaderModificationRulesRequest &request);

      /**
       * @summary Query multiple HTTPS application configurations.
       *
       * @param request ListHttpsApplicationConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpsApplicationConfigurationsResponse
       */
      Models::ListHttpsApplicationConfigurationsResponse listHttpsApplicationConfigurationsWithOptions(const Models::ListHttpsApplicationConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple HTTPS application configurations.
       *
       * @param request ListHttpsApplicationConfigurationsRequest
       * @return ListHttpsApplicationConfigurationsResponse
       */
      Models::ListHttpsApplicationConfigurationsResponse listHttpsApplicationConfigurations(const Models::ListHttpsApplicationConfigurationsRequest &request);

      /**
       * @summary Queries multiple HTTPS basic configurations.
       *
       * @param request ListHttpsBasicConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpsBasicConfigurationsResponse
       */
      Models::ListHttpsBasicConfigurationsResponse listHttpsBasicConfigurationsWithOptions(const Models::ListHttpsBasicConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multiple HTTPS basic configurations.
       *
       * @param request ListHttpsBasicConfigurationsRequest
       * @return ListHttpsBasicConfigurationsResponse
       */
      Models::ListHttpsBasicConfigurationsResponse listHttpsBasicConfigurations(const Models::ListHttpsBasicConfigurationsRequest &request);

      /**
       * @summary Queries the list of image transformation configurations for a site.
       *
       * @param request ListImageTransformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageTransformsResponse
       */
      Models::ListImageTransformsResponse listImageTransformsWithOptions(const Models::ListImageTransformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of image transformation configurations for a site.
       *
       * @param request ListImageTransformsRequest
       * @return ListImageTransformsResponse
       */
      Models::ListImageTransformsResponse listImageTransforms(const Models::ListImageTransformsRequest &request);

      /**
       * @summary Queries the quota details of the plan associated with a specific instance or site by quota name.
       *
       * @param request ListInstanceQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceQuotasResponse
       */
      Models::ListInstanceQuotasResponse listInstanceQuotasWithOptions(const Models::ListInstanceQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota details of the plan associated with a specific instance or site by quota name.
       *
       * @param request ListInstanceQuotasRequest
       * @return ListInstanceQuotasResponse
       */
      Models::ListInstanceQuotasResponse listInstanceQuotas(const Models::ListInstanceQuotasRequest &request);

      /**
       * @summary Queries quotas and the actual usage in a plan based on the website or plan ID.
       *
       * @param request ListInstanceQuotasWithUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceQuotasWithUsageResponse
       */
      Models::ListInstanceQuotasWithUsageResponse listInstanceQuotasWithUsageWithOptions(const Models::ListInstanceQuotasWithUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quotas and the actual usage in a plan based on the website or plan ID.
       *
       * @param request ListInstanceQuotasWithUsageRequest
       * @return ListInstanceQuotasWithUsageResponse
       */
      Models::ListInstanceQuotasWithUsageResponse listInstanceQuotasWithUsage(const Models::ListInstanceQuotasWithUsageRequest &request);

      /**
       * @summary Retrieves the list of Keyless server configurations for a site.
       *
       * @param request ListKeylessServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeylessServersResponse
       */
      Models::ListKeylessServersResponse listKeylessServersWithOptions(const Models::ListKeylessServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of Keyless server configurations for a site.
       *
       * @param request ListKeylessServersRequest
       * @return ListKeylessServersResponse
       */
      Models::ListKeylessServersResponse listKeylessServers(const Models::ListKeylessServersRequest &request);

      /**
       * @summary Lists all key-value pairs in a specified KV storage namespace under your account.
       *
       * @param request ListKvsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKvsResponse
       */
      Models::ListKvsResponse listKvsWithOptions(const Models::ListKvsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all key-value pairs in a specified KV storage namespace under your account.
       *
       * @param request ListKvsRequest
       * @return ListKvsResponse
       */
      Models::ListKvsResponse listKvs(const Models::ListKvsRequest &request);

      /**
       * @summary Lists all custom lists under the account along with their details. You can use query parameters to filter results and paginate to retrieve a specific set of lists.
       *
       * @param tmpReq ListListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListsResponse
       */
      Models::ListListsResponse listListsWithOptions(const Models::ListListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all custom lists under the account along with their details. You can use query parameters to filter results and paginate to retrieve a specific set of lists.
       *
       * @param request ListListsRequest
       * @return ListListsResponse
       */
      Models::ListListsResponse listLists(const Models::ListListsRequest &request);

      /**
       * @summary Query the status of origins in load balancers
       *
       * @description Query the status of origins under load balancers. You can pass multiple load balancer IDs at once, separated by commas. This is for load balancers that have monitors configured. It will probe the origins in the source address pools used by the load balancers and record the current status of each origin.
       * - Healthy(healthy): The probe result is available.
       * - Unhealthy(unhealthy): The probe result is unavailable.
       * - Unknown(unknown): Unknown, the monitor has not yet probed.
       * - Undetected(undetected): The load balancer to which the origin belongs is not bound to a monitor.
       *
       * @param request ListLoadBalancerOriginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancerOriginStatusResponse
       */
      Models::ListLoadBalancerOriginStatusResponse listLoadBalancerOriginStatusWithOptions(const Models::ListLoadBalancerOriginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the status of origins in load balancers
       *
       * @description Query the status of origins under load balancers. You can pass multiple load balancer IDs at once, separated by commas. This is for load balancers that have monitors configured. It will probe the origins in the source address pools used by the load balancers and record the current status of each origin.
       * - Healthy(healthy): The probe result is available.
       * - Unhealthy(unhealthy): The probe result is unavailable.
       * - Unknown(unknown): Unknown, the monitor has not yet probed.
       * - Undetected(undetected): The load balancer to which the origin belongs is not bound to a monitor.
       *
       * @param request ListLoadBalancerOriginStatusRequest
       * @return ListLoadBalancerOriginStatusResponse
       */
      Models::ListLoadBalancerOriginStatusResponse listLoadBalancerOriginStatus(const Models::ListLoadBalancerOriginStatusRequest &request);

      /**
       * @summary Queries the primary and secondary region information of a load balancing instance to obtain geographic region codes, descriptions, and other basic information that are active and can be used to configure a country/region-based scheduling policy for the load balancing instance.
       *
       * @description When you create a country/region-based scheduling policy for a load balancing instance by calling an OpenAPI operation, use the primary or secondary region code from the lookup table to represent traffic originating from the corresponding geographic region.
       *
       * @param request ListLoadBalancerRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancerRegionsResponse
       */
      Models::ListLoadBalancerRegionsResponse listLoadBalancerRegionsWithOptions(const Models::ListLoadBalancerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the primary and secondary region information of a load balancing instance to obtain geographic region codes, descriptions, and other basic information that are active and can be used to configure a country/region-based scheduling policy for the load balancing instance.
       *
       * @description When you create a country/region-based scheduling policy for a load balancing instance by calling an OpenAPI operation, use the primary or secondary region code from the lookup table to represent traffic originating from the corresponding geographic region.
       *
       * @param request ListLoadBalancerRegionsRequest
       * @return ListLoadBalancerRegionsResponse
       */
      Models::ListLoadBalancerRegionsResponse listLoadBalancerRegions(const Models::ListLoadBalancerRegionsRequest &request);

      /**
       * @summary Queries the list of load balancers under a site and returns load balancing information. You can query by load balancer name. Paging is supported.
       *
       * @param request ListLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancersWithOptions(const Models::ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of load balancers under a site and returns load balancing information. You can query by load balancer name. Paging is supported.
       *
       * @param request ListLoadBalancersRequest
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancers(const Models::ListLoadBalancersRequest &request);

      /**
       * @summary Lists all WAF managed rule groups under the current account. You can call this operation to retrieve a list of all rule groups and their summary information.
       *
       * @param request ListManagedRulesGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedRulesGroupsResponse
       */
      Models::ListManagedRulesGroupsResponse listManagedRulesGroupsWithOptions(const Models::ListManagedRulesGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all WAF managed rule groups under the current account. You can call this operation to retrieve a list of all rule groups and their summary information.
       *
       * @param request ListManagedRulesGroupsRequest
       * @return ListManagedRulesGroupsResponse
       */
      Models::ListManagedRulesGroupsResponse listManagedRulesGroups(const Models::ListManagedRulesGroupsRequest &request);

      /**
       * @summary Queries multiple network optimization configurations.
       *
       * @param request ListNetworkOptimizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkOptimizationsResponse
       */
      Models::ListNetworkOptimizationsResponse listNetworkOptimizationsWithOptions(const Models::ListNetworkOptimizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multiple network optimization configurations.
       *
       * @param request ListNetworkOptimizationsRequest
       * @return ListNetworkOptimizationsResponse
       */
      Models::ListNetworkOptimizationsResponse listNetworkOptimizations(const Models::ListNetworkOptimizationsRequest &request);

      /**
       * @summary Queries the list of origin server CA certificates.
       *
       * @param request ListOriginCaCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginCaCertificatesResponse
       */
      Models::ListOriginCaCertificatesResponse listOriginCaCertificatesWithOptions(const Models::ListOriginCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of origin server CA certificates.
       *
       * @param request ListOriginCaCertificatesRequest
       * @return ListOriginCaCertificatesResponse
       */
      Models::ListOriginCaCertificatesResponse listOriginCaCertificates(const Models::ListOriginCaCertificatesRequest &request);

      /**
       * @summary Queries the list of back-to-origin client certificates at the domain name granularity.
       *
       * @param request ListOriginClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginClientCertificatesResponse
       */
      Models::ListOriginClientCertificatesResponse listOriginClientCertificatesWithOptions(const Models::ListOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of back-to-origin client certificates at the domain name granularity.
       *
       * @param request ListOriginClientCertificatesRequest
       * @return ListOriginClientCertificatesResponse
       */
      Models::ListOriginClientCertificatesResponse listOriginClientCertificates(const Models::ListOriginClientCertificatesRequest &request);

      /**
       * @summary Lists all origin pools within a site. Supports pagination and searching by origin pool name (exact or fuzzy).
       *
       * @param request ListOriginPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginPoolsResponse
       */
      Models::ListOriginPoolsResponse listOriginPoolsWithOptions(const Models::ListOriginPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all origin pools within a site. Supports pagination and searching by origin pool name (exact or fuzzy).
       *
       * @param request ListOriginPoolsRequest
       * @return ListOriginPoolsResponse
       */
      Models::ListOriginPoolsResponse listOriginPools(const Models::ListOriginPoolsRequest &request);

      /**
       * @summary Query multiple back-to-origin rule configurations.
       *
       * @param request ListOriginRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginRulesResponse
       */
      Models::ListOriginRulesResponse listOriginRulesWithOptions(const Models::ListOriginRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple back-to-origin rule configurations.
       *
       * @param request ListOriginRulesRequest
       * @return ListOriginRulesResponse
       */
      Models::ListOriginRulesResponse listOriginRules(const Models::ListOriginRulesRequest &request);

      /**
       * @summary Lists all custom response pages created by the user. This operation supports pagination and allows you to retrieve the response page list by specifying the page number and page size.
       *
       * @param tmpReq ListPagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPagesResponse
       */
      Models::ListPagesResponse listPagesWithOptions(const Models::ListPagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all custom response pages created by the user. This operation supports pagination and allows you to retrieve the response page list by specifying the page number and page size.
       *
       * @param request ListPagesRequest
       * @return ListPagesResponse
       */
      Models::ListPagesResponse listPages(const Models::ListPagesRequest &request);

      /**
       * @summary Queries the list of pay-as-you-go plan instances.
       *
       * @description Queries the list of pay-as-you-go plan instances under your account. You can filter and sort the results by multiple conditions.
       *
       * @param request ListPostpaidRatePlanInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPostpaidRatePlanInstancesResponse
       */
      Models::ListPostpaidRatePlanInstancesResponse listPostpaidRatePlanInstancesWithOptions(const Models::ListPostpaidRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of pay-as-you-go plan instances.
       *
       * @description Queries the list of pay-as-you-go plan instances under your account. You can filter and sort the results by multiple conditions.
       *
       * @param request ListPostpaidRatePlanInstancesRequest
       * @return ListPostpaidRatePlanInstancesResponse
       */
      Models::ListPostpaidRatePlanInstancesResponse listPostpaidRatePlanInstances(const Models::ListPostpaidRatePlanInstancesRequest &request);

      /**
       * @summary Queries the list of pay-as-you-go site plans available for purchase by a user.
       *
       * @description By specifying the AliUid of a user and the service region (China site or international site), the API returns all pay-as-you-go site plans applicable to the user, including plan names, billing methods, and pricing information.
       *
       * @param request ListPostpaidSitePlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPostpaidSitePlansResponse
       */
      Models::ListPostpaidSitePlansResponse listPostpaidSitePlansWithOptions(const Models::ListPostpaidSitePlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of pay-as-you-go site plans available for purchase by a user.
       *
       * @description By specifying the AliUid of a user and the service region (China site or international site), the API returns all pay-as-you-go site plans applicable to the user, including plan names, billing methods, and pricing information.
       *
       * @param request ListPostpaidSitePlansRequest
       * @return ListPostpaidSitePlansResponse
       */
      Models::ListPostpaidSitePlansResponse listPostpaidSitePlans(const Models::ListPostpaidSitePlansRequest &request);

      /**
       * @summary Queries the list of DNS records under a site, including record values, priorities, authentication configurations, etc. Supports filtering by conditions such as record name and record type.
       *
       * @description DNS records corresponding to edge containers, edge functions, and Layer 4 acceleration will not be returned by this API.
       *
       * @param request ListRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecordsResponse
       */
      Models::ListRecordsResponse listRecordsWithOptions(const Models::ListRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of DNS records under a site, including record values, priorities, authentication configurations, etc. Supports filtering by conditions such as record name and record type.
       *
       * @description DNS records corresponding to edge containers, edge functions, and Layer 4 acceleration will not be returned by this API.
       *
       * @param request ListRecordsRequest
       * @return ListRecordsResponse
       */
      Models::ListRecordsResponse listRecords(const Models::ListRecordsRequest &request);

      /**
       * @summary Queries the redirect configuration list of a site.
       *
       * @param request ListRedirectRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRedirectRulesResponse
       */
      Models::ListRedirectRulesResponse listRedirectRulesWithOptions(const Models::ListRedirectRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the redirect configuration list of a site.
       *
       * @param request ListRedirectRulesRequest
       * @return ListRedirectRulesResponse
       */
      Models::ListRedirectRulesResponse listRedirectRules(const Models::ListRedirectRulesRequest &request);

      /**
       * @summary Queries the list of URL rewrite configurations for a site.
       *
       * @param request ListRewriteUrlRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRewriteUrlRulesResponse
       */
      Models::ListRewriteUrlRulesResponse listRewriteUrlRulesWithOptions(const Models::ListRewriteUrlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of URL rewrite configurations for a site.
       *
       * @param request ListRewriteUrlRulesRequest
       * @return ListRewriteUrlRulesResponse
       */
      Models::ListRewriteUrlRulesResponse listRewriteUrlRules(const Models::ListRewriteUrlRulesRequest &request);

      /**
       * @summary 查询Routine灰度环境列表
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineCanaryAreasResponse
       */
      Models::ListRoutineCanaryAreasResponse listRoutineCanaryAreasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine灰度环境列表
       *
       * @return ListRoutineCanaryAreasResponse
       */
      Models::ListRoutineCanaryAreasResponse listRoutineCanaryAreas();

      /**
       * @summary Queries the code version information of a specified Edge Routine program by paging.
       *
       * @description Queries the code version list of a specified Edge Routine program. This operation supports paging and fuzzy search. You can set the Name parameter to specify the Edge Routine program name, use PageNumber and PageSize for paging control, and use SearchKeyWord for fuzzy matching against code version descriptions.
       * The response includes detailed information about each code version, such as the revision number, description, and creation time.
       *
       * @param request ListRoutineCodeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineCodeVersionsResponse
       */
      Models::ListRoutineCodeVersionsResponse listRoutineCodeVersionsWithOptions(const Models::ListRoutineCodeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the code version information of a specified Edge Routine program by paging.
       *
       * @description Queries the code version list of a specified Edge Routine program. This operation supports paging and fuzzy search. You can set the Name parameter to specify the Edge Routine program name, use PageNumber and PageSize for paging control, and use SearchKeyWord for fuzzy matching against code version descriptions.
       * The response includes detailed information about each code version, such as the revision number, description, and creation time.
       *
       * @param request ListRoutineCodeVersionsRequest
       * @return ListRoutineCodeVersionsResponse
       */
      Models::ListRoutineCodeVersionsResponse listRoutineCodeVersions(const Models::ListRoutineCodeVersionsRequest &request);

      /**
       * @summary The records associated with the function.
       *
       * @description Queries the list of related records for a specified edge routine. You can use pagination parameters to retrieve partial results, or use fuzzy keywords to filter specific record entries.
       *
       * @param request ListRoutineRelatedRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineRelatedRecordsResponse
       */
      Models::ListRoutineRelatedRecordsResponse listRoutineRelatedRecordsWithOptions(const Models::ListRoutineRelatedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The records associated with the function.
       *
       * @description Queries the list of related records for a specified edge routine. You can use pagination parameters to retrieve partial results, or use fuzzy keywords to filter specific record entries.
       *
       * @param request ListRoutineRelatedRecordsRequest
       * @return ListRoutineRelatedRecordsResponse
       */
      Models::ListRoutineRelatedRecordsResponse listRoutineRelatedRecords(const Models::ListRoutineRelatedRecordsRequest &request);

      /**
       * @summary Queries the function route list of an Edge Routine.
       *
       * @param request ListRoutineRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineRoutesResponse
       */
      Models::ListRoutineRoutesResponse listRoutineRoutesWithOptions(const Models::ListRoutineRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the function route list of an Edge Routine.
       *
       * @param request ListRoutineRoutesRequest
       * @return ListRoutineRoutesResponse
       */
      Models::ListRoutineRoutesResponse listRoutineRoutes(const Models::ListRoutineRoutesRequest &request);

      /**
       * @summary Lists the execution plans of a specified scheduled prefetch task by task ID.
       *
       * @param request ListScheduledPreloadExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPreloadExecutionsResponse
       */
      Models::ListScheduledPreloadExecutionsResponse listScheduledPreloadExecutionsWithOptions(const Models::ListScheduledPreloadExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the execution plans of a specified scheduled prefetch task by task ID.
       *
       * @param request ListScheduledPreloadExecutionsRequest
       * @return ListScheduledPreloadExecutionsResponse
       */
      Models::ListScheduledPreloadExecutionsResponse listScheduledPreloadExecutions(const Models::ListScheduledPreloadExecutionsRequest &request);

      /**
       * @summary Lists scheduled prefetch tasks for a site.
       *
       * @param request ListScheduledPreloadJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPreloadJobsResponse
       */
      Models::ListScheduledPreloadJobsResponse listScheduledPreloadJobsWithOptions(const Models::ListScheduledPreloadJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists scheduled prefetch tasks for a site.
       *
       * @param request ListScheduledPreloadJobsRequest
       * @return ListScheduledPreloadJobsResponse
       */
      Models::ListScheduledPreloadJobsResponse listScheduledPreloadJobs(const Models::ListScheduledPreloadJobsRequest &request);

      /**
       * @summary Lists all log delivery tasks that are in progress.
       *
       * @param request ListSiteDeliveryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteDeliveryTasksResponse
       */
      Models::ListSiteDeliveryTasksResponse listSiteDeliveryTasksWithOptions(const Models::ListSiteDeliveryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all log delivery tasks that are in progress.
       *
       * @param request ListSiteDeliveryTasksRequest
       * @return ListSiteDeliveryTasksResponse
       */
      Models::ListSiteDeliveryTasksResponse listSiteDeliveryTasks(const Models::ListSiteDeliveryTasksRequest &request);

      /**
       * @summary Queries the feature configurations of a site. You can query all feature configurations of a site or specify FunctionName to query a specific feature configuration.
       *
       * @param request ListSiteFunctionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteFunctionsResponse
       */
      Models::ListSiteFunctionsResponse listSiteFunctionsWithOptions(const Models::ListSiteFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the feature configurations of a site. You can query all feature configurations of a site or specify FunctionName to query a specific feature configuration.
       *
       * @param request ListSiteFunctionsRequest
       * @return ListSiteFunctionsResponse
       */
      Models::ListSiteFunctionsResponse listSiteFunctions(const Models::ListSiteFunctionsRequest &request);

      /**
       * @summary Queries the list of back-to-origin client certificates at the site level.
       *
       * @param request ListSiteOriginClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteOriginClientCertificatesResponse
       */
      Models::ListSiteOriginClientCertificatesResponse listSiteOriginClientCertificatesWithOptions(const Models::ListSiteOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of back-to-origin client certificates at the site level.
       *
       * @param request ListSiteOriginClientCertificatesRequest
       * @return ListSiteOriginClientCertificatesResponse
       */
      Models::ListSiteOriginClientCertificatesResponse listSiteOriginClientCertificates(const Models::ListSiteOriginClientCertificatesRequest &request);

      /**
       * @summary Queries the list of Edge Routine routes for a site.
       *
       * @param request ListSiteRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteRoutesResponse
       */
      Models::ListSiteRoutesResponse listSiteRoutesWithOptions(const Models::ListSiteRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Edge Routine routes for a site.
       *
       * @param request ListSiteRoutesRequest
       * @return ListSiteRoutesResponse
       */
      Models::ListSiteRoutesResponse listSiteRoutes(const Models::ListSiteRoutesRequest &request);

      /**
       * @summary Queries the list of sites under the current user, including site names, statuses, and configurations.
       *
       * @param tmpReq ListSitesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSitesResponse
       */
      Models::ListSitesResponse listSitesWithOptions(const Models::ListSitesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of sites under the current user, including site names, statuses, and configurations.
       *
       * @param request ListSitesRequest
       * @return ListSitesResponse
       */
      Models::ListSitesResponse listSites(const Models::ListSitesRequest &request);

      /**
       * @summary Queries tags by region ID and resource type.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags by region ID and resource type.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Retrieves a list of diagnostic tasks.
       *
       * @param request ListTraceTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTraceTasksResponse
       */
      Models::ListTraceTasksResponse listTraceTasksWithOptions(const Models::ListTraceTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of diagnostic tasks.
       *
       * @param request ListTraceTasksRequest
       * @return ListTraceTasksResponse
       */
      Models::ListTraceTasksResponse listTraceTasks(const Models::ListTraceTasksRequest &request);

      /**
       * @summary Query the list of Layer 4 applications for a site.
       *
       * @param request ListTransportLayerApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTransportLayerApplicationsResponse
       */
      Models::ListTransportLayerApplicationsResponse listTransportLayerApplicationsWithOptions(const Models::ListTransportLayerApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of Layer 4 applications for a site.
       *
       * @param request ListTransportLayerApplicationsRequest
       * @return ListTransportLayerApplicationsResponse
       */
      Models::ListTransportLayerApplicationsResponse listTransportLayerApplications(const Models::ListTransportLayerApplicationsRequest &request);

      /**
       * @summary Lists the execution status and runtime information of file upload tasks by time and type.
       *
       * @param request ListUploadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUploadTasksResponse
       */
      Models::ListUploadTasksResponse listUploadTasksWithOptions(const Models::ListUploadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the execution status and runtime information of file upload tasks by time and type.
       *
       * @param request ListUploadTasksRequest
       * @return ListUploadTasksResponse
       */
      Models::ListUploadTasksResponse listUploadTasks(const Models::ListUploadTasksRequest &request);

      /**
       * @summary Queries the list of web page observation configurations.
       *
       * @param request ListUrlObservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUrlObservationsResponse
       */
      Models::ListUrlObservationsResponse listUrlObservationsWithOptions(const Models::ListUrlObservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of web page observation configurations.
       *
       * @param request ListUrlObservationsRequest
       * @return ListUrlObservationsResponse
       */
      Models::ListUrlObservationsResponse listUrlObservations(const Models::ListUrlObservationsRequest &request);

      /**
       * @summary Queries all delivery tasks in your Alibaba Cloud account by page. You can filter the delivery tasks by the category of the delivered real-time logs.
       *
       * @param request ListUserDeliveryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDeliveryTasksResponse
       */
      Models::ListUserDeliveryTasksResponse listUserDeliveryTasksWithOptions(const Models::ListUserDeliveryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all delivery tasks in your Alibaba Cloud account by page. You can filter the delivery tasks by the category of the delivered real-time logs.
       *
       * @param request ListUserDeliveryTasksRequest
       * @return ListUserDeliveryTasksResponse
       */
      Models::ListUserDeliveryTasksResponse listUserDeliveryTasks(const Models::ListUserDeliveryTasksRequest &request);

      /**
       * @summary Queries the plan instances purchased by the user and their details.
       *
       * @param request ListUserRatePlanInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRatePlanInstancesResponse
       */
      Models::ListUserRatePlanInstancesResponse listUserRatePlanInstancesWithOptions(const Models::ListUserRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the plan instances purchased by the user and their details.
       *
       * @param request ListUserRatePlanInstancesRequest
       * @return ListUserRatePlanInstancesResponse
       */
      Models::ListUserRatePlanInstancesResponse listUserRatePlanInstances(const Models::ListUserRatePlanInstancesRequest &request);

      /**
       * @summary Retrieves a paginated list of Edge Routines created by the user along with quota information.
       *
       * @description This operation allows you to perform a paged query for all Edge Routines created under your account. It also returns the Edge Routine quota for your current plan and the number of Edge Routines already in use. You can specify the PageNumber and PageSize paging parameters to control the number of results returned, and use SearchKeyWord to perform a fuzzy search to filter Routine names.
       *
       * @param request ListUserRoutinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRoutinesResponse
       */
      Models::ListUserRoutinesResponse listUserRoutinesWithOptions(const Models::ListUserRoutinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of Edge Routines created by the user along with quota information.
       *
       * @description This operation allows you to perform a paged query for all Edge Routines created under your account. It also returns the Edge Routine quota for your current plan and the number of Edge Routines already in use. You can specify the PageNumber and PageSize paging parameters to control the number of results returned, and use SearchKeyWord to perform a fuzzy search to filter Routine names.
       *
       * @param request ListUserRoutinesRequest
       * @return ListUserRoutinesResponse
       */
      Models::ListUserRoutinesResponse listUserRoutines(const Models::ListUserRoutinesRequest &request);

      /**
       * @summary Retrieves WAF rule sets for a specified instance, allowing filtering by phase, name, and other criteria.
       *
       * @description ## Request
       * - `InstanceId` is a required parameter that specifies the WAF instance to query.
       * - The `Phase` parameter filters rule sets by WAF processing phase, such as custom rules and rate limiting rules.
       * - Use `NameLike` in `QueryArgs` to perform a fuzzy search on rule set names.
       * - The `PageNumber` and `PageSize` parameters control pagination and default to 1 and 20, respectively.
       * - The response includes the request ID, current plan usage, the total record count, and a list of rule set details.
       *
       * @param tmpReq ListUserWafRulesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserWafRulesetsResponse
       */
      Models::ListUserWafRulesetsResponse listUserWafRulesetsWithOptions(const Models::ListUserWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves WAF rule sets for a specified instance, allowing filtering by phase, name, and other criteria.
       *
       * @description ## Request
       * - `InstanceId` is a required parameter that specifies the WAF instance to query.
       * - The `Phase` parameter filters rule sets by WAF processing phase, such as custom rules and rate limiting rules.
       * - Use `NameLike` in `QueryArgs` to perform a fuzzy search on rule set names.
       * - The `PageNumber` and `PageSize` parameters control pagination and default to 1 and 20, respectively.
       * - The response includes the request ID, current plan usage, the total record count, and a list of rule set details.
       *
       * @param request ListUserWafRulesetsRequest
       * @return ListUserWafRulesetsResponse
       */
      Models::ListUserWafRulesetsResponse listUserWafRulesets(const Models::ListUserWafRulesetsRequest &request);

      /**
       * @summary Queries the version list of a site.
       *
       * @param request ListVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVersionsResponse
       */
      Models::ListVersionsResponse listVersionsWithOptions(const Models::ListVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version list of a site.
       *
       * @param request ListVersionsRequest
       * @return ListVersionsResponse
       */
      Models::ListVersionsResponse listVersions(const Models::ListVersionsRequest &request);

      /**
       * @summary Queries the list of video processing configurations for a site.
       *
       * @param request ListVideoProcessingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVideoProcessingsResponse
       */
      Models::ListVideoProcessingsResponse listVideoProcessingsWithOptions(const Models::ListVideoProcessingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of video processing configurations for a site.
       *
       * @param request ListVideoProcessingsRequest
       * @return ListVideoProcessingsResponse
       */
      Models::ListVideoProcessingsResponse listVideoProcessings(const Models::ListVideoProcessingsRequest &request);

      /**
       * @summary Lists all managed rules under Web Application Firewall (WAF) or filters rules based on specific conditions. You can use this operation to query detailed information about WAF managed rules in a paginated manner.
       *
       * @param tmpReq ListWafManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafManagedRulesResponse
       */
      Models::ListWafManagedRulesResponse listWafManagedRulesWithOptions(const Models::ListWafManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all managed rules under Web Application Firewall (WAF) or filters rules based on specific conditions. You can use this operation to query detailed information about WAF managed rules in a paginated manner.
       *
       * @param request ListWafManagedRulesRequest
       * @return ListWafManagedRulesResponse
       */
      Models::ListWafManagedRulesResponse listWafManagedRules(const Models::ListWafManagedRulesRequest &request);

      /**
       * @summary List WAF Phases
       *
       * @param request ListWafPhasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafPhasesResponse
       */
      Models::ListWafPhasesResponse listWafPhasesWithOptions(const Models::ListWafPhasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List WAF Phases
       *
       * @param request ListWafPhasesRequest
       * @return ListWafPhasesResponse
       */
      Models::ListWafPhasesResponse listWafPhases(const Models::ListWafPhasesRequest &request);

      /**
       * @summary Lists all rules or filters rules by specific conditions under Web Application Firewall (WAF). You can use this operation to query detailed information about WAF rules in a paged manner.
       *
       * @param tmpReq ListWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafRulesResponse
       */
      Models::ListWafRulesResponse listWafRulesWithOptions(const Models::ListWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all rules or filters rules by specific conditions under Web Application Firewall (WAF). You can use this operation to query detailed information about WAF rules in a paged manner.
       *
       * @param request ListWafRulesRequest
       * @return ListWafRulesResponse
       */
      Models::ListWafRulesResponse listWafRules(const Models::ListWafRulesRequest &request);

      /**
       * @summary Lists the rulesets under the current WAF execution phase. Queries basic information and status of rulesets with paging support.
       *
       * @param tmpReq ListWafRulesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafRulesetsResponse
       */
      Models::ListWafRulesetsResponse listWafRulesetsWithOptions(const Models::ListWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the rulesets under the current WAF execution phase. Queries basic information and status of rulesets with paging support.
       *
       * @param request ListWafRulesetsRequest
       * @return ListWafRulesetsResponse
       */
      Models::ListWafRulesetsResponse listWafRulesets(const Models::ListWafRulesetsRequest &request);

      /**
       * @summary Lists the template rules in WAF. These rules are typically predefined rulesets for quickly enabling protection against common attack types.
       *
       * @param tmpReq ListWafTemplateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafTemplateRulesResponse
       */
      Models::ListWafTemplateRulesResponse listWafTemplateRulesWithOptions(const Models::ListWafTemplateRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the template rules in WAF. These rules are typically predefined rulesets for quickly enabling protection against common attack types.
       *
       * @param request ListWafTemplateRulesRequest
       * @return ListWafTemplateRulesResponse
       */
      Models::ListWafTemplateRulesResponse listWafTemplateRules(const Models::ListWafTemplateRulesRequest &request);

      /**
       * @summary Lists the usage of WAF rules.
       *
       * @param request ListWafUsageOfRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafUsageOfRulesResponse
       */
      Models::ListWafUsageOfRulesResponse listWafUsageOfRulesWithOptions(const Models::ListWafUsageOfRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the usage of WAF rules.
       *
       * @param request ListWafUsageOfRulesRequest
       * @return ListWafUsageOfRulesResponse
       */
      Models::ListWafUsageOfRulesResponse listWafUsageOfRules(const Models::ListWafUsageOfRulesRequest &request);

      /**
       * @summary Queries waiting room events for a waiting room.
       *
       * @description Use this operation to query details of all waiting room events related to a waiting room in a website.
       *
       * @param request ListWaitingRoomEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomEventsResponse
       */
      Models::ListWaitingRoomEventsResponse listWaitingRoomEventsWithOptions(const Models::ListWaitingRoomEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries waiting room events for a waiting room.
       *
       * @description Use this operation to query details of all waiting room events related to a waiting room in a website.
       *
       * @param request ListWaitingRoomEventsRequest
       * @return ListWaitingRoomEventsResponse
       */
      Models::ListWaitingRoomEventsResponse listWaitingRoomEvents(const Models::ListWaitingRoomEventsRequest &request);

      /**
       * @summary Query Waiting Room Bypass Rules
       *
       * @description This API allows users to query the list of waiting room bypass rules associated with a specific site.
       *
       * @param request ListWaitingRoomRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomRulesResponse
       */
      Models::ListWaitingRoomRulesResponse listWaitingRoomRulesWithOptions(const Models::ListWaitingRoomRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Waiting Room Bypass Rules
       *
       * @description This API allows users to query the list of waiting room bypass rules associated with a specific site.
       *
       * @param request ListWaitingRoomRulesRequest
       * @return ListWaitingRoomRulesResponse
       */
      Models::ListWaitingRoomRulesResponse listWaitingRoomRules(const Models::ListWaitingRoomRulesRequest &request);

      /**
       * @summary Queries the details of all configured waiting rooms for a specified site.
       *
       * @description This API allows you to query the configuration details of all waiting rooms for a specified site, including the enabled status, name, and queuing rules.
       *
       * @param request ListWaitingRoomsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomsResponse
       */
      Models::ListWaitingRoomsResponse listWaitingRoomsWithOptions(const Models::ListWaitingRoomsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all configured waiting rooms for a specified site.
       *
       * @description This API allows you to query the configuration details of all waiting rooms for a specified site, including the enabled status, name, and queuing rules.
       *
       * @param request ListWaitingRoomsRequest
       * @return ListWaitingRoomsResponse
       */
      Models::ListWaitingRoomsResponse listWaitingRooms(const Models::ListWaitingRoomsRequest &request);

      /**
       * @summary Activates the edge container service.
       *
       * @param request OpenEdgeContainerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenEdgeContainerResponse
       */
      Models::OpenEdgeContainerResponse openEdgeContainerWithOptions(const Models::OpenEdgeContainerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the edge container service.
       *
       * @param request OpenEdgeContainerRequest
       * @return OpenEdgeContainerResponse
       */
      Models::OpenEdgeContainerResponse openEdgeContainer(const Models::OpenEdgeContainerRequest &request);

      /**
       * @summary OpenErService
       *
       * @param request OpenErServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenErServiceResponse
       */
      Models::OpenErServiceResponse openErServiceWithOptions(const Models::OpenErServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OpenErService
       *
       * @param request OpenErServiceRequest
       * @return OpenErServiceResponse
       */
      Models::OpenErServiceResponse openErService(const Models::OpenErServiceRequest &request);

      /**
       * @summary Prefetches resources.
       *
       * @param tmpReq PreloadCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadCachesResponse
       */
      Models::PreloadCachesResponse preloadCachesWithOptions(const Models::PreloadCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches resources.
       *
       * @param request PreloadCachesRequest
       * @return PreloadCachesResponse
       */
      Models::PreloadCachesResponse preloadCaches(const Models::PreloadCachesRequest &request);

      /**
       * @summary Releases a specific version of a containerized application.
       *
       * @param tmpReq PublishEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishEdgeContainerAppVersionResponse
       */
      Models::PublishEdgeContainerAppVersionResponse publishEdgeContainerAppVersionWithOptions(const Models::PublishEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a specific version of a containerized application.
       *
       * @param request PublishEdgeContainerAppVersionRequest
       * @return PublishEdgeContainerAppVersionResponse
       */
      Models::PublishEdgeContainerAppVersionResponse publishEdgeContainerAppVersion(const Models::PublishEdgeContainerAppVersionRequest &request);

      /**
       * @summary Publishes a specific version of Edge Routine code to a staging or production environment. When publishing to the production environment, you can perform a canary release to specific regions.
       *
       * @param request PublishRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRoutineCodeVersionResponse
       */
      Models::PublishRoutineCodeVersionResponse publishRoutineCodeVersionWithOptions(const Models::PublishRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specific version of Edge Routine code to a staging or production environment. When publishing to the production environment, you can perform a canary release to specific regions.
       *
       * @param request PublishRoutineCodeVersionRequest
       * @return PublishRoutineCodeVersionResponse
       */
      Models::PublishRoutineCodeVersionResponse publishRoutineCodeVersion(const Models::PublishRoutineCodeVersionRequest &request);

      /**
       * @summary Purchases a new bot instance.
       *
       * @param request PurchaseBotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseBotInstanceResponse
       */
      Models::PurchaseBotInstanceResponse purchaseBotInstanceWithOptions(const Models::PurchaseBotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a new bot instance.
       *
       * @param request PurchaseBotInstanceRequest
       * @return PurchaseBotInstanceResponse
       */
      Models::PurchaseBotInstanceResponse purchaseBotInstance(const Models::PurchaseBotInstanceRequest &request);

      /**
       * @summary Purchases a cache reserve instance.
       *
       * @param request PurchaseCacheReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseCacheReserveResponse
       */
      Models::PurchaseCacheReserveResponse purchaseCacheReserveWithOptions(const Models::PurchaseCacheReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a cache reserve instance.
       *
       * @param request PurchaseCacheReserveRequest
       * @return PurchaseCacheReserveResponse
       */
      Models::PurchaseCacheReserveResponse purchaseCacheReserve(const Models::PurchaseCacheReserveRequest &request);

      /**
       * @summary Purchases a plan by calling PurchaseRatePlan.
       *
       * @description 1. Obtain the plan name and plan code by calling the DescribeRatePlanPrice operation.
       * 2. If the acceleration region is not set to overseas, the site must have a valid China Internet Content Provider (ICP) filing.
       *
       * @param request PurchaseRatePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseRatePlanResponse
       */
      Models::PurchaseRatePlanResponse purchaseRatePlanWithOptions(const Models::PurchaseRatePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a plan by calling PurchaseRatePlan.
       *
       * @description 1. Obtain the plan name and plan code by calling the DescribeRatePlanPrice operation.
       * 2. If the acceleration region is not set to overseas, the site must have a valid China Internet Content Provider (ICP) filing.
       *
       * @param request PurchaseRatePlanRequest
       * @return PurchaseRatePlanResponse
       */
      Models::PurchaseRatePlanResponse purchaseRatePlan(const Models::PurchaseRatePlanRequest &request);

      /**
       * @summary Refreshes file content on nodes. Supports refreshing by file, directory, cache tag, ignored parameters, hostname, and entire site.
       *
       * @param tmpReq PurgeCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeCachesResponse
       */
      Models::PurgeCachesResponse purgeCachesWithOptions(const Models::PurgeCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes file content on nodes. Supports refreshing by file, directory, cache tag, ignored parameters, hostname, and entire site.
       *
       * @param request PurgeCachesRequest
       * @return PurgeCachesResponse
       */
      Models::PurgeCachesResponse purgeCaches(const Models::PurgeCachesRequest &request);

      /**
       * @summary Creates or updates a single key-value pair in a namespace. The maximum size of a request is 2 MB.
       *
       * @param request PutKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutKvResponse
       */
      Models::PutKvResponse putKvWithOptions(const Models::PutKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a single key-value pair in a namespace. The maximum size of a request is 2 MB.
       *
       * @param request PutKvRequest
       * @return PutKvResponse
       */
      Models::PutKvResponse putKv(const Models::PutKvRequest &request);

      /**
       * @summary Sets a single large-capacity key-value pair in a KV namespace. The maximum value size is 25 MB.
       *
       * @description This operation provides the same functionality as [PutKv](~~PutKv~~), but allows you to upload a larger request body. If the request body is small, use the [PutKv](~~PutKv~~) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when you use the Golang SDK, call the PutKvWithHighCapacityAdvance function.
       * ```
       * func TestPutKvWithHighCapacity() {
       * 	// Configuration initialization
       * 	cfg := new(openapi.Config)
       * 	cfg.SetAccessKeyId("xxxxxxxxx")
       * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
       * 	cli, err := NewClient(cfg)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	runtime := &util.RuntimeOptions{}.
       * 	// Construct the key-value pair request to upload
       * 	namespace := "test-put-kv"
       * 	key := "test_PutKvWithHighCapacity_0"
       * 	value := strings.Repeat("t", 10*1024*1024)
       * 	rawReq := &PutKvRequest{
       * 		Namespace: &namespace,
       * 		Key:       &key,
       * 		Value:     &value,
       * 	}
       * 	payload, err := json.Marshal(rawReq)
       * 	if err != nil {
       * 		return err
       * 	}.
       * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
       * 	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
       * 		Namespace: &namespace,
       * 		Key:       &key,
       * 		UrlObject: bytes.NewReader([]byte(payload)),
       * 	}.
       * 	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	return nil
       * }.
       *
       * @param request PutKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutKvWithHighCapacityResponse
       */
      Models::PutKvWithHighCapacityResponse putKvWithHighCapacityWithOptions(const Models::PutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a single large-capacity key-value pair in a KV namespace. The maximum value size is 25 MB.
       *
       * @description This operation provides the same functionality as [PutKv](~~PutKv~~), but allows you to upload a larger request body. If the request body is small, use the [PutKv](~~PutKv~~) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when you use the Golang SDK, call the PutKvWithHighCapacityAdvance function.
       * ```
       * func TestPutKvWithHighCapacity() {
       * 	// Configuration initialization
       * 	cfg := new(openapi.Config)
       * 	cfg.SetAccessKeyId("xxxxxxxxx")
       * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
       * 	cli, err := NewClient(cfg)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	runtime := &util.RuntimeOptions{}.
       * 	// Construct the key-value pair request to upload
       * 	namespace := "test-put-kv"
       * 	key := "test_PutKvWithHighCapacity_0"
       * 	value := strings.Repeat("t", 10*1024*1024)
       * 	rawReq := &PutKvRequest{
       * 		Namespace: &namespace,
       * 		Key:       &key,
       * 		Value:     &value,
       * 	}
       * 	payload, err := json.Marshal(rawReq)
       * 	if err != nil {
       * 		return err
       * 	}.
       * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
       * 	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
       * 		Namespace: &namespace,
       * 		Key:       &key,
       * 		UrlObject: bytes.NewReader([]byte(payload)),
       * 	}.
       * 	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
       * 	if err != nil {
       * 		return err
       * 	}
       * 	return nil
       * }.
       *
       * @param request PutKvWithHighCapacityRequest
       * @return PutKvWithHighCapacityResponse
       */
      Models::PutKvWithHighCapacityResponse putKvWithHighCapacity(const Models::PutKvWithHighCapacityRequest &request);

      Models::PutKvWithHighCapacityResponse putKvWithHighCapacityAdvance(const Models::PutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuild the staging environment of an edge container application.
       *
       * @param request RebuildEdgeContainerAppStagingEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildEdgeContainerAppStagingEnvResponse
       */
      Models::RebuildEdgeContainerAppStagingEnvResponse rebuildEdgeContainerAppStagingEnvWithOptions(const Models::RebuildEdgeContainerAppStagingEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuild the staging environment of an edge container application.
       *
       * @param request RebuildEdgeContainerAppStagingEnvRequest
       * @return RebuildEdgeContainerAppStagingEnvResponse
       */
      Models::RebuildEdgeContainerAppStagingEnvResponse rebuildEdgeContainerAppStagingEnv(const Models::RebuildEdgeContainerAppStagingEnvRequest &request);

      /**
       * @summary Restores the status of a site that has been disabled.
       *
       * @param request RecoverSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverSiteResponse
       */
      Models::RecoverSiteResponse recoverSiteWithOptions(const Models::RecoverSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores the status of a site that has been disabled.
       *
       * @param request RecoverSiteRequest
       * @return RecoverSiteResponse
       */
      Models::RecoverSiteResponse recoverSite(const Models::RecoverSiteRequest &request);

      /**
       * @summary Schedules the release of a security instance.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Schedules the release of a security instance.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Resets the progress of a scheduled prefetch task and restarts the prefetch from the beginning.
       * Before calling this operation, you must first create a scheduled prefetch task by calling CreateScheduledPreloadJob to obtain a valid task ID, and then pass the ID to this operation for resetting.
       *
       * @param request ResetScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetScheduledPreloadJobResponse
       */
      Models::ResetScheduledPreloadJobResponse resetScheduledPreloadJobWithOptions(const Models::ResetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the progress of a scheduled prefetch task and restarts the prefetch from the beginning.
       * Before calling this operation, you must first create a scheduled prefetch task by calling CreateScheduledPreloadJob to obtain a valid task ID, and then pass the ID to this operation for resetting.
       *
       * @param request ResetScheduledPreloadJobRequest
       * @return ResetScheduledPreloadJobResponse
       */
      Models::ResetScheduledPreloadJobResponse resetScheduledPreloadJob(const Models::ResetScheduledPreloadJobRequest &request);

      /**
       * @summary Revokes an activated client certificate.
       *
       * @param request RevokeClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeClientCertificateResponse
       */
      Models::RevokeClientCertificateResponse revokeClientCertificateWithOptions(const Models::RevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an activated client certificate.
       *
       * @param request RevokeClientCertificateRequest
       * @return RevokeClientCertificateResponse
       */
      Models::RevokeClientCertificateResponse revokeClientCertificate(const Models::RevokeClientCertificateRequest &request);

      /**
       * @summary Rolls back an edge container application to a specified version. Use this API to quickly recover from a failed deployment and minimize service disruption.
       *
       * @param request RollbackEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackEdgeContainerAppVersionResponse
       */
      Models::RollbackEdgeContainerAppVersionResponse rollbackEdgeContainerAppVersionWithOptions(const Models::RollbackEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an edge container application to a specified version. Use this API to quickly recover from a failed deployment and minimize service disruption.
       *
       * @param request RollbackEdgeContainerAppVersionRequest
       * @return RollbackEdgeContainerAppVersionResponse
       */
      Models::RollbackEdgeContainerAppVersionResponse rollbackEdgeContainerAppVersion(const Models::RollbackEdgeContainerAppVersionRequest &request);

      /**
       * @summary Rolls back the deployment version of an environment.
       *
       * @param request RollbackEnvironmentVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackEnvironmentVersionResponse
       */
      Models::RollbackEnvironmentVersionResponse rollbackEnvironmentVersionWithOptions(const Models::RollbackEnvironmentVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back the deployment version of an environment.
       *
       * @param request RollbackEnvironmentVersionRequest
       * @return RollbackEnvironmentVersionResponse
       */
      Models::RollbackEnvironmentVersionResponse rollbackEnvironmentVersion(const Models::RollbackEnvironmentVersionRequest &request);

      /**
       * @summary Configures the automatic frequency control threshold for a site.
       *
       * @param request SetAutomaticFrequencyControlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAutomaticFrequencyControlConfigResponse
       */
      Models::SetAutomaticFrequencyControlConfigResponse setAutomaticFrequencyControlConfigWithOptions(const Models::SetAutomaticFrequencyControlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the automatic frequency control threshold for a site.
       *
       * @param request SetAutomaticFrequencyControlConfigRequest
       * @return SetAutomaticFrequencyControlConfigResponse
       */
      Models::SetAutomaticFrequencyControlConfigResponse setAutomaticFrequencyControlConfig(const Models::SetAutomaticFrequencyControlConfigRequest &request);

      /**
       * @summary Configures whether to enable the certificate feature for a site and updates certificate information.
       *
       * @param request SetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCertificateResponse
       */
      Models::SetCertificateResponse setCertificateWithOptions(const Models::SetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures whether to enable the certificate feature for a site and updates certificate information.
       *
       * @param request SetCertificateRequest
       * @return SetCertificateResponse
       */
      Models::SetCertificateResponse setCertificate(const Models::SetCertificateRequest &request);

      /**
       * @summary Binds hostnames to a specified client CA certificate. If you do not specify a certificate, the hostnames are bound to the ESA CA certificate.
       *
       * @param tmpReq SetClientCaCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetClientCaCertificateHostnamesResponse
       */
      Models::SetClientCaCertificateHostnamesResponse setClientCaCertificateHostnamesWithOptions(const Models::SetClientCaCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds hostnames to a specified client CA certificate. If you do not specify a certificate, the hostnames are bound to the ESA CA certificate.
       *
       * @param request SetClientCaCertificateHostnamesRequest
       * @return SetClientCaCertificateHostnamesResponse
       */
      Models::SetClientCaCertificateHostnamesResponse setClientCaCertificateHostnames(const Models::SetClientCaCertificateHostnamesRequest &request);

      /**
       * @summary Associates domain names with a specified client CA certificate. If no certificate is specified, the domain names are associated with the ESA CA certificate. This API is deprecated. Use SetClientCaCertificateHostnames instead.
       *
       * @param tmpReq SetClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetClientCertificateHostnamesResponse
       */
      Models::SetClientCertificateHostnamesResponse setClientCertificateHostnamesWithOptions(const Models::SetClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates domain names with a specified client CA certificate. If no certificate is specified, the domain names are associated with the ESA CA certificate. This API is deprecated. Use SetClientCaCertificateHostnames instead.
       *
       * @param request SetClientCertificateHostnamesRequest
       * @return SetClientCertificateHostnamesResponse
       */
      Models::SetClientCertificateHostnamesResponse setClientCertificateHostnames(const Models::SetClientCertificateHostnamesRequest &request);

      /**
       * @summary Sets the maximum burstable protection bandwidth for a DDoS instance in mainland China.
       *
       * @param request SetDdosMaxBurstGbpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDdosMaxBurstGbpsResponse
       */
      Models::SetDdosMaxBurstGbpsResponse setDdosMaxBurstGbpsWithOptions(const Models::SetDdosMaxBurstGbpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the maximum burstable protection bandwidth for a DDoS instance in mainland China.
       *
       * @param request SetDdosMaxBurstGbpsRequest
       * @return SetDdosMaxBurstGbpsResponse
       */
      Models::SetDdosMaxBurstGbpsResponse setDdosMaxBurstGbps(const Models::SetDdosMaxBurstGbpsRequest &request);

      /**
       * @summary This operation configures the intelligent HTTP DDoS protection settings for a site.
       *
       * @param request SetHttpDDoSAttackIntelligentProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::SetHttpDDoSAttackIntelligentProtectionResponse setHttpDDoSAttackIntelligentProtectionWithOptions(const Models::SetHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation configures the intelligent HTTP DDoS protection settings for a site.
       *
       * @param request SetHttpDDoSAttackIntelligentProtectionRequest
       * @return SetHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::SetHttpDDoSAttackIntelligentProtectionResponse setHttpDDoSAttackIntelligentProtection(const Models::SetHttpDDoSAttackIntelligentProtectionRequest &request);

      /**
       * @summary Configures HTTP DDoS attack protection for a website.
       *
       * @param request SetHttpDDoSAttackProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackProtectionResponse
       */
      Models::SetHttpDDoSAttackProtectionResponse setHttpDDoSAttackProtectionWithOptions(const Models::SetHttpDDoSAttackProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures HTTP DDoS attack protection for a website.
       *
       * @param request SetHttpDDoSAttackProtectionRequest
       * @return SetHttpDDoSAttackProtectionResponse
       */
      Models::SetHttpDDoSAttackProtectionResponse setHttpDDoSAttackProtection(const Models::SetHttpDDoSAttackProtectionRequest &request);

      /**
       * @summary Set the Protection Action for Specified HTTP DDoS Attack Rules
       *
       * @param request SetHttpDDoSAttackRuleActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackRuleActionResponse
       */
      Models::SetHttpDDoSAttackRuleActionResponse setHttpDDoSAttackRuleActionWithOptions(const Models::SetHttpDDoSAttackRuleActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the Protection Action for Specified HTTP DDoS Attack Rules
       *
       * @param request SetHttpDDoSAttackRuleActionRequest
       * @return SetHttpDDoSAttackRuleActionResponse
       */
      Models::SetHttpDDoSAttackRuleActionResponse setHttpDDoSAttackRuleAction(const Models::SetHttpDDoSAttackRuleActionRequest &request);

      /**
       * @summary Set the Protection Status of Specified HTTP DDoS Attack Rules
       *
       * @param request SetHttpDDoSAttackRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackRuleStatusResponse
       */
      Models::SetHttpDDoSAttackRuleStatusResponse setHttpDDoSAttackRuleStatusWithOptions(const Models::SetHttpDDoSAttackRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the Protection Status of Specified HTTP DDoS Attack Rules
       *
       * @param request SetHttpDDoSAttackRuleStatusRequest
       * @return SetHttpDDoSAttackRuleStatusResponse
       */
      Models::SetHttpDDoSAttackRuleStatusResponse setHttpDDoSAttackRuleStatus(const Models::SetHttpDDoSAttackRuleStatusRequest &request);

      /**
       * @summary Creates or updates a keyless server configuration.
       *
       * @param request SetKeylessServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetKeylessServerResponse
       */
      Models::SetKeylessServerResponse setKeylessServerWithOptions(const Models::SetKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a keyless server configuration.
       *
       * @param request SetKeylessServerRequest
       * @return SetKeylessServerResponse
       */
      Models::SetKeylessServerResponse setKeylessServer(const Models::SetKeylessServerRequest &request);

      /**
       * @summary Associates specified hostnames with an origin client certificate.
       *
       * @param tmpReq SetOriginClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetOriginClientCertificateHostnamesResponse
       */
      Models::SetOriginClientCertificateHostnamesResponse setOriginClientCertificateHostnamesWithOptions(const Models::SetOriginClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates specified hostnames with an origin client certificate.
       *
       * @param request SetOriginClientCertificateHostnamesRequest
       * @return SetOriginClientCertificateHostnamesResponse
       */
      Models::SetOriginClientCertificateHostnamesResponse setOriginClientCertificateHostnames(const Models::SetOriginClientCertificateHostnamesRequest &request);

      /**
       * @summary Starts a scheduled prefetch based on the prefetch plan ID.
       *
       * @param request StartScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartScheduledPreloadExecutionResponse
       */
      Models::StartScheduledPreloadExecutionResponse startScheduledPreloadExecutionWithOptions(const Models::StartScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a scheduled prefetch based on the prefetch plan ID.
       *
       * @param request StartScheduledPreloadExecutionRequest
       * @return StartScheduledPreloadExecutionResponse
       */
      Models::StartScheduledPreloadExecutionResponse startScheduledPreloadExecution(const Models::StartScheduledPreloadExecutionRequest &request);

      /**
       * @summary Stops a single scheduled preload execution plan based on the preload plan ID.
       * Prerequisites: (1) This API only takes effect when the execution plan status is running. Execution plans in the waiting or failed status cannot be stopped. (2) Whether an execution plan can reach the running status depends on whether the site it belongs to has completed access verification (site Status=active).
       *
       * @param request StopScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopScheduledPreloadExecutionResponse
       */
      Models::StopScheduledPreloadExecutionResponse stopScheduledPreloadExecutionWithOptions(const Models::StopScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a single scheduled preload execution plan based on the preload plan ID.
       * Prerequisites: (1) This API only takes effect when the execution plan status is running. Execution plans in the waiting or failed status cannot be stopped. (2) Whether an execution plan can reach the running status depends on whether the site it belongs to has completed access verification (site Status=active).
       *
       * @param request StopScheduledPreloadExecutionRequest
       * @return StopScheduledPreloadExecutionResponse
       */
      Models::StopScheduledPreloadExecutionResponse stopScheduledPreloadExecution(const Models::StopScheduledPreloadExecutionRequest &request);

      /**
       * @summary Manually deactivates a site.
       *
       * @param request StopSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSiteResponse
       */
      Models::StopSiteResponse stopSiteWithOptions(const Models::StopSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually deactivates a site.
       *
       * @param request StopSiteRequest
       * @return StopSiteResponse
       */
      Models::StopSiteResponse stopSite(const Models::StopSiteRequest &request);

      /**
       * @summary Submits a purge or prefetch task after a file that contains resources to be purged or prefetched is uploaded.
       *
       * @param request SubmitUploadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitUploadTaskResponse
       */
      Models::SubmitUploadTaskResponse submitUploadTaskWithOptions(const Models::SubmitUploadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a purge or prefetch task after a file that contains resources to be purged or prefetched is uploaded.
       *
       * @param request SubmitUploadTaskRequest
       * @return SubmitUploadTaskResponse
       */
      Models::SubmitUploadTaskResponse submitUploadTask(const Models::SubmitUploadTaskRequest &request);

      /**
       * @summary Adds one or more tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes a resource tag based on a specified resource ID.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource tag based on a specified resource ID.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the cache reserve configuration of a site.
       *
       * @param request UpdateCacheReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheReserveResponse
       */
      Models::UpdateCacheReserveResponse updateCacheReserveWithOptions(const Models::UpdateCacheReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cache reserve configuration of a site.
       *
       * @param request UpdateCacheReserveRequest
       * @return UpdateCacheReserveResponse
       */
      Models::UpdateCacheReserveResponse updateCacheReserve(const Models::UpdateCacheReserveRequest &request);

      /**
       * @summary Cache Reserve Specification Change
       *
       * @param request UpdateCacheReserveSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheReserveSpecResponse
       */
      Models::UpdateCacheReserveSpecResponse updateCacheReserveSpecWithOptions(const Models::UpdateCacheReserveSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cache Reserve Specification Change
       *
       * @param request UpdateCacheReserveSpecRequest
       * @return UpdateCacheReserveSpecResponse
       */
      Models::UpdateCacheReserveSpecResponse updateCacheReserveSpec(const Models::UpdateCacheReserveSpecRequest &request);

      /**
       * @summary Modify the cache configuration.
       *
       * @param request UpdateCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheRuleResponse
       */
      Models::UpdateCacheRuleResponse updateCacheRuleWithOptions(const Models::UpdateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the cache configuration.
       *
       * @param request UpdateCacheRuleRequest
       * @return UpdateCacheRuleResponse
       */
      Models::UpdateCacheRuleResponse updateCacheRule(const Models::UpdateCacheRuleRequest &request);

      /**
       * @summary Modifies the cache tag configuration of your website.
       *
       * @param request UpdateCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheTagResponse
       */
      Models::UpdateCacheTagResponse updateCacheTagWithOptions(const Models::UpdateCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cache tag configuration of your website.
       *
       * @param request UpdateCacheTagRequest
       * @return UpdateCacheTagResponse
       */
      Models::UpdateCacheTagResponse updateCacheTag(const Models::UpdateCacheTagRequest &request);

      /**
       * @summary Modifies the CNAME flattening configuration of a website.
       *
       * @param request UpdateCnameFlatteningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCnameFlatteningResponse
       */
      Models::UpdateCnameFlatteningResponse updateCnameFlatteningWithOptions(const Models::UpdateCnameFlatteningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the CNAME flattening configuration of a website.
       *
       * @param request UpdateCnameFlatteningRequest
       * @return UpdateCnameFlatteningResponse
       */
      Models::UpdateCnameFlatteningResponse updateCnameFlattening(const Models::UpdateCnameFlatteningRequest &request);

      /**
       * @summary Modifies the compression rule configuration of a site.
       *
       * @param request UpdateCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCompressionRuleResponse
       */
      Models::UpdateCompressionRuleResponse updateCompressionRuleWithOptions(const Models::UpdateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the compression rule configuration of a site.
       *
       * @param request UpdateCompressionRuleRequest
       * @return UpdateCompressionRuleResponse
       */
      Models::UpdateCompressionRuleResponse updateCompressionRule(const Models::UpdateCompressionRuleRequest &request);

      /**
       * @summary Modifies the priority of a single rule configuration.
       *
       * @description You can only modify the priority of a rule configuration. You cannot modify global configurations.
       *
       * @param request UpdateConfigSequenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigSequenceResponse
       */
      Models::UpdateConfigSequenceResponse updateConfigSequenceWithOptions(const Models::UpdateConfigSequenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of a single rule configuration.
       *
       * @description You can only modify the priority of a rule configuration. You cannot modify global configurations.
       *
       * @param request UpdateConfigSequenceRequest
       * @return UpdateConfigSequenceResponse
       */
      Models::UpdateConfigSequenceResponse updateConfigSequence(const Models::UpdateConfigSequenceRequest &request);

      /**
       * @summary Modifies the China mainland network access optimization configuration for a site.
       *
       * @description The site plan must be Enterprise Edition or higher to enable China mainland network access optimization.
       *
       * @param request UpdateCrossBorderOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCrossBorderOptimizationResponse
       */
      Models::UpdateCrossBorderOptimizationResponse updateCrossBorderOptimizationWithOptions(const Models::UpdateCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the China mainland network access optimization configuration for a site.
       *
       * @description The site plan must be Enterprise Edition or higher to enable China mainland network access optimization.
       *
       * @param request UpdateCrossBorderOptimizationRequest
       * @return UpdateCrossBorderOptimizationResponse
       */
      Models::UpdateCrossBorderOptimizationResponse updateCrossBorderOptimization(const Models::UpdateCrossBorderOptimizationRequest &request);

      /**
       * @summary Updates a SaaS domain name. You can modify the bound record ID, certificate type, and other settings.
       *
       * @param request UpdateCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomHostnameResponse
       */
      Models::UpdateCustomHostnameResponse updateCustomHostnameWithOptions(const Models::UpdateCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a SaaS domain name. You can modify the bound record ID, certificate type, and other settings.
       *
       * @param request UpdateCustomHostnameRequest
       * @return UpdateCustomHostnameResponse
       */
      Models::UpdateCustomHostnameResponse updateCustomHostname(const Models::UpdateCustomHostnameRequest &request);

      /**
       * @summary Modifies the response code rewrite configuration of a site.
       *
       * @param request UpdateCustomResponseCodeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomResponseCodeRuleResponse
       */
      Models::UpdateCustomResponseCodeRuleResponse updateCustomResponseCodeRuleWithOptions(const Models::UpdateCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the response code rewrite configuration of a site.
       *
       * @param request UpdateCustomResponseCodeRuleRequest
       * @return UpdateCustomResponseCodeRuleResponse
       */
      Models::UpdateCustomResponseCodeRuleResponse updateCustomResponseCodeRule(const Models::UpdateCustomResponseCodeRuleRequest &request);

      /**
       * @summary Updates a specified custom scene policy.
       *
       * @param request UpdateCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomScenePolicyResponse
       */
      Models::UpdateCustomScenePolicyResponse updateCustomScenePolicyWithOptions(const Models::UpdateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified custom scene policy.
       *
       * @param request UpdateCustomScenePolicyRequest
       * @return UpdateCustomScenePolicyResponse
       */
      Models::UpdateCustomScenePolicyResponse updateCustomScenePolicy(const Models::UpdateCustomScenePolicyRequest &request);

      /**
       * @summary Modifies the development mode configuration of your website. If you enable Development Mode, all requests bypass caching components on POPs and are redirected to the origin server. This allows clients to retrieve the most recent resources on the origin server.
       *
       * @param request UpdateDevelopmentModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDevelopmentModeResponse
       */
      Models::UpdateDevelopmentModeResponse updateDevelopmentModeWithOptions(const Models::UpdateDevelopmentModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the development mode configuration of your website. If you enable Development Mode, all requests bypass caching components on POPs and are redirected to the origin server. This allows clients to retrieve the most recent resources on the origin server.
       *
       * @param request UpdateDevelopmentModeRequest
       * @return UpdateDevelopmentModeResponse
       */
      Models::UpdateDevelopmentModeResponse updateDevelopmentMode(const Models::UpdateDevelopmentModeRequest &request);

      /**
       * @summary Updates the log collection configuration of an edge container application.
       *
       * @param request UpdateEdgeContainerAppLogRiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeContainerAppLogRiverResponse
       */
      Models::UpdateEdgeContainerAppLogRiverResponse updateEdgeContainerAppLogRiverWithOptions(const Models::UpdateEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the log collection configuration of an edge container application.
       *
       * @param request UpdateEdgeContainerAppLogRiverRequest
       * @return UpdateEdgeContainerAppLogRiverResponse
       */
      Models::UpdateEdgeContainerAppLogRiverResponse updateEdgeContainerAppLogRiver(const Models::UpdateEdgeContainerAppLogRiverRequest &request);

      /**
       * @summary Updates the resource reservation configuration of an edge container application.
       *
       * @param tmpReq UpdateEdgeContainerAppResourceReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeContainerAppResourceReserveResponse
       */
      Models::UpdateEdgeContainerAppResourceReserveResponse updateEdgeContainerAppResourceReserveWithOptions(const Models::UpdateEdgeContainerAppResourceReserveRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resource reservation configuration of an edge container application.
       *
       * @param request UpdateEdgeContainerAppResourceReserveRequest
       * @return UpdateEdgeContainerAppResourceReserveResponse
       */
      Models::UpdateEdgeContainerAppResourceReserveResponse updateEdgeContainerAppResourceReserve(const Models::UpdateEdgeContainerAppResourceReserveRequest &request);

      /**
       * @summary Updates an environment.
       *
       * @param request UpdateEnvironmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironmentWithOptions(const Models::UpdateEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an environment.
       *
       * @param request UpdateEnvironmentRequest
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironment(const Models::UpdateEnvironmentRequest &request);

      /**
       * @summary Modifies the deployment version of an environment.
       *
       * @param request UpdateEnvironmentVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvironmentVersionResponse
       */
      Models::UpdateEnvironmentVersionResponse updateEnvironmentVersionWithOptions(const Models::UpdateEnvironmentVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the deployment version of an environment.
       *
       * @param request UpdateEnvironmentVersionRequest
       * @return UpdateEnvironmentVersionResponse
       */
      Models::UpdateEnvironmentVersionResponse updateEnvironmentVersion(const Models::UpdateEnvironmentVersionRequest &request);

      /**
       * @summary Modify HTTP incoming request header configuration.
       *
       * @param tmpReq UpdateHttpIncomingRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingRequestHeaderModificationRuleResponse updateHttpIncomingRequestHeaderModificationRuleWithOptions(const Models::UpdateHttpIncomingRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify HTTP incoming request header configuration.
       *
       * @param request UpdateHttpIncomingRequestHeaderModificationRuleRequest
       * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingRequestHeaderModificationRuleResponse updateHttpIncomingRequestHeaderModificationRule(const Models::UpdateHttpIncomingRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Updates the HTTP incoming response header modification configuration for a site.
       *
       * @param tmpReq UpdateHttpIncomingResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingResponseHeaderModificationRuleResponse updateHttpIncomingResponseHeaderModificationRuleWithOptions(const Models::UpdateHttpIncomingResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the HTTP incoming response header modification configuration for a site.
       *
       * @param request UpdateHttpIncomingResponseHeaderModificationRuleRequest
       * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpIncomingResponseHeaderModificationRuleResponse updateHttpIncomingResponseHeaderModificationRule(const Models::UpdateHttpIncomingResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Modify HTTP request header rules.
       *
       * @param tmpReq UpdateHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpRequestHeaderModificationRuleResponse updateHttpRequestHeaderModificationRuleWithOptions(const Models::UpdateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify HTTP request header rules.
       *
       * @param request UpdateHttpRequestHeaderModificationRuleRequest
       * @return UpdateHttpRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpRequestHeaderModificationRuleResponse updateHttpRequestHeaderModificationRule(const Models::UpdateHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Updates the HTTP response header modification configuration for a site.
       *
       * @param tmpReq UpdateHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpResponseHeaderModificationRuleResponse updateHttpResponseHeaderModificationRuleWithOptions(const Models::UpdateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the HTTP response header modification configuration for a site.
       *
       * @param request UpdateHttpResponseHeaderModificationRuleRequest
       * @return UpdateHttpResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpResponseHeaderModificationRuleResponse updateHttpResponseHeaderModificationRule(const Models::UpdateHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Update the HTTPS Application Configuration.
       *
       * @param request UpdateHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpsApplicationConfigurationResponse
       */
      Models::UpdateHttpsApplicationConfigurationResponse updateHttpsApplicationConfigurationWithOptions(const Models::UpdateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the HTTPS Application Configuration.
       *
       * @param request UpdateHttpsApplicationConfigurationRequest
       * @return UpdateHttpsApplicationConfigurationResponse
       */
      Models::UpdateHttpsApplicationConfigurationResponse updateHttpsApplicationConfiguration(const Models::UpdateHttpsApplicationConfigurationRequest &request);

      /**
       * @summary Modify Basic HTTPS Configuration.
       *
       * @param request UpdateHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpsBasicConfigurationResponse
       */
      Models::UpdateHttpsBasicConfigurationResponse updateHttpsBasicConfigurationWithOptions(const Models::UpdateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Basic HTTPS Configuration.
       *
       * @param request UpdateHttpsBasicConfigurationRequest
       * @return UpdateHttpsBasicConfigurationResponse
       */
      Models::UpdateHttpsBasicConfigurationResponse updateHttpsBasicConfiguration(const Models::UpdateHttpsBasicConfigurationRequest &request);

      /**
       * @summary Modify IPv6 configuration for a website.
       *
       * @param request UpdateIPv6Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIPv6Response
       */
      Models::UpdateIPv6Response updateIPv6WithOptions(const Models::UpdateIPv6Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify IPv6 configuration for a website.
       *
       * @param request UpdateIPv6Request
       * @return UpdateIPv6Response
       */
      Models::UpdateIPv6Response updateIPv6(const Models::UpdateIPv6Request &request);

      /**
       * @summary Modifies the image transformation configuration of a site.
       *
       * @param request UpdateImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageTransformResponse
       */
      Models::UpdateImageTransformResponse updateImageTransformWithOptions(const Models::UpdateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the image transformation configuration of a site.
       *
       * @param request UpdateImageTransformRequest
       * @return UpdateImageTransformResponse
       */
      Models::UpdateImageTransformResponse updateImageTransform(const Models::UpdateImageTransformRequest &request);

      /**
       * @summary Updates a custom list.
       *
       * @param tmpReq UpdateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListResponse
       */
      Models::UpdateListResponse updateListWithOptions(const Models::UpdateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom list.
       *
       * @param request UpdateListRequest
       * @return UpdateListResponse
       */
      Models::UpdateListResponse updateList(const Models::UpdateListRequest &request);

      /**
       * @summary To modify an existing load balancer, you must specify its load balancer ID.
       *
       * @description This operation modifies multiple configurations for a load balancer, including its name, acceleration status, session persistence policy, and advanced traffic routing settings.>Notice: Changes to certain parameters might affect the stability of existing services. Proceed with caution.
       *
       * @param tmpReq UpdateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerResponse
       */
      Models::UpdateLoadBalancerResponse updateLoadBalancerWithOptions(const Models::UpdateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To modify an existing load balancer, you must specify its load balancer ID.
       *
       * @description This operation modifies multiple configurations for a load balancer, including its name, acceleration status, session persistence policy, and advanced traffic routing settings.>Notice: Changes to certain parameters might affect the stability of existing services. Proceed with caution.
       *
       * @param request UpdateLoadBalancerRequest
       * @return UpdateLoadBalancerResponse
       */
      Models::UpdateLoadBalancerResponse updateLoadBalancer(const Models::UpdateLoadBalancerRequest &request);

      /**
       * @summary Modify the site hosting transformation configuration.
       *
       * @param request UpdateManagedTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateManagedTransformResponse
       */
      Models::UpdateManagedTransformResponse updateManagedTransformWithOptions(const Models::UpdateManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the site hosting transformation configuration.
       *
       * @param request UpdateManagedTransformRequest
       * @return UpdateManagedTransformResponse
       */
      Models::UpdateManagedTransformResponse updateManagedTransform(const Models::UpdateManagedTransformRequest &request);

      /**
       * @summary Updates a network optimization configuration.
       *
       * @param request UpdateNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkOptimizationResponse
       */
      Models::UpdateNetworkOptimizationResponse updateNetworkOptimizationWithOptions(const Models::UpdateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a network optimization configuration.
       *
       * @param request UpdateNetworkOptimizationRequest
       * @return UpdateNetworkOptimizationResponse
       */
      Models::UpdateNetworkOptimizationResponse updateNetworkOptimization(const Models::UpdateNetworkOptimizationRequest &request);

      /**
       * @summary Modifies a single origin address pool specified by the origin address pool ID.
       *
       * @param tmpReq UpdateOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginPoolResponse
       */
      Models::UpdateOriginPoolResponse updateOriginPoolWithOptions(const Models::UpdateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a single origin address pool specified by the origin address pool ID.
       *
       * @param request UpdateOriginPoolRequest
       * @return UpdateOriginPoolResponse
       */
      Models::UpdateOriginPoolResponse updateOriginPool(const Models::UpdateOriginPoolRequest &request);

      /**
       * @summary Modify the origin protection feature to enable or disable origin fetch convergence.
       *
       * @param request UpdateOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginProtectionResponse
       */
      Models::UpdateOriginProtectionResponse updateOriginProtectionWithOptions(const Models::UpdateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the origin protection feature to enable or disable origin fetch convergence.
       *
       * @param request UpdateOriginProtectionRequest
       * @return UpdateOriginProtectionResponse
       */
      Models::UpdateOriginProtectionResponse updateOriginProtection(const Models::UpdateOriginProtectionRequest &request);

      /**
       * @summary Confirm that you want to update the site’s origin IP whitelist to the latest version.
       *
       * @param request UpdateOriginProtectionIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginProtectionIpWhiteListResponse
       */
      Models::UpdateOriginProtectionIpWhiteListResponse updateOriginProtectionIpWhiteListWithOptions(const Models::UpdateOriginProtectionIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirm that you want to update the site’s origin IP whitelist to the latest version.
       *
       * @param request UpdateOriginProtectionIpWhiteListRequest
       * @return UpdateOriginProtectionIpWhiteListResponse
       */
      Models::UpdateOriginProtectionIpWhiteListResponse updateOriginProtectionIpWhiteList(const Models::UpdateOriginProtectionIpWhiteListRequest &request);

      /**
       * @summary Updates a site\\"s origin fetch rules.
       *
       * @param request UpdateOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginRuleResponse
       */
      Models::UpdateOriginRuleResponse updateOriginRuleWithOptions(const Models::UpdateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a site\\"s origin fetch rules.
       *
       * @param request UpdateOriginRuleRequest
       * @return UpdateOriginRuleResponse
       */
      Models::UpdateOriginRuleResponse updateOriginRule(const Models::UpdateOriginRuleRequest &request);

      /**
       * @summary Updates a custom response page that the user has created. You can use this operation to modify the page name, description, content type, and content.
       *
       * @param tmpReq UpdatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePageResponse
       */
      Models::UpdatePageResponse updatePageWithOptions(const Models::UpdatePageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom response page that the user has created. You can use this operation to modify the page name, description, content type, and content.
       *
       * @param request UpdatePageRequest
       * @return UpdatePageResponse
       */
      Models::UpdatePageResponse updatePage(const Models::UpdatePageRequest &request);

      /**
       * @summary Modifies the web data quality collection configuration.
       *
       * @param request UpdatePerformanceDataCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePerformanceDataCollectionResponse
       */
      Models::UpdatePerformanceDataCollectionResponse updatePerformanceDataCollectionWithOptions(const Models::UpdatePerformanceDataCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the web data quality collection configuration.
       *
       * @param request UpdatePerformanceDataCollectionRequest
       * @return UpdatePerformanceDataCollectionResponse
       */
      Models::UpdatePerformanceDataCollectionResponse updatePerformanceDataCollection(const Models::UpdatePerformanceDataCollectionRequest &request);

      /**
       * @summary Modifies the specifications of a plan by calling UpdateRatePlanSpec.
       *
       * @param request UpdateRatePlanSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRatePlanSpecResponse
       */
      Models::UpdateRatePlanSpecResponse updateRatePlanSpecWithOptions(const Models::UpdateRatePlanSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of a plan by calling UpdateRatePlanSpec.
       *
       * @param request UpdateRatePlanSpecRequest
       * @return UpdateRatePlanSpecResponse
       */
      Models::UpdateRatePlanSpecResponse updateRatePlanSpec(const Models::UpdateRatePlanSpecRequest &request);

      /**
       * @summary Updates a DNS record. Various record types and origin authentication configurations are supported.
       *
       * @description This API operation allows you to update a DNS record, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI record types. You can modify the record content by specifying the corresponding record value, priority, flag, and other fields. For CNAME origin servers that require authentication, such as OSS and S3, this API operation also supports configuring origin authentication information to ensure secure access.
       * ### Before you begin
       * - The record value (Value) must match the record type. For example, a CNAME record must correspond to a target domain name.
       * - Certain record types, such as MX and SRV, require a priority (Priority) value.
       * - CAA records require specific fields such as Flag and Tag.
       * - When updating security records such as CERT and SSHFP, accurately set the Type, Algorithm, and other fields.
       * - When using OSS or S3 as the origin server, configure the authentication details in AuthConf based on the permission settings.
       *
       * @param tmpReq UpdateRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordResponse
       */
      Models::UpdateRecordResponse updateRecordWithOptions(const Models::UpdateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a DNS record. Various record types and origin authentication configurations are supported.
       *
       * @description This API operation allows you to update a DNS record, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI record types. You can modify the record content by specifying the corresponding record value, priority, flag, and other fields. For CNAME origin servers that require authentication, such as OSS and S3, this API operation also supports configuring origin authentication information to ensure secure access.
       * ### Before you begin
       * - The record value (Value) must match the record type. For example, a CNAME record must correspond to a target domain name.
       * - Certain record types, such as MX and SRV, require a priority (Priority) value.
       * - CAA records require specific fields such as Flag and Tag.
       * - When updating security records such as CERT and SSHFP, accurately set the Type, Algorithm, and other fields.
       * - When using OSS or S3 as the origin server, configure the authentication details in AuthConf based on the permission settings.
       *
       * @param request UpdateRecordRequest
       * @return UpdateRecordResponse
       */
      Models::UpdateRecordResponse updateRecord(const Models::UpdateRecordRequest &request);

      /**
       * @summary Modifies the redirect configuration of a site.
       *
       * @param request UpdateRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRedirectRuleResponse
       */
      Models::UpdateRedirectRuleResponse updateRedirectRuleWithOptions(const Models::UpdateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the redirect configuration of a site.
       *
       * @param request UpdateRedirectRuleRequest
       * @return UpdateRedirectRuleResponse
       */
      Models::UpdateRedirectRuleResponse updateRedirectRule(const Models::UpdateRedirectRuleRequest &request);

      /**
       * @summary Modifies the URL rewrite configuration of a site.
       *
       * @param request UpdateRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRewriteUrlRuleResponse
       */
      Models::UpdateRewriteUrlRuleResponse updateRewriteUrlRuleWithOptions(const Models::UpdateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the URL rewrite configuration of a site.
       *
       * @param request UpdateRewriteUrlRuleRequest
       * @return UpdateRewriteUrlRuleResponse
       */
      Models::UpdateRewriteUrlRuleResponse updateRewriteUrlRule(const Models::UpdateRewriteUrlRuleRequest &request);

      /**
       * @summary Modifies the description of a routine.
       *
       * @param request UpdateRoutineConfigDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoutineConfigDescriptionResponse
       */
      Models::UpdateRoutineConfigDescriptionResponse updateRoutineConfigDescriptionWithOptions(const Models::UpdateRoutineConfigDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a routine.
       *
       * @param request UpdateRoutineConfigDescriptionRequest
       * @return UpdateRoutineConfigDescriptionResponse
       */
      Models::UpdateRoutineConfigDescriptionResponse updateRoutineConfigDescription(const Models::UpdateRoutineConfigDescriptionRequest &request);

      /**
       * @summary Modifies the route configuration of an Edge Routine.
       *
       * @param request UpdateRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoutineRouteResponse
       */
      Models::UpdateRoutineRouteResponse updateRoutineRouteWithOptions(const Models::UpdateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the route configuration of an Edge Routine.
       *
       * @param request UpdateRoutineRouteRequest
       * @return UpdateRoutineRouteResponse
       */
      Models::UpdateRoutineRouteResponse updateRoutineRoute(const Models::UpdateRoutineRouteRequest &request);

      /**
       * @summary Updates a scheduled prefetch plan by prefetch plan ID.
       *
       * @param request UpdateScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduledPreloadExecutionResponse
       */
      Models::UpdateScheduledPreloadExecutionResponse updateScheduledPreloadExecutionWithOptions(const Models::UpdateScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scheduled prefetch plan by prefetch plan ID.
       *
       * @param request UpdateScheduledPreloadExecutionRequest
       * @return UpdateScheduledPreloadExecutionResponse
       */
      Models::UpdateScheduledPreloadExecutionResponse updateScheduledPreloadExecution(const Models::UpdateScheduledPreloadExecutionRequest &request);

      /**
       * @summary Modifies the search engine crawler allowlisting configuration for a site.
       *
       * @param request UpdateSeoBypassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSeoBypassResponse
       */
      Models::UpdateSeoBypassResponse updateSeoBypassWithOptions(const Models::UpdateSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the search engine crawler allowlisting configuration for a site.
       *
       * @param request UpdateSeoBypassRequest
       * @return UpdateSeoBypassResponse
       */
      Models::UpdateSeoBypassResponse updateSeoBypass(const Models::UpdateSeoBypassRequest &request);

      /**
       * @summary Converts the DNS setup option of a website.
       *
       * @description When you change the DNS setup of a website from NS to CNAME, note the following prerequisites:
       * *   The website only has proxied A/AAAA and CNAME records.
       * *   The DNS passthrough mode and custom nameserver features are not enabled for the website.
       *
       * @param request UpdateSiteAccessTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteAccessTypeResponse
       */
      Models::UpdateSiteAccessTypeResponse updateSiteAccessTypeWithOptions(const Models::UpdateSiteAccessTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts the DNS setup option of a website.
       *
       * @description When you change the DNS setup of a website from NS to CNAME, note the following prerequisites:
       * *   The website only has proxied A/AAAA and CNAME records.
       * *   The DNS passthrough mode and custom nameserver features are not enabled for the website.
       *
       * @param request UpdateSiteAccessTypeRequest
       * @return UpdateSiteAccessTypeResponse
       */
      Models::UpdateSiteAccessTypeResponse updateSiteAccessType(const Models::UpdateSiteAccessTypeRequest &request);

      /**
       * @summary Modifies the acceleration region of a site. Updates the acceleration configuration of a site to adapt to traffic distribution changes or improve the access experience for users in specific regions.
       *
       * @param request UpdateSiteCoverageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteCoverageResponse
       */
      Models::UpdateSiteCoverageResponse updateSiteCoverageWithOptions(const Models::UpdateSiteCoverageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the acceleration region of a site. Updates the acceleration configuration of a site to adapt to traffic distribution changes or improve the access experience for users in specific regions.
       *
       * @param request UpdateSiteCoverageRequest
       * @return UpdateSiteCoverageResponse
       */
      Models::UpdateSiteCoverageResponse updateSiteCoverage(const Models::UpdateSiteCoverageRequest &request);

      /**
       * @summary Modifies the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
       *
       * @param tmpReq UpdateSiteCustomLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteCustomLogResponse
       */
      Models::UpdateSiteCustomLogResponse updateSiteCustomLogWithOptions(const Models::UpdateSiteCustomLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
       *
       * @param request UpdateSiteCustomLogRequest
       * @return UpdateSiteCustomLogResponse
       */
      Models::UpdateSiteCustomLogResponse updateSiteCustomLog(const Models::UpdateSiteCustomLogRequest &request);

      /**
       * @summary Updates a site delivery task.
       *
       * @param request UpdateSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteDeliveryTaskResponse
       */
      Models::UpdateSiteDeliveryTaskResponse updateSiteDeliveryTaskWithOptions(const Models::UpdateSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a site delivery task.
       *
       * @param request UpdateSiteDeliveryTaskRequest
       * @return UpdateSiteDeliveryTaskResponse
       */
      Models::UpdateSiteDeliveryTaskResponse updateSiteDeliveryTask(const Models::UpdateSiteDeliveryTaskRequest &request);

      /**
       * @summary Changes the status of a real-time log delivery task.
       *
       * @param request UpdateSiteDeliveryTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteDeliveryTaskStatusResponse
       */
      Models::UpdateSiteDeliveryTaskStatusResponse updateSiteDeliveryTaskStatusWithOptions(const Models::UpdateSiteDeliveryTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a real-time log delivery task.
       *
       * @param request UpdateSiteDeliveryTaskStatusRequest
       * @return UpdateSiteDeliveryTaskStatusResponse
       */
      Models::UpdateSiteDeliveryTaskStatusResponse updateSiteDeliveryTaskStatus(const Models::UpdateSiteDeliveryTaskStatusRequest &request);

      /**
       * @summary Modifies the exclusive site name configuration. After this feature is enabled, other accounts can no longer create sites or subsites with the same name as the current site.
       *
       * @param request UpdateSiteNameExclusiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteNameExclusiveResponse
       */
      Models::UpdateSiteNameExclusiveResponse updateSiteNameExclusiveWithOptions(const Models::UpdateSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the exclusive site name configuration. After this feature is enabled, other accounts can no longer create sites or subsites with the same name as the current site.
       *
       * @param request UpdateSiteNameExclusiveRequest
       * @return UpdateSiteNameExclusiveResponse
       */
      Models::UpdateSiteNameExclusiveResponse updateSiteNameExclusive(const Models::UpdateSiteNameExclusiveRequest &request);

      /**
       * @summary Modifies the site pause configuration.
       *
       * @description This API operation can be called only for sites that use the NS access mode.
       *
       * @param request UpdateSitePauseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSitePauseResponse
       */
      Models::UpdateSitePauseResponse updateSitePauseWithOptions(const Models::UpdateSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the site pause configuration.
       *
       * @description This API operation can be called only for sites that use the NS access mode.
       *
       * @param request UpdateSitePauseRequest
       * @return UpdateSitePauseResponse
       */
      Models::UpdateSitePauseResponse updateSitePause(const Models::UpdateSitePauseRequest &request);

      /**
       * @summary Modifies the custom nameserver (NS) names for a single site.
       *
       * @description The site plan must be Enterprise Edition or higher to use the custom NS feature.
       *
       * @param request UpdateSiteVanityNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteVanityNSResponse
       */
      Models::UpdateSiteVanityNSResponse updateSiteVanityNSWithOptions(const Models::UpdateSiteVanityNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the custom nameserver (NS) names for a single site.
       *
       * @description The site plan must be Enterprise Edition or higher to use the custom NS feature.
       *
       * @param request UpdateSiteVanityNSRequest
       * @return UpdateSiteVanityNSResponse
       */
      Models::UpdateSiteVanityNSResponse updateSiteVanityNS(const Models::UpdateSiteVanityNSRequest &request);

      /**
       * @summary Modifies the multi-level cache configuration of a site.
       *
       * @param request UpdateTieredCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTieredCacheResponse
       */
      Models::UpdateTieredCacheResponse updateTieredCacheWithOptions(const Models::UpdateTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the multi-level cache configuration of a site.
       *
       * @param request UpdateTieredCacheRequest
       * @return UpdateTieredCacheResponse
       */
      Models::UpdateTieredCacheResponse updateTieredCache(const Models::UpdateTieredCacheRequest &request);

      /**
       * @summary Modifies the forwarding rule configurations of a Layer 4 application under a specified site.
       *
       * @description If ListTransportLayerApplications returns an empty Layer 4 acceleration application list, use CreateTransportLayerApplication to create a Layer 4 acceleration application, and then use this API to modify the configurations of the Layer 4 acceleration application.
       * When creating a Layer 4 acceleration application, the selected site must be an activated site. After creating a site, call the VerifySite API to verify it. A site that passes verification is automatically activated, indicated by the response parameter Passed=true.
       *
       * @param tmpReq UpdateTransportLayerApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTransportLayerApplicationResponse
       */
      Models::UpdateTransportLayerApplicationResponse updateTransportLayerApplicationWithOptions(const Models::UpdateTransportLayerApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the forwarding rule configurations of a Layer 4 application under a specified site.
       *
       * @description If ListTransportLayerApplications returns an empty Layer 4 acceleration application list, use CreateTransportLayerApplication to create a Layer 4 acceleration application, and then use this API to modify the configurations of the Layer 4 acceleration application.
       * When creating a Layer 4 acceleration application, the selected site must be an activated site. After creating a site, call the VerifySite API to verify it. A site that passes verification is automatically activated, indicated by the response parameter Passed=true.
       *
       * @param request UpdateTransportLayerApplicationRequest
       * @return UpdateTransportLayerApplicationResponse
       */
      Models::UpdateTransportLayerApplicationResponse updateTransportLayerApplication(const Models::UpdateTransportLayerApplicationRequest &request);

      /**
       * @summary Updates the URL observation configuration.
       *
       * @param request UpdateUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUrlObservationResponse
       */
      Models::UpdateUrlObservationResponse updateUrlObservationWithOptions(const Models::UpdateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the URL observation configuration.
       *
       * @param request UpdateUrlObservationRequest
       * @return UpdateUrlObservationResponse
       */
      Models::UpdateUrlObservationResponse updateUrlObservation(const Models::UpdateUrlObservationRequest &request);

      /**
       * @summary Updates a delivery task configuration. You can modify the task name, selected fields, real-time log type, and discard rate.
       *
       * @param request UpdateUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDeliveryTaskResponse
       */
      Models::UpdateUserDeliveryTaskResponse updateUserDeliveryTaskWithOptions(const Models::UpdateUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a delivery task configuration. You can modify the task name, selected fields, real-time log type, and discard rate.
       *
       * @param request UpdateUserDeliveryTaskRequest
       * @return UpdateUserDeliveryTaskResponse
       */
      Models::UpdateUserDeliveryTaskResponse updateUserDeliveryTask(const Models::UpdateUserDeliveryTaskRequest &request);

      /**
       * @summary Changes the status of a delivery task in your Alibaba Cloud account.
       *
       * @description ## [](#)
       * Use this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
       *
       * @param request UpdateUserDeliveryTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDeliveryTaskStatusResponse
       */
      Models::UpdateUserDeliveryTaskStatusResponse updateUserDeliveryTaskStatusWithOptions(const Models::UpdateUserDeliveryTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a delivery task in your Alibaba Cloud account.
       *
       * @description ## [](#)
       * Use this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
       *
       * @param request UpdateUserDeliveryTaskStatusRequest
       * @return UpdateUserDeliveryTaskStatusResponse
       */
      Models::UpdateUserDeliveryTaskStatusResponse updateUserDeliveryTaskStatus(const Models::UpdateUserDeliveryTaskStatusRequest &request);

      /**
       * @summary Modifies the WAF ruleset configuration for a specified instance, including its position, name, and other properties.
       *
       * @description ## Request description
       * - This operation updates an existing WAF ruleset. You can modify the position, name, description, status, and expression of the ruleset.
       * - Include only the parameters that you want to modify. Omit parameters that you do not want to change.
       * - Note: Before you call this operation, ensure that the `InstanceId` and `Id` values are correct. Otherwise, the request may fail.
       *
       * @param tmpReq UpdateUserWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserWafRulesetResponse
       */
      Models::UpdateUserWafRulesetResponse updateUserWafRulesetWithOptions(const Models::UpdateUserWafRulesetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the WAF ruleset configuration for a specified instance, including its position, name, and other properties.
       *
       * @description ## Request description
       * - This operation updates an existing WAF ruleset. You can modify the position, name, description, status, and expression of the ruleset.
       * - Include only the parameters that you want to modify. Omit parameters that you do not want to change.
       * - Note: Before you call this operation, ensure that the `InstanceId` and `Id` values are correct. Otherwise, the request may fail.
       *
       * @param request UpdateUserWafRulesetRequest
       * @return UpdateUserWafRulesetResponse
       */
      Models::UpdateUserWafRulesetResponse updateUserWafRuleset(const Models::UpdateUserWafRulesetRequest &request);

      /**
       * @summary Updates the description of a version.
       *
       * @param request UpdateVersionDescRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVersionDescResponse
       */
      Models::UpdateVersionDescResponse updateVersionDescWithOptions(const Models::UpdateVersionDescRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a version.
       *
       * @param request UpdateVersionDescRequest
       * @return UpdateVersionDescResponse
       */
      Models::UpdateVersionDescResponse updateVersionDesc(const Models::UpdateVersionDescRequest &request);

      /**
       * @summary Modifies the video processing configuration of a website.
       *
       * @param request UpdateVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoProcessingResponse
       */
      Models::UpdateVideoProcessingResponse updateVideoProcessingWithOptions(const Models::UpdateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the video processing configuration of a website.
       *
       * @param request UpdateVideoProcessingRequest
       * @return UpdateVideoProcessingResponse
       */
      Models::UpdateVideoProcessingResponse updateVideoProcessing(const Models::UpdateVideoProcessingRequest &request);

      /**
       * @summary Updates a web application firewall (WAF) rule. Use this operation to modify the rule\\"s configuration and status.
       *
       * @param tmpReq UpdateWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWafRuleResponse
       */
      Models::UpdateWafRuleResponse updateWafRuleWithOptions(const Models::UpdateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a web application firewall (WAF) rule. Use this operation to modify the rule\\"s configuration and status.
       *
       * @param request UpdateWafRuleRequest
       * @return UpdateWafRuleResponse
       */
      Models::UpdateWafRuleResponse updateWafRule(const Models::UpdateWafRuleRequest &request);

      /**
       * @summary Updates a WAF ruleset based on its ID.
       *
       * @param request UpdateWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWafRulesetResponse
       */
      Models::UpdateWafRulesetResponse updateWafRulesetWithOptions(const Models::UpdateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a WAF ruleset based on its ID.
       *
       * @param request UpdateWafRulesetRequest
       * @return UpdateWafRulesetResponse
       */
      Models::UpdateWafRulesetResponse updateWafRuleset(const Models::UpdateWafRulesetRequest &request);

      /**
       * @summary Updates the configuration of a specified waiting room.
       *
       * @param tmpReq UpdateWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomResponse
       */
      Models::UpdateWaitingRoomResponse updateWaitingRoomWithOptions(const Models::UpdateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified waiting room.
       *
       * @param request UpdateWaitingRoomRequest
       * @return UpdateWaitingRoomResponse
       */
      Models::UpdateWaitingRoomResponse updateWaitingRoom(const Models::UpdateWaitingRoomRequest &request);

      /**
       * @summary Updates the configuration of a waiting room event.
       *
       * @param request UpdateWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomEventResponse
       */
      Models::UpdateWaitingRoomEventResponse updateWaitingRoomEventWithOptions(const Models::UpdateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a waiting room event.
       *
       * @param request UpdateWaitingRoomEventRequest
       * @return UpdateWaitingRoomEventResponse
       */
      Models::UpdateWaitingRoomEventResponse updateWaitingRoomEvent(const Models::UpdateWaitingRoomEventRequest &request);

      /**
       * @summary Updates the waiting room bypass rule configuration for a specified site.
       *
       * @description Modifies the rule settings of a specific waiting room for a site, including the rule name, enabled status, and rule content.
       *
       * @param request UpdateWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomRuleResponse
       */
      Models::UpdateWaitingRoomRuleResponse updateWaitingRoomRuleWithOptions(const Models::UpdateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the waiting room bypass rule configuration for a specified site.
       *
       * @description Modifies the rule settings of a specific waiting room for a site, including the rule name, enabled status, and rule content.
       *
       * @param request UpdateWaitingRoomRuleRequest
       * @return UpdateWaitingRoomRuleResponse
       */
      Models::UpdateWaitingRoomRuleResponse updateWaitingRoomRule(const Models::UpdateWaitingRoomRuleRequest &request);

      /**
       * @summary Upgrades the deployment version of an environment.
       *
       * @param request UpgradeEnvironmentVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeEnvironmentVersionResponse
       */
      Models::UpgradeEnvironmentVersionResponse upgradeEnvironmentVersionWithOptions(const Models::UpgradeEnvironmentVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the deployment version of an environment.
       *
       * @param request UpgradeEnvironmentVersionRequest
       * @return UpgradeEnvironmentVersionResponse
       */
      Models::UpgradeEnvironmentVersionResponse upgradeEnvironmentVersion(const Models::UpgradeEnvironmentVersionRequest &request);

      /**
       * @summary Uploads a client CA certificate.
       *
       * @param request UploadClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadClientCaCertificateResponse
       */
      Models::UploadClientCaCertificateResponse uploadClientCaCertificateWithOptions(const Models::UploadClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a client CA certificate.
       *
       * @param request UploadClientCaCertificateRequest
       * @return UploadClientCaCertificateResponse
       */
      Models::UploadClientCaCertificateResponse uploadClientCaCertificate(const Models::UploadClientCaCertificateRequest &request);

      /**
       * @summary Uploads a refresh or prefetch file to improve access speed.
       *
       * @description > 
       * > - The maximum file size is 10 MB.
       *
       * @param request UploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFileWithOptions(const Models::UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a refresh or prefetch file to improve access speed.
       *
       * @description > 
       * > - The maximum file size is 10 MB.
       *
       * @param request UploadFileRequest
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFile(const Models::UploadFileRequest &request);

      Models::UploadFileResponse uploadFileAdvance(const Models::UploadFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an origin server CA certificate.
       *
       * @description You can add multiple origins to a site. Edge Security Acceleration (ESA) supports various origin types, including domain names, IP addresses, OSS, and S3. Origin authentication is supported for OSS or S3 origins.
       *
       * @param request UploadOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOriginCaCertificateResponse
       */
      Models::UploadOriginCaCertificateResponse uploadOriginCaCertificateWithOptions(const Models::UploadOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an origin server CA certificate.
       *
       * @description You can add multiple origins to a site. Edge Security Acceleration (ESA) supports various origin types, including domain names, IP addresses, OSS, and S3. Origin authentication is supported for OSS or S3 origins.
       *
       * @param request UploadOriginCaCertificateRequest
       * @return UploadOriginCaCertificateResponse
       */
      Models::UploadOriginCaCertificateResponse uploadOriginCaCertificate(const Models::UploadOriginCaCertificateRequest &request);

      /**
       * @summary Uploads an origin client certificate for a site.
       *
       * @param request UploadOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOriginClientCertificateResponse
       */
      Models::UploadOriginClientCertificateResponse uploadOriginClientCertificateWithOptions(const Models::UploadOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an origin client certificate for a site.
       *
       * @param request UploadOriginClientCertificateRequest
       * @return UploadOriginClientCertificateResponse
       */
      Models::UploadOriginClientCertificateResponse uploadOriginClientCertificate(const Models::UploadOriginClientCertificateRequest &request);

      /**
       * @summary Upload site origin client certificate
       *
       * @param request UploadSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSiteOriginClientCertificateResponse
       */
      Models::UploadSiteOriginClientCertificateResponse uploadSiteOriginClientCertificateWithOptions(const Models::UploadSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload site origin client certificate
       *
       * @param request UploadSiteOriginClientCertificateRequest
       * @return UploadSiteOriginClientCertificateResponse
       */
      Models::UploadSiteOriginClientCertificateResponse uploadSiteOriginClientCertificate(const Models::UploadSiteOriginClientCertificateRequest &request);

      /**
       * @summary Verifies the ownership of a SaaS domain name. Sites that pass the verification are automatically activated.
       *
       * @param request VerifyCustomHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCustomHostnameResponse
       */
      Models::VerifyCustomHostnameResponse verifyCustomHostnameWithOptions(const Models::VerifyCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a SaaS domain name. Sites that pass the verification are automatically activated.
       *
       * @param request VerifyCustomHostnameRequest
       * @return VerifyCustomHostnameResponse
       */
      Models::VerifyCustomHostnameResponse verifyCustomHostname(const Models::VerifyCustomHostnameRequest &request);

      /**
       * @summary Verifies the ownership of a website domain. Websites that pass the verification are automatically activated.
       *
       * @description 1.  For a website connected by using NS setup, this operation verifies whether the nameservers of the website are the nameservers assigned by Alibaba Cloud.
       * 2.  For a website connected by using CNAME setup, this operation verifies whether the website has a TXT record whose hostname is  _esaauth.[websiteDomainName] and record value is the value of VerifyCode to the DNS records of your domain. You can see the VerifyCode field in the site information.
       *
       * @param request VerifySiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySiteResponse
       */
      Models::VerifySiteResponse verifySiteWithOptions(const Models::VerifySiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a website domain. Websites that pass the verification are automatically activated.
       *
       * @description 1.  For a website connected by using NS setup, this operation verifies whether the nameservers of the website are the nameservers assigned by Alibaba Cloud.
       * 2.  For a website connected by using CNAME setup, this operation verifies whether the website has a TXT record whose hostname is  _esaauth.[websiteDomainName] and record value is the value of VerifyCode to the DNS records of your domain. You can see the VerifyCode field in the site information.
       *
       * @param request VerifySiteRequest
       * @return VerifySiteResponse
       */
      Models::VerifySiteResponse verifySite(const Models::VerifySiteRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
