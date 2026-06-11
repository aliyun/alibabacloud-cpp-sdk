// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENCY20250227_HPP_
#define ALIBABACLOUD_AGENCY20250227_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Agency20250227Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Agency20250227.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Query bill export files.
       *
       * @param request GetBillDetailFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBillDetailFileListResponse
       */
      Models::GetBillDetailFileListResponse getBillDetailFileListWithOptions(const Models::GetBillDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query bill export files.
       *
       * @param request GetBillDetailFileListRequest
       * @return GetBillDetailFileListResponse
       */
      Models::GetBillDetailFileListResponse getBillDetailFileList(const Models::GetBillDetailFileListRequest &request);

      /**
       * @summary Query partner commission details.
       *
       * @param request GetCommissionDetailFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommissionDetailFileListResponse
       */
      Models::GetCommissionDetailFileListResponse getCommissionDetailFileListWithOptions(const Models::GetCommissionDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query partner commission details.
       *
       * @param request GetCommissionDetailFileListRequest
       * @return GetCommissionDetailFileListResponse
       */
      Models::GetCommissionDetailFileListResponse getCommissionDetailFileList(const Models::GetCommissionDetailFileListRequest &request);

      /**
       * @summary Query partner customer acquisition orders.
       *
       * @param tmpReq GetCustomerOrderListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerOrderListResponse
       */
      Models::GetCustomerOrderListResponse getCustomerOrderListWithOptions(const Models::GetCustomerOrderListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query partner customer acquisition orders.
       *
       * @param request GetCustomerOrderListRequest
       * @return GetCustomerOrderListResponse
       */
      Models::GetCustomerOrderListResponse getCustomerOrderList(const Models::GetCustomerOrderListRequest &request);

      /**
       * @summary Query partner renewal rate.
       *
       * @param request GetRenewalRateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenewalRateListResponse
       */
      Models::GetRenewalRateListResponse getRenewalRateListWithOptions(const Models::GetRenewalRateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query partner renewal rate.
       *
       * @param request GetRenewalRateListRequest
       * @return GetRenewalRateListResponse
       */
      Models::GetRenewalRateListResponse getRenewalRateList(const Models::GetRenewalRateListRequest &request);

      /**
       * @summary Query the list of second-tier distributors.
       *
       * @param request GetSubPartnerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubPartnerListResponse
       */
      Models::GetSubPartnerListResponse getSubPartnerListWithOptions(const Models::GetSubPartnerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of second-tier distributors.
       *
       * @param request GetSubPartnerListRequest
       * @return GetSubPartnerListResponse
       */
      Models::GetSubPartnerListResponse getSubPartnerList(const Models::GetSubPartnerListRequest &request);

      /**
       * @summary Query channel expansion orders.
       *
       * @param tmpReq GetSubPartnerOrderListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubPartnerOrderListResponse
       */
      Models::GetSubPartnerOrderListResponse getSubPartnerOrderListWithOptions(const Models::GetSubPartnerOrderListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query channel expansion orders.
       *
       * @param request GetSubPartnerOrderListRequest
       * @return GetSubPartnerOrderListResponse
       */
      Models::GetSubPartnerOrderListResponse getSubPartnerOrderList(const Models::GetSubPartnerOrderListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
