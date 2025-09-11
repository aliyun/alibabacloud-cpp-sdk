// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ESA20240910_HPP_
#define ALIBABACLOUD_ESA20240910_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ESA20240910Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ESA20240910.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
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
       * @summary Enable Version Management
       *
       * @param request ActivateVersionManagementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateVersionManagementResponse
       */
      Models::ActivateVersionManagementResponse activateVersionManagementWithOptions(const Models::ActivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable Version Management
       *
       * @param request ActivateVersionManagementRequest
       * @return ActivateVersionManagementResponse
       */
      Models::ActivateVersionManagementResponse activateVersionManagement(const Models::ActivateVersionManagementRequest &request);

      /**
       * @summary Applies for a free SSL certificate.
       *
       * @param request ApplyCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificateWithOptions(const Models::ApplyCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a free SSL certificate.
       *
       * @param request ApplyCertificateRequest
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificate(const Models::ApplyCertificateRequest &request);

      /**
       * @summary Adds DNS records of different record types at a time..
       *
       * @description This operation allows you to create or update multiple DNS records at a time. It is suitable for managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. The operation allows you to configure the priority, flag, tag, and weight for DNS records. In addition, for specific types of records, such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are also supported.
       * Successful and failed records along with error messages are listed in the response.
       *
       * @param tmpReq BatchCreateRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateRecordsResponse
       */
      Models::BatchCreateRecordsResponse batchCreateRecordsWithOptions(const Models::BatchCreateRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds DNS records of different record types at a time..
       *
       * @description This operation allows you to create or update multiple DNS records at a time. It is suitable for managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. The operation allows you to configure the priority, flag, tag, and weight for DNS records. In addition, for specific types of records, such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are also supported.
       * Successful and failed records along with error messages are listed in the response.
       *
       * @param request BatchCreateRecordsRequest
       * @return BatchCreateRecordsResponse
       */
      Models::BatchCreateRecordsResponse batchCreateRecords(const Models::BatchCreateRecordsRequest &request);

      /**
       * @summary Batch Create WAF Rules
       *
       * @param tmpReq BatchCreateWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateWafRulesResponse
       */
      Models::BatchCreateWafRulesResponse batchCreateWafRulesWithOptions(const Models::BatchCreateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Create WAF Rules
       *
       * @param request BatchCreateWafRulesRequest
       * @return BatchCreateWafRulesResponse
       */
      Models::BatchCreateWafRulesResponse batchCreateWafRules(const Models::BatchCreateWafRulesRequest &request);

      /**
       * @summary Deletes key-value pairs from a namespace at a time based on keys.
       *
       * @param tmpReq BatchDeleteKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteKvResponse
       */
      Models::BatchDeleteKvResponse batchDeleteKvWithOptions(const Models::BatchDeleteKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes key-value pairs from a namespace at a time based on keys.
       *
       * @param request BatchDeleteKvRequest
       * @return BatchDeleteKvResponse
       */
      Models::BatchDeleteKvResponse batchDeleteKv(const Models::BatchDeleteKvRequest &request);

      /**
       * @summary Deletes multiple key-value pairs from a namespace at a time based on specified keys. The request body can be up to 100 MB.
       *
       * @description This operation allows you to upload a larger request body than by using [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html). For small request bodies, we recommend that you use [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchDeleteKvWithHighCapacityAdvance to call the operation.
       *     func TestBatchDeleteWithHighCapacity() error {
       *     	// Initialize the configurations.
       *     	cfg := new(openapi.Config)
       *     	cfg.SetAccessKeyId("xxxxxxxxx")
       *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
       *     	cli, err := NewClient(cfg)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	runtime := &util.RuntimeOptions{}
       *     	// Construct a request for deleting key-value pairs at a time.
       *     	namespace := "test_batch_put"
       *     	rawReq := BatchDeleteKvRequest{
       *     		Namespace: &namespace,
       *     	}
       *     	for i := 0; i < 10000; i++ {
       *     		key := fmt.Sprintf("test_key_%d", i)
       *     		rawReq.Keys = append(rawReq.Keys, &key)
       *     	}
       *     	payload, err := json.Marshal(rawReq)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	// If the payload is greater than 2 MB, call the BatchDeleteKvWithHighCapacity operation for deletion.
       *     	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
       *     		Namespace: &namespace,
       *     		UrlObject: bytes.NewReader(payload),
       *     	}
       *     	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	return nil
       *     }
       *
       * @param request BatchDeleteKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteKvWithHighCapacityResponse
       */
      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityWithOptions(const Models::BatchDeleteKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple key-value pairs from a namespace at a time based on specified keys. The request body can be up to 100 MB.
       *
       * @description This operation allows you to upload a larger request body than by using [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html). For small request bodies, we recommend that you use [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchDeleteKvWithHighCapacityAdvance to call the operation.
       *     func TestBatchDeleteWithHighCapacity() error {
       *     	// Initialize the configurations.
       *     	cfg := new(openapi.Config)
       *     	cfg.SetAccessKeyId("xxxxxxxxx")
       *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
       *     	cli, err := NewClient(cfg)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	runtime := &util.RuntimeOptions{}
       *     	// Construct a request for deleting key-value pairs at a time.
       *     	namespace := "test_batch_put"
       *     	rawReq := BatchDeleteKvRequest{
       *     		Namespace: &namespace,
       *     	}
       *     	for i := 0; i < 10000; i++ {
       *     		key := fmt.Sprintf("test_key_%d", i)
       *     		rawReq.Keys = append(rawReq.Keys, &key)
       *     	}
       *     	payload, err := json.Marshal(rawReq)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	// If the payload is greater than 2 MB, call the BatchDeleteKvWithHighCapacity operation for deletion.
       *     	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
       *     		Namespace: &namespace,
       *     		UrlObject: bytes.NewReader(payload),
       *     	}
       *     	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	return nil
       *     }
       *
       * @param request BatchDeleteKvWithHighCapacityRequest
       * @return BatchDeleteKvWithHighCapacityResponse
       */
      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacity(const Models::BatchDeleteKvWithHighCapacityRequest &request);

      Models::BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityAdvance(const Models::BatchDeleteKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Get Expression Matches
       *
       * @param tmpReq BatchGetExpressionFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetExpressionFieldsResponse
       */
      Models::BatchGetExpressionFieldsResponse batchGetExpressionFieldsWithOptions(const Models::BatchGetExpressionFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Get Expression Matches
       *
       * @param request BatchGetExpressionFieldsRequest
       * @return BatchGetExpressionFieldsResponse
       */
      Models::BatchGetExpressionFieldsResponse batchGetExpressionFields(const Models::BatchGetExpressionFieldsRequest &request);

      /**
       * @summary Configures key-value pairs for a namespace at a time based on specified keys.
       *
       * @param tmpReq BatchPutKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutKvResponse
       */
      Models::BatchPutKvResponse batchPutKvWithOptions(const Models::BatchPutKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures key-value pairs for a namespace at a time based on specified keys.
       *
       * @param request BatchPutKvRequest
       * @return BatchPutKvResponse
       */
      Models::BatchPutKvResponse batchPutKv(const Models::BatchPutKvRequest &request);

      /**
       * @summary Configures key-value pairs for a namespace at a time based on specified keys. The request body can be up to 100 MB.
       *
       * @description This operation allows you to upload a larger request body than by using [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html). For small request bodies, we recommend that you use [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchPutKvWithHighCapacityAdvance to call the operation.
       *     func TestBatchPutKvWithHighCapacity() error {
       *     	// Initialize the configurations.
       *     	cfg := new(openapi.Config)
       *     	cfg.SetAccessKeyId("xxxxxxxxx")
       *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
       *     	cli, err := NewClient(cfg)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	runtime := &util.RuntimeOptions{}
       *     	// Construct a request for uploading key-value pairs at a time.
       *     	namespace := "test_batch_put"
       *     	numKv := 10000
       *     	kvList := make([]*BatchPutKvRequestKvList, numKv)
       *     	test_value := strings.Repeat("a", 10*1024)
       *     	for i := 0; i < numKv; i++ {
       *     		key := fmt.Sprintf("test_key_%d", i)
       *     		value := test_value
       *     		kvList[i] = &BatchPutKvRequestKvList{
       *     			Key:   &key,
       *     			Value: &value,
       *     		}
       *     	}
       *     	rawReq := BatchPutKvRequest{
       *     		Namespace: &namespace,
       *     		KvList:    kvList,
       *     	}
       *     	payload, err := json.Marshal(rawReq)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	// If the payload is greater than 2 MB, call the BatchPutKvWithHighCapacity operation for upload.
       *     	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
       *     		Namespace: &namespace,
       *     		UrlObject: bytes.NewReader(payload),
       *     	}
       *     	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	return nil
       *     }
       *
       * @param request BatchPutKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutKvWithHighCapacityResponse
       */
      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityWithOptions(const Models::BatchPutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures key-value pairs for a namespace at a time based on specified keys. The request body can be up to 100 MB.
       *
       * @description This operation allows you to upload a larger request body than by using [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html). For small request bodies, we recommend that you use [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchPutKvWithHighCapacityAdvance to call the operation.
       *     func TestBatchPutKvWithHighCapacity() error {
       *     	// Initialize the configurations.
       *     	cfg := new(openapi.Config)
       *     	cfg.SetAccessKeyId("xxxxxxxxx")
       *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
       *     	cli, err := NewClient(cfg)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	runtime := &util.RuntimeOptions{}
       *     	// Construct a request for uploading key-value pairs at a time.
       *     	namespace := "test_batch_put"
       *     	numKv := 10000
       *     	kvList := make([]*BatchPutKvRequestKvList, numKv)
       *     	test_value := strings.Repeat("a", 10*1024)
       *     	for i := 0; i < numKv; i++ {
       *     		key := fmt.Sprintf("test_key_%d", i)
       *     		value := test_value
       *     		kvList[i] = &BatchPutKvRequestKvList{
       *     			Key:   &key,
       *     			Value: &value,
       *     		}
       *     	}
       *     	rawReq := BatchPutKvRequest{
       *     		Namespace: &namespace,
       *     		KvList:    kvList,
       *     	}
       *     	payload, err := json.Marshal(rawReq)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	// If the payload is greater than 2 MB, call the BatchPutKvWithHighCapacity operation for upload.
       *     	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
       *     		Namespace: &namespace,
       *     		UrlObject: bytes.NewReader(payload),
       *     	}
       *     	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	return nil
       *     }
       *
       * @param request BatchPutKvWithHighCapacityRequest
       * @return BatchPutKvWithHighCapacityResponse
       */
      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacity(const Models::BatchPutKvWithHighCapacityRequest &request);

      Models::BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityAdvance(const Models::BatchPutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies multiple rules in a specific Web Application Firewall (WAF) ruleset at a time.
       *
       * @param tmpReq BatchUpdateWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateWafRulesResponse
       */
      Models::BatchUpdateWafRulesResponse batchUpdateWafRulesWithOptions(const Models::BatchUpdateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies multiple rules in a specific Web Application Firewall (WAF) ruleset at a time.
       *
       * @param request BatchUpdateWafRulesRequest
       * @return BatchUpdateWafRulesResponse
       */
      Models::BatchUpdateWafRulesResponse batchUpdateWafRules(const Models::BatchUpdateWafRulesRequest &request);

      /**
       * @summary Blocks URLs.
       *
       * @param tmpReq BlockObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlockObjectResponse
       */
      Models::BlockObjectResponse blockObjectWithOptions(const Models::BlockObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Blocks URLs.
       *
       * @param request BlockObjectRequest
       * @return BlockObjectResponse
       */
      Models::BlockObjectResponse blockObject(const Models::BlockObjectRequest &request);

      /**
       * @summary 检查实时日志slr角色是否已创建
       *
       * @param request CheckAssumeSlrRoleRequest
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
       * @summary Commits the unstable code in the staging environment to generate an official code version.
       *
       * @param request CommitRoutineStagingCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitRoutineStagingCodeResponse
       */
      Models::CommitRoutineStagingCodeResponse commitRoutineStagingCodeWithOptions(const Models::CommitRoutineStagingCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commits the unstable code in the staging environment to generate an official code version.
       *
       * @param request CommitRoutineStagingCodeRequest
       * @return CommitRoutineStagingCodeResponse
       */
      Models::CommitRoutineStagingCodeResponse commitRoutineStagingCode(const Models::CommitRoutineStagingCodeRequest &request);

      /**
       * @summary Create a new site cache configuration
       *
       * @param request CreateCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCacheRuleResponse
       */
      Models::CreateCacheRuleResponse createCacheRuleWithOptions(const Models::CreateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new site cache configuration
       *
       * @param request CreateCacheRuleRequest
       * @return CreateCacheRuleResponse
       */
      Models::CreateCacheRuleResponse createCacheRule(const Models::CreateCacheRuleRequest &request);

      /**
       * @summary Uses the ESA-managed certificate authority (CA) to issue client certificates.
       *
       * @param request CreateClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientCertificateResponse
       */
      Models::CreateClientCertificateResponse createClientCertificateWithOptions(const Models::CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses the ESA-managed certificate authority (CA) to issue client certificates.
       *
       * @param request CreateClientCertificateRequest
       * @return CreateClientCertificateResponse
       */
      Models::CreateClientCertificateResponse createClientCertificate(const Models::CreateClientCertificateRequest &request);

      /**
       * @summary Add a compression rule
       *
       * @param request CreateCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompressionRuleResponse
       */
      Models::CreateCompressionRuleResponse createCompressionRuleWithOptions(const Models::CreateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a compression rule
       *
       * @param request CreateCompressionRuleRequest
       * @return CreateCompressionRuleResponse
       */
      Models::CreateCompressionRuleResponse createCompressionRule(const Models::CreateCompressionRuleRequest &request);

      /**
       * @summary Creates an account-level custom scenario policy. You can execute a policy after you associate the policy with a website.
       *
       * @param request CreateCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomScenePolicyResponse
       */
      Models::CreateCustomScenePolicyResponse createCustomScenePolicyWithOptions(const Models::CreateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account-level custom scenario policy. You can execute a policy after you associate the policy with a website.
       *
       * @param request CreateCustomScenePolicyRequest
       * @return CreateCustomScenePolicyResponse
       */
      Models::CreateCustomScenePolicyResponse createCustomScenePolicy(const Models::CreateCustomScenePolicyRequest &request);

      /**
       * @summary Creates a containerized application. You can deploy and release a version of the application across points of presence (POPs).
       *
       * @param request CreateEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppResponse
       */
      Models::CreateEdgeContainerAppResponse createEdgeContainerAppWithOptions(const Models::CreateEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a containerized application. You can deploy and release a version of the application across points of presence (POPs).
       *
       * @param request CreateEdgeContainerAppRequest
       * @return CreateEdgeContainerAppResponse
       */
      Models::CreateEdgeContainerAppResponse createEdgeContainerApp(const Models::CreateEdgeContainerAppRequest &request);

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
       * @summary Creates a version for a containerized application. You can iterate the application based on the version.
       *
       * @param tmpReq CreateEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeContainerAppVersionResponse
       */
      Models::CreateEdgeContainerAppVersionResponse createEdgeContainerAppVersionWithOptions(const Models::CreateEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version for a containerized application. You can iterate the application based on the version.
       *
       * @param request CreateEdgeContainerAppVersionRequest
       * @return CreateEdgeContainerAppVersionResponse
       */
      Models::CreateEdgeContainerAppVersionResponse createEdgeContainerAppVersion(const Models::CreateEdgeContainerAppVersionRequest &request);

      /**
       * @summary Add HTTP Request Header Rule
       *
       * @param tmpReq CreateHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpRequestHeaderModificationRuleResponse createHttpRequestHeaderModificationRuleWithOptions(const Models::CreateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add HTTP Request Header Rule
       *
       * @param request CreateHttpRequestHeaderModificationRuleRequest
       * @return CreateHttpRequestHeaderModificationRuleResponse
       */
      Models::CreateHttpRequestHeaderModificationRuleResponse createHttpRequestHeaderModificationRule(const Models::CreateHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Add HTTP Response Header Rule
       *
       * @param tmpReq CreateHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpResponseHeaderModificationRuleResponse createHttpResponseHeaderModificationRuleWithOptions(const Models::CreateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add HTTP Response Header Rule
       *
       * @param request CreateHttpResponseHeaderModificationRuleRequest
       * @return CreateHttpResponseHeaderModificationRuleResponse
       */
      Models::CreateHttpResponseHeaderModificationRuleResponse createHttpResponseHeaderModificationRule(const Models::CreateHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Create a new site HTTPS application configuration
       *
       * @param request CreateHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpsApplicationConfigurationResponse
       */
      Models::CreateHttpsApplicationConfigurationResponse createHttpsApplicationConfigurationWithOptions(const Models::CreateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new site HTTPS application configuration
       *
       * @param request CreateHttpsApplicationConfigurationRequest
       * @return CreateHttpsApplicationConfigurationResponse
       */
      Models::CreateHttpsApplicationConfigurationResponse createHttpsApplicationConfiguration(const Models::CreateHttpsApplicationConfigurationRequest &request);

      /**
       * @summary Create a new site HTTPS basic configuration
       *
       * @param request CreateHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpsBasicConfigurationResponse
       */
      Models::CreateHttpsBasicConfigurationResponse createHttpsBasicConfigurationWithOptions(const Models::CreateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new site HTTPS basic configuration
       *
       * @param request CreateHttpsBasicConfigurationRequest
       * @return CreateHttpsBasicConfigurationResponse
       */
      Models::CreateHttpsBasicConfigurationResponse createHttpsBasicConfiguration(const Models::CreateHttpsBasicConfigurationRequest &request);

      /**
       * @summary Add Site Image Transformation Configuration
       *
       * @param request CreateImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageTransformResponse
       */
      Models::CreateImageTransformResponse createImageTransformWithOptions(const Models::CreateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add Site Image Transformation Configuration
       *
       * @param request CreateImageTransformRequest
       * @return CreateImageTransformResponse
       */
      Models::CreateImageTransformResponse createImageTransform(const Models::CreateImageTransformRequest &request);

      /**
       * @summary Create a namespace in your Alibaba Cloud account.
       *
       * @param request CreateKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKvNamespaceResponse
       */
      Models::CreateKvNamespaceResponse createKvNamespaceWithOptions(const Models::CreateKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a namespace in your Alibaba Cloud account.
       *
       * @param request CreateKvNamespaceRequest
       * @return CreateKvNamespaceResponse
       */
      Models::CreateKvNamespaceResponse createKvNamespace(const Models::CreateKvNamespaceRequest &request);

      /**
       * @summary Creates a list. Lists are used for the referencing of values in the rules engine to implement complex logic and control in security policies.
       *
       * @param tmpReq CreateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListResponse
       */
      Models::CreateListResponse createListWithOptions(const Models::CreateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a list. Lists are used for the referencing of values in the rules engine to implement complex logic and control in security policies.
       *
       * @param request CreateListRequest
       * @return CreateListResponse
       */
      Models::CreateListResponse createList(const Models::CreateListRequest &request);

      /**
       * @summary Add a New Load Balancer
       *
       * @description Through this API, users can configure load balancing services according to their business needs, including but not limited to adaptive routing, weighted round-robin, rule matching, health checks, and more, to achieve effective traffic management and optimization.
       *
       * @param tmpReq CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a New Load Balancer
       *
       * @description Through this API, users can configure load balancing services according to their business needs, including but not limited to adaptive routing, weighted round-robin, rule matching, health checks, and more, to achieve effective traffic management and optimization.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Create a new site network optimization configuration
       *
       * @param request CreateNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkOptimizationResponse
       */
      Models::CreateNetworkOptimizationResponse createNetworkOptimizationWithOptions(const Models::CreateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new site network optimization configuration
       *
       * @param request CreateNetworkOptimizationRequest
       * @return CreateNetworkOptimizationResponse
       */
      Models::CreateNetworkOptimizationResponse createNetworkOptimization(const Models::CreateNetworkOptimizationRequest &request);

      /**
       * @summary Add a new origin address pool
       *
       * @description Multiple origins can be added under the origin address, supporting domain names, IPs, OSS, S3, and other types of origins. It supports authentication for OSS and S3 type origins.
       *
       * @param tmpReq CreateOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginPoolResponse
       */
      Models::CreateOriginPoolResponse createOriginPoolWithOptions(const Models::CreateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a new origin address pool
       *
       * @description Multiple origins can be added under the origin address, supporting domain names, IPs, OSS, S3, and other types of origins. It supports authentication for OSS and S3 type origins.
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
       * @summary Create a new origin rule configuration for the site
       *
       * @param request CreateOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOriginRuleResponse
       */
      Models::CreateOriginRuleResponse createOriginRuleWithOptions(const Models::CreateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new origin rule configuration for the site
       *
       * @param request CreateOriginRuleRequest
       * @return CreateOriginRuleResponse
       */
      Models::CreateOriginRuleResponse createOriginRule(const Models::CreateOriginRuleRequest &request);

      /**
       * @summary Creates a custom error page, which is displayed when a request is blocked by Web Application Firewall (WAF). You can configure the HTML content, page type, and description, and submit the Base64-encoded page content.
       *
       * @param request CreatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePageResponse
       */
      Models::CreatePageResponse createPageWithOptions(const Models::CreatePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom error page, which is displayed when a request is blocked by Web Application Firewall (WAF). You can configure the HTML content, page type, and description, and submit the Base64-encoded page content.
       *
       * @param request CreatePageRequest
       * @return CreatePageResponse
       */
      Models::CreatePageResponse createPage(const Models::CreatePageRequest &request);

      /**
       * @summary Creates a DNS record for a specific website.
       *
       * @param tmpReq CreateRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecordResponse
       */
      Models::CreateRecordResponse createRecordWithOptions(const Models::CreateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DNS record for a specific website.
       *
       * @param request CreateRecordRequest
       * @return CreateRecordResponse
       */
      Models::CreateRecordResponse createRecord(const Models::CreateRecordRequest &request);

      /**
       * @summary Add a Redirect Rule
       *
       * @param request CreateRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRedirectRuleResponse
       */
      Models::CreateRedirectRuleResponse createRedirectRuleWithOptions(const Models::CreateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a Redirect Rule
       *
       * @param request CreateRedirectRuleRequest
       * @return CreateRedirectRuleResponse
       */
      Models::CreateRedirectRuleResponse createRedirectRule(const Models::CreateRedirectRuleRequest &request);

      /**
       * @summary Add Rewrite URL Rule
       *
       * @param request CreateRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRewriteUrlRuleResponse
       */
      Models::CreateRewriteUrlRuleResponse createRewriteUrlRuleWithOptions(const Models::CreateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add Rewrite URL Rule
       *
       * @param request CreateRewriteUrlRuleRequest
       * @return CreateRewriteUrlRuleResponse
       */
      Models::CreateRewriteUrlRuleResponse createRewriteUrlRule(const Models::CreateRewriteUrlRuleRequest &request);

      /**
       * @summary Creates a routine.
       *
       * @param request CreateRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutineWithOptions(const Models::CreateRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routine.
       *
       * @param request CreateRoutineRequest
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutine(const Models::CreateRoutineRequest &request);

      /**
       * @summary 发布Routine某版本代码
       *
       * @param tmpReq CreateRoutineCodeDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineCodeDeploymentResponse
       */
      Models::CreateRoutineCodeDeploymentResponse createRoutineCodeDeploymentWithOptions(const Models::CreateRoutineCodeDeploymentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布Routine某版本代码
       *
       * @param request CreateRoutineCodeDeploymentRequest
       * @return CreateRoutineCodeDeploymentResponse
       */
      Models::CreateRoutineCodeDeploymentResponse createRoutineCodeDeployment(const Models::CreateRoutineCodeDeploymentRequest &request);

      /**
       * @summary Adds a record to map a domain that is associated with a routine. This record is used to trigger the associated routine code.
       *
       * @param request CreateRoutineRelatedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineRelatedRecordResponse
       */
      Models::CreateRoutineRelatedRecordResponse createRoutineRelatedRecordWithOptions(const Models::CreateRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a record to map a domain that is associated with a routine. This record is used to trigger the associated routine code.
       *
       * @param request CreateRoutineRelatedRecordRequest
       * @return CreateRoutineRelatedRecordResponse
       */
      Models::CreateRoutineRelatedRecordResponse createRoutineRelatedRecord(const Models::CreateRoutineRelatedRecordRequest &request);

      /**
       * @summary 新增边缘函数路由配置
       *
       * @param request CreateRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineRouteResponse
       */
      Models::CreateRoutineRouteResponse createRoutineRouteWithOptions(const Models::CreateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增边缘函数路由配置
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
       * @summary Creates scheduled prefetch plans.
       *
       * @param tmpReq CreateScheduledPreloadExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPreloadExecutionsResponse
       */
      Models::CreateScheduledPreloadExecutionsResponse createScheduledPreloadExecutionsWithOptions(const Models::CreateScheduledPreloadExecutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates scheduled prefetch plans.
       *
       * @param request CreateScheduledPreloadExecutionsRequest
       * @return CreateScheduledPreloadExecutionsResponse
       */
      Models::CreateScheduledPreloadExecutionsResponse createScheduledPreloadExecutions(const Models::CreateScheduledPreloadExecutionsRequest &request);

      /**
       * @summary Adds a scheduled prefetch task.
       *
       * @param request CreateScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPreloadJobResponse
       */
      Models::CreateScheduledPreloadJobResponse createScheduledPreloadJobWithOptions(const Models::CreateScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a scheduled prefetch task.
       *
       * @param request CreateScheduledPreloadJobRequest
       * @return CreateScheduledPreloadJobResponse
       */
      Models::CreateScheduledPreloadJobResponse createScheduledPreloadJob(const Models::CreateScheduledPreloadJobRequest &request);

      /**
       * @summary Adds a website.
       *
       * @description *   Make sure that you have an available plan before you add a website.
       * *   Make sure that your website domain name has an ICP filing if the location you want to specify covers the Chinese mainland.
       *
       * @param request CreateSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteResponse
       */
      Models::CreateSiteResponse createSiteWithOptions(const Models::CreateSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a website.
       *
       * @description *   Make sure that you have an available plan before you add a website.
       * *   Make sure that your website domain name has an ICP filing if the location you want to specify covers the Chinese mainland.
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
       * @summary Creates a real-time log delivery task.
       *
       * @param tmpReq CreateSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteDeliveryTaskResponse
       */
      Models::CreateSiteDeliveryTaskResponse createSiteDeliveryTaskWithOptions(const Models::CreateSiteDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a real-time log delivery task.
       *
       * @param request CreateSiteDeliveryTaskRequest
       * @return CreateSiteDeliveryTaskResponse
       */
      Models::CreateSiteDeliveryTaskResponse createSiteDeliveryTask(const Models::CreateSiteDeliveryTaskRequest &request);

      /**
       * @summary 创建一个实时日志slr角色
       *
       * @param request CreateSlrRoleForRealtimeLogRequest
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
       * @summary 创建网页监测配置
       *
       * @param request CreateUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUrlObservationResponse
       */
      Models::CreateUrlObservationResponse createUrlObservationWithOptions(const Models::CreateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建网页监测配置
       *
       * @param request CreateUrlObservationRequest
       * @return CreateUrlObservationResponse
       */
      Models::CreateUrlObservationResponse createUrlObservation(const Models::CreateUrlObservationRequest &request);

      /**
       * @summary Creates a log delivery task to ship logs to the specified destination.
       *
       * @description This API operation allows you to deliver logs to destinations such as Simple Log Service (SLS), HTTP servers, Object Storage Service (OSS), Amazon Simple Storage Service (S3), and Kafka. You can specify the task name, log fields to deliver, data center, discard rate, delivery type, and delivery details.
       * *   **Field filtering**: Use the `FieldName` parameter to specify log fields to deliver.
       * *   **Filtering rules**: Use the `FilterRules` parameter to pre-process and filter log data.
       * *   **Diverse delivery destinations**: Logs can be delivered to different destinations. Configuration parameters vary with delivery destinations.
       * ## [](#)Precautions
       * *   Make sure that you have sufficient permissions to perform delivery tasks.
       * *   If you enable encryption or authentication, properly configure corresponding parameters.
       * *   Verify the syntax of `FilterRules` to make sure that filtering logic works as expected.
       * *   Specify advanced settings such as the number of retries and timeout period based on your needs to have optimal delivery efficiency and stability.
       *
       * @param tmpReq CreateUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserDeliveryTaskResponse
       */
      Models::CreateUserDeliveryTaskResponse createUserDeliveryTaskWithOptions(const Models::CreateUserDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a log delivery task to ship logs to the specified destination.
       *
       * @description This API operation allows you to deliver logs to destinations such as Simple Log Service (SLS), HTTP servers, Object Storage Service (OSS), Amazon Simple Storage Service (S3), and Kafka. You can specify the task name, log fields to deliver, data center, discard rate, delivery type, and delivery details.
       * *   **Field filtering**: Use the `FieldName` parameter to specify log fields to deliver.
       * *   **Filtering rules**: Use the `FilterRules` parameter to pre-process and filter log data.
       * *   **Diverse delivery destinations**: Logs can be delivered to different destinations. Configuration parameters vary with delivery destinations.
       * ## [](#)Precautions
       * *   Make sure that you have sufficient permissions to perform delivery tasks.
       * *   If you enable encryption or authentication, properly configure corresponding parameters.
       * *   Verify the syntax of `FilterRules` to make sure that filtering logic works as expected.
       * *   Specify advanced settings such as the number of retries and timeout period based on your needs to have optimal delivery efficiency and stability.
       *
       * @param request CreateUserDeliveryTaskRequest
       * @return CreateUserDeliveryTaskResponse
       */
      Models::CreateUserDeliveryTaskResponse createUserDeliveryTask(const Models::CreateUserDeliveryTaskRequest &request);

      /**
       * @summary 新增站点视频处理配置
       *
       * @param request CreateVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoProcessingResponse
       */
      Models::CreateVideoProcessingResponse createVideoProcessingWithOptions(const Models::CreateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增站点视频处理配置
       *
       * @param request CreateVideoProcessingRequest
       * @return CreateVideoProcessingResponse
       */
      Models::CreateVideoProcessingResponse createVideoProcessing(const Models::CreateVideoProcessingRequest &request);

      /**
       * @summary Create WAF Rule
       *
       * @param tmpReq CreateWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWafRuleResponse
       */
      Models::CreateWafRuleResponse createWafRuleWithOptions(const Models::CreateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create WAF Rule
       *
       * @param request CreateWafRuleRequest
       * @return CreateWafRuleResponse
       */
      Models::CreateWafRuleResponse createWafRule(const Models::CreateWafRuleRequest &request);

      /**
       * @summary Create WAF Ruleset
       *
       * @param request CreateWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWafRulesetResponse
       */
      Models::CreateWafRulesetResponse createWafRulesetWithOptions(const Models::CreateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create WAF Ruleset
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
       * @summary Creates a waiting room event.
       *
       * @param request CreateWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomEventResponse
       */
      Models::CreateWaitingRoomEventResponse createWaitingRoomEventWithOptions(const Models::CreateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a waiting room event.
       *
       * @param request CreateWaitingRoomEventRequest
       * @return CreateWaitingRoomEventResponse
       */
      Models::CreateWaitingRoomEventResponse createWaitingRoomEvent(const Models::CreateWaitingRoomEventRequest &request);

      /**
       * @summary Create Waiting Room Rule
       *
       * @param request CreateWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWaitingRoomRuleResponse
       */
      Models::CreateWaitingRoomRuleResponse createWaitingRoomRuleWithOptions(const Models::CreateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Waiting Room Rule
       *
       * @param request CreateWaitingRoomRuleRequest
       * @return CreateWaitingRoomRuleResponse
       */
      Models::CreateWaitingRoomRuleResponse createWaitingRoomRule(const Models::CreateWaitingRoomRuleRequest &request);

      /**
       * @summary Disables version management for a website.
       *
       * @description You can disable version management only when the default environment and version 0 exist.
       *
       * @param request DeactivateVersionManagementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateVersionManagementResponse
       */
      Models::DeactivateVersionManagementResponse deactivateVersionManagementWithOptions(const Models::DeactivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables version management for a website.
       *
       * @description You can disable version management only when the default environment and version 0 exist.
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
       * @summary Deletes a containerized application.
       *
       * @param request DeleteEdgeContainerAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppResponse
       */
      Models::DeleteEdgeContainerAppResponse deleteEdgeContainerAppWithOptions(const Models::DeleteEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a containerized application.
       *
       * @param request DeleteEdgeContainerAppRequest
       * @return DeleteEdgeContainerAppResponse
       */
      Models::DeleteEdgeContainerAppResponse deleteEdgeContainerApp(const Models::DeleteEdgeContainerAppRequest &request);

      /**
       * @summary Disassociates a domain name from a containerized application. After the dissociation, you can no longer use the domain name to access the containerized application.
       *
       * @param request DeleteEdgeContainerAppRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeContainerAppRecordResponse
       */
      Models::DeleteEdgeContainerAppRecordResponse deleteEdgeContainerAppRecordWithOptions(const Models::DeleteEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a domain name from a containerized application. After the dissociation, you can no longer use the domain name to access the containerized application.
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
       * @summary Deletes a key-value pair from a namespace.
       *
       * @param request DeleteKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKvResponse
       */
      Models::DeleteKvResponse deleteKvWithOptions(const Models::DeleteKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a key-value pair from a namespace.
       *
       * @param request DeleteKvRequest
       * @return DeleteKvResponse
       */
      Models::DeleteKvResponse deleteKv(const Models::DeleteKvRequest &request);

      /**
       * @summary Deletes a namespace from an Alibaba Cloud account.
       *
       * @param request DeleteKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKvNamespaceResponse
       */
      Models::DeleteKvNamespaceResponse deleteKvNamespaceWithOptions(const Models::DeleteKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace from an Alibaba Cloud account.
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
       * @summary 删除源服务器CA证书
       *
       * @param request DeleteOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginCaCertificateResponse
       */
      Models::DeleteOriginCaCertificateResponse deleteOriginCaCertificateWithOptions(const Models::DeleteOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除源服务器CA证书
       *
       * @param request DeleteOriginCaCertificateRequest
       * @return DeleteOriginCaCertificateResponse
       */
      Models::DeleteOriginCaCertificateResponse deleteOriginCaCertificate(const Models::DeleteOriginCaCertificateRequest &request);

      /**
       * @summary 删除域名回源客户端证书
       *
       * @param request DeleteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginClientCertificateResponse
       */
      Models::DeleteOriginClientCertificateResponse deleteOriginClientCertificateWithOptions(const Models::DeleteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除域名回源客户端证书
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
       * @summary Disables origin protection.
       *
       * @param request DeleteOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOriginProtectionResponse
       */
      Models::DeleteOriginProtectionResponse deleteOriginProtectionWithOptions(const Models::DeleteOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables origin protection.
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
       * @summary Deletes a DNS record of a website based on the specified RecordId.
       *
       * @param request DeleteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecordWithOptions(const Models::DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DNS record of a website based on the specified RecordId.
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
       * @summary Deletes a routine in Edge Routine.
       *
       * @param request DeleteRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutineWithOptions(const Models::DeleteRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routine in Edge Routine.
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
       * @summary Deletes a record that is associated with a routine.
       *
       * @param request DeleteRoutineRelatedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineRelatedRecordResponse
       */
      Models::DeleteRoutineRelatedRecordResponse deleteRoutineRelatedRecordWithOptions(const Models::DeleteRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a record that is associated with a routine.
       *
       * @param request DeleteRoutineRelatedRecordRequest
       * @return DeleteRoutineRelatedRecordResponse
       */
      Models::DeleteRoutineRelatedRecordResponse deleteRoutineRelatedRecord(const Models::DeleteRoutineRelatedRecordRequest &request);

      /**
       * @summary 删除边缘函数路由配置
       *
       * @param request DeleteRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineRouteResponse
       */
      Models::DeleteRoutineRouteResponse deleteRoutineRouteWithOptions(const Models::DeleteRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除边缘函数路由配置
       *
       * @param request DeleteRoutineRouteRequest
       * @return DeleteRoutineRouteResponse
       */
      Models::DeleteRoutineRouteResponse deleteRoutineRoute(const Models::DeleteRoutineRouteRequest &request);

      /**
       * @summary Deletes a scheduled prefetch plan based on the plan ID.
       *
       * @param request DeleteScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPreloadExecutionResponse
       */
      Models::DeleteScheduledPreloadExecutionResponse deleteScheduledPreloadExecutionWithOptions(const Models::DeleteScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled prefetch plan based on the plan ID.
       *
       * @param request DeleteScheduledPreloadExecutionRequest
       * @return DeleteScheduledPreloadExecutionResponse
       */
      Models::DeleteScheduledPreloadExecutionResponse deleteScheduledPreloadExecution(const Models::DeleteScheduledPreloadExecutionRequest &request);

      /**
       * @summary Deletes a specified scheduled prefetch task based on the task ID.
       *
       * @param request DeleteScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPreloadJobResponse
       */
      Models::DeleteScheduledPreloadJobResponse deleteScheduledPreloadJobWithOptions(const Models::DeleteScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified scheduled prefetch task based on the task ID.
       *
       * @param request DeleteScheduledPreloadJobRequest
       * @return DeleteScheduledPreloadJobResponse
       */
      Models::DeleteScheduledPreloadJobResponse deleteScheduledPreloadJob(const Models::DeleteScheduledPreloadJobRequest &request);

      /**
       * @summary Deletes a website based on the specified website ID.
       *
       * @param request DeleteSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteResponse
       */
      Models::DeleteSiteResponse deleteSiteWithOptions(const Models::DeleteSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a website based on the specified website ID.
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
       * @summary 删除站点回源客户端证书
       *
       * @param request DeleteSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteOriginClientCertificateResponse
       */
      Models::DeleteSiteOriginClientCertificateResponse deleteSiteOriginClientCertificateWithOptions(const Models::DeleteSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除站点回源客户端证书
       *
       * @param request DeleteSiteOriginClientCertificateRequest
       * @return DeleteSiteOriginClientCertificateResponse
       */
      Models::DeleteSiteOriginClientCertificateResponse deleteSiteOriginClientCertificate(const Models::DeleteSiteOriginClientCertificateRequest &request);

      /**
       * @summary 删除网页监测配置
       *
       * @param request DeleteUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUrlObservationResponse
       */
      Models::DeleteUrlObservationResponse deleteUrlObservationWithOptions(const Models::DeleteUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网页监测配置
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
       * @summary 删除站点视频处理配置
       *
       * @param request DeleteVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVideoProcessingResponse
       */
      Models::DeleteVideoProcessingResponse deleteVideoProcessingWithOptions(const Models::DeleteVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除站点视频处理配置
       *
       * @param request DeleteVideoProcessingRequest
       * @return DeleteVideoProcessingResponse
       */
      Models::DeleteVideoProcessingResponse deleteVideoProcessing(const Models::DeleteVideoProcessingRequest &request);

      /**
       * @summary Delete WAF Rule
       *
       * @param request DeleteWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWafRuleResponse
       */
      Models::DeleteWafRuleResponse deleteWafRuleWithOptions(const Models::DeleteWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete WAF Rule
       *
       * @param request DeleteWafRuleRequest
       * @return DeleteWafRuleResponse
       */
      Models::DeleteWafRuleResponse deleteWafRule(const Models::DeleteWafRuleRequest &request);

      /**
       * @summary Delete WAF Ruleset
       *
       * @param request DeleteWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWafRulesetResponse
       */
      Models::DeleteWafRulesetResponse deleteWafRulesetWithOptions(const Models::DeleteWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete WAF Ruleset
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
       * @summary Queries the configurations of a scenario-specific policy.
       *
       * @param request DescribeCustomScenePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomScenePoliciesResponse
       */
      Models::DescribeCustomScenePoliciesResponse describeCustomScenePoliciesWithOptions(const Models::DescribeCustomScenePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a scenario-specific policy.
       *
       * @param request DescribeCustomScenePoliciesRequest
       * @return DescribeCustomScenePoliciesResponse
       */
      Models::DescribeCustomScenePoliciesResponse describeCustomScenePolicies(const Models::DescribeCustomScenePoliciesRequest &request);

      /**
       * @summary Queries DDoS attack events.
       *
       * @param request DescribeDDoSAllEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDDoSAllEventListResponse
       */
      Models::DescribeDDoSAllEventListResponse describeDDoSAllEventListWithOptions(const Models::DescribeDDoSAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DDoS attack events.
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
       * @summary 将天眼提供给XCDN边缘容器的监控OpenAPI适配成青蓝的OpenAPI
       *
       * @param request DescribeEdgeContainerAppStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEdgeContainerAppStatsResponse
       */
      Models::DescribeEdgeContainerAppStatsResponse describeEdgeContainerAppStatsWithOptions(const Models::DescribeEdgeContainerAppStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将天眼提供给XCDN边缘容器的监控OpenAPI适配成青蓝的OpenAPI
       *
       * @param request DescribeEdgeContainerAppStatsRequest
       * @return DescribeEdgeContainerAppStatsResponse
       */
      Models::DescribeEdgeContainerAppStatsResponse describeEdgeContainerAppStats(const Models::DescribeEdgeContainerAppStatsRequest &request);

      /**
       * @summary Queries the configuration of smart HTTP DDoS protection for a website.
       *
       * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::DescribeHttpDDoSAttackIntelligentProtectionResponse describeHttpDDoSAttackIntelligentProtectionWithOptions(const Models::DescribeHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of smart HTTP DDoS protection for a website.
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
       * @summary Queries whether Edge KV is activated in your Alibaba Cloud account.
       *
       * @param request DescribeKvAccountStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKvAccountStatusResponse
       */
      Models::DescribeKvAccountStatusResponse describeKvAccountStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Edge KV is activated in your Alibaba Cloud account.
       *
       * @return DescribeKvAccountStatusResponse
       */
      Models::DescribeKvAccountStatusResponse describeKvAccountStatus();

      /**
       * @summary Queries the details of prefetch tasks by time, task status, or prefetch URL.
       *
       * @param request DescribePreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreloadTasksResponse
       */
      Models::DescribePreloadTasksResponse describePreloadTasksWithOptions(const Models::DescribePreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of prefetch tasks by time, task status, or prefetch URL.
       *
       * @param request DescribePreloadTasksRequest
       * @return DescribePreloadTasksResponse
       */
      Models::DescribePreloadTasksResponse describePreloadTasks(const Models::DescribePreloadTasksRequest &request);

      /**
       * @summary Queries the details of purge tasks.
       *
       * @param request DescribePurgeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurgeTasksResponse
       */
      Models::DescribePurgeTasksResponse describePurgeTasksWithOptions(const Models::DescribePurgeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of purge tasks.
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
       * @summary 查询站点离线日志
       *
       * @param request DescribeSiteLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteLogsResponse
       */
      Models::DescribeSiteLogsResponse describeSiteLogsWithOptions(const Models::DescribeSiteLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点离线日志
       *
       * @param request DescribeSiteLogsRequest
       * @return DescribeSiteLogsResponse
       */
      Models::DescribeSiteLogsResponse describeSiteLogs(const Models::DescribeSiteLogsRequest &request);

      /**
       * @summary 获取时序数据
       *
       * @param tmpReq DescribeSiteTimeSeriesDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteTimeSeriesDataResponse
       */
      Models::DescribeSiteTimeSeriesDataResponse describeSiteTimeSeriesDataWithOptions(const Models::DescribeSiteTimeSeriesDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取时序数据
       *
       * @param request DescribeSiteTimeSeriesDataRequest
       * @return DescribeSiteTimeSeriesDataResponse
       */
      Models::DescribeSiteTimeSeriesDataResponse describeSiteTimeSeriesData(const Models::DescribeSiteTimeSeriesDataRequest &request);

      /**
       * @summary 获取Top数据
       *
       * @param tmpReq DescribeSiteTopDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteTopDataResponse
       */
      Models::DescribeSiteTopDataResponse describeSiteTopDataWithOptions(const Models::DescribeSiteTopDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Top数据
       *
       * @param request DescribeSiteTopDataRequest
       * @return DescribeSiteTopDataResponse
       */
      Models::DescribeSiteTopDataResponse describeSiteTopData(const Models::DescribeSiteTopDataRequest &request);

      /**
       * @summary 查询网页观测质量数据
       *
       * @param request DescribeUrlObservationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUrlObservationDataResponse
       */
      Models::DescribeUrlObservationDataResponse describeUrlObservationDataWithOptions(const Models::DescribeUrlObservationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网页观测质量数据
       *
       * @param request DescribeUrlObservationDataRequest
       * @return DescribeUrlObservationDataResponse
       */
      Models::DescribeUrlObservationDataResponse describeUrlObservationData(const Models::DescribeUrlObservationDataRequest &request);

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
       * @summary Queries the available specifications of cache reserve instances.
       *
       * @param request GetCacheReserveSpecificationRequest
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
       * @summary Query a single cache configuration
       *
       * @param request GetCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCacheRuleResponse
       */
      Models::GetCacheRuleResponse getCacheRuleWithOptions(const Models::GetCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a single cache configuration
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
       * @summary Retrieve the certificate, private key, and certificate information
       *
       * @param request GetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificateWithOptions(const Models::GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the certificate, private key, and certificate information
       *
       * @param request GetCertificateRequest
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificate(const Models::GetCertificateRequest &request);

      /**
       * @summary Query certificate quota and usage
       *
       * @param request GetCertificateQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateQuotaResponse
       */
      Models::GetCertificateQuotaResponse getCertificateQuotaWithOptions(const Models::GetCertificateQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query certificate quota and usage
       *
       * @param request GetCertificateQuotaRequest
       * @return GetCertificateQuotaResponse
       */
      Models::GetCertificateQuotaResponse getCertificateQuota(const Models::GetCertificateQuotaRequest &request);

      /**
       * @summary Queries a client CA certificate.
       *
       * @param request GetClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCaCertificateResponse
       */
      Models::GetClientCaCertificateResponse getClientCaCertificateWithOptions(const Models::GetClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a client CA certificate.
       *
       * @param request GetClientCaCertificateRequest
       * @return GetClientCaCertificateResponse
       */
      Models::GetClientCaCertificateResponse getClientCaCertificate(const Models::GetClientCaCertificateRequest &request);

      /**
       * @summary Queries information about a client certificate.
       *
       * @param request GetClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCertificateResponse
       */
      Models::GetClientCertificateResponse getClientCertificateWithOptions(const Models::GetClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a client certificate.
       *
       * @param request GetClientCertificateRequest
       * @return GetClientCertificateResponse
       */
      Models::GetClientCertificateResponse getClientCertificate(const Models::GetClientCertificateRequest &request);

      /**
       * @summary Queries domain names associated with a client CA certificate. If no certificate is specified, domain names associated with an Edge Security Acceleration(ESA)-managed CA certificate are returned.
       *
       * @param request GetClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientCertificateHostnamesResponse
       */
      Models::GetClientCertificateHostnamesResponse getClientCertificateHostnamesWithOptions(const Models::GetClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names associated with a client CA certificate. If no certificate is specified, domain names associated with an Edge Security Acceleration(ESA)-managed CA certificate are returned.
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
       * @summary 查询站点中国大陆网络接入优化配置
       *
       * @param request GetCrossBorderOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCrossBorderOptimizationResponse
       */
      Models::GetCrossBorderOptimizationResponse getCrossBorderOptimizationWithOptions(const Models::GetCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点中国大陆网络接入优化配置
       *
       * @param request GetCrossBorderOptimizationRequest
       * @return GetCrossBorderOptimizationResponse
       */
      Models::GetCrossBorderOptimizationResponse getCrossBorderOptimization(const Models::GetCrossBorderOptimizationRequest &request);

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
       * @summary Queries the log collection configuration of a containerized application.
       *
       * @param request GetEdgeContainerAppLogRiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppLogRiverResponse
       */
      Models::GetEdgeContainerAppLogRiverResponse getEdgeContainerAppLogRiverWithOptions(const Models::GetEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log collection configuration of a containerized application.
       *
       * @param request GetEdgeContainerAppLogRiverRequest
       * @return GetEdgeContainerAppLogRiverResponse
       */
      Models::GetEdgeContainerAppLogRiverResponse getEdgeContainerAppLogRiver(const Models::GetEdgeContainerAppLogRiverRequest &request);

      /**
       * @summary 获取边缘容器资源预留配置
       *
       * @param request GetEdgeContainerAppResourceReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceReserveResponse
       */
      Models::GetEdgeContainerAppResourceReserveResponse getEdgeContainerAppResourceReserveWithOptions(const Models::GetEdgeContainerAppResourceReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器资源预留配置
       *
       * @param request GetEdgeContainerAppResourceReserveRequest
       * @return GetEdgeContainerAppResourceReserveResponse
       */
      Models::GetEdgeContainerAppResourceReserveResponse getEdgeContainerAppResourceReserve(const Models::GetEdgeContainerAppResourceReserveRequest &request);

      /**
       * @summary 获取边缘容器应用资源分布
       *
       * @param request GetEdgeContainerAppResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerAppResourceStatusResponse
       */
      Models::GetEdgeContainerAppResourceStatusResponse getEdgeContainerAppResourceStatusWithOptions(const Models::GetEdgeContainerAppResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取边缘容器应用资源分布
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
       * @summary Queries regions where a containerized application is deployed based on the application ID.
       *
       * @param request GetEdgeContainerDeployRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerDeployRegionsResponse
       */
      Models::GetEdgeContainerDeployRegionsResponse getEdgeContainerDeployRegionsWithOptions(const Models::GetEdgeContainerDeployRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions where a containerized application is deployed based on the application ID.
       *
       * @param request GetEdgeContainerDeployRegionsRequest
       * @return GetEdgeContainerDeployRegionsResponse
       */
      Models::GetEdgeContainerDeployRegionsResponse getEdgeContainerDeployRegions(const Models::GetEdgeContainerDeployRegionsRequest &request);

      /**
       * @summary Queries Edge Container logs.
       *
       * @param request GetEdgeContainerLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerLogsResponse
       */
      Models::GetEdgeContainerLogsResponse getEdgeContainerLogsWithOptions(const Models::GetEdgeContainerLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Edge Container logs.
       *
       * @param request GetEdgeContainerLogsRequest
       * @return GetEdgeContainerLogsResponse
       */
      Models::GetEdgeContainerLogsResponse getEdgeContainerLogs(const Models::GetEdgeContainerLogsRequest &request);

      /**
       * @summary Queries the deployment status of an application in the staging environment by using the application ID.
       *
       * @param request GetEdgeContainerStagingDeployStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerStagingDeployStatusResponse
       */
      Models::GetEdgeContainerStagingDeployStatusResponse getEdgeContainerStagingDeployStatusWithOptions(const Models::GetEdgeContainerStagingDeployStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment status of an application in the staging environment by using the application ID.
       *
       * @param request GetEdgeContainerStagingDeployStatusRequest
       * @return GetEdgeContainerStagingDeployStatusResponse
       */
      Models::GetEdgeContainerStagingDeployStatusResponse getEdgeContainerStagingDeployStatus(const Models::GetEdgeContainerStagingDeployStatusRequest &request);

      /**
       * @summary Queries the terminal information of a containerized application.
       *
       * @param request GetEdgeContainerTerminalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeContainerTerminalResponse
       */
      Models::GetEdgeContainerTerminalResponse getEdgeContainerTerminalWithOptions(const Models::GetEdgeContainerTerminalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the terminal information of a containerized application.
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
       * @summary Query HTTP Request Header Rule Details
       *
       * @param request GetHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpRequestHeaderModificationRuleResponse
       */
      Models::GetHttpRequestHeaderModificationRuleResponse getHttpRequestHeaderModificationRuleWithOptions(const Models::GetHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query HTTP Request Header Rule Details
       *
       * @param request GetHttpRequestHeaderModificationRuleRequest
       * @return GetHttpRequestHeaderModificationRuleResponse
       */
      Models::GetHttpRequestHeaderModificationRuleResponse getHttpRequestHeaderModificationRule(const Models::GetHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Query HTTP Response Header Rules
       *
       * @param request GetHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpResponseHeaderModificationRuleResponse
       */
      Models::GetHttpResponseHeaderModificationRuleResponse getHttpResponseHeaderModificationRuleWithOptions(const Models::GetHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query HTTP Response Header Rules
       *
       * @param request GetHttpResponseHeaderModificationRuleRequest
       * @return GetHttpResponseHeaderModificationRuleResponse
       */
      Models::GetHttpResponseHeaderModificationRuleResponse getHttpResponseHeaderModificationRule(const Models::GetHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Query a Single HTTPS Application Configuration
       *
       * @param request GetHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpsApplicationConfigurationResponse
       */
      Models::GetHttpsApplicationConfigurationResponse getHttpsApplicationConfigurationWithOptions(const Models::GetHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a Single HTTPS Application Configuration
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
       * @summary Queries the IPv6 configuration of a website.
       *
       * @param request GetIPv6Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIPv6Response
       */
      Models::GetIPv6Response getIPv6WithOptions(const Models::GetIPv6Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IPv6 configuration of a website.
       *
       * @param request GetIPv6Request
       * @return GetIPv6Response
       */
      Models::GetIPv6Response getIPv6(const Models::GetIPv6Request &request);

      /**
       * @summary Query Single Site Image Transformation Configuration
       *
       * @param request GetImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTransformResponse
       */
      Models::GetImageTransformResponse getImageTransformWithOptions(const Models::GetImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Single Site Image Transformation Configuration
       *
       * @param request GetImageTransformRequest
       * @return GetImageTransformResponse
       */
      Models::GetImageTransformResponse getImageTransform(const Models::GetImageTransformRequest &request);

      /**
       * @summary Queries the value of a key in a key-value pair.
       *
       * @param request GetKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvResponse
       */
      Models::GetKvResponse getKvWithOptions(const Models::GetKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the value of a key in a key-value pair.
       *
       * @param request GetKvRequest
       * @return GetKvResponse
       */
      Models::GetKvResponse getKv(const Models::GetKvRequest &request);

      /**
       * @summary Queries the Edge KV usage in your Alibaba Cloud account, including the information about all namespaces.
       *
       * @param request GetKvAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvAccountResponse
       */
      Models::GetKvAccountResponse getKvAccountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Edge KV usage in your Alibaba Cloud account, including the information about all namespaces.
       *
       * @return GetKvAccountResponse
       */
      Models::GetKvAccountResponse getKvAccount();

      /**
       * @summary Queries the information about a namespace in your Alibaba Cloud account.
       *
       * @param request GetKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKvNamespaceResponse
       */
      Models::GetKvNamespaceResponse getKvNamespaceWithOptions(const Models::GetKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a namespace in your Alibaba Cloud account.
       *
       * @param request GetKvNamespaceRequest
       * @return GetKvNamespaceResponse
       */
      Models::GetKvNamespaceResponse getKvNamespace(const Models::GetKvNamespaceRequest &request);

      /**
       * @summary Queries the details of a custom list, such as the name, description, type, and content.
       *
       * @param request GetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListResponse
       */
      Models::GetListResponse getListWithOptions(const Models::GetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom list, such as the name, description, type, and content.
       *
       * @param request GetListRequest
       * @return GetListResponse
       */
      Models::GetListResponse getList(const Models::GetListRequest &request);

      /**
       * @summary Query a Specific Load Balancer
       *
       * @description This API allows users to query the configuration details of a specific load balancer by providing necessary authentication information and resource identifiers, including but not limited to name, session persistence strategy, routing policy, etc.
       *
       * @param request GetLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoadBalancerResponse
       */
      Models::GetLoadBalancerResponse getLoadBalancerWithOptions(const Models::GetLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a Specific Load Balancer
       *
       * @description This API allows users to query the configuration details of a specific load balancer by providing necessary authentication information and resource identifiers, including but not limited to name, session persistence strategy, routing policy, etc.
       *
       * @param request GetLoadBalancerRequest
       * @return GetLoadBalancerResponse
       */
      Models::GetLoadBalancerResponse getLoadBalancer(const Models::GetLoadBalancerRequest &request);

      /**
       * @summary Query Managed Transform Configuration
       *
       * @param request GetManagedTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedTransformResponse
       */
      Models::GetManagedTransformResponse getManagedTransformWithOptions(const Models::GetManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Managed Transform Configuration
       *
       * @param request GetManagedTransformRequest
       * @return GetManagedTransformResponse
       */
      Models::GetManagedTransformResponse getManagedTransform(const Models::GetManagedTransformRequest &request);

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
       * @summary 获取源服务器CA证书信息
       *
       * @param request GetOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginCaCertificateResponse
       */
      Models::GetOriginCaCertificateResponse getOriginCaCertificateWithOptions(const Models::GetOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取源服务器CA证书信息
       *
       * @param request GetOriginCaCertificateRequest
       * @return GetOriginCaCertificateResponse
       */
      Models::GetOriginCaCertificateResponse getOriginCaCertificate(const Models::GetOriginCaCertificateRequest &request);

      /**
       * @summary 获取域名回源客户端证书信息
       *
       * @param request GetOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginClientCertificateResponse
       */
      Models::GetOriginClientCertificateResponse getOriginClientCertificateWithOptions(const Models::GetOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取域名回源客户端证书信息
       *
       * @param request GetOriginClientCertificateRequest
       * @return GetOriginClientCertificateResponse
       */
      Models::GetOriginClientCertificateResponse getOriginClientCertificate(const Models::GetOriginClientCertificateRequest &request);

      /**
       * @summary 获取域名回源客户端证书绑定的域名列表
       *
       * @param request GetOriginClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginClientCertificateHostnamesResponse
       */
      Models::GetOriginClientCertificateHostnamesResponse getOriginClientCertificateHostnamesWithOptions(const Models::GetOriginClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取域名回源客户端证书绑定的域名列表
       *
       * @param request GetOriginClientCertificateHostnamesRequest
       * @return GetOriginClientCertificateHostnamesResponse
       */
      Models::GetOriginClientCertificateHostnamesResponse getOriginClientCertificateHostnames(const Models::GetOriginClientCertificateHostnamesRequest &request);

      /**
       * @summary Query a specific origin pool
       *
       * @param request GetOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginPoolResponse
       */
      Models::GetOriginPoolResponse getOriginPoolWithOptions(const Models::GetOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a specific origin pool
       *
       * @param request GetOriginPoolRequest
       * @return GetOriginPoolResponse
       */
      Models::GetOriginPoolResponse getOriginPool(const Models::GetOriginPoolRequest &request);

      /**
       * @summary Queries the origin protection configurations of a website, including the origin protection, IP convergence, and the status and details of the IP whitelist for origin protection. The details includes the IP whitelist used by the website, the latest IP whitelist, and the differences between them.
       *
       * @param request GetOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginProtectionResponse
       */
      Models::GetOriginProtectionResponse getOriginProtectionWithOptions(const Models::GetOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the origin protection configurations of a website, including the origin protection, IP convergence, and the status and details of the IP whitelist for origin protection. The details includes the IP whitelist used by the website, the latest IP whitelist, and the differences between them.
       *
       * @param request GetOriginProtectionRequest
       * @return GetOriginProtectionResponse
       */
      Models::GetOriginProtectionResponse getOriginProtection(const Models::GetOriginProtectionRequest &request);

      /**
       * @summary Query a Single Origin Rule Configuration
       *
       * @param request GetOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginRuleResponse
       */
      Models::GetOriginRuleResponse getOriginRuleWithOptions(const Models::GetOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a Single Origin Rule Configuration
       *
       * @param request GetOriginRuleRequest
       * @return GetOriginRuleResponse
       */
      Models::GetOriginRuleResponse getOriginRule(const Models::GetOriginRuleRequest &request);

      /**
       * @summary Queries the details of a custom error page based on the error page ID.
       *
       * @param request GetPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageResponse
       */
      Models::GetPageResponse getPageWithOptions(const Models::GetPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom error page based on the error page ID.
       *
       * @param request GetPageRequest
       * @return GetPageResponse
       */
      Models::GetPageResponse getPage(const Models::GetPageRequest &request);

      /**
       * @summary Queries the quotas and quota usage for different cache purge options.
       *
       * @param request GetPurgeQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurgeQuotaResponse
       */
      Models::GetPurgeQuotaResponse getPurgeQuotaWithOptions(const Models::GetPurgeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas and quota usage for different cache purge options.
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
       * @summary Queries the configuration of a single DNS record, such as the record value, priority, and origin authentication setting (exclusive to CNAME records).
       *
       * @param request GetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordResponse
       */
      Models::GetRecordResponse getRecordWithOptions(const Models::GetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a single DNS record, such as the record value, priority, and origin authentication setting (exclusive to CNAME records).
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
       * @summary Queries the configurations of a routine, including the code versions and the configurations of the environments, associated domain names, and associated routes.
       *
       * @param request GetRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineResponse
       */
      Models::GetRoutineResponse getRoutineWithOptions(const Models::GetRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a routine, including the code versions and the configurations of the environments, associated domain names, and associated routes.
       *
       * @param request GetRoutineRequest
       * @return GetRoutineResponse
       */
      Models::GetRoutineResponse getRoutine(const Models::GetRoutineRequest &request);

      /**
       * @summary 查询单条边缘函数路由配置
       *
       * @param request GetRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineRouteResponse
       */
      Models::GetRoutineRouteResponse getRoutineRouteWithOptions(const Models::GetRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单条边缘函数路由配置
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
       * @summary Queries the IP addresses of staging environments for Edge Routine.
       *
       * @param request GetRoutineStagingEnvIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineStagingEnvIpResponse
       */
      Models::GetRoutineStagingEnvIpResponse getRoutineStagingEnvIpWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses of staging environments for Edge Routine.
       *
       * @return GetRoutineStagingEnvIpResponse
       */
      Models::GetRoutineStagingEnvIpResponse getRoutineStagingEnvIp();

      /**
       * @summary Queries the Edge Routine information in your Alibaba Cloud account, including the associated subdomain and created routines.
       *
       * @param request GetRoutineUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoutineUserInfoResponse
       */
      Models::GetRoutineUserInfoResponse getRoutineUserInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Edge Routine information in your Alibaba Cloud account, including the associated subdomain and created routines.
       *
       * @return GetRoutineUserInfoResponse
       */
      Models::GetRoutineUserInfoResponse getRoutineUserInfo();

      /**
       * @summary Queries a specified scheduled prefetch task based on the task ID.
       *
       * @param request GetScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledPreloadJobResponse
       */
      Models::GetScheduledPreloadJobResponse getScheduledPreloadJobWithOptions(const Models::GetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified scheduled prefetch task based on the task ID.
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
       * @summary Queries information about a website based on the website ID.
       *
       * @param request GetSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteResponse
       */
      Models::GetSiteResponse getSiteWithOptions(const Models::GetSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a website based on the website ID.
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
       * @summary Queries a real-time log delivery task.
       *
       * @param request GetSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteDeliveryTaskResponse
       */
      Models::GetSiteDeliveryTaskResponse getSiteDeliveryTaskWithOptions(const Models::GetSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a real-time log delivery task.
       *
       * @param request GetSiteDeliveryTaskRequest
       * @return GetSiteDeliveryTaskResponse
       */
      Models::GetSiteDeliveryTaskResponse getSiteDeliveryTask(const Models::GetSiteDeliveryTaskRequest &request);

      /**
       * @summary Queries the remaining quota for delivering a specific category of real-time logs in a website.
       *
       * @description You can call this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
       * **Take note of the following parameters:**
       * *   ``
       * *   `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
       * *   `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
       * **Response:**
       * *   If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
       *
       * @param request GetSiteLogDeliveryQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteLogDeliveryQuotaResponse
       */
      Models::GetSiteLogDeliveryQuotaResponse getSiteLogDeliveryQuotaWithOptions(const Models::GetSiteLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining quota for delivering a specific category of real-time logs in a website.
       *
       * @description You can call this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
       * **Take note of the following parameters:**
       * *   ``
       * *   `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
       * *   `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
       * **Response:**
       * *   If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
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
       * @summary 获取站点回源客户端证书信息
       *
       * @param request GetSiteOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSiteOriginClientCertificateResponse
       */
      Models::GetSiteOriginClientCertificateResponse getSiteOriginClientCertificateWithOptions(const Models::GetSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取站点回源客户端证书信息
       *
       * @param request GetSiteOriginClientCertificateRequest
       * @return GetSiteOriginClientCertificateResponse
       */
      Models::GetSiteOriginClientCertificateResponse getSiteOriginClientCertificate(const Models::GetSiteOriginClientCertificateRequest &request);

      /**
       * @summary Queries the ESA proxy configuration of a website.
       *
       * @param request GetSitePauseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSitePauseResponse
       */
      Models::GetSitePauseResponse getSitePauseWithOptions(const Models::GetSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ESA proxy configuration of a website.
       *
       * @param request GetSitePauseRequest
       * @return GetSitePauseResponse
       */
      Models::GetSitePauseResponse getSitePause(const Models::GetSitePauseRequest &request);

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
       * @summary Queries the execution status and running information of a file upload task based on the task ID.
       *
       * @param request GetUploadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadTaskResponse
       */
      Models::GetUploadTaskResponse getUploadTaskWithOptions(const Models::GetUploadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status and running information of a file upload task based on the task ID.
       *
       * @param request GetUploadTaskRequest
       * @return GetUploadTaskResponse
       */
      Models::GetUploadTaskResponse getUploadTask(const Models::GetUploadTaskRequest &request);

      /**
       * @summary Queries the information about a log delivery task by account.
       *
       * @description *   This API operation queries the details of a delivery task, including the task name, discard rate, region, log category, status, delivery destination, configuration, and filtering rules.****
       * *   You can call this operation to query detailed information about a log delivery task to analyze log processing efficiency or troubleshoot delivery problems.****
       * *   ****````
       *
       * @param request GetUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserDeliveryTaskResponse
       */
      Models::GetUserDeliveryTaskResponse getUserDeliveryTaskWithOptions(const Models::GetUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a log delivery task by account.
       *
       * @description *   This API operation queries the details of a delivery task, including the task name, discard rate, region, log category, status, delivery destination, configuration, and filtering rules.****
       * *   You can call this operation to query detailed information about a log delivery task to analyze log processing efficiency or troubleshoot delivery problems.****
       * *   ****````
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
       * @summary 查询站点视频处理配置详情
       *
       * @param request GetVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoProcessingResponse
       */
      Models::GetVideoProcessingResponse getVideoProcessingWithOptions(const Models::GetVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点视频处理配置详情
       *
       * @param request GetVideoProcessingRequest
       * @return GetVideoProcessingResponse
       */
      Models::GetVideoProcessingResponse getVideoProcessing(const Models::GetVideoProcessingRequest &request);

      /**
       * @summary This interface is used to obtain the application key (AppKey) for the BOT behavior detection feature in the site\\"s Web Application Firewall (WAF). The key is typically used for authentication and data exchange with the WAF service.
       *
       * @param request GetWafBotAppKeyRequest
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
       * @summary Queries the conditions for matching incoming requests that are configured in a WAF rule category for a website. These conditions define how WAF detects and processes different types of requests.
       *
       * @param request GetWafFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafFilterResponse
       */
      Models::GetWafFilterResponse getWafFilterWithOptions(const Models::GetWafFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the conditions for matching incoming requests that are configured in a WAF rule category for a website. These conditions define how WAF detects and processes different types of requests.
       *
       * @param request GetWafFilterRequest
       * @return GetWafFilterResponse
       */
      Models::GetWafFilterResponse getWafFilter(const Models::GetWafFilterRequest &request);

      /**
       * @summary Get WAF Quota Details
       *
       * @param request GetWafQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafQuotaResponse
       */
      Models::GetWafQuotaResponse getWafQuotaWithOptions(const Models::GetWafQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get WAF Quota Details
       *
       * @param request GetWafQuotaRequest
       * @return GetWafQuotaResponse
       */
      Models::GetWafQuotaResponse getWafQuota(const Models::GetWafQuotaRequest &request);

      /**
       * @summary Get Details of a Single WAF Rule
       *
       * @param request GetWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafRuleResponse
       */
      Models::GetWafRuleResponse getWafRuleWithOptions(const Models::GetWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Details of a Single WAF Rule
       *
       * @param request GetWafRuleRequest
       * @return GetWafRuleResponse
       */
      Models::GetWafRuleResponse getWafRule(const Models::GetWafRuleRequest &request);

      /**
       * @summary Get WAF Ruleset Details
       *
       * @param request GetWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWafRulesetResponse
       */
      Models::GetWafRulesetResponse getWafRulesetWithOptions(const Models::GetWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get WAF Ruleset Details
       *
       * @param request GetWafRulesetRequest
       * @return GetWafRulesetResponse
       */
      Models::GetWafRulesetResponse getWafRuleset(const Models::GetWafRulesetRequest &request);

      /**
       * @summary Query Cache Reserve Instance List
       *
       * @param request ListCacheReserveInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCacheReserveInstancesResponse
       */
      Models::ListCacheReserveInstancesResponse listCacheReserveInstancesWithOptions(const Models::ListCacheReserveInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Cache Reserve Instance List
       *
       * @param request ListCacheReserveInstancesRequest
       * @return ListCacheReserveInstancesResponse
       */
      Models::ListCacheReserveInstancesResponse listCacheReserveInstances(const Models::ListCacheReserveInstancesRequest &request);

      /**
       * @summary Query multiple cache configurations
       *
       * @param request ListCacheRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCacheRulesResponse
       */
      Models::ListCacheRulesResponse listCacheRulesWithOptions(const Models::ListCacheRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple cache configurations
       *
       * @param request ListCacheRulesRequest
       * @return ListCacheRulesResponse
       */
      Models::ListCacheRulesResponse listCacheRules(const Models::ListCacheRulesRequest &request);

      /**
       * @summary Lists certificates of a website.
       *
       * @param request ListCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificatesWithOptions(const Models::ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists certificates of a website.
       *
       * @param request ListCertificatesRequest
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificates(const Models::ListCertificatesRequest &request);

      /**
       * @summary 查询匹配记录名的站点证书列表
       *
       * @param request ListCertificatesByRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesByRecordResponse
       */
      Models::ListCertificatesByRecordResponse listCertificatesByRecordWithOptions(const Models::ListCertificatesByRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询匹配记录名的站点证书列表
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
       * @summary Queries a list of client certificate authority (CA) certificates for a website.
       *
       * @param request ListClientCaCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientCaCertificatesResponse
       */
      Models::ListClientCaCertificatesResponse listClientCaCertificatesWithOptions(const Models::ListClientCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of client certificate authority (CA) certificates for a website.
       *
       * @param request ListClientCaCertificatesRequest
       * @return ListClientCaCertificatesResponse
       */
      Models::ListClientCaCertificatesResponse listClientCaCertificates(const Models::ListClientCaCertificatesRequest &request);

      /**
       * @summary Queries client certificates configured for a website.
       *
       * @param request ListClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientCertificatesResponse
       */
      Models::ListClientCertificatesResponse listClientCertificatesWithOptions(const Models::ListClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries client certificates configured for a website.
       *
       * @param request ListClientCertificatesRequest
       * @return ListClientCertificatesResponse
       */
      Models::ListClientCertificatesResponse listClientCertificates(const Models::ListClientCertificatesRequest &request);

      /**
       * @summary Query the list of compression rules
       *
       * @param request ListCompressionRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompressionRulesResponse
       */
      Models::ListCompressionRulesResponse listCompressionRulesWithOptions(const Models::ListCompressionRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of compression rules
       *
       * @param request ListCompressionRulesRequest
       * @return ListCompressionRulesResponse
       */
      Models::ListCompressionRulesResponse listCompressionRules(const Models::ListCompressionRulesRequest &request);

      /**
       * @summary 批量查询IP是否为VIP
       *
       * @param request ListESAIPInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListESAIPInfoResponse
       */
      Models::ListESAIPInfoResponse listESAIPInfoWithOptions(const Models::ListESAIPInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询IP是否为VIP
       *
       * @param request ListESAIPInfoRequest
       * @return ListESAIPInfoResponse
       */
      Models::ListESAIPInfoResponse listESAIPInfo(const Models::ListESAIPInfoRequest &request);

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
       * @param request ListEdgeRoutinePlansRequest
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
       * @summary Queries the records that are associated with Edge Routine routes for a website.
       *
       * @description >  You can call this operation 100 times per second.
       *
       * @param request ListEdgeRoutineRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeRoutineRecordsResponse
       */
      Models::ListEdgeRoutineRecordsResponse listEdgeRoutineRecordsWithOptions(const Models::ListEdgeRoutineRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the records that are associated with Edge Routine routes for a website.
       *
       * @description >  You can call this operation 100 times per second.
       *
       * @param request ListEdgeRoutineRecordsRequest
       * @return ListEdgeRoutineRecordsResponse
       */
      Models::ListEdgeRoutineRecordsResponse listEdgeRoutineRecords(const Models::ListEdgeRoutineRecordsRequest &request);

      /**
       * @summary List of HTTP Request Header Rules
       *
       * @param request ListHttpRequestHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpRequestHeaderModificationRulesResponse
       */
      Models::ListHttpRequestHeaderModificationRulesResponse listHttpRequestHeaderModificationRulesWithOptions(const Models::ListHttpRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of HTTP Request Header Rules
       *
       * @param request ListHttpRequestHeaderModificationRulesRequest
       * @return ListHttpRequestHeaderModificationRulesResponse
       */
      Models::ListHttpRequestHeaderModificationRulesResponse listHttpRequestHeaderModificationRules(const Models::ListHttpRequestHeaderModificationRulesRequest &request);

      /**
       * @summary List of HTTP Response Header Rules
       *
       * @param request ListHttpResponseHeaderModificationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpResponseHeaderModificationRulesResponse
       */
      Models::ListHttpResponseHeaderModificationRulesResponse listHttpResponseHeaderModificationRulesWithOptions(const Models::ListHttpResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of HTTP Response Header Rules
       *
       * @param request ListHttpResponseHeaderModificationRulesRequest
       * @return ListHttpResponseHeaderModificationRulesResponse
       */
      Models::ListHttpResponseHeaderModificationRulesResponse listHttpResponseHeaderModificationRules(const Models::ListHttpResponseHeaderModificationRulesRequest &request);

      /**
       * @summary Query multiple HTTPS application configurations
       *
       * @param request ListHttpsApplicationConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpsApplicationConfigurationsResponse
       */
      Models::ListHttpsApplicationConfigurationsResponse listHttpsApplicationConfigurationsWithOptions(const Models::ListHttpsApplicationConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple HTTPS application configurations
       *
       * @param request ListHttpsApplicationConfigurationsRequest
       * @return ListHttpsApplicationConfigurationsResponse
       */
      Models::ListHttpsApplicationConfigurationsResponse listHttpsApplicationConfigurations(const Models::ListHttpsApplicationConfigurationsRequest &request);

      /**
       * @summary Query multiple HTTPS basic configurations
       *
       * @param request ListHttpsBasicConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpsBasicConfigurationsResponse
       */
      Models::ListHttpsBasicConfigurationsResponse listHttpsBasicConfigurationsWithOptions(const Models::ListHttpsBasicConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple HTTPS basic configurations
       *
       * @param request ListHttpsBasicConfigurationsRequest
       * @return ListHttpsBasicConfigurationsResponse
       */
      Models::ListHttpsBasicConfigurationsResponse listHttpsBasicConfigurations(const Models::ListHttpsBasicConfigurationsRequest &request);

      /**
       * @summary Query Multiple Site Image Transformation Configurations
       *
       * @param request ListImageTransformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageTransformsResponse
       */
      Models::ListImageTransformsResponse listImageTransformsWithOptions(const Models::ListImageTransformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Multiple Site Image Transformation Configurations
       *
       * @param request ListImageTransformsRequest
       * @return ListImageTransformsResponse
       */
      Models::ListImageTransformsResponse listImageTransforms(const Models::ListImageTransformsRequest &request);

      /**
       * @summary Queries the quota details in a subscription plan.
       *
       * @param request ListInstanceQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceQuotasResponse
       */
      Models::ListInstanceQuotasResponse listInstanceQuotasWithOptions(const Models::ListInstanceQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota details in a subscription plan.
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
       * @summary Lists all key-value pairs in a namespace in your Alibaba Cloud account.
       *
       * @param request ListKvsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKvsResponse
       */
      Models::ListKvsResponse listKvsWithOptions(const Models::ListKvsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all key-value pairs in a namespace in your Alibaba Cloud account.
       *
       * @param request ListKvsRequest
       * @return ListKvsResponse
       */
      Models::ListKvsResponse listKvs(const Models::ListKvsRequest &request);

      /**
       * @summary Queries all custom lists and their details in an Alibaba Cloud account. You can specify query arguments to filter the results and display the returned lists by page.
       *
       * @param tmpReq ListListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListsResponse
       */
      Models::ListListsResponse listListsWithOptions(const Models::ListListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all custom lists and their details in an Alibaba Cloud account. You can specify query arguments to filter the results and display the returned lists by page.
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
       * @summary Query Load Balancer Region List
       *
       * @description When creating a load balancer \\"based on country/region scheduling\\" strategy through OpenAPI, use the code of primary or secondary regions to represent traffic from this geographical area.
       *
       * @param request ListLoadBalancerRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancerRegionsResponse
       */
      Models::ListLoadBalancerRegionsResponse listLoadBalancerRegionsWithOptions(const Models::ListLoadBalancerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Load Balancer Region List
       *
       * @description When creating a load balancer \\"based on country/region scheduling\\" strategy through OpenAPI, use the code of primary or secondary regions to represent traffic from this geographical area.
       *
       * @param request ListLoadBalancerRegionsRequest
       * @return ListLoadBalancerRegionsResponse
       */
      Models::ListLoadBalancerRegionsResponse listLoadBalancerRegions(const Models::ListLoadBalancerRegionsRequest &request);

      /**
       * @summary Query the list of load balancers
       *
       * @param request ListLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancersWithOptions(const Models::ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of load balancers
       *
       * @param request ListLoadBalancersRequest
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancers(const Models::ListLoadBalancersRequest &request);

      /**
       * @summary List Custom Managed Rule Groups
       *
       * @param request ListManagedRulesGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedRulesGroupsResponse
       */
      Models::ListManagedRulesGroupsResponse listManagedRulesGroupsWithOptions(const Models::ListManagedRulesGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Custom Managed Rule Groups
       *
       * @param request ListManagedRulesGroupsRequest
       * @return ListManagedRulesGroupsResponse
       */
      Models::ListManagedRulesGroupsResponse listManagedRulesGroups(const Models::ListManagedRulesGroupsRequest &request);

      /**
       * @summary Query multiple network optimization configurations
       *
       * @param request ListNetworkOptimizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkOptimizationsResponse
       */
      Models::ListNetworkOptimizationsResponse listNetworkOptimizationsWithOptions(const Models::ListNetworkOptimizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple network optimization configurations
       *
       * @param request ListNetworkOptimizationsRequest
       * @return ListNetworkOptimizationsResponse
       */
      Models::ListNetworkOptimizationsResponse listNetworkOptimizations(const Models::ListNetworkOptimizationsRequest &request);

      /**
       * @summary 查询源服务器CA证书列表
       *
       * @param request ListOriginCaCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginCaCertificatesResponse
       */
      Models::ListOriginCaCertificatesResponse listOriginCaCertificatesWithOptions(const Models::ListOriginCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询源服务器CA证书列表
       *
       * @param request ListOriginCaCertificatesRequest
       * @return ListOriginCaCertificatesResponse
       */
      Models::ListOriginCaCertificatesResponse listOriginCaCertificates(const Models::ListOriginCaCertificatesRequest &request);

      /**
       * @summary 查询域名回源客户端证书列表
       *
       * @param request ListOriginClientCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginClientCertificatesResponse
       */
      Models::ListOriginClientCertificatesResponse listOriginClientCertificatesWithOptions(const Models::ListOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名回源客户端证书列表
       *
       * @param request ListOriginClientCertificatesRequest
       * @return ListOriginClientCertificatesResponse
       */
      Models::ListOriginClientCertificatesResponse listOriginClientCertificates(const Models::ListOriginClientCertificatesRequest &request);

      /**
       * @summary List Origin Pools
       *
       * @param request ListOriginPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginPoolsResponse
       */
      Models::ListOriginPoolsResponse listOriginPoolsWithOptions(const Models::ListOriginPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Origin Pools
       *
       * @param request ListOriginPoolsRequest
       * @return ListOriginPoolsResponse
       */
      Models::ListOriginPoolsResponse listOriginPools(const Models::ListOriginPoolsRequest &request);

      /**
       * @summary Query multiple origin rule configurations
       *
       * @param request ListOriginRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOriginRulesResponse
       */
      Models::ListOriginRulesResponse listOriginRulesWithOptions(const Models::ListOriginRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple origin rule configurations
       *
       * @param request ListOriginRulesRequest
       * @return ListOriginRulesResponse
       */
      Models::ListOriginRulesResponse listOriginRules(const Models::ListOriginRulesRequest &request);

      /**
       * @summary Lists all custom error pages that you created. You can define the page number and the number of entries per page to display the response.
       *
       * @param tmpReq ListPagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPagesResponse
       */
      Models::ListPagesResponse listPagesWithOptions(const Models::ListPagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all custom error pages that you created. You can define the page number and the number of entries per page to display the response.
       *
       * @param request ListPagesRequest
       * @return ListPagesResponse
       */
      Models::ListPagesResponse listPages(const Models::ListPagesRequest &request);

      /**
       * @summary Queries a list of Domain Name System (DNS) records of a website, including the record value, priority, and authentication configurations. Supports filtering by specifying parameters such as RecordName and RecordMatchType.
       *
       * @description The DNS records related to Edge Container, Edge Routine, and TCP/UDP proxy are not returned in this operation.
       *
       * @param request ListRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecordsResponse
       */
      Models::ListRecordsResponse listRecordsWithOptions(const Models::ListRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Domain Name System (DNS) records of a website, including the record value, priority, and authentication configurations. Supports filtering by specifying parameters such as RecordName and RecordMatchType.
       *
       * @description The DNS records related to Edge Container, Edge Routine, and TCP/UDP proxy are not returned in this operation.
       *
       * @param request ListRecordsRequest
       * @return ListRecordsResponse
       */
      Models::ListRecordsResponse listRecords(const Models::ListRecordsRequest &request);

      /**
       * @summary Query Redirect Rule List
       *
       * @param request ListRedirectRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRedirectRulesResponse
       */
      Models::ListRedirectRulesResponse listRedirectRulesWithOptions(const Models::ListRedirectRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Redirect Rule List
       *
       * @param request ListRedirectRulesRequest
       * @return ListRedirectRulesResponse
       */
      Models::ListRedirectRulesResponse listRedirectRules(const Models::ListRedirectRulesRequest &request);

      /**
       * @summary List of Rewrite URL Rules
       *
       * @param request ListRewriteUrlRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRewriteUrlRulesResponse
       */
      Models::ListRewriteUrlRulesResponse listRewriteUrlRulesWithOptions(const Models::ListRewriteUrlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of Rewrite URL Rules
       *
       * @param request ListRewriteUrlRulesRequest
       * @return ListRewriteUrlRulesResponse
       */
      Models::ListRewriteUrlRulesResponse listRewriteUrlRules(const Models::ListRewriteUrlRulesRequest &request);

      /**
       * @summary Lists the regions to which Edge Routine code can be released for canary deployment.
       *
       * @param request ListRoutineCanaryAreasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineCanaryAreasResponse
       */
      Models::ListRoutineCanaryAreasResponse listRoutineCanaryAreasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the regions to which Edge Routine code can be released for canary deployment.
       *
       * @return ListRoutineCanaryAreasResponse
       */
      Models::ListRoutineCanaryAreasResponse listRoutineCanaryAreas();

      /**
       * @summary 查询Routine的代码版本列表
       *
       * @param request ListRoutineCodeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineCodeVersionsResponse
       */
      Models::ListRoutineCodeVersionsResponse listRoutineCodeVersionsWithOptions(const Models::ListRoutineCodeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Routine的代码版本列表
       *
       * @param request ListRoutineCodeVersionsRequest
       * @return ListRoutineCodeVersionsResponse
       */
      Models::ListRoutineCodeVersionsResponse listRoutineCodeVersions(const Models::ListRoutineCodeVersionsRequest &request);

      /**
       * @summary 查询函数关联域名列表
       *
       * @param request ListRoutineRelatedRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineRelatedRecordsResponse
       */
      Models::ListRoutineRelatedRecordsResponse listRoutineRelatedRecordsWithOptions(const Models::ListRoutineRelatedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询函数关联域名列表
       *
       * @param request ListRoutineRelatedRecordsRequest
       * @return ListRoutineRelatedRecordsResponse
       */
      Models::ListRoutineRelatedRecordsResponse listRoutineRelatedRecords(const Models::ListRoutineRelatedRecordsRequest &request);

      /**
       * @summary 查询边缘程序的函数路由列表
       *
       * @param request ListRoutineRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutineRoutesResponse
       */
      Models::ListRoutineRoutesResponse listRoutineRoutesWithOptions(const Models::ListRoutineRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询边缘程序的函数路由列表
       *
       * @param request ListRoutineRoutesRequest
       * @return ListRoutineRoutesResponse
       */
      Models::ListRoutineRoutesResponse listRoutineRoutes(const Models::ListRoutineRoutesRequest &request);

      /**
       * @summary Lists the plans in a scheduled prefetch task by task ID.
       *
       * @param request ListScheduledPreloadExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPreloadExecutionsResponse
       */
      Models::ListScheduledPreloadExecutionsResponse listScheduledPreloadExecutionsWithOptions(const Models::ListScheduledPreloadExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the plans in a scheduled prefetch task by task ID.
       *
       * @param request ListScheduledPreloadExecutionsRequest
       * @return ListScheduledPreloadExecutionsResponse
       */
      Models::ListScheduledPreloadExecutionsResponse listScheduledPreloadExecutions(const Models::ListScheduledPreloadExecutionsRequest &request);

      /**
       * @summary Queries the scheduled prefetch tasks for a website.
       *
       * @param request ListScheduledPreloadJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPreloadJobsResponse
       */
      Models::ListScheduledPreloadJobsResponse listScheduledPreloadJobsWithOptions(const Models::ListScheduledPreloadJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduled prefetch tasks for a website.
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
       * @summary 查询站点的函数路由列表
       *
       * @param request ListSiteRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSiteRoutesResponse
       */
      Models::ListSiteRoutesResponse listSiteRoutesWithOptions(const Models::ListSiteRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点的函数路由列表
       *
       * @param request ListSiteRoutesRequest
       * @return ListSiteRoutesResponse
       */
      Models::ListSiteRoutesResponse listSiteRoutes(const Models::ListSiteRoutesRequest &request);

      /**
       * @summary Queries the information about websites in your account, such as the name, status, and configuration of each website.
       *
       * @param tmpReq ListSitesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSitesResponse
       */
      Models::ListSitesResponse listSitesWithOptions(const Models::ListSitesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about websites in your account, such as the name, status, and configuration of each website.
       *
       * @param request ListSitesRequest
       * @return ListSitesResponse
       */
      Models::ListSitesResponse listSites(const Models::ListSitesRequest &request);

      /**
       * @summary Queries tags based on the region ID and resource type.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags based on the region ID and resource type.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the execution status and running information of file upload tasks based on the task time and type.
       *
       * @param request ListUploadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUploadTasksResponse
       */
      Models::ListUploadTasksResponse listUploadTasksWithOptions(const Models::ListUploadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status and running information of file upload tasks based on the task time and type.
       *
       * @param request ListUploadTasksRequest
       * @return ListUploadTasksResponse
       */
      Models::ListUploadTasksResponse listUploadTasks(const Models::ListUploadTasksRequest &request);

      /**
       * @summary 查询网页观测配置列表
       *
       * @param request ListUrlObservationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUrlObservationsResponse
       */
      Models::ListUrlObservationsResponse listUrlObservationsWithOptions(const Models::ListUrlObservationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网页观测配置列表
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
       * @summary Queries the plans that you purchased and the details of the plans.
       *
       * @param request ListUserRatePlanInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRatePlanInstancesResponse
       */
      Models::ListUserRatePlanInstancesResponse listUserRatePlanInstancesWithOptions(const Models::ListUserRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the plans that you purchased and the details of the plans.
       *
       * @param request ListUserRatePlanInstancesRequest
       * @return ListUserRatePlanInstancesResponse
       */
      Models::ListUserRatePlanInstancesResponse listUserRatePlanInstances(const Models::ListUserRatePlanInstancesRequest &request);

      /**
       * @summary 查询用户的Routine列表
       *
       * @param request ListUserRoutinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRoutinesResponse
       */
      Models::ListUserRoutinesResponse listUserRoutinesWithOptions(const Models::ListUserRoutinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的Routine列表
       *
       * @param request ListUserRoutinesRequest
       * @return ListUserRoutinesResponse
       */
      Models::ListUserRoutinesResponse listUserRoutines(const Models::ListUserRoutinesRequest &request);

      /**
       * @summary 查询站点视频处理配置列表
       *
       * @param request ListVideoProcessingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVideoProcessingsResponse
       */
      Models::ListVideoProcessingsResponse listVideoProcessingsWithOptions(const Models::ListVideoProcessingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询站点视频处理配置列表
       *
       * @param request ListVideoProcessingsRequest
       * @return ListVideoProcessingsResponse
       */
      Models::ListVideoProcessingsResponse listVideoProcessings(const Models::ListVideoProcessingsRequest &request);

      /**
       * @summary List WAF Managed Rules
       *
       * @param tmpReq ListWafManagedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafManagedRulesResponse
       */
      Models::ListWafManagedRulesResponse listWafManagedRulesWithOptions(const Models::ListWafManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List WAF Managed Rules
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
       * @summary List WAF Rules
       *
       * @param tmpReq ListWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafRulesResponse
       */
      Models::ListWafRulesResponse listWafRulesWithOptions(const Models::ListWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List WAF Rules
       *
       * @param request ListWafRulesRequest
       * @return ListWafRulesResponse
       */
      Models::ListWafRulesResponse listWafRules(const Models::ListWafRulesRequest &request);

      /**
       * @summary List WAF Rule Sets
       *
       * @param tmpReq ListWafRulesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafRulesetsResponse
       */
      Models::ListWafRulesetsResponse listWafRulesetsWithOptions(const Models::ListWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List WAF Rule Sets
       *
       * @param request ListWafRulesetsRequest
       * @return ListWafRulesetsResponse
       */
      Models::ListWafRulesetsResponse listWafRulesets(const Models::ListWafRulesetsRequest &request);

      /**
       * @summary List WAF Template Rules
       *
       * @param tmpReq ListWafTemplateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafTemplateRulesResponse
       */
      Models::ListWafTemplateRulesResponse listWafTemplateRulesWithOptions(const Models::ListWafTemplateRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List WAF Template Rules
       *
       * @param request ListWafTemplateRulesRequest
       * @return ListWafTemplateRulesResponse
       */
      Models::ListWafTemplateRulesResponse listWafTemplateRules(const Models::ListWafTemplateRulesRequest &request);

      /**
       * @summary List WAF Rule Usage
       *
       * @param request ListWafUsageOfRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWafUsageOfRulesResponse
       */
      Models::ListWafUsageOfRulesResponse listWafUsageOfRulesWithOptions(const Models::ListWafUsageOfRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List WAF Rule Usage
       *
       * @param request ListWafUsageOfRulesRequest
       * @return ListWafUsageOfRulesResponse
       */
      Models::ListWafUsageOfRulesResponse listWafUsageOfRules(const Models::ListWafUsageOfRulesRequest &request);

      /**
       * @summary Queries the information about waiting room events for a waiting room.
       *
       * @description You can call this operation to query details of all waiting room events related to a waiting room in a website.
       *
       * @param request ListWaitingRoomEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomEventsResponse
       */
      Models::ListWaitingRoomEventsResponse listWaitingRoomEventsWithOptions(const Models::ListWaitingRoomEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about waiting room events for a waiting room.
       *
       * @description You can call this operation to query details of all waiting room events related to a waiting room in a website.
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
       * @summary Queries the information about all waiting rooms in a website.
       *
       * @description You can call this operation to query detailed configurations about all waiting rooms in a website, including the status, name, and queuing rules of each waiting room.
       *
       * @param request ListWaitingRoomsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingRoomsResponse
       */
      Models::ListWaitingRoomsResponse listWaitingRoomsWithOptions(const Models::ListWaitingRoomsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all waiting rooms in a website.
       *
       * @description You can call this operation to query detailed configurations about all waiting rooms in a website, including the status, name, and queuing rules of each waiting room.
       *
       * @param request ListWaitingRoomsRequest
       * @return ListWaitingRoomsResponse
       */
      Models::ListWaitingRoomsResponse listWaitingRooms(const Models::ListWaitingRoomsRequest &request);

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
       * @summary Prefetches cache.
       *
       * @param tmpReq PreloadCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadCachesResponse
       */
      Models::PreloadCachesResponse preloadCachesWithOptions(const Models::PreloadCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches cache.
       *
       * @param request PreloadCachesRequest
       * @return PreloadCachesResponse
       */
      Models::PreloadCachesResponse preloadCaches(const Models::PreloadCachesRequest &request);

      /**
       * @summary Releases a specific version of a containerized application. You can call this operation to iterate an application.
       *
       * @param tmpReq PublishEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishEdgeContainerAppVersionResponse
       */
      Models::PublishEdgeContainerAppVersionResponse publishEdgeContainerAppVersionWithOptions(const Models::PublishEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a specific version of a containerized application. You can call this operation to iterate an application.
       *
       * @param request PublishEdgeContainerAppVersionRequest
       * @return PublishEdgeContainerAppVersionResponse
       */
      Models::PublishEdgeContainerAppVersionResponse publishEdgeContainerAppVersion(const Models::PublishEdgeContainerAppVersionRequest &request);

      /**
       * @summary Releases a code version of a routine to the staging, canary, or production environment. You can specify the regions where the canary environment is deployed to release your code.
       *
       * @param request PublishRoutineCodeVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRoutineCodeVersionResponse
       */
      Models::PublishRoutineCodeVersionResponse publishRoutineCodeVersionWithOptions(const Models::PublishRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a code version of a routine to the staging, canary, or production environment. You can specify the regions where the canary environment is deployed to release your code.
       *
       * @param request PublishRoutineCodeVersionRequest
       * @return PublishRoutineCodeVersionResponse
       */
      Models::PublishRoutineCodeVersionResponse publishRoutineCodeVersion(const Models::PublishRoutineCodeVersionRequest &request);

      /**
       * @summary New Purchase of Cache Retention
       *
       * @param request PurchaseCacheReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseCacheReserveResponse
       */
      Models::PurchaseCacheReserveResponse purchaseCacheReserveWithOptions(const Models::PurchaseCacheReserveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary New Purchase of Cache Retention
       *
       * @param request PurchaseCacheReserveRequest
       * @return PurchaseCacheReserveResponse
       */
      Models::PurchaseCacheReserveResponse purchaseCacheReserve(const Models::PurchaseCacheReserveRequest &request);

      /**
       * @summary Purchase New Package
       *
       * @description 1. The package name and code can be obtained from the DescribeRatePlanPrice interface.
       * 2. If the acceleration area is not overseas, the site must have successfully completed the filing process.
       *
       * @param request PurchaseRatePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseRatePlanResponse
       */
      Models::PurchaseRatePlanResponse purchaseRatePlanWithOptions(const Models::PurchaseRatePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchase New Package
       *
       * @description 1. The package name and code can be obtained from the DescribeRatePlanPrice interface.
       * 2. If the acceleration area is not overseas, the site must have successfully completed the filing process.
       *
       * @param request PurchaseRatePlanRequest
       * @return PurchaseRatePlanResponse
       */
      Models::PurchaseRatePlanResponse purchaseRatePlan(const Models::PurchaseRatePlanRequest &request);

      /**
       * @summary Cache Refresh
       *
       * @param tmpReq PurgeCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeCachesResponse
       */
      Models::PurgeCachesResponse purgeCachesWithOptions(const Models::PurgeCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cache Refresh
       *
       * @param request PurgeCachesRequest
       * @return PurgeCachesResponse
       */
      Models::PurgeCachesResponse purgeCaches(const Models::PurgeCachesRequest &request);

      /**
       * @summary Configures a key-value pair for a namespace. The request body can be up to 2 MB.
       *
       * @param request PutKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutKvResponse
       */
      Models::PutKvResponse putKvWithOptions(const Models::PutKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a key-value pair for a namespace. The request body can be up to 2 MB.
       *
       * @param request PutKvRequest
       * @return PutKvResponse
       */
      Models::PutKvResponse putKv(const Models::PutKvRequest &request);

      /**
       * @summary Configures a large key-value pair for a namespace. The request body can be up to 25 MB.
       *
       * @description This operation allows you to upload a larger request body than by using [PutKv](~~PutKv~~). For small request bodies, we recommend that you use [PutKv](~~PutKv~~) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and PutKvWithHighCapacityAdvance to call the operation.
       *     func TestPutKvWithHighCapacity() {
       *     	// Initialize the configurations.
       *     	cfg := new(openapi.Config)
       *     	cfg.SetAccessKeyId("xxxxxxxxx")
       *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
       *     	cli, err := NewClient(cfg)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	runtime := &util.RuntimeOptions{}
       *     	// Construct a request for uploading key-value pairs.
       *     	namespace := "test-put-kv"
       *     	key := "test_PutKvWithHighCapacity_0"
       *     	value := strings.Repeat("t", 10*1024*1024)
       *     	rawReq := &PutKvRequest{
       *     		Namespace: &namespace,
       *     		Key:       &key,
       *     		Value:     &value,
       *     	}
       *     	payload, err := json.Marshal(rawReq)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	// If the payload is greater than 2 MB, call the PutKvWithHighCapacity operation for upload.
       *     	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
       *     		Namespace: &namespace,
       *     		Key:       &key,
       *     		UrlObject: bytes.NewReader([]byte(payload)),
       *     	}
       *     	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	return nil
       *     }
       *
       * @param request PutKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutKvWithHighCapacityResponse
       */
      Models::PutKvWithHighCapacityResponse putKvWithHighCapacityWithOptions(const Models::PutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a large key-value pair for a namespace. The request body can be up to 25 MB.
       *
       * @description This operation allows you to upload a larger request body than by using [PutKv](~~PutKv~~). For small request bodies, we recommend that you use [PutKv](~~PutKv~~) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and PutKvWithHighCapacityAdvance to call the operation.
       *     func TestPutKvWithHighCapacity() {
       *     	// Initialize the configurations.
       *     	cfg := new(openapi.Config)
       *     	cfg.SetAccessKeyId("xxxxxxxxx")
       *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
       *     	cli, err := NewClient(cfg)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	runtime := &util.RuntimeOptions{}
       *     	// Construct a request for uploading key-value pairs.
       *     	namespace := "test-put-kv"
       *     	key := "test_PutKvWithHighCapacity_0"
       *     	value := strings.Repeat("t", 10*1024*1024)
       *     	rawReq := &PutKvRequest{
       *     		Namespace: &namespace,
       *     		Key:       &key,
       *     		Value:     &value,
       *     	}
       *     	payload, err := json.Marshal(rawReq)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	// If the payload is greater than 2 MB, call the PutKvWithHighCapacity operation for upload.
       *     	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
       *     		Namespace: &namespace,
       *     		Key:       &key,
       *     		UrlObject: bytes.NewReader([]byte(payload)),
       *     	}
       *     	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
       *     	if err != nil {
       *     		return err
       *     	}
       *     	return nil
       *     }
       *
       * @param request PutKvWithHighCapacityRequest
       * @return PutKvWithHighCapacityResponse
       */
      Models::PutKvWithHighCapacityResponse putKvWithHighCapacity(const Models::PutKvWithHighCapacityRequest &request);

      Models::PutKvWithHighCapacityResponse putKvWithHighCapacityAdvance(const Models::PutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds the staging environment for containerized applications.
       *
       * @param request RebuildEdgeContainerAppStagingEnvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildEdgeContainerAppStagingEnvResponse
       */
      Models::RebuildEdgeContainerAppStagingEnvResponse rebuildEdgeContainerAppStagingEnvWithOptions(const Models::RebuildEdgeContainerAppStagingEnvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds the staging environment for containerized applications.
       *
       * @param request RebuildEdgeContainerAppStagingEnvRequest
       * @return RebuildEdgeContainerAppStagingEnvResponse
       */
      Models::RebuildEdgeContainerAppStagingEnvResponse rebuildEdgeContainerAppStagingEnv(const Models::RebuildEdgeContainerAppStagingEnvRequest &request);

      /**
       * @summary Resets the progress of a scheduled prefetch task and starts the prefetch from the beginning.
       *
       * @param request ResetScheduledPreloadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetScheduledPreloadJobResponse
       */
      Models::ResetScheduledPreloadJobResponse resetScheduledPreloadJobWithOptions(const Models::ResetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the progress of a scheduled prefetch task and starts the prefetch from the beginning.
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
       * @summary Rolls back a version of a containerized application.
       *
       * @param request RollbackEdgeContainerAppVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackEdgeContainerAppVersionResponse
       */
      Models::RollbackEdgeContainerAppVersionResponse rollbackEdgeContainerAppVersionWithOptions(const Models::RollbackEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a version of a containerized application.
       *
       * @param request RollbackEdgeContainerAppVersionRequest
       * @return RollbackEdgeContainerAppVersionResponse
       */
      Models::RollbackEdgeContainerAppVersionResponse rollbackEdgeContainerAppVersion(const Models::RollbackEdgeContainerAppVersionRequest &request);

      /**
       * @summary Configures whether to enable certificates and update certificate information for a website.
       *
       * @param request SetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCertificateResponse
       */
      Models::SetCertificateResponse setCertificateWithOptions(const Models::SetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures whether to enable certificates and update certificate information for a website.
       *
       * @param request SetCertificateRequest
       * @return SetCertificateResponse
       */
      Models::SetCertificateResponse setCertificate(const Models::SetCertificateRequest &request);

      /**
       * @summary Associates domain names with a client CA certificate. If no certificate is specified, domain names are associated with an Edge Security Acceleration (ESA)-managed CA certificate.
       *
       * @param tmpReq SetClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetClientCertificateHostnamesResponse
       */
      Models::SetClientCertificateHostnamesResponse setClientCertificateHostnamesWithOptions(const Models::SetClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates domain names with a client CA certificate. If no certificate is specified, domain names are associated with an Edge Security Acceleration (ESA)-managed CA certificate.
       *
       * @param request SetClientCertificateHostnamesRequest
       * @return SetClientCertificateHostnamesResponse
       */
      Models::SetClientCertificateHostnamesResponse setClientCertificateHostnames(const Models::SetClientCertificateHostnamesRequest &request);

      /**
       * @summary Configures smart HTTP DDoS protection.
       *
       * @param request SetHttpDDoSAttackIntelligentProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHttpDDoSAttackIntelligentProtectionResponse
       */
      Models::SetHttpDDoSAttackIntelligentProtectionResponse setHttpDDoSAttackIntelligentProtectionWithOptions(const Models::SetHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures smart HTTP DDoS protection.
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
       * @summary 为域名回源客户端证书绑定域名
       *
       * @param tmpReq SetOriginClientCertificateHostnamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetOriginClientCertificateHostnamesResponse
       */
      Models::SetOriginClientCertificateHostnamesResponse setOriginClientCertificateHostnamesWithOptions(const Models::SetOriginClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为域名回源客户端证书绑定域名
       *
       * @param request SetOriginClientCertificateHostnamesRequest
       * @return SetOriginClientCertificateHostnamesResponse
       */
      Models::SetOriginClientCertificateHostnamesResponse setOriginClientCertificateHostnames(const Models::SetOriginClientCertificateHostnamesRequest &request);

      /**
       * @summary Starts a scheduled prefetch plan based on the plan ID.
       *
       * @param request StartScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartScheduledPreloadExecutionResponse
       */
      Models::StartScheduledPreloadExecutionResponse startScheduledPreloadExecutionWithOptions(const Models::StartScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a scheduled prefetch plan based on the plan ID.
       *
       * @param request StartScheduledPreloadExecutionRequest
       * @return StartScheduledPreloadExecutionResponse
       */
      Models::StartScheduledPreloadExecutionResponse startScheduledPreloadExecution(const Models::StartScheduledPreloadExecutionRequest &request);

      /**
       * @summary Stops a scheduled prefetch plan based on the plan ID.
       *
       * @param request StopScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopScheduledPreloadExecutionResponse
       */
      Models::StopScheduledPreloadExecutionResponse stopScheduledPreloadExecutionWithOptions(const Models::StopScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a scheduled prefetch plan based on the plan ID.
       *
       * @param request StopScheduledPreloadExecutionRequest
       * @return StopScheduledPreloadExecutionResponse
       */
      Models::StopScheduledPreloadExecutionResponse stopScheduledPreloadExecution(const Models::StopScheduledPreloadExecutionRequest &request);

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
       * @summary 缓存保持变配
       *
       * @param request UpdateCacheReserveSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheReserveSpecResponse
       */
      Models::UpdateCacheReserveSpecResponse updateCacheReserveSpecWithOptions(const Models::UpdateCacheReserveSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 缓存保持变配
       *
       * @param request UpdateCacheReserveSpecRequest
       * @return UpdateCacheReserveSpecResponse
       */
      Models::UpdateCacheReserveSpecResponse updateCacheReserveSpec(const Models::UpdateCacheReserveSpecRequest &request);

      /**
       * @summary Modify cache configuration
       *
       * @param request UpdateCacheRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheRuleResponse
       */
      Models::UpdateCacheRuleResponse updateCacheRuleWithOptions(const Models::UpdateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify cache configuration
       *
       * @param request UpdateCacheRuleRequest
       * @return UpdateCacheRuleResponse
       */
      Models::UpdateCacheRuleResponse updateCacheRule(const Models::UpdateCacheRuleRequest &request);

      /**
       * @summary Modifies the cache tag configuration of your website. You can call this operation when you need to specify tags in the Cache-Tag response header to use the purge by cache tag feature.
       *
       * @param request UpdateCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCacheTagResponse
       */
      Models::UpdateCacheTagResponse updateCacheTagWithOptions(const Models::UpdateCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cache tag configuration of your website. You can call this operation when you need to specify tags in the Cache-Tag response header to use the purge by cache tag feature.
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
       * @summary Modify compression rule
       *
       * @param request UpdateCompressionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCompressionRuleResponse
       */
      Models::UpdateCompressionRuleResponse updateCompressionRuleWithOptions(const Models::UpdateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify compression rule
       *
       * @param request UpdateCompressionRuleRequest
       * @return UpdateCompressionRuleResponse
       */
      Models::UpdateCompressionRuleResponse updateCompressionRule(const Models::UpdateCompressionRuleRequest &request);

      /**
       * @summary Modifies the configuration of the Chinese mainland network access optimization.
       *
       * @param request UpdateCrossBorderOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCrossBorderOptimizationResponse
       */
      Models::UpdateCrossBorderOptimizationResponse updateCrossBorderOptimizationWithOptions(const Models::UpdateCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of the Chinese mainland network access optimization.
       *
       * @param request UpdateCrossBorderOptimizationRequest
       * @return UpdateCrossBorderOptimizationResponse
       */
      Models::UpdateCrossBorderOptimizationResponse updateCrossBorderOptimization(const Models::UpdateCrossBorderOptimizationRequest &request);

      /**
       * @summary Modifies the configurations of a custom scenario-specific policy.
       *
       * @param request UpdateCustomScenePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomScenePolicyResponse
       */
      Models::UpdateCustomScenePolicyResponse updateCustomScenePolicyWithOptions(const Models::UpdateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a custom scenario-specific policy.
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
       * @summary Updates the log collection configuration of a containerized application.
       *
       * @param request UpdateEdgeContainerAppLogRiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeContainerAppLogRiverResponse
       */
      Models::UpdateEdgeContainerAppLogRiverResponse updateEdgeContainerAppLogRiverWithOptions(const Models::UpdateEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the log collection configuration of a containerized application.
       *
       * @param request UpdateEdgeContainerAppLogRiverRequest
       * @return UpdateEdgeContainerAppLogRiverResponse
       */
      Models::UpdateEdgeContainerAppLogRiverResponse updateEdgeContainerAppLogRiver(const Models::UpdateEdgeContainerAppLogRiverRequest &request);

      /**
       * @summary 更新边缘容器资源预留配置
       *
       * @param tmpReq UpdateEdgeContainerAppResourceReserveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeContainerAppResourceReserveResponse
       */
      Models::UpdateEdgeContainerAppResourceReserveResponse updateEdgeContainerAppResourceReserveWithOptions(const Models::UpdateEdgeContainerAppResourceReserveRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新边缘容器资源预留配置
       *
       * @param request UpdateEdgeContainerAppResourceReserveRequest
       * @return UpdateEdgeContainerAppResourceReserveResponse
       */
      Models::UpdateEdgeContainerAppResourceReserveResponse updateEdgeContainerAppResourceReserve(const Models::UpdateEdgeContainerAppResourceReserveRequest &request);

      /**
       * @summary Modify HTTP Request Header Rules
       *
       * @param tmpReq UpdateHttpRequestHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpRequestHeaderModificationRuleResponse updateHttpRequestHeaderModificationRuleWithOptions(const Models::UpdateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify HTTP Request Header Rules
       *
       * @param request UpdateHttpRequestHeaderModificationRuleRequest
       * @return UpdateHttpRequestHeaderModificationRuleResponse
       */
      Models::UpdateHttpRequestHeaderModificationRuleResponse updateHttpRequestHeaderModificationRule(const Models::UpdateHttpRequestHeaderModificationRuleRequest &request);

      /**
       * @summary Modify HTTP response header rules
       *
       * @param tmpReq UpdateHttpResponseHeaderModificationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpResponseHeaderModificationRuleResponse updateHttpResponseHeaderModificationRuleWithOptions(const Models::UpdateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify HTTP response header rules
       *
       * @param request UpdateHttpResponseHeaderModificationRuleRequest
       * @return UpdateHttpResponseHeaderModificationRuleResponse
       */
      Models::UpdateHttpResponseHeaderModificationRuleResponse updateHttpResponseHeaderModificationRule(const Models::UpdateHttpResponseHeaderModificationRuleRequest &request);

      /**
       * @summary Modify HTTPS Application Configuration
       *
       * @param request UpdateHttpsApplicationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpsApplicationConfigurationResponse
       */
      Models::UpdateHttpsApplicationConfigurationResponse updateHttpsApplicationConfigurationWithOptions(const Models::UpdateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify HTTPS Application Configuration
       *
       * @param request UpdateHttpsApplicationConfigurationRequest
       * @return UpdateHttpsApplicationConfigurationResponse
       */
      Models::UpdateHttpsApplicationConfigurationResponse updateHttpsApplicationConfiguration(const Models::UpdateHttpsApplicationConfigurationRequest &request);

      /**
       * @summary Modify HTTPS Basic Configuration
       *
       * @param request UpdateHttpsBasicConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpsBasicConfigurationResponse
       */
      Models::UpdateHttpsBasicConfigurationResponse updateHttpsBasicConfigurationWithOptions(const Models::UpdateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify HTTPS Basic Configuration
       *
       * @param request UpdateHttpsBasicConfigurationRequest
       * @return UpdateHttpsBasicConfigurationResponse
       */
      Models::UpdateHttpsBasicConfigurationResponse updateHttpsBasicConfiguration(const Models::UpdateHttpsBasicConfigurationRequest &request);

      /**
       * @summary Modifies the IPv6 configuration of a website.
       *
       * @param request UpdateIPv6Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIPv6Response
       */
      Models::UpdateIPv6Response updateIPv6WithOptions(const Models::UpdateIPv6Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IPv6 configuration of a website.
       *
       * @param request UpdateIPv6Request
       * @return UpdateIPv6Response
       */
      Models::UpdateIPv6Response updateIPv6(const Models::UpdateIPv6Request &request);

      /**
       * @summary Modify Site Image Transformation Configuration
       *
       * @param request UpdateImageTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageTransformResponse
       */
      Models::UpdateImageTransformResponse updateImageTransformWithOptions(const Models::UpdateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Site Image Transformation Configuration
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
       * @summary Modify Load Balancer
       *
       * @description Through this interface, you can modify multiple configurations of the load balancer, including but not limited to the name of the load balancer, whether to enable acceleration, session persistence strategy, and various advanced settings related to traffic routing.>Notice: Changes to certain parameters may affect the stability of existing services, please operate with caution.
       *
       * @param tmpReq UpdateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerResponse
       */
      Models::UpdateLoadBalancerResponse updateLoadBalancerWithOptions(const Models::UpdateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Load Balancer
       *
       * @description Through this interface, you can modify multiple configurations of the load balancer, including but not limited to the name of the load balancer, whether to enable acceleration, session persistence strategy, and various advanced settings related to traffic routing.>Notice: Changes to certain parameters may affect the stability of existing services, please operate with caution.
       *
       * @param request UpdateLoadBalancerRequest
       * @return UpdateLoadBalancerResponse
       */
      Models::UpdateLoadBalancerResponse updateLoadBalancer(const Models::UpdateLoadBalancerRequest &request);

      /**
       * @summary Modifies the configuration of managed transforms for your website.
       *
       * @param request UpdateManagedTransformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateManagedTransformResponse
       */
      Models::UpdateManagedTransformResponse updateManagedTransformWithOptions(const Models::UpdateManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of managed transforms for your website.
       *
       * @param request UpdateManagedTransformRequest
       * @return UpdateManagedTransformResponse
       */
      Models::UpdateManagedTransformResponse updateManagedTransform(const Models::UpdateManagedTransformRequest &request);

      /**
       * @summary Modify network optimization configuration
       *
       * @param request UpdateNetworkOptimizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkOptimizationResponse
       */
      Models::UpdateNetworkOptimizationResponse updateNetworkOptimizationWithOptions(const Models::UpdateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify network optimization configuration
       *
       * @param request UpdateNetworkOptimizationRequest
       * @return UpdateNetworkOptimizationResponse
       */
      Models::UpdateNetworkOptimizationResponse updateNetworkOptimization(const Models::UpdateNetworkOptimizationRequest &request);

      /**
       * @summary Modify the Monitor
       *
       * @param tmpReq UpdateOriginPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginPoolResponse
       */
      Models::UpdateOriginPoolResponse updateOriginPoolWithOptions(const Models::UpdateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the Monitor
       *
       * @param request UpdateOriginPoolRequest
       * @return UpdateOriginPoolResponse
       */
      Models::UpdateOriginPoolResponse updateOriginPool(const Models::UpdateOriginPoolRequest &request);

      /**
       * @summary Enables or disables IP convergence.
       *
       * @param request UpdateOriginProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginProtectionResponse
       */
      Models::UpdateOriginProtectionResponse updateOriginProtectionWithOptions(const Models::UpdateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables IP convergence.
       *
       * @param request UpdateOriginProtectionRequest
       * @return UpdateOriginProtectionResponse
       */
      Models::UpdateOriginProtectionResponse updateOriginProtection(const Models::UpdateOriginProtectionRequest &request);

      /**
       * @summary Updates the IP whitelist for origin protection used by a website to the latest version.
       *
       * @param request UpdateOriginProtectionIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginProtectionIpWhiteListResponse
       */
      Models::UpdateOriginProtectionIpWhiteListResponse updateOriginProtectionIpWhiteListWithOptions(const Models::UpdateOriginProtectionIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the IP whitelist for origin protection used by a website to the latest version.
       *
       * @param request UpdateOriginProtectionIpWhiteListRequest
       * @return UpdateOriginProtectionIpWhiteListResponse
       */
      Models::UpdateOriginProtectionIpWhiteListResponse updateOriginProtectionIpWhiteList(const Models::UpdateOriginProtectionIpWhiteListRequest &request);

      /**
       * @summary Modify Origin Rule Configuration for Site
       *
       * @param request UpdateOriginRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOriginRuleResponse
       */
      Models::UpdateOriginRuleResponse updateOriginRuleWithOptions(const Models::UpdateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Origin Rule Configuration for Site
       *
       * @param request UpdateOriginRuleRequest
       * @return UpdateOriginRuleResponse
       */
      Models::UpdateOriginRuleResponse updateOriginRule(const Models::UpdateOriginRuleRequest &request);

      /**
       * @summary Modifies the configurations of a custom error page, such as the name, description, content type, and content of the page.
       *
       * @param request UpdatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePageResponse
       */
      Models::UpdatePageResponse updatePageWithOptions(const Models::UpdatePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a custom error page, such as the name, description, content type, and content of the page.
       *
       * @param request UpdatePageRequest
       * @return UpdatePageResponse
       */
      Models::UpdatePageResponse updatePage(const Models::UpdatePageRequest &request);

      /**
       * @summary 套餐变配
       *
       * @param request UpdateRatePlanSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRatePlanSpecResponse
       */
      Models::UpdateRatePlanSpecResponse updateRatePlanSpecWithOptions(const Models::UpdateRatePlanSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 套餐变配
       *
       * @param request UpdateRatePlanSpecRequest
       * @return UpdateRatePlanSpecResponse
       */
      Models::UpdateRatePlanSpecResponse updateRatePlanSpec(const Models::UpdateRatePlanSpecRequest &request);

      /**
       * @summary Updates multiple types of DNS records and origin authentication configurations.
       *
       * @description This operation allows you to update multiple types of DNS records, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. You can modify the record content by providing the necessary fields such as Value, Priority, and Flag. For origins added in CNAME records such as OSS and S3, the API enables you to configure authentication details to ensure secure access.
       * ### [](#)Usage notes
       * *   The record value (Value) must match the record type. For example, the CNAME record should correspond to the target domain name.
       * *   You must specify a priority (Priority) for some record types, such as MX and SRV.
       * *   You must specify specific fields such as Flag and Tag for CAA records.
       * *   When you update security records such as CERT and SSHFP, you must accurately set fields such as Type and Algorithm.
       * *   If your origin type is OSS or S3, configure the authentication details in AuthConf based on the permissions.
       *
       * @param tmpReq UpdateRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordResponse
       */
      Models::UpdateRecordResponse updateRecordWithOptions(const Models::UpdateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates multiple types of DNS records and origin authentication configurations.
       *
       * @description This operation allows you to update multiple types of DNS records, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. You can modify the record content by providing the necessary fields such as Value, Priority, and Flag. For origins added in CNAME records such as OSS and S3, the API enables you to configure authentication details to ensure secure access.
       * ### [](#)Usage notes
       * *   The record value (Value) must match the record type. For example, the CNAME record should correspond to the target domain name.
       * *   You must specify a priority (Priority) for some record types, such as MX and SRV.
       * *   You must specify specific fields such as Flag and Tag for CAA records.
       * *   When you update security records such as CERT and SSHFP, you must accurately set fields such as Type and Algorithm.
       * *   If your origin type is OSS or S3, configure the authentication details in AuthConf based on the permissions.
       *
       * @param request UpdateRecordRequest
       * @return UpdateRecordResponse
       */
      Models::UpdateRecordResponse updateRecord(const Models::UpdateRecordRequest &request);

      /**
       * @summary Update Redirect Rule
       *
       * @param request UpdateRedirectRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRedirectRuleResponse
       */
      Models::UpdateRedirectRuleResponse updateRedirectRuleWithOptions(const Models::UpdateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Redirect Rule
       *
       * @param request UpdateRedirectRuleRequest
       * @return UpdateRedirectRuleResponse
       */
      Models::UpdateRedirectRuleResponse updateRedirectRule(const Models::UpdateRedirectRuleRequest &request);

      /**
       * @summary Modify Rewrite URL Rule
       *
       * @param request UpdateRewriteUrlRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRewriteUrlRuleResponse
       */
      Models::UpdateRewriteUrlRuleResponse updateRewriteUrlRuleWithOptions(const Models::UpdateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Rewrite URL Rule
       *
       * @param request UpdateRewriteUrlRuleRequest
       * @return UpdateRewriteUrlRuleResponse
       */
      Models::UpdateRewriteUrlRuleResponse updateRewriteUrlRule(const Models::UpdateRewriteUrlRuleRequest &request);

      /**
       * @summary 修改边缘函数路由配置
       *
       * @param request UpdateRoutineRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoutineRouteResponse
       */
      Models::UpdateRoutineRouteResponse updateRoutineRouteWithOptions(const Models::UpdateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改边缘函数路由配置
       *
       * @param request UpdateRoutineRouteRequest
       * @return UpdateRoutineRouteResponse
       */
      Models::UpdateRoutineRouteResponse updateRoutineRoute(const Models::UpdateRoutineRouteRequest &request);

      /**
       * @summary Updates a scheduled prefetch plan based on the plan ID.
       *
       * @param request UpdateScheduledPreloadExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduledPreloadExecutionResponse
       */
      Models::UpdateScheduledPreloadExecutionResponse updateScheduledPreloadExecutionWithOptions(const Models::UpdateScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scheduled prefetch plan based on the plan ID.
       *
       * @param request UpdateScheduledPreloadExecutionRequest
       * @return UpdateScheduledPreloadExecutionResponse
       */
      Models::UpdateScheduledPreloadExecutionResponse updateScheduledPreloadExecution(const Models::UpdateScheduledPreloadExecutionRequest &request);

      /**
       * @summary 修改站点放行搜索引擎爬虫配置
       *
       * @param request UpdateSeoBypassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSeoBypassResponse
       */
      Models::UpdateSeoBypassResponse updateSeoBypassWithOptions(const Models::UpdateSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点放行搜索引擎爬虫配置
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
       * @summary Modifies the service location for a single website. This updates the acceleration configuration of the website to adapt to changes in traffic distribution, and improve user experience in specific regions.
       *
       * @param request UpdateSiteCoverageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteCoverageResponse
       */
      Models::UpdateSiteCoverageResponse updateSiteCoverageWithOptions(const Models::UpdateSiteCoverageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the service location for a single website. This updates the acceleration configuration of the website to adapt to changes in traffic distribution, and improve user experience in specific regions.
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
       * @summary Modifies a real-time log delivery task.
       *
       * @param request UpdateSiteDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteDeliveryTaskResponse
       */
      Models::UpdateSiteDeliveryTaskResponse updateSiteDeliveryTaskWithOptions(const Models::UpdateSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a real-time log delivery task.
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
       * @summary Modifies the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
       *
       * @param request UpdateSiteNameExclusiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteNameExclusiveResponse
       */
      Models::UpdateSiteNameExclusiveResponse updateSiteNameExclusiveWithOptions(const Models::UpdateSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
       *
       * @param request UpdateSiteNameExclusiveRequest
       * @return UpdateSiteNameExclusiveResponse
       */
      Models::UpdateSiteNameExclusiveResponse updateSiteNameExclusive(const Models::UpdateSiteNameExclusiveRequest &request);

      /**
       * @summary Modifies the ESA proxy configuration of a website.
       *
       * @param request UpdateSitePauseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSitePauseResponse
       */
      Models::UpdateSitePauseResponse updateSitePauseWithOptions(const Models::UpdateSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the ESA proxy configuration of a website.
       *
       * @param request UpdateSitePauseRequest
       * @return UpdateSitePauseResponse
       */
      Models::UpdateSitePauseResponse updateSitePause(const Models::UpdateSitePauseRequest &request);

      /**
       * @summary Updates the custom nameserver names for a single website.
       *
       * @param request UpdateSiteVanityNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSiteVanityNSResponse
       */
      Models::UpdateSiteVanityNSResponse updateSiteVanityNSWithOptions(const Models::UpdateSiteVanityNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the custom nameserver names for a single website.
       *
       * @param request UpdateSiteVanityNSRequest
       * @return UpdateSiteVanityNSResponse
       */
      Models::UpdateSiteVanityNSResponse updateSiteVanityNS(const Models::UpdateSiteVanityNSRequest &request);

      /**
       * @summary Modifies the tiered cache configuration of your website.
       *
       * @param request UpdateTieredCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTieredCacheResponse
       */
      Models::UpdateTieredCacheResponse updateTieredCacheWithOptions(const Models::UpdateTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the tiered cache configuration of your website.
       *
       * @param request UpdateTieredCacheRequest
       * @return UpdateTieredCacheResponse
       */
      Models::UpdateTieredCacheResponse updateTieredCache(const Models::UpdateTieredCacheRequest &request);

      /**
       * @summary 更新网页监测配置
       *
       * @param request UpdateUrlObservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUrlObservationResponse
       */
      Models::UpdateUrlObservationResponse updateUrlObservationWithOptions(const Models::UpdateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网页监测配置
       *
       * @param request UpdateUrlObservationRequest
       * @return UpdateUrlObservationResponse
       */
      Models::UpdateUrlObservationResponse updateUrlObservation(const Models::UpdateUrlObservationRequest &request);

      /**
       * @summary Modifies the configurations of a delivery task, including the task name, log field, log category, and discard rate.
       *
       * @param request UpdateUserDeliveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDeliveryTaskResponse
       */
      Models::UpdateUserDeliveryTaskResponse updateUserDeliveryTaskWithOptions(const Models::UpdateUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a delivery task, including the task name, log field, log category, and discard rate.
       *
       * @param request UpdateUserDeliveryTaskRequest
       * @return UpdateUserDeliveryTaskResponse
       */
      Models::UpdateUserDeliveryTaskResponse updateUserDeliveryTask(const Models::UpdateUserDeliveryTaskRequest &request);

      /**
       * @summary Changes the status of a delivery task in your Alibaba Cloud account.
       *
       * @description ## [](#)
       * You can call this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
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
       * You can call this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
       *
       * @param request UpdateUserDeliveryTaskStatusRequest
       * @return UpdateUserDeliveryTaskStatusResponse
       */
      Models::UpdateUserDeliveryTaskStatusResponse updateUserDeliveryTaskStatus(const Models::UpdateUserDeliveryTaskStatusRequest &request);

      /**
       * @summary 修改站点视频处理配置
       *
       * @param request UpdateVideoProcessingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoProcessingResponse
       */
      Models::UpdateVideoProcessingResponse updateVideoProcessingWithOptions(const Models::UpdateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改站点视频处理配置
       *
       * @param request UpdateVideoProcessingRequest
       * @return UpdateVideoProcessingResponse
       */
      Models::UpdateVideoProcessingResponse updateVideoProcessing(const Models::UpdateVideoProcessingRequest &request);

      /**
       * @summary Update WAF Rule Page
       *
       * @param tmpReq UpdateWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWafRuleResponse
       */
      Models::UpdateWafRuleResponse updateWafRuleWithOptions(const Models::UpdateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update WAF Rule Page
       *
       * @param request UpdateWafRuleRequest
       * @return UpdateWafRuleResponse
       */
      Models::UpdateWafRuleResponse updateWafRule(const Models::UpdateWafRuleRequest &request);

      /**
       * @summary Update WAF Ruleset
       *
       * @param request UpdateWafRulesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWafRulesetResponse
       */
      Models::UpdateWafRulesetResponse updateWafRulesetWithOptions(const Models::UpdateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update WAF Ruleset
       *
       * @param request UpdateWafRulesetRequest
       * @return UpdateWafRulesetResponse
       */
      Models::UpdateWafRulesetResponse updateWafRuleset(const Models::UpdateWafRulesetRequest &request);

      /**
       * @summary Modifies the configurations of a waiting room.
       *
       * @param tmpReq UpdateWaitingRoomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomResponse
       */
      Models::UpdateWaitingRoomResponse updateWaitingRoomWithOptions(const Models::UpdateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a waiting room.
       *
       * @param request UpdateWaitingRoomRequest
       * @return UpdateWaitingRoomResponse
       */
      Models::UpdateWaitingRoomResponse updateWaitingRoom(const Models::UpdateWaitingRoomRequest &request);

      /**
       * @summary Modifies the configurations of a waiting room event.
       *
       * @param request UpdateWaitingRoomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomEventResponse
       */
      Models::UpdateWaitingRoomEventResponse updateWaitingRoomEventWithOptions(const Models::UpdateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a waiting room event.
       *
       * @param request UpdateWaitingRoomEventRequest
       * @return UpdateWaitingRoomEventResponse
       */
      Models::UpdateWaitingRoomEventResponse updateWaitingRoomEvent(const Models::UpdateWaitingRoomEventRequest &request);

      /**
       * @summary Modify Waiting Room Rule
       *
       * @description This interface allows you to modify the rule settings of a specific waiting room in a site, including the rule name, enable status, and rule content, etc.
       *
       * @param request UpdateWaitingRoomRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaitingRoomRuleResponse
       */
      Models::UpdateWaitingRoomRuleResponse updateWaitingRoomRuleWithOptions(const Models::UpdateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Waiting Room Rule
       *
       * @description This interface allows you to modify the rule settings of a specific waiting room in a site, including the rule name, enable status, and rule content, etc.
       *
       * @param request UpdateWaitingRoomRuleRequest
       * @return UpdateWaitingRoomRuleResponse
       */
      Models::UpdateWaitingRoomRuleResponse updateWaitingRoomRule(const Models::UpdateWaitingRoomRuleRequest &request);

      /**
       * @summary Uploads a client certificate authority (CA) certificate.
       *
       * @param request UploadClientCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadClientCaCertificateResponse
       */
      Models::UploadClientCaCertificateResponse uploadClientCaCertificateWithOptions(const Models::UploadClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a client certificate authority (CA) certificate.
       *
       * @param request UploadClientCaCertificateRequest
       * @return UploadClientCaCertificateResponse
       */
      Models::UploadClientCaCertificateResponse uploadClientCaCertificate(const Models::UploadClientCaCertificateRequest &request);

      /**
       * @summary Uploads the file that contains resources to be purged or prefetched.
       *
       * @description > 
       * *   The file can be up to 10 MB in size.
       *
       * @param request UploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFileWithOptions(const Models::UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads the file that contains resources to be purged or prefetched.
       *
       * @description > 
       * *   The file can be up to 10 MB in size.
       *
       * @param request UploadFileRequest
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFile(const Models::UploadFileRequest &request);

      Models::UploadFileResponse uploadFileAdvance(const Models::UploadFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传源服务器CA证书
       *
       * @param request UploadOriginCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOriginCaCertificateResponse
       */
      Models::UploadOriginCaCertificateResponse uploadOriginCaCertificateWithOptions(const Models::UploadOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传源服务器CA证书
       *
       * @param request UploadOriginCaCertificateRequest
       * @return UploadOriginCaCertificateResponse
       */
      Models::UploadOriginCaCertificateResponse uploadOriginCaCertificate(const Models::UploadOriginCaCertificateRequest &request);

      /**
       * @summary 上传域名回源客户端证书
       *
       * @param request UploadOriginClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOriginClientCertificateResponse
       */
      Models::UploadOriginClientCertificateResponse uploadOriginClientCertificateWithOptions(const Models::UploadOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传域名回源客户端证书
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
