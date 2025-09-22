// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MARKETINGEVENT20210101_HPP_
#define ALIBABACLOUD_MARKETINGEVENT20210101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MarketingEvent20210101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MarketingEvent20210101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddSumRecordFlowPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSumRecordFlowPopResponse
       */
      Models::AddSumRecordFlowPopResponse addSumRecordFlowPopWithOptions(const Models::AddSumRecordFlowPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddSumRecordFlowPopRequest
       * @return AddSumRecordFlowPopResponse
       */
      Models::AddSumRecordFlowPopResponse addSumRecordFlowPop(const Models::AddSumRecordFlowPopRequest &request);

      /**
       * @param request BindExhibitorRfidPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindExhibitorRfidPopResponse
       */
      Models::BindExhibitorRfidPopResponse bindExhibitorRfidPopWithOptions(const Models::BindExhibitorRfidPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindExhibitorRfidPopRequest
       * @return BindExhibitorRfidPopResponse
       */
      Models::BindExhibitorRfidPopResponse bindExhibitorRfidPop(const Models::BindExhibitorRfidPopRequest &request);

      /**
       * @param request BindGuestRfidPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindGuestRfidPopResponse
       */
      Models::BindGuestRfidPopResponse bindGuestRfidPopWithOptions(const Models::BindGuestRfidPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindGuestRfidPopRequest
       * @return BindGuestRfidPopResponse
       */
      Models::BindGuestRfidPopResponse bindGuestRfidPop(const Models::BindGuestRfidPopRequest &request);

      /**
       * @param request CheckNFCBindPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckNFCBindPopResponse
       */
      Models::CheckNFCBindPopResponse checkNFCBindPopWithOptions(const Models::CheckNFCBindPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckNFCBindPopRequest
       * @return CheckNFCBindPopResponse
       */
      Models::CheckNFCBindPopResponse checkNFCBindPop(const Models::CheckNFCBindPopRequest &request);

      /**
       * @summary 拉取领证人员记录
       *
       * @param request FindGuestCredentialsRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindGuestCredentialsRecordResponse
       */
      Models::FindGuestCredentialsRecordResponse findGuestCredentialsRecordWithOptions(const Models::FindGuestCredentialsRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拉取领证人员记录
       *
       * @param request FindGuestCredentialsRecordRequest
       * @return FindGuestCredentialsRecordResponse
       */
      Models::FindGuestCredentialsRecordResponse findGuestCredentialsRecord(const Models::FindGuestCredentialsRecordRequest &request);

      /**
       * @summary 云栖大会获取取票人信息list接口
       *
       * @param request FindGuestTicketRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindGuestTicketRecordResponse
       */
      Models::FindGuestTicketRecordResponse findGuestTicketRecordWithOptions(const Models::FindGuestTicketRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 云栖大会获取取票人信息list接口
       *
       * @param request FindGuestTicketRecordRequest
       * @return FindGuestTicketRecordResponse
       */
      Models::FindGuestTicketRecordResponse findGuestTicketRecord(const Models::FindGuestTicketRecordRequest &request);

      /**
       * @param request QueryAllActivityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAllActivityInfoResponse
       */
      Models::QueryAllActivityInfoResponse queryAllActivityInfoWithOptions(const Models::QueryAllActivityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAllActivityInfoRequest
       * @return QueryAllActivityInfoResponse
       */
      Models::QueryAllActivityInfoResponse queryAllActivityInfo(const Models::QueryAllActivityInfoRequest &request);

      /**
       * @param request QueryOrderSessionListPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrderSessionListPopResponse
       */
      Models::QueryOrderSessionListPopResponse queryOrderSessionListPopWithOptions(const Models::QueryOrderSessionListPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryOrderSessionListPopRequest
       * @return QueryOrderSessionListPopResponse
       */
      Models::QueryOrderSessionListPopResponse queryOrderSessionListPop(const Models::QueryOrderSessionListPopRequest &request);

      /**
       * @param request QuerySessionByActivityIdPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySessionByActivityIdPopResponse
       */
      Models::QuerySessionByActivityIdPopResponse querySessionByActivityIdPopWithOptions(const Models::QuerySessionByActivityIdPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySessionByActivityIdPopRequest
       * @return QuerySessionByActivityIdPopResponse
       */
      Models::QuerySessionByActivityIdPopResponse querySessionByActivityIdPop(const Models::QuerySessionByActivityIdPopRequest &request);

      /**
       * @param request QuerySessionListPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySessionListPopResponse
       */
      Models::QuerySessionListPopResponse querySessionListPopWithOptions(const Models::QuerySessionListPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySessionListPopRequest
       * @return QuerySessionListPopResponse
       */
      Models::QuerySessionListPopResponse querySessionListPop(const Models::QuerySessionListPopRequest &request);

      /**
       * @param request QuerySignInRecordPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySignInRecordPopResponse
       */
      Models::QuerySignInRecordPopResponse querySignInRecordPopWithOptions(const Models::QuerySignInRecordPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySignInRecordPopRequest
       * @return QuerySignInRecordPopResponse
       */
      Models::QuerySignInRecordPopResponse querySignInRecordPop(const Models::QuerySignInRecordPopRequest &request);

      /**
       * @param request QuerySingleActivityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySingleActivityInfoResponse
       */
      Models::QuerySingleActivityInfoResponse querySingleActivityInfoWithOptions(const Models::QuerySingleActivityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySingleActivityInfoRequest
       * @return QuerySingleActivityInfoResponse
       */
      Models::QuerySingleActivityInfoResponse querySingleActivityInfo(const Models::QuerySingleActivityInfoRequest &request);

      /**
       * @param request SyncSignInInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncSignInInfoResponse
       */
      Models::SyncSignInInfoResponse syncSignInInfoWithOptions(const Models::SyncSignInInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SyncSignInInfoRequest
       * @return SyncSignInInfoResponse
       */
      Models::SyncSignInInfoResponse syncSignInInfo(const Models::SyncSignInInfoRequest &request);

      /**
       * @param request TicketOrCredentialsSignInPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketOrCredentialsSignInPopResponse
       */
      Models::TicketOrCredentialsSignInPopResponse ticketOrCredentialsSignInPopWithOptions(const Models::TicketOrCredentialsSignInPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TicketOrCredentialsSignInPopRequest
       * @return TicketOrCredentialsSignInPopResponse
       */
      Models::TicketOrCredentialsSignInPopResponse ticketOrCredentialsSignInPop(const Models::TicketOrCredentialsSignInPopRequest &request);

      /**
       * @param request UpdateCredentialsStatusPopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialsStatusPopResponse
       */
      Models::UpdateCredentialsStatusPopResponse updateCredentialsStatusPopWithOptions(const Models::UpdateCredentialsStatusPopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCredentialsStatusPopRequest
       * @return UpdateCredentialsStatusPopResponse
       */
      Models::UpdateCredentialsStatusPopResponse updateCredentialsStatusPop(const Models::UpdateCredentialsStatusPopRequest &request);

      /**
       * @param request UpdateTicketRecordByticketCodePopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTicketRecordByticketCodePopResponse
       */
      Models::UpdateTicketRecordByticketCodePopResponse updateTicketRecordByticketCodePopWithOptions(const Models::UpdateTicketRecordByticketCodePopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateTicketRecordByticketCodePopRequest
       * @return UpdateTicketRecordByticketCodePopResponse
       */
      Models::UpdateTicketRecordByticketCodePopResponse updateTicketRecordByticketCodePop(const Models::UpdateTicketRecordByticketCodePopRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
