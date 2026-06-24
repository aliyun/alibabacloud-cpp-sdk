// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GOVERNANCE20210120_HPP_
#define ALIBABACLOUD_GOVERNANCE20210120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Governance20210120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Governance20210120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Applies an account baseline to multiple existing resource accounts at a time.
       *
       * @description Applies an account baseline to multiple existing resource accounts at a time.
       * Account enrollment is an asynchronous process. After the accounts are enrolled, the account factory baseline is applied to each account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](https://help.aliyun.com/document_detail/609062.html).
       *
       * @param request BatchEnrollAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEnrollAccountsResponse
       */
      Models::BatchEnrollAccountsResponse batchEnrollAccountsWithOptions(const Models::BatchEnrollAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an account baseline to multiple existing resource accounts at a time.
       *
       * @description Applies an account baseline to multiple existing resource accounts at a time.
       * Account enrollment is an asynchronous process. After the accounts are enrolled, the account factory baseline is applied to each account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](https://help.aliyun.com/document_detail/609062.html).
       *
       * @param request BatchEnrollAccountsRequest
       * @return BatchEnrollAccountsResponse
       */
      Models::BatchEnrollAccountsResponse batchEnrollAccounts(const Models::BatchEnrollAccountsRequest &request);

      /**
       * @summary Creates a baseline of the account factory.
       *
       * @param request CreateAccountFactoryBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountFactoryBaselineResponse
       */
      Models::CreateAccountFactoryBaselineResponse createAccountFactoryBaselineWithOptions(const Models::CreateAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a baseline of the account factory.
       *
       * @param request CreateAccountFactoryBaselineRequest
       * @return CreateAccountFactoryBaselineResponse
       */
      Models::CreateAccountFactoryBaselineResponse createAccountFactoryBaseline(const Models::CreateAccountFactoryBaselineRequest &request);

      /**
       * @summary Deletes an account factory baseline.
       *
       * @param request DeleteAccountFactoryBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountFactoryBaselineResponse
       */
      Models::DeleteAccountFactoryBaselineResponse deleteAccountFactoryBaselineWithOptions(const Models::DeleteAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an account factory baseline.
       *
       * @param request DeleteAccountFactoryBaselineRequest
       * @return DeleteAccountFactoryBaselineResponse
       */
      Models::DeleteAccountFactoryBaselineResponse deleteAccountFactoryBaseline(const Models::DeleteAccountFactoryBaselineRequest &request);

      /**
       * @summary Creates a new resource account or enrolls an existing resource account in Account Factory.
       *
       * @description Creates a new resource account or enrolls an existing resource account, and applies the account factory baseline to the account.
       * Account enrollment is an asynchronous process. After an account is created, the account factory baseline is applied to the account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](~~GetEnrolledAccount~~).
       *
       * @param tmpReq EnrollAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnrollAccountResponse
       */
      Models::EnrollAccountResponse enrollAccountWithOptions(const Models::EnrollAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new resource account or enrolls an existing resource account in Account Factory.
       *
       * @description Creates a new resource account or enrolls an existing resource account, and applies the account factory baseline to the account.
       * Account enrollment is an asynchronous process. After an account is created, the account factory baseline is applied to the account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](~~GetEnrolledAccount~~).
       *
       * @param request EnrollAccountRequest
       * @return EnrollAccountResponse
       */
      Models::EnrollAccountResponse enrollAccount(const Models::EnrollAccountRequest &request);

      /**
       * @summary Generate Governance Evaluation Report
       *
       * @description Generates a governance evaluation report.
       * > 
       * > - This is an asynchronous API. You can check the `Finished` field in the response to determine the report generation status.
       *
       * @param tmpReq GenerateEvaluationReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateEvaluationReportResponse
       */
      Models::GenerateEvaluationReportResponse generateEvaluationReportWithOptions(const Models::GenerateEvaluationReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate Governance Evaluation Report
       *
       * @description Generates a governance evaluation report.
       * > 
       * > - This is an asynchronous API. You can check the `Finished` field in the response to determine the report generation status.
       *
       * @param request GenerateEvaluationReportRequest
       * @return GenerateEvaluationReportResponse
       */
      Models::GenerateEvaluationReportResponse generateEvaluationReport(const Models::GenerateEvaluationReportRequest &request);

      /**
       * @summary Obtains the details of an account factory baseline.
       *
       * @param request GetAccountFactoryBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountFactoryBaselineResponse
       */
      Models::GetAccountFactoryBaselineResponse getAccountFactoryBaselineWithOptions(const Models::GetAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of an account factory baseline.
       *
       * @param request GetAccountFactoryBaselineRequest
       * @return GetAccountFactoryBaselineResponse
       */
      Models::GetAccountFactoryBaselineResponse getAccountFactoryBaseline(const Models::GetAccountFactoryBaselineRequest &request);

      /**
       * @summary Queries the details about an account that is enrolled in the account factory.
       *
       * @param request GetEnrolledAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnrolledAccountResponse
       */
      Models::GetEnrolledAccountResponse getEnrolledAccountWithOptions(const Models::GetEnrolledAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about an account that is enrolled in the account factory.
       *
       * @param request GetEnrolledAccountRequest
       * @return GetEnrolledAccountResponse
       */
      Models::GetEnrolledAccountResponse getEnrolledAccount(const Models::GetEnrolledAccountRequest &request);

      /**
       * @summary Queries a list of baseline items that are supported by the account factory of Cloud Governance Center (CGC).
       *
       * @param request ListAccountFactoryBaselineItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountFactoryBaselineItemsResponse
       */
      Models::ListAccountFactoryBaselineItemsResponse listAccountFactoryBaselineItemsWithOptions(const Models::ListAccountFactoryBaselineItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of baseline items that are supported by the account factory of Cloud Governance Center (CGC).
       *
       * @param request ListAccountFactoryBaselineItemsRequest
       * @return ListAccountFactoryBaselineItemsResponse
       */
      Models::ListAccountFactoryBaselineItemsResponse listAccountFactoryBaselineItems(const Models::ListAccountFactoryBaselineItemsRequest &request);

      /**
       * @summary Obtains a list of baselines in the account factory.
       *
       * @param request ListAccountFactoryBaselinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountFactoryBaselinesResponse
       */
      Models::ListAccountFactoryBaselinesResponse listAccountFactoryBaselinesWithOptions(const Models::ListAccountFactoryBaselinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of baselines in the account factory.
       *
       * @param request ListAccountFactoryBaselinesRequest
       * @return ListAccountFactoryBaselinesResponse
       */
      Models::ListAccountFactoryBaselinesResponse listAccountFactoryBaselines(const Models::ListAccountFactoryBaselinesRequest &request);

      /**
       * @summary Queries a list of accounts that are enrolled in the account factory.
       *
       * @param request ListEnrolledAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnrolledAccountsResponse
       */
      Models::ListEnrolledAccountsResponse listEnrolledAccountsWithOptions(const Models::ListEnrolledAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of accounts that are enrolled in the account factory.
       *
       * @param request ListEnrolledAccountsRequest
       * @return ListEnrolledAccountsResponse
       */
      Models::ListEnrolledAccountsResponse listEnrolledAccounts(const Models::ListEnrolledAccountsRequest &request);

      /**
       * @summary Retrieves information about all available governance evaluation items, including names, IDs, descriptions, stages, resource detail metadata, and remediation guidance.
       *
       * @param request ListEvaluationMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluationMetadataResponse
       */
      Models::ListEvaluationMetadataResponse listEvaluationMetadataWithOptions(const Models::ListEvaluationMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all available governance evaluation items, including names, IDs, descriptions, stages, resource detail metadata, and remediation guidance.
       *
       * @param request ListEvaluationMetadataRequest
       * @return ListEvaluationMetadataResponse
       */
      Models::ListEvaluationMetadataResponse listEvaluationMetadata(const Models::ListEvaluationMetadataRequest &request);

      /**
       * @summary Retrieves non-compliant resource information for a specified check item, including the name, ID, category, type, region, and related metadata of non-compliant resources.
       *
       * @param request ListEvaluationMetricDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluationMetricDetailsResponse
       */
      Models::ListEvaluationMetricDetailsResponse listEvaluationMetricDetailsWithOptions(const Models::ListEvaluationMetricDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves non-compliant resource information for a specified check item, including the name, ID, category, type, region, and related metadata of non-compliant resources.
       *
       * @param request ListEvaluationMetricDetailsRequest
       * @return ListEvaluationMetricDetailsResponse
       */
      Models::ListEvaluationMetricDetailsResponse listEvaluationMetricDetails(const Models::ListEvaluationMetricDetailsRequest &request);

      /**
       * @summary Get governance evaluation results and status.
       *
       * @param request ListEvaluationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluationResultsResponse
       */
      Models::ListEvaluationResultsResponse listEvaluationResultsWithOptions(const Models::ListEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get governance evaluation results and status.
       *
       * @param request ListEvaluationResultsRequest
       * @return ListEvaluationResultsResponse
       */
      Models::ListEvaluationResultsResponse listEvaluationResults(const Models::ListEvaluationResultsRequest &request);

      /**
       * @summary Retrieves the historical scores of governance detection.
       *
       * @param request ListEvaluationScoreHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluationScoreHistoryResponse
       */
      Models::ListEvaluationScoreHistoryResponse listEvaluationScoreHistoryWithOptions(const Models::ListEvaluationScoreHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the historical scores of governance detection.
       *
       * @param request ListEvaluationScoreHistoryRequest
       * @return ListEvaluationScoreHistoryResponse
       */
      Models::ListEvaluationScoreHistoryResponse listEvaluationScoreHistory(const Models::ListEvaluationScoreHistoryRequest &request);

      /**
       * @summary Runs a Cloud Governance Center governance check.
       *
       * @param tmpReq RunEvaluationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunEvaluationResponse
       */
      Models::RunEvaluationResponse runEvaluationWithOptions(const Models::RunEvaluationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a Cloud Governance Center governance check.
       *
       * @param request RunEvaluationRequest
       * @return RunEvaluationResponse
       */
      Models::RunEvaluationResponse runEvaluation(const Models::RunEvaluationRequest &request);

      /**
       * @summary Updates a baseline of the account factory.
       *
       * @param request UpdateAccountFactoryBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccountFactoryBaselineResponse
       */
      Models::UpdateAccountFactoryBaselineResponse updateAccountFactoryBaselineWithOptions(const Models::UpdateAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a baseline of the account factory.
       *
       * @param request UpdateAccountFactoryBaselineRequest
       * @return UpdateAccountFactoryBaselineResponse
       */
      Models::UpdateAccountFactoryBaselineResponse updateAccountFactoryBaseline(const Models::UpdateAccountFactoryBaselineRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
