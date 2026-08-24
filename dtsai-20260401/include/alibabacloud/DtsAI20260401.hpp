// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DTSAI20260401_HPP_
#define ALIBABACLOUD_DTSAI20260401_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DtsAI20260401Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/DtsAI20260401.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Uploads a file directly to the Bucket/ObjectKey specified in the response, and then uses the object URL as OssFileUrl to create a parsing task.
       *
       * @param request AuthorizeFileUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeFileUploadResponse
       */
      Models::AuthorizeFileUploadResponse authorizeFileUploadWithOptions(const Models::AuthorizeFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a file directly to the Bucket/ObjectKey specified in the response, and then uses the object URL as OssFileUrl to create a parsing task.
       *
       * @param request AuthorizeFileUploadRequest
       * @return AuthorizeFileUploadResponse
       */
      Models::AuthorizeFileUploadResponse authorizeFileUpload(const Models::AuthorizeFileUploadRequest &request);

      /**
       * @summary Creates a document parsing task.
       *
       * @description - Region: Only China (Beijing) is supported.
       * - Fees: The service is free of charge during the public preview period.
       *
       * @param request CreateDocParserJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJobWithOptions(const Models::CreateDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document parsing task.
       *
       * @description - Region: Only China (Beijing) is supported.
       * - Fees: The service is free of charge during the public preview period.
       *
       * @param request CreateDocParserJobRequest
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJob(const Models::CreateDocParserJobRequest &request);

      Models::CreateDocParserJobResponse createDocParserJobAdvance(const Models::CreateDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a document parsing task.
       *
       * @description - Region: Only China (Beijing) is supported.
       * - Fees: Free of charge during the public preview period.
       * - Call DescribeDocParserJobResult to retrieve the parsing result of a document parsing task. Call this operation only after DescribeDocParserJobStatus returns a Status of success. Task results are retained for 72 hours and cannot be retrieved after expiration.
       *
       * @param request DescribeDocParserJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResultWithOptions(const Models::DescribeDocParserJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a document parsing task.
       *
       * @description - Region: Only China (Beijing) is supported.
       * - Fees: Free of charge during the public preview period.
       * - Call DescribeDocParserJobResult to retrieve the parsing result of a document parsing task. Call this operation only after DescribeDocParserJobStatus returns a Status of success. Task results are retained for 72 hours and cannot be retrieved after expiration.
       *
       * @param request DescribeDocParserJobResultRequest
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResult(const Models::DescribeDocParserJobResultRequest &request);

      /**
       * @summary Queries the status of a document parsing task.
       *
       * @description - Region: Only China (Beijing) is supported.
       * - Fees: The service is free of charge during the public preview period.
       *
       * @param request DescribeDocParserJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobStatusResponse
       */
      Models::DescribeDocParserJobStatusResponse describeDocParserJobStatusWithOptions(const Models::DescribeDocParserJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a document parsing task.
       *
       * @description - Region: Only China (Beijing) is supported.
       * - Fees: The service is free of charge during the public preview period.
       *
       * @param request DescribeDocParserJobStatusRequest
       * @return DescribeDocParserJobStatusResponse
       */
      Models::DescribeDocParserJobStatusResponse describeDocParserJobStatus(const Models::DescribeDocParserJobStatusRequest &request);

      /**
       * @summary Retrieves the content of a web page.
       *
       * @description - Region: Only China (Beijing) and Singapore regions are supported.
       * - Fees: Free of charge during the public preview period.
       *
       * @param request WebFetchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WebFetchResponse
       */
      Models::WebFetchResponse webFetchWithOptions(const Models::WebFetchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the content of a web page.
       *
       * @description - Region: Only China (Beijing) and Singapore regions are supported.
       * - Fees: Free of charge during the public preview period.
       *
       * @param request WebFetchRequest
       * @return WebFetchResponse
       */
      Models::WebFetchResponse webFetch(const Models::WebFetchRequest &request);

      /**
       * @summary Performs a web search.
       *
       * @description - Region: Only China (Beijing) and Singapore regions are supported.
       * - Fees: Free during the public preview period. No fees are charged.
       *
       * @param request WebSearchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WebSearchResponse
       */
      Models::WebSearchResponse webSearchWithOptions(const Models::WebSearchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a web search.
       *
       * @description - Region: Only China (Beijing) and Singapore regions are supported.
       * - Fees: Free during the public preview period. No fees are charged.
       *
       * @param request WebSearchRequest
       * @return WebSearchResponse
       */
      Models::WebSearchResponse webSearch(const Models::WebSearchRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
