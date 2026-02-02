// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDAUTH20221125_HPP_
#define ALIBABACLOUD_CLOUDAUTH20221125_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20221125Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cloudauth20221125.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Enterprise Element Verification
       *
       * @description Supports only enterprises and individual businesses.
       *
       * @param request EntElementVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntElementVerifyResponse
       */
      Models::EntElementVerifyResponse entElementVerifyWithOptions(const Models::EntElementVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enterprise Element Verification
       *
       * @description Supports only enterprises and individual businesses.
       *
       * @param request EntElementVerifyRequest
       * @return EntElementVerifyResponse
       */
      Models::EntElementVerifyResponse entElementVerify(const Models::EntElementVerifyRequest &request);

      /**
       * @summary 企业要素核验PRO
       *
       * @param request EntElementVerifyPRORequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntElementVerifyPROResponse
       */
      Models::EntElementVerifyPROResponse entElementVerifyPROWithOptions(const Models::EntElementVerifyPRORequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 企业要素核验PRO
       *
       * @param request EntElementVerifyPRORequest
       * @return EntElementVerifyPROResponse
       */
      Models::EntElementVerifyPROResponse entElementVerifyPRO(const Models::EntElementVerifyPRORequest &request);

      /**
       * @summary Enterprise Element Verification V2
       *
       * @description The Enterprise Element Verification API provides a service for verifying the consistency of enterprise element information, used to identify the authenticity of enterprise information.
       * It supports various institutions including enterprises, individual businesses, farmers\\" professional cooperatives, government agencies, public institutions, social organizations, legal profession institutions, and owners\\" meetings for 2-3 elements;
       * For 4 elements, it supports enterprises, individual businesses, farmers\\" professional cooperatives, and legal professions.
       *
       * @param request EntElementVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntElementVerifyV2Response
       */
      Models::EntElementVerifyV2Response entElementVerifyV2WithOptions(const Models::EntElementVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enterprise Element Verification V2
       *
       * @description The Enterprise Element Verification API provides a service for verifying the consistency of enterprise element information, used to identify the authenticity of enterprise information.
       * It supports various institutions including enterprises, individual businesses, farmers\\" professional cooperatives, government agencies, public institutions, social organizations, legal profession institutions, and owners\\" meetings for 2-3 elements;
       * For 4 elements, it supports enterprises, individual businesses, farmers\\" professional cooperatives, and legal professions.
       *
       * @param request EntElementVerifyV2Request
       * @return EntElementVerifyV2Response
       */
      Models::EntElementVerifyV2Response entElementVerifyV2(const Models::EntElementVerifyV2Request &request);

      /**
       * @summary Abnormal Business Operation Query
       *
       * @param request EntRiskQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntRiskQueryResponse
       */
      Models::EntRiskQueryResponse entRiskQueryWithOptions(const Models::EntRiskQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Abnormal Business Operation Query
       *
       * @param request EntRiskQueryRequest
       * @return EntRiskQueryResponse
       */
      Models::EntRiskQueryResponse entRiskQuery(const Models::EntRiskQueryRequest &request);

      /**
       * @summary Enterprise Authentication
       *
       * @param request EntVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntVerifyResponse
       */
      Models::EntVerifyResponse entVerifyWithOptions(const Models::EntVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enterprise Authentication
       *
       * @param request EntVerifyRequest
       * @return EntVerifyResponse
       */
      Models::EntVerifyResponse entVerify(const Models::EntVerifyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
