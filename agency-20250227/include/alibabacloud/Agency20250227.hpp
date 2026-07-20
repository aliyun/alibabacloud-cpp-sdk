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
       * @summary 创建客户小记
       *
       * @param request CustomerNoteCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerNoteCreateResponse
       */
      Models::CustomerNoteCreateResponse customerNoteCreateWithOptions(const Models::CustomerNoteCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建客户小记
       *
       * @param request CustomerNoteCreateRequest
       * @return CustomerNoteCreateResponse
       */
      Models::CustomerNoteCreateResponse customerNoteCreate(const Models::CustomerNoteCreateRequest &request);

      /**
       * @summary 编辑客户小记
       *
       * @param request CustomerNoteEditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerNoteEditResponse
       */
      Models::CustomerNoteEditResponse customerNoteEditWithOptions(const Models::CustomerNoteEditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑客户小记
       *
       * @param request CustomerNoteEditRequest
       * @return CustomerNoteEditResponse
       */
      Models::CustomerNoteEditResponse customerNoteEdit(const Models::CustomerNoteEditRequest &request);

      /**
       * @summary 分页查询客户小记列表
       *
       * @param request CustomerNoteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerNoteListResponse
       */
      Models::CustomerNoteListResponse customerNoteListWithOptions(const Models::CustomerNoteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询客户小记列表
       *
       * @param request CustomerNoteListRequest
       * @return CustomerNoteListResponse
       */
      Models::CustomerNoteListResponse customerNoteList(const Models::CustomerNoteListRequest &request);

      /**
       * @summary 查询客户小记详情
       *
       * @param request CustomerNoteListDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerNoteListDetailResponse
       */
      Models::CustomerNoteListDetailResponse customerNoteListDetailWithOptions(const Models::CustomerNoteListDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询客户小记详情
       *
       * @param request CustomerNoteListDetailRequest
       * @return CustomerNoteListDetailResponse
       */
      Models::CustomerNoteListDetailResponse customerNoteListDetail(const Models::CustomerNoteListDetailRequest &request);

      /**
       * @summary Queries exported bill files.
       *
       * @param request GetBillDetailFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBillDetailFileListResponse
       */
      Models::GetBillDetailFileListResponse getBillDetailFileListWithOptions(const Models::GetBillDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries exported bill files.
       *
       * @param request GetBillDetailFileListRequest
       * @return GetBillDetailFileListResponse
       */
      Models::GetBillDetailFileListResponse getBillDetailFileList(const Models::GetBillDetailFileListRequest &request);

      /**
       * @summary Queries the commission details of a partner.
       *
       * @param request GetCommissionDetailFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommissionDetailFileListResponse
       */
      Models::GetCommissionDetailFileListResponse getCommissionDetailFileListWithOptions(const Models::GetCommissionDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the commission details of a partner.
       *
       * @param request GetCommissionDetailFileListRequest
       * @return GetCommissionDetailFileListResponse
       */
      Models::GetCommissionDetailFileListResponse getCommissionDetailFileList(const Models::GetCommissionDetailFileListRequest &request);

      /**
       * @summary Queries partner customer acquisition orders.
       *
       * @param tmpReq GetCustomerOrderListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerOrderListResponse
       */
      Models::GetCustomerOrderListResponse getCustomerOrderListWithOptions(const Models::GetCustomerOrderListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries partner customer acquisition orders.
       *
       * @param request GetCustomerOrderListRequest
       * @return GetCustomerOrderListResponse
       */
      Models::GetCustomerOrderListResponse getCustomerOrderList(const Models::GetCustomerOrderListRequest &request);

      /**
       * @summary Downloads the commission details of an international partner.
       *
       * @description Ensure that the current caller identity is a T1 distribution partner. 
       * <notice>Available only for international site.</notice>.
       *
       * @param request GetIntlCommissionDetailFileListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntlCommissionDetailFileListResponse
       */
      Models::GetIntlCommissionDetailFileListResponse getIntlCommissionDetailFileListWithOptions(const Models::GetIntlCommissionDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the commission details of an international partner.
       *
       * @description Ensure that the current caller identity is a T1 distribution partner. 
       * <notice>Available only for international site.</notice>.
       *
       * @param request GetIntlCommissionDetailFileListRequest
       * @return GetIntlCommissionDetailFileListResponse
       */
      Models::GetIntlCommissionDetailFileListResponse getIntlCommissionDetailFileList(const Models::GetIntlCommissionDetailFileListRequest &request);

      /**
       * @summary Queries the partner renewal rate.
       *
       * @param request GetRenewalRateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenewalRateListResponse
       */
      Models::GetRenewalRateListResponse getRenewalRateListWithOptions(const Models::GetRenewalRateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the partner renewal rate.
       *
       * @param request GetRenewalRateListRequest
       * @return GetRenewalRateListResponse
       */
      Models::GetRenewalRateListResponse getRenewalRateList(const Models::GetRenewalRateListRequest &request);

      /**
       * @summary Queries the list of secondary distributors.
       *
       * @param request GetSubPartnerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubPartnerListResponse
       */
      Models::GetSubPartnerListResponse getSubPartnerListWithOptions(const Models::GetSubPartnerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of secondary distributors.
       *
       * @param request GetSubPartnerListRequest
       * @return GetSubPartnerListResponse
       */
      Models::GetSubPartnerListResponse getSubPartnerList(const Models::GetSubPartnerListRequest &request);

      /**
       * @summary Queries channel expansion orders.
       *
       * @param tmpReq GetSubPartnerOrderListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubPartnerOrderListResponse
       */
      Models::GetSubPartnerOrderListResponse getSubPartnerOrderListWithOptions(const Models::GetSubPartnerOrderListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries channel expansion orders.
       *
       * @param request GetSubPartnerOrderListRequest
       * @return GetSubPartnerOrderListResponse
       */
      Models::GetSubPartnerOrderListResponse getSubPartnerOrderList(const Models::GetSubPartnerOrderListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
