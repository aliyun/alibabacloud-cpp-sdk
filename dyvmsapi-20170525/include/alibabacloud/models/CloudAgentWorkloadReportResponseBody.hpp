// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTWORKLOADREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTWORKLOADREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentWorkloadReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentWorkloadReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentWorkloadReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudAgentWorkloadReportResponseBody() = default ;
    CloudAgentWorkloadReportResponseBody(const CloudAgentWorkloadReportResponseBody &) = default ;
    CloudAgentWorkloadReportResponseBody(CloudAgentWorkloadReportResponseBody &&) = default ;
    CloudAgentWorkloadReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentWorkloadReportResponseBody() = default ;
    CloudAgentWorkloadReportResponseBody& operator=(const CloudAgentWorkloadReportResponseBody &) = default ;
    CloudAgentWorkloadReportResponseBody& operator=(CloudAgentWorkloadReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAnswerRate, agentAnswerRate_);
          DARABONBA_PTR_TO_JSON(AgentCreateTime, agentCreateTime_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(AgentRate, agentRate_);
          DARABONBA_PTR_TO_JSON(AgentStopTime, agentStopTime_);
          DARABONBA_PTR_TO_JSON(AvgIdleTime, avgIdleTime_);
          DARABONBA_PTR_TO_JSON(AvgPauseTime, avgPauseTime_);
          DARABONBA_PTR_TO_JSON(AvgPreviewObWaitTime, avgPreviewObWaitTime_);
          DARABONBA_PTR_TO_JSON(AvgRestTime, avgRestTime_);
          DARABONBA_PTR_TO_JSON(CallUtilization, callUtilization_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DateTimeRange, dateTimeRange_);
          DARABONBA_PTR_TO_JSON(Day, day_);
          DARABONBA_PTR_TO_JSON(DirectObAnsweredCount, directObAnsweredCount_);
          DARABONBA_PTR_TO_JSON(DirectObAnsweredDurationArray, directObAnsweredDurationArray_);
          DARABONBA_PTR_TO_JSON(DirectObAnsweredDurationDscArray, directObAnsweredDurationDscArray_);
          DARABONBA_PTR_TO_JSON(DirectObBridgeDuration, directObBridgeDuration_);
          DARABONBA_PTR_TO_JSON(DirectObBridgeTime, directObBridgeTime_);
          DARABONBA_PTR_TO_JSON(DirectObConsultCount, directObConsultCount_);
          DARABONBA_PTR_TO_JSON(DirectObMonitorBargeCount, directObMonitorBargeCount_);
          DARABONBA_PTR_TO_JSON(DirectObMonitorDisconnectCount, directObMonitorDisconnectCount_);
          DARABONBA_PTR_TO_JSON(DirectObMonitorSpyCount, directObMonitorSpyCount_);
          DARABONBA_PTR_TO_JSON(DirectObMonitorThreewayCount, directObMonitorThreewayCount_);
          DARABONBA_PTR_TO_JSON(DirectObMonitorWhisperCount, directObMonitorWhisperCount_);
          DARABONBA_PTR_TO_JSON(DirectObTotalCount, directObTotalCount_);
          DARABONBA_PTR_TO_JSON(DirectObTotalTime, directObTotalTime_);
          DARABONBA_PTR_TO_JSON(DirectObTransferCount, directObTransferCount_);
          DARABONBA_PTR_TO_JSON(DirectObValidCalls, directObValidCalls_);
          DARABONBA_PTR_TO_JSON(DirectObValidTotalBridgeTime, directObValidTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(HoursUtilization, hoursUtilization_);
          DARABONBA_PTR_TO_JSON(IbAgentHangupCount, ibAgentHangupCount_);
          DARABONBA_PTR_TO_JSON(IbAgentRefuseCount, ibAgentRefuseCount_);
          DARABONBA_PTR_TO_JSON(IbAnsweredCount, ibAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbAnsweredDurationArray, ibAnsweredDurationArray_);
          DARABONBA_PTR_TO_JSON(IbAnsweredDurationDscArray, ibAnsweredDurationDscArray_);
          DARABONBA_PTR_TO_JSON(IbAvgAnswerDelayTime, ibAvgAnswerDelayTime_);
          DARABONBA_PTR_TO_JSON(IbAvgBridgeTime, ibAvgBridgeTime_);
          DARABONBA_PTR_TO_JSON(IbAvgCallingTime, ibAvgCallingTime_);
          DARABONBA_PTR_TO_JSON(IbAvgHoldTime, ibAvgHoldTime_);
          DARABONBA_PTR_TO_JSON(IbAvgWrapupTime, ibAvgWrapupTime_);
          DARABONBA_PTR_TO_JSON(IbBridgeCount, ibBridgeCount_);
          DARABONBA_PTR_TO_JSON(IbBridgeMinute, ibBridgeMinute_);
          DARABONBA_PTR_TO_JSON(IbBridgeTime, ibBridgeTime_);
          DARABONBA_PTR_TO_JSON(IbCallingCount, ibCallingCount_);
          DARABONBA_PTR_TO_JSON(IbCallingTime, ibCallingTime_);
          DARABONBA_PTR_TO_JSON(IbConsultCount, ibConsultCount_);
          DARABONBA_PTR_TO_JSON(IbCustomerHangupCount, ibCustomerHangupCount_);
          DARABONBA_PTR_TO_JSON(IbHoldCount, ibHoldCount_);
          DARABONBA_PTR_TO_JSON(IbHoldTime, ibHoldTime_);
          DARABONBA_PTR_TO_JSON(IbMaxAnswerDelayTime, ibMaxAnswerDelayTime_);
          DARABONBA_PTR_TO_JSON(IbMaxBridgeTime, ibMaxBridgeTime_);
          DARABONBA_PTR_TO_JSON(IbMaxCallingTime, ibMaxCallingTime_);
          DARABONBA_PTR_TO_JSON(IbMaxHoldTime, ibMaxHoldTime_);
          DARABONBA_PTR_TO_JSON(IbMaxWrapupTime, ibMaxWrapupTime_);
          DARABONBA_PTR_TO_JSON(IbMinAnswerDelayTime, ibMinAnswerDelayTime_);
          DARABONBA_PTR_TO_JSON(IbMinBridgeTime, ibMinBridgeTime_);
          DARABONBA_PTR_TO_JSON(IbMinCallingTime, ibMinCallingTime_);
          DARABONBA_PTR_TO_JSON(IbMinHoldTime, ibMinHoldTime_);
          DARABONBA_PTR_TO_JSON(IbMinWrapupTime, ibMinWrapupTime_);
          DARABONBA_PTR_TO_JSON(IbMonitorBargeCount, ibMonitorBargeCount_);
          DARABONBA_PTR_TO_JSON(IbMonitorBargeDuration, ibMonitorBargeDuration_);
          DARABONBA_PTR_TO_JSON(IbMonitorDisconnectCount, ibMonitorDisconnectCount_);
          DARABONBA_PTR_TO_JSON(IbMonitorPickupCount, ibMonitorPickupCount_);
          DARABONBA_PTR_TO_JSON(IbMonitorPickupDuration, ibMonitorPickupDuration_);
          DARABONBA_PTR_TO_JSON(IbMonitorSpyCount, ibMonitorSpyCount_);
          DARABONBA_PTR_TO_JSON(IbMonitorSpyDuration, ibMonitorSpyDuration_);
          DARABONBA_PTR_TO_JSON(IbMonitorThreewayCount, ibMonitorThreewayCount_);
          DARABONBA_PTR_TO_JSON(IbMonitorWhisperCount, ibMonitorWhisperCount_);
          DARABONBA_PTR_TO_JSON(IbMonitorWhisperDuration, ibMonitorWhisperDuration_);
          DARABONBA_PTR_TO_JSON(IbTotalAnswerDelayTime, ibTotalAnswerDelayTime_);
          DARABONBA_PTR_TO_JSON(IbTotalCount, ibTotalCount_);
          DARABONBA_PTR_TO_JSON(IbTotalMinute, ibTotalMinute_);
          DARABONBA_PTR_TO_JSON(IbTotalTime, ibTotalTime_);
          DARABONBA_PTR_TO_JSON(IbTransferCount, ibTransferCount_);
          DARABONBA_PTR_TO_JSON(IbUnansweredCount, ibUnansweredCount_);
          DARABONBA_PTR_TO_JSON(IbUniqueAnsweredCount, ibUniqueAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbUniqueTotalCount, ibUniqueTotalCount_);
          DARABONBA_PTR_TO_JSON(IbUniqueUnansweredCount, ibUniqueUnansweredCount_);
          DARABONBA_PTR_TO_JSON(IbValidCalls, ibValidCalls_);
          DARABONBA_PTR_TO_JSON(IbValidTotalBridgeTime, ibValidTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(IbWrapupCount, ibWrapupCount_);
          DARABONBA_PTR_TO_JSON(IbWrapupTime, ibWrapupTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdleCount, idleCount_);
          DARABONBA_PTR_TO_JSON(IdleTime, idleTime_);
          DARABONBA_PTR_TO_JSON(IvrTransferBridgeCount, ivrTransferBridgeCount_);
          DARABONBA_PTR_TO_JSON(IvrTransferBridgeDuration, ivrTransferBridgeDuration_);
          DARABONBA_PTR_TO_JSON(IvrTransferCount, ivrTransferCount_);
          DARABONBA_PTR_TO_JSON(LoginTime, loginTime_);
          DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
          DARABONBA_PTR_TO_JSON(MaxPauseTime, maxPauseTime_);
          DARABONBA_PTR_TO_JSON(MaxRestTime, maxRestTime_);
          DARABONBA_PTR_TO_JSON(MinIdleTime, minIdleTime_);
          DARABONBA_PTR_TO_JSON(MinPauseTime, minPauseTime_);
          DARABONBA_PTR_TO_JSON(MinRestTime, minRestTime_);
          DARABONBA_PTR_TO_JSON(ObAvgBridgeTime, obAvgBridgeTime_);
          DARABONBA_PTR_TO_JSON(ObAvgCallingTime, obAvgCallingTime_);
          DARABONBA_PTR_TO_JSON(ObAvgHoldTime, obAvgHoldTime_);
          DARABONBA_PTR_TO_JSON(ObAvgWrapupTime, obAvgWrapupTime_);
          DARABONBA_PTR_TO_JSON(ObBridgeCount, obBridgeCount_);
          DARABONBA_PTR_TO_JSON(ObBridgeTime, obBridgeTime_);
          DARABONBA_PTR_TO_JSON(ObCallingCount, obCallingCount_);
          DARABONBA_PTR_TO_JSON(ObCallingTime, obCallingTime_);
          DARABONBA_PTR_TO_JSON(ObHoldCount, obHoldCount_);
          DARABONBA_PTR_TO_JSON(ObHoldTime, obHoldTime_);
          DARABONBA_PTR_TO_JSON(ObMaxBridgeTime, obMaxBridgeTime_);
          DARABONBA_PTR_TO_JSON(ObMaxCallingTime, obMaxCallingTime_);
          DARABONBA_PTR_TO_JSON(ObMaxHoldTime, obMaxHoldTime_);
          DARABONBA_PTR_TO_JSON(ObMaxWrapupTime, obMaxWrapupTime_);
          DARABONBA_PTR_TO_JSON(ObMinBridgeTime, obMinBridgeTime_);
          DARABONBA_PTR_TO_JSON(ObMinCallingTime, obMinCallingTime_);
          DARABONBA_PTR_TO_JSON(ObMinHoldTime, obMinHoldTime_);
          DARABONBA_PTR_TO_JSON(ObMinWrapupTime, obMinWrapupTime_);
          DARABONBA_PTR_TO_JSON(ObRealBridgeTime, obRealBridgeTime_);
          DARABONBA_PTR_TO_JSON(ObWrapupCount, obWrapupCount_);
          DARABONBA_PTR_TO_JSON(ObWrapupTime, obWrapupTime_);
          DARABONBA_PTR_TO_JSON(PauseCount, pauseCount_);
          DARABONBA_PTR_TO_JSON(PauseTime, pauseTime_);
          DARABONBA_PTR_TO_JSON(PredictObAgentAnsweredHour, predictObAgentAnsweredHour_);
          DARABONBA_PTR_TO_JSON(PredictObAgentAnsweredTime, predictObAgentAnsweredTime_);
          DARABONBA_PTR_TO_JSON(PredictObAnsweredCount, predictObAnsweredCount_);
          DARABONBA_PTR_TO_JSON(PredictObAnsweredDurationArray, predictObAnsweredDurationArray_);
          DARABONBA_PTR_TO_JSON(PredictObConsultCount, predictObConsultCount_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorBargeCount, predictObMonitorBargeCount_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorBargeDuration, predictObMonitorBargeDuration_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorDisconnectCount, predictObMonitorDisconnectCount_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorSpyCount, predictObMonitorSpyCount_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorSpyDuration, predictObMonitorSpyDuration_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorThreewayCount, predictObMonitorThreewayCount_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorWhisperCount, predictObMonitorWhisperCount_);
          DARABONBA_PTR_TO_JSON(PredictObMonitorWhisperDuration, predictObMonitorWhisperDuration_);
          DARABONBA_PTR_TO_JSON(PredictObTotalCount, predictObTotalCount_);
          DARABONBA_PTR_TO_JSON(PredictObTransferCount, predictObTransferCount_);
          DARABONBA_PTR_TO_JSON(PredictObValidCalls, predictObValidCalls_);
          DARABONBA_PTR_TO_JSON(PredictObValidTotalBridgeHour, predictObValidTotalBridgeHour_);
          DARABONBA_PTR_TO_JSON(PredictObValidTotalBridgeTime, predictObValidTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(PreviewAgentAnswerdRate, previewAgentAnswerdRate_);
          DARABONBA_PTR_TO_JSON(PreviewCustomerAnswerdRate, previewCustomerAnswerdRate_);
          DARABONBA_PTR_TO_JSON(PreviewObAgentAnsweredCount, previewObAgentAnsweredCount_);
          DARABONBA_PTR_TO_JSON(PreviewObAgentAnsweredTime, previewObAgentAnsweredTime_);
          DARABONBA_PTR_TO_JSON(PreviewObAnsweredCount, previewObAnsweredCount_);
          DARABONBA_PTR_TO_JSON(PreviewObAnsweredDurationArray, previewObAnsweredDurationArray_);
          DARABONBA_PTR_TO_JSON(PreviewObAnsweredDurationDscArray, previewObAnsweredDurationDscArray_);
          DARABONBA_PTR_TO_JSON(PreviewObConsultCount, previewObConsultCount_);
          DARABONBA_PTR_TO_JSON(PreviewObCustomerAnsweredTime, previewObCustomerAnsweredTime_);
          DARABONBA_PTR_TO_JSON(PreviewObCustomerRingingCount, previewObCustomerRingingCount_);
          DARABONBA_PTR_TO_JSON(PreviewObCustomerRingingRate, previewObCustomerRingingRate_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorBargeCount, previewObMonitorBargeCount_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorBargeDuration, previewObMonitorBargeDuration_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorDisconnectCount, previewObMonitorDisconnectCount_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorSpyCount, previewObMonitorSpyCount_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorSpyDuration, previewObMonitorSpyDuration_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorThreewayCount, previewObMonitorThreewayCount_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorWhisperCount, previewObMonitorWhisperCount_);
          DARABONBA_PTR_TO_JSON(PreviewObMonitorWhisperDuration, previewObMonitorWhisperDuration_);
          DARABONBA_PTR_TO_JSON(PreviewObTotalBridgeHour, previewObTotalBridgeHour_);
          DARABONBA_PTR_TO_JSON(PreviewObTotalBridgeTime, previewObTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(PreviewObTotalCount, previewObTotalCount_);
          DARABONBA_PTR_TO_JSON(PreviewObTransferBridgeCount, previewObTransferBridgeCount_);
          DARABONBA_PTR_TO_JSON(PreviewObTransferBridgeDuration, previewObTransferBridgeDuration_);
          DARABONBA_PTR_TO_JSON(PreviewObTransferCount, previewObTransferCount_);
          DARABONBA_PTR_TO_JSON(PreviewObValidCalls, previewObValidCalls_);
          DARABONBA_PTR_TO_JSON(PreviewObValidTotalBridgeHour, previewObValidTotalBridgeHour_);
          DARABONBA_PTR_TO_JSON(PreviewObValidTotalBridgeTime, previewObValidTotalBridgeTime_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RestCount, restCount_);
          DARABONBA_PTR_TO_JSON(RestTime, restTime_);
          DARABONBA_PTR_TO_JSON(RowName, rowName_);
          DARABONBA_PTR_TO_JSON(TotalBridgeTime, totalBridgeTime_);
          DARABONBA_PTR_TO_JSON(WebcallObAgentAnsweredTime, webcallObAgentAnsweredTime_);
          DARABONBA_PTR_TO_JSON(WebcallObAnsweredCount, webcallObAnsweredCount_);
          DARABONBA_PTR_TO_JSON(WebcallObAnsweredDurationArray, webcallObAnsweredDurationArray_);
          DARABONBA_PTR_TO_JSON(WebcallObConsultCount, webcallObConsultCount_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorBargeCount, webcallObMonitorBargeCount_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorBargeDuration, webcallObMonitorBargeDuration_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorDisconnectCount, webcallObMonitorDisconnectCount_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorSpyCount, webcallObMonitorSpyCount_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorSpyDuration, webcallObMonitorSpyDuration_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorThreewayCount, webcallObMonitorThreewayCount_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorWhisperCount, webcallObMonitorWhisperCount_);
          DARABONBA_PTR_TO_JSON(WebcallObMonitorWhisperDuration, webcallObMonitorWhisperDuration_);
          DARABONBA_PTR_TO_JSON(WebcallObTotalCount, webcallObTotalCount_);
          DARABONBA_PTR_TO_JSON(WebcallObTransferCount, webcallObTransferCount_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAnswerRate, agentAnswerRate_);
          DARABONBA_PTR_FROM_JSON(AgentCreateTime, agentCreateTime_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(AgentRate, agentRate_);
          DARABONBA_PTR_FROM_JSON(AgentStopTime, agentStopTime_);
          DARABONBA_PTR_FROM_JSON(AvgIdleTime, avgIdleTime_);
          DARABONBA_PTR_FROM_JSON(AvgPauseTime, avgPauseTime_);
          DARABONBA_PTR_FROM_JSON(AvgPreviewObWaitTime, avgPreviewObWaitTime_);
          DARABONBA_PTR_FROM_JSON(AvgRestTime, avgRestTime_);
          DARABONBA_PTR_FROM_JSON(CallUtilization, callUtilization_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DateTimeRange, dateTimeRange_);
          DARABONBA_PTR_FROM_JSON(Day, day_);
          DARABONBA_PTR_FROM_JSON(DirectObAnsweredCount, directObAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(DirectObAnsweredDurationArray, directObAnsweredDurationArray_);
          DARABONBA_PTR_FROM_JSON(DirectObAnsweredDurationDscArray, directObAnsweredDurationDscArray_);
          DARABONBA_PTR_FROM_JSON(DirectObBridgeDuration, directObBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(DirectObBridgeTime, directObBridgeTime_);
          DARABONBA_PTR_FROM_JSON(DirectObConsultCount, directObConsultCount_);
          DARABONBA_PTR_FROM_JSON(DirectObMonitorBargeCount, directObMonitorBargeCount_);
          DARABONBA_PTR_FROM_JSON(DirectObMonitorDisconnectCount, directObMonitorDisconnectCount_);
          DARABONBA_PTR_FROM_JSON(DirectObMonitorSpyCount, directObMonitorSpyCount_);
          DARABONBA_PTR_FROM_JSON(DirectObMonitorThreewayCount, directObMonitorThreewayCount_);
          DARABONBA_PTR_FROM_JSON(DirectObMonitorWhisperCount, directObMonitorWhisperCount_);
          DARABONBA_PTR_FROM_JSON(DirectObTotalCount, directObTotalCount_);
          DARABONBA_PTR_FROM_JSON(DirectObTotalTime, directObTotalTime_);
          DARABONBA_PTR_FROM_JSON(DirectObTransferCount, directObTransferCount_);
          DARABONBA_PTR_FROM_JSON(DirectObValidCalls, directObValidCalls_);
          DARABONBA_PTR_FROM_JSON(DirectObValidTotalBridgeTime, directObValidTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(HoursUtilization, hoursUtilization_);
          DARABONBA_PTR_FROM_JSON(IbAgentHangupCount, ibAgentHangupCount_);
          DARABONBA_PTR_FROM_JSON(IbAgentRefuseCount, ibAgentRefuseCount_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredCount, ibAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredDurationArray, ibAnsweredDurationArray_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredDurationDscArray, ibAnsweredDurationDscArray_);
          DARABONBA_PTR_FROM_JSON(IbAvgAnswerDelayTime, ibAvgAnswerDelayTime_);
          DARABONBA_PTR_FROM_JSON(IbAvgBridgeTime, ibAvgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(IbAvgCallingTime, ibAvgCallingTime_);
          DARABONBA_PTR_FROM_JSON(IbAvgHoldTime, ibAvgHoldTime_);
          DARABONBA_PTR_FROM_JSON(IbAvgWrapupTime, ibAvgWrapupTime_);
          DARABONBA_PTR_FROM_JSON(IbBridgeCount, ibBridgeCount_);
          DARABONBA_PTR_FROM_JSON(IbBridgeMinute, ibBridgeMinute_);
          DARABONBA_PTR_FROM_JSON(IbBridgeTime, ibBridgeTime_);
          DARABONBA_PTR_FROM_JSON(IbCallingCount, ibCallingCount_);
          DARABONBA_PTR_FROM_JSON(IbCallingTime, ibCallingTime_);
          DARABONBA_PTR_FROM_JSON(IbConsultCount, ibConsultCount_);
          DARABONBA_PTR_FROM_JSON(IbCustomerHangupCount, ibCustomerHangupCount_);
          DARABONBA_PTR_FROM_JSON(IbHoldCount, ibHoldCount_);
          DARABONBA_PTR_FROM_JSON(IbHoldTime, ibHoldTime_);
          DARABONBA_PTR_FROM_JSON(IbMaxAnswerDelayTime, ibMaxAnswerDelayTime_);
          DARABONBA_PTR_FROM_JSON(IbMaxBridgeTime, ibMaxBridgeTime_);
          DARABONBA_PTR_FROM_JSON(IbMaxCallingTime, ibMaxCallingTime_);
          DARABONBA_PTR_FROM_JSON(IbMaxHoldTime, ibMaxHoldTime_);
          DARABONBA_PTR_FROM_JSON(IbMaxWrapupTime, ibMaxWrapupTime_);
          DARABONBA_PTR_FROM_JSON(IbMinAnswerDelayTime, ibMinAnswerDelayTime_);
          DARABONBA_PTR_FROM_JSON(IbMinBridgeTime, ibMinBridgeTime_);
          DARABONBA_PTR_FROM_JSON(IbMinCallingTime, ibMinCallingTime_);
          DARABONBA_PTR_FROM_JSON(IbMinHoldTime, ibMinHoldTime_);
          DARABONBA_PTR_FROM_JSON(IbMinWrapupTime, ibMinWrapupTime_);
          DARABONBA_PTR_FROM_JSON(IbMonitorBargeCount, ibMonitorBargeCount_);
          DARABONBA_PTR_FROM_JSON(IbMonitorBargeDuration, ibMonitorBargeDuration_);
          DARABONBA_PTR_FROM_JSON(IbMonitorDisconnectCount, ibMonitorDisconnectCount_);
          DARABONBA_PTR_FROM_JSON(IbMonitorPickupCount, ibMonitorPickupCount_);
          DARABONBA_PTR_FROM_JSON(IbMonitorPickupDuration, ibMonitorPickupDuration_);
          DARABONBA_PTR_FROM_JSON(IbMonitorSpyCount, ibMonitorSpyCount_);
          DARABONBA_PTR_FROM_JSON(IbMonitorSpyDuration, ibMonitorSpyDuration_);
          DARABONBA_PTR_FROM_JSON(IbMonitorThreewayCount, ibMonitorThreewayCount_);
          DARABONBA_PTR_FROM_JSON(IbMonitorWhisperCount, ibMonitorWhisperCount_);
          DARABONBA_PTR_FROM_JSON(IbMonitorWhisperDuration, ibMonitorWhisperDuration_);
          DARABONBA_PTR_FROM_JSON(IbTotalAnswerDelayTime, ibTotalAnswerDelayTime_);
          DARABONBA_PTR_FROM_JSON(IbTotalCount, ibTotalCount_);
          DARABONBA_PTR_FROM_JSON(IbTotalMinute, ibTotalMinute_);
          DARABONBA_PTR_FROM_JSON(IbTotalTime, ibTotalTime_);
          DARABONBA_PTR_FROM_JSON(IbTransferCount, ibTransferCount_);
          DARABONBA_PTR_FROM_JSON(IbUnansweredCount, ibUnansweredCount_);
          DARABONBA_PTR_FROM_JSON(IbUniqueAnsweredCount, ibUniqueAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbUniqueTotalCount, ibUniqueTotalCount_);
          DARABONBA_PTR_FROM_JSON(IbUniqueUnansweredCount, ibUniqueUnansweredCount_);
          DARABONBA_PTR_FROM_JSON(IbValidCalls, ibValidCalls_);
          DARABONBA_PTR_FROM_JSON(IbValidTotalBridgeTime, ibValidTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(IbWrapupCount, ibWrapupCount_);
          DARABONBA_PTR_FROM_JSON(IbWrapupTime, ibWrapupTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdleCount, idleCount_);
          DARABONBA_PTR_FROM_JSON(IdleTime, idleTime_);
          DARABONBA_PTR_FROM_JSON(IvrTransferBridgeCount, ivrTransferBridgeCount_);
          DARABONBA_PTR_FROM_JSON(IvrTransferBridgeDuration, ivrTransferBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(IvrTransferCount, ivrTransferCount_);
          DARABONBA_PTR_FROM_JSON(LoginTime, loginTime_);
          DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
          DARABONBA_PTR_FROM_JSON(MaxPauseTime, maxPauseTime_);
          DARABONBA_PTR_FROM_JSON(MaxRestTime, maxRestTime_);
          DARABONBA_PTR_FROM_JSON(MinIdleTime, minIdleTime_);
          DARABONBA_PTR_FROM_JSON(MinPauseTime, minPauseTime_);
          DARABONBA_PTR_FROM_JSON(MinRestTime, minRestTime_);
          DARABONBA_PTR_FROM_JSON(ObAvgBridgeTime, obAvgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ObAvgCallingTime, obAvgCallingTime_);
          DARABONBA_PTR_FROM_JSON(ObAvgHoldTime, obAvgHoldTime_);
          DARABONBA_PTR_FROM_JSON(ObAvgWrapupTime, obAvgWrapupTime_);
          DARABONBA_PTR_FROM_JSON(ObBridgeCount, obBridgeCount_);
          DARABONBA_PTR_FROM_JSON(ObBridgeTime, obBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ObCallingCount, obCallingCount_);
          DARABONBA_PTR_FROM_JSON(ObCallingTime, obCallingTime_);
          DARABONBA_PTR_FROM_JSON(ObHoldCount, obHoldCount_);
          DARABONBA_PTR_FROM_JSON(ObHoldTime, obHoldTime_);
          DARABONBA_PTR_FROM_JSON(ObMaxBridgeTime, obMaxBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ObMaxCallingTime, obMaxCallingTime_);
          DARABONBA_PTR_FROM_JSON(ObMaxHoldTime, obMaxHoldTime_);
          DARABONBA_PTR_FROM_JSON(ObMaxWrapupTime, obMaxWrapupTime_);
          DARABONBA_PTR_FROM_JSON(ObMinBridgeTime, obMinBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ObMinCallingTime, obMinCallingTime_);
          DARABONBA_PTR_FROM_JSON(ObMinHoldTime, obMinHoldTime_);
          DARABONBA_PTR_FROM_JSON(ObMinWrapupTime, obMinWrapupTime_);
          DARABONBA_PTR_FROM_JSON(ObRealBridgeTime, obRealBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ObWrapupCount, obWrapupCount_);
          DARABONBA_PTR_FROM_JSON(ObWrapupTime, obWrapupTime_);
          DARABONBA_PTR_FROM_JSON(PauseCount, pauseCount_);
          DARABONBA_PTR_FROM_JSON(PauseTime, pauseTime_);
          DARABONBA_PTR_FROM_JSON(PredictObAgentAnsweredHour, predictObAgentAnsweredHour_);
          DARABONBA_PTR_FROM_JSON(PredictObAgentAnsweredTime, predictObAgentAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(PredictObAnsweredCount, predictObAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(PredictObAnsweredDurationArray, predictObAnsweredDurationArray_);
          DARABONBA_PTR_FROM_JSON(PredictObConsultCount, predictObConsultCount_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorBargeCount, predictObMonitorBargeCount_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorBargeDuration, predictObMonitorBargeDuration_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorDisconnectCount, predictObMonitorDisconnectCount_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorSpyCount, predictObMonitorSpyCount_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorSpyDuration, predictObMonitorSpyDuration_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorThreewayCount, predictObMonitorThreewayCount_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorWhisperCount, predictObMonitorWhisperCount_);
          DARABONBA_PTR_FROM_JSON(PredictObMonitorWhisperDuration, predictObMonitorWhisperDuration_);
          DARABONBA_PTR_FROM_JSON(PredictObTotalCount, predictObTotalCount_);
          DARABONBA_PTR_FROM_JSON(PredictObTransferCount, predictObTransferCount_);
          DARABONBA_PTR_FROM_JSON(PredictObValidCalls, predictObValidCalls_);
          DARABONBA_PTR_FROM_JSON(PredictObValidTotalBridgeHour, predictObValidTotalBridgeHour_);
          DARABONBA_PTR_FROM_JSON(PredictObValidTotalBridgeTime, predictObValidTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(PreviewAgentAnswerdRate, previewAgentAnswerdRate_);
          DARABONBA_PTR_FROM_JSON(PreviewCustomerAnswerdRate, previewCustomerAnswerdRate_);
          DARABONBA_PTR_FROM_JSON(PreviewObAgentAnsweredCount, previewObAgentAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObAgentAnsweredTime, previewObAgentAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(PreviewObAnsweredCount, previewObAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObAnsweredDurationArray, previewObAnsweredDurationArray_);
          DARABONBA_PTR_FROM_JSON(PreviewObAnsweredDurationDscArray, previewObAnsweredDurationDscArray_);
          DARABONBA_PTR_FROM_JSON(PreviewObConsultCount, previewObConsultCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObCustomerAnsweredTime, previewObCustomerAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(PreviewObCustomerRingingCount, previewObCustomerRingingCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObCustomerRingingRate, previewObCustomerRingingRate_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorBargeCount, previewObMonitorBargeCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorBargeDuration, previewObMonitorBargeDuration_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorDisconnectCount, previewObMonitorDisconnectCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorSpyCount, previewObMonitorSpyCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorSpyDuration, previewObMonitorSpyDuration_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorThreewayCount, previewObMonitorThreewayCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorWhisperCount, previewObMonitorWhisperCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObMonitorWhisperDuration, previewObMonitorWhisperDuration_);
          DARABONBA_PTR_FROM_JSON(PreviewObTotalBridgeHour, previewObTotalBridgeHour_);
          DARABONBA_PTR_FROM_JSON(PreviewObTotalBridgeTime, previewObTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(PreviewObTotalCount, previewObTotalCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObTransferBridgeCount, previewObTransferBridgeCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObTransferBridgeDuration, previewObTransferBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(PreviewObTransferCount, previewObTransferCount_);
          DARABONBA_PTR_FROM_JSON(PreviewObValidCalls, previewObValidCalls_);
          DARABONBA_PTR_FROM_JSON(PreviewObValidTotalBridgeHour, previewObValidTotalBridgeHour_);
          DARABONBA_PTR_FROM_JSON(PreviewObValidTotalBridgeTime, previewObValidTotalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RestCount, restCount_);
          DARABONBA_PTR_FROM_JSON(RestTime, restTime_);
          DARABONBA_PTR_FROM_JSON(RowName, rowName_);
          DARABONBA_PTR_FROM_JSON(TotalBridgeTime, totalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(WebcallObAgentAnsweredTime, webcallObAgentAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(WebcallObAnsweredCount, webcallObAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObAnsweredDurationArray, webcallObAnsweredDurationArray_);
          DARABONBA_PTR_FROM_JSON(WebcallObConsultCount, webcallObConsultCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorBargeCount, webcallObMonitorBargeCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorBargeDuration, webcallObMonitorBargeDuration_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorDisconnectCount, webcallObMonitorDisconnectCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorSpyCount, webcallObMonitorSpyCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorSpyDuration, webcallObMonitorSpyDuration_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorThreewayCount, webcallObMonitorThreewayCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorWhisperCount, webcallObMonitorWhisperCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObMonitorWhisperDuration, webcallObMonitorWhisperDuration_);
          DARABONBA_PTR_FROM_JSON(WebcallObTotalCount, webcallObTotalCount_);
          DARABONBA_PTR_FROM_JSON(WebcallObTransferCount, webcallObTransferCount_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentAnswerRate_ == nullptr
        && this->agentCreateTime_ == nullptr && this->agentName_ == nullptr && this->agentRate_ == nullptr && this->agentStopTime_ == nullptr && this->avgIdleTime_ == nullptr
        && this->avgPauseTime_ == nullptr && this->avgPreviewObWaitTime_ == nullptr && this->avgRestTime_ == nullptr && this->callUtilization_ == nullptr && this->cno_ == nullptr
        && this->createTime_ == nullptr && this->dateTimeRange_ == nullptr && this->day_ == nullptr && this->directObAnsweredCount_ == nullptr && this->directObAnsweredDurationArray_ == nullptr
        && this->directObAnsweredDurationDscArray_ == nullptr && this->directObBridgeDuration_ == nullptr && this->directObBridgeTime_ == nullptr && this->directObConsultCount_ == nullptr && this->directObMonitorBargeCount_ == nullptr
        && this->directObMonitorDisconnectCount_ == nullptr && this->directObMonitorSpyCount_ == nullptr && this->directObMonitorThreewayCount_ == nullptr && this->directObMonitorWhisperCount_ == nullptr && this->directObTotalCount_ == nullptr
        && this->directObTotalTime_ == nullptr && this->directObTransferCount_ == nullptr && this->directObValidCalls_ == nullptr && this->directObValidTotalBridgeTime_ == nullptr && this->enterpriseId_ == nullptr
        && this->hoursUtilization_ == nullptr && this->ibAgentHangupCount_ == nullptr && this->ibAgentRefuseCount_ == nullptr && this->ibAnsweredCount_ == nullptr && this->ibAnsweredDurationArray_ == nullptr
        && this->ibAnsweredDurationDscArray_ == nullptr && this->ibAvgAnswerDelayTime_ == nullptr && this->ibAvgBridgeTime_ == nullptr && this->ibAvgCallingTime_ == nullptr && this->ibAvgHoldTime_ == nullptr
        && this->ibAvgWrapupTime_ == nullptr && this->ibBridgeCount_ == nullptr && this->ibBridgeMinute_ == nullptr && this->ibBridgeTime_ == nullptr && this->ibCallingCount_ == nullptr
        && this->ibCallingTime_ == nullptr && this->ibConsultCount_ == nullptr && this->ibCustomerHangupCount_ == nullptr && this->ibHoldCount_ == nullptr && this->ibHoldTime_ == nullptr
        && this->ibMaxAnswerDelayTime_ == nullptr && this->ibMaxBridgeTime_ == nullptr && this->ibMaxCallingTime_ == nullptr && this->ibMaxHoldTime_ == nullptr && this->ibMaxWrapupTime_ == nullptr
        && this->ibMinAnswerDelayTime_ == nullptr && this->ibMinBridgeTime_ == nullptr && this->ibMinCallingTime_ == nullptr && this->ibMinHoldTime_ == nullptr && this->ibMinWrapupTime_ == nullptr
        && this->ibMonitorBargeCount_ == nullptr && this->ibMonitorBargeDuration_ == nullptr && this->ibMonitorDisconnectCount_ == nullptr && this->ibMonitorPickupCount_ == nullptr && this->ibMonitorPickupDuration_ == nullptr
        && this->ibMonitorSpyCount_ == nullptr && this->ibMonitorSpyDuration_ == nullptr && this->ibMonitorThreewayCount_ == nullptr && this->ibMonitorWhisperCount_ == nullptr && this->ibMonitorWhisperDuration_ == nullptr
        && this->ibTotalAnswerDelayTime_ == nullptr && this->ibTotalCount_ == nullptr && this->ibTotalMinute_ == nullptr && this->ibTotalTime_ == nullptr && this->ibTransferCount_ == nullptr
        && this->ibUnansweredCount_ == nullptr && this->ibUniqueAnsweredCount_ == nullptr && this->ibUniqueTotalCount_ == nullptr && this->ibUniqueUnansweredCount_ == nullptr && this->ibValidCalls_ == nullptr
        && this->ibValidTotalBridgeTime_ == nullptr && this->ibWrapupCount_ == nullptr && this->ibWrapupTime_ == nullptr && this->id_ == nullptr && this->idleCount_ == nullptr
        && this->idleTime_ == nullptr && this->ivrTransferBridgeCount_ == nullptr && this->ivrTransferBridgeDuration_ == nullptr && this->ivrTransferCount_ == nullptr && this->loginTime_ == nullptr
        && this->maxIdleTime_ == nullptr && this->maxPauseTime_ == nullptr && this->maxRestTime_ == nullptr && this->minIdleTime_ == nullptr && this->minPauseTime_ == nullptr
        && this->minRestTime_ == nullptr && this->obAvgBridgeTime_ == nullptr && this->obAvgCallingTime_ == nullptr && this->obAvgHoldTime_ == nullptr && this->obAvgWrapupTime_ == nullptr
        && this->obBridgeCount_ == nullptr && this->obBridgeTime_ == nullptr && this->obCallingCount_ == nullptr && this->obCallingTime_ == nullptr && this->obHoldCount_ == nullptr
        && this->obHoldTime_ == nullptr && this->obMaxBridgeTime_ == nullptr && this->obMaxCallingTime_ == nullptr && this->obMaxHoldTime_ == nullptr && this->obMaxWrapupTime_ == nullptr
        && this->obMinBridgeTime_ == nullptr && this->obMinCallingTime_ == nullptr && this->obMinHoldTime_ == nullptr && this->obMinWrapupTime_ == nullptr && this->obRealBridgeTime_ == nullptr
        && this->obWrapupCount_ == nullptr && this->obWrapupTime_ == nullptr && this->pauseCount_ == nullptr && this->pauseTime_ == nullptr && this->predictObAgentAnsweredHour_ == nullptr
        && this->predictObAgentAnsweredTime_ == nullptr && this->predictObAnsweredCount_ == nullptr && this->predictObAnsweredDurationArray_ == nullptr && this->predictObConsultCount_ == nullptr && this->predictObMonitorBargeCount_ == nullptr
        && this->predictObMonitorBargeDuration_ == nullptr && this->predictObMonitorDisconnectCount_ == nullptr && this->predictObMonitorSpyCount_ == nullptr && this->predictObMonitorSpyDuration_ == nullptr && this->predictObMonitorThreewayCount_ == nullptr
        && this->predictObMonitorWhisperCount_ == nullptr && this->predictObMonitorWhisperDuration_ == nullptr && this->predictObTotalCount_ == nullptr && this->predictObTransferCount_ == nullptr && this->predictObValidCalls_ == nullptr
        && this->predictObValidTotalBridgeHour_ == nullptr && this->predictObValidTotalBridgeTime_ == nullptr && this->previewAgentAnswerdRate_ == nullptr && this->previewCustomerAnswerdRate_ == nullptr && this->previewObAgentAnsweredCount_ == nullptr
        && this->previewObAgentAnsweredTime_ == nullptr && this->previewObAnsweredCount_ == nullptr && this->previewObAnsweredDurationArray_ == nullptr && this->previewObAnsweredDurationDscArray_ == nullptr && this->previewObConsultCount_ == nullptr
        && this->previewObCustomerAnsweredTime_ == nullptr && this->previewObCustomerRingingCount_ == nullptr && this->previewObCustomerRingingRate_ == nullptr && this->previewObMonitorBargeCount_ == nullptr && this->previewObMonitorBargeDuration_ == nullptr
        && this->previewObMonitorDisconnectCount_ == nullptr && this->previewObMonitorSpyCount_ == nullptr && this->previewObMonitorSpyDuration_ == nullptr && this->previewObMonitorThreewayCount_ == nullptr && this->previewObMonitorWhisperCount_ == nullptr
        && this->previewObMonitorWhisperDuration_ == nullptr && this->previewObTotalBridgeHour_ == nullptr && this->previewObTotalBridgeTime_ == nullptr && this->previewObTotalCount_ == nullptr && this->previewObTransferBridgeCount_ == nullptr
        && this->previewObTransferBridgeDuration_ == nullptr && this->previewObTransferCount_ == nullptr && this->previewObValidCalls_ == nullptr && this->previewObValidTotalBridgeHour_ == nullptr && this->previewObValidTotalBridgeTime_ == nullptr
        && this->queueName_ == nullptr && this->restCount_ == nullptr && this->restTime_ == nullptr && this->rowName_ == nullptr && this->totalBridgeTime_ == nullptr
        && this->webcallObAgentAnsweredTime_ == nullptr && this->webcallObAnsweredCount_ == nullptr && this->webcallObAnsweredDurationArray_ == nullptr && this->webcallObConsultCount_ == nullptr && this->webcallObMonitorBargeCount_ == nullptr
        && this->webcallObMonitorBargeDuration_ == nullptr && this->webcallObMonitorDisconnectCount_ == nullptr && this->webcallObMonitorSpyCount_ == nullptr && this->webcallObMonitorSpyDuration_ == nullptr && this->webcallObMonitorThreewayCount_ == nullptr
        && this->webcallObMonitorWhisperCount_ == nullptr && this->webcallObMonitorWhisperDuration_ == nullptr && this->webcallObTotalCount_ == nullptr && this->webcallObTransferCount_ == nullptr; };
        // agentAnswerRate Field Functions 
        bool hasAgentAnswerRate() const { return this->agentAnswerRate_ != nullptr;};
        void deleteAgentAnswerRate() { this->agentAnswerRate_ = nullptr;};
        inline string getAgentAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(agentAnswerRate_, "") };
        inline List& setAgentAnswerRate(string agentAnswerRate) { DARABONBA_PTR_SET_VALUE(agentAnswerRate_, agentAnswerRate) };


        // agentCreateTime Field Functions 
        bool hasAgentCreateTime() const { return this->agentCreateTime_ != nullptr;};
        void deleteAgentCreateTime() { this->agentCreateTime_ = nullptr;};
        inline string getAgentCreateTime() const { DARABONBA_PTR_GET_DEFAULT(agentCreateTime_, "") };
        inline List& setAgentCreateTime(string agentCreateTime) { DARABONBA_PTR_SET_VALUE(agentCreateTime_, agentCreateTime) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // agentRate Field Functions 
        bool hasAgentRate() const { return this->agentRate_ != nullptr;};
        void deleteAgentRate() { this->agentRate_ = nullptr;};
        inline string getAgentRate() const { DARABONBA_PTR_GET_DEFAULT(agentRate_, "") };
        inline List& setAgentRate(string agentRate) { DARABONBA_PTR_SET_VALUE(agentRate_, agentRate) };


        // agentStopTime Field Functions 
        bool hasAgentStopTime() const { return this->agentStopTime_ != nullptr;};
        void deleteAgentStopTime() { this->agentStopTime_ = nullptr;};
        inline string getAgentStopTime() const { DARABONBA_PTR_GET_DEFAULT(agentStopTime_, "") };
        inline List& setAgentStopTime(string agentStopTime) { DARABONBA_PTR_SET_VALUE(agentStopTime_, agentStopTime) };


        // avgIdleTime Field Functions 
        bool hasAvgIdleTime() const { return this->avgIdleTime_ != nullptr;};
        void deleteAvgIdleTime() { this->avgIdleTime_ = nullptr;};
        inline string getAvgIdleTime() const { DARABONBA_PTR_GET_DEFAULT(avgIdleTime_, "") };
        inline List& setAvgIdleTime(string avgIdleTime) { DARABONBA_PTR_SET_VALUE(avgIdleTime_, avgIdleTime) };


        // avgPauseTime Field Functions 
        bool hasAvgPauseTime() const { return this->avgPauseTime_ != nullptr;};
        void deleteAvgPauseTime() { this->avgPauseTime_ = nullptr;};
        inline string getAvgPauseTime() const { DARABONBA_PTR_GET_DEFAULT(avgPauseTime_, "") };
        inline List& setAvgPauseTime(string avgPauseTime) { DARABONBA_PTR_SET_VALUE(avgPauseTime_, avgPauseTime) };


        // avgPreviewObWaitTime Field Functions 
        bool hasAvgPreviewObWaitTime() const { return this->avgPreviewObWaitTime_ != nullptr;};
        void deleteAvgPreviewObWaitTime() { this->avgPreviewObWaitTime_ = nullptr;};
        inline string getAvgPreviewObWaitTime() const { DARABONBA_PTR_GET_DEFAULT(avgPreviewObWaitTime_, "") };
        inline List& setAvgPreviewObWaitTime(string avgPreviewObWaitTime) { DARABONBA_PTR_SET_VALUE(avgPreviewObWaitTime_, avgPreviewObWaitTime) };


        // avgRestTime Field Functions 
        bool hasAvgRestTime() const { return this->avgRestTime_ != nullptr;};
        void deleteAvgRestTime() { this->avgRestTime_ = nullptr;};
        inline string getAvgRestTime() const { DARABONBA_PTR_GET_DEFAULT(avgRestTime_, "") };
        inline List& setAvgRestTime(string avgRestTime) { DARABONBA_PTR_SET_VALUE(avgRestTime_, avgRestTime) };


        // callUtilization Field Functions 
        bool hasCallUtilization() const { return this->callUtilization_ != nullptr;};
        void deleteCallUtilization() { this->callUtilization_ = nullptr;};
        inline string getCallUtilization() const { DARABONBA_PTR_GET_DEFAULT(callUtilization_, "") };
        inline List& setCallUtilization(string callUtilization) { DARABONBA_PTR_SET_VALUE(callUtilization_, callUtilization) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline List& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dateTimeRange Field Functions 
        bool hasDateTimeRange() const { return this->dateTimeRange_ != nullptr;};
        void deleteDateTimeRange() { this->dateTimeRange_ = nullptr;};
        inline string getDateTimeRange() const { DARABONBA_PTR_GET_DEFAULT(dateTimeRange_, "") };
        inline List& setDateTimeRange(string dateTimeRange) { DARABONBA_PTR_SET_VALUE(dateTimeRange_, dateTimeRange) };


        // day Field Functions 
        bool hasDay() const { return this->day_ != nullptr;};
        void deleteDay() { this->day_ = nullptr;};
        inline string getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, "") };
        inline List& setDay(string day) { DARABONBA_PTR_SET_VALUE(day_, day) };


        // directObAnsweredCount Field Functions 
        bool hasDirectObAnsweredCount() const { return this->directObAnsweredCount_ != nullptr;};
        void deleteDirectObAnsweredCount() { this->directObAnsweredCount_ = nullptr;};
        inline string getDirectObAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(directObAnsweredCount_, "") };
        inline List& setDirectObAnsweredCount(string directObAnsweredCount) { DARABONBA_PTR_SET_VALUE(directObAnsweredCount_, directObAnsweredCount) };


        // directObAnsweredDurationArray Field Functions 
        bool hasDirectObAnsweredDurationArray() const { return this->directObAnsweredDurationArray_ != nullptr;};
        void deleteDirectObAnsweredDurationArray() { this->directObAnsweredDurationArray_ = nullptr;};
        inline string getDirectObAnsweredDurationArray() const { DARABONBA_PTR_GET_DEFAULT(directObAnsweredDurationArray_, "") };
        inline List& setDirectObAnsweredDurationArray(string directObAnsweredDurationArray) { DARABONBA_PTR_SET_VALUE(directObAnsweredDurationArray_, directObAnsweredDurationArray) };


        // directObAnsweredDurationDscArray Field Functions 
        bool hasDirectObAnsweredDurationDscArray() const { return this->directObAnsweredDurationDscArray_ != nullptr;};
        void deleteDirectObAnsweredDurationDscArray() { this->directObAnsweredDurationDscArray_ = nullptr;};
        inline const vector<string> & getDirectObAnsweredDurationDscArray() const { DARABONBA_PTR_GET_CONST(directObAnsweredDurationDscArray_, vector<string>) };
        inline vector<string> getDirectObAnsweredDurationDscArray() { DARABONBA_PTR_GET(directObAnsweredDurationDscArray_, vector<string>) };
        inline List& setDirectObAnsweredDurationDscArray(const vector<string> & directObAnsweredDurationDscArray) { DARABONBA_PTR_SET_VALUE(directObAnsweredDurationDscArray_, directObAnsweredDurationDscArray) };
        inline List& setDirectObAnsweredDurationDscArray(vector<string> && directObAnsweredDurationDscArray) { DARABONBA_PTR_SET_RVALUE(directObAnsweredDurationDscArray_, directObAnsweredDurationDscArray) };


        // directObBridgeDuration Field Functions 
        bool hasDirectObBridgeDuration() const { return this->directObBridgeDuration_ != nullptr;};
        void deleteDirectObBridgeDuration() { this->directObBridgeDuration_ = nullptr;};
        inline string getDirectObBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(directObBridgeDuration_, "") };
        inline List& setDirectObBridgeDuration(string directObBridgeDuration) { DARABONBA_PTR_SET_VALUE(directObBridgeDuration_, directObBridgeDuration) };


        // directObBridgeTime Field Functions 
        bool hasDirectObBridgeTime() const { return this->directObBridgeTime_ != nullptr;};
        void deleteDirectObBridgeTime() { this->directObBridgeTime_ = nullptr;};
        inline string getDirectObBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(directObBridgeTime_, "") };
        inline List& setDirectObBridgeTime(string directObBridgeTime) { DARABONBA_PTR_SET_VALUE(directObBridgeTime_, directObBridgeTime) };


        // directObConsultCount Field Functions 
        bool hasDirectObConsultCount() const { return this->directObConsultCount_ != nullptr;};
        void deleteDirectObConsultCount() { this->directObConsultCount_ = nullptr;};
        inline string getDirectObConsultCount() const { DARABONBA_PTR_GET_DEFAULT(directObConsultCount_, "") };
        inline List& setDirectObConsultCount(string directObConsultCount) { DARABONBA_PTR_SET_VALUE(directObConsultCount_, directObConsultCount) };


        // directObMonitorBargeCount Field Functions 
        bool hasDirectObMonitorBargeCount() const { return this->directObMonitorBargeCount_ != nullptr;};
        void deleteDirectObMonitorBargeCount() { this->directObMonitorBargeCount_ = nullptr;};
        inline string getDirectObMonitorBargeCount() const { DARABONBA_PTR_GET_DEFAULT(directObMonitorBargeCount_, "") };
        inline List& setDirectObMonitorBargeCount(string directObMonitorBargeCount) { DARABONBA_PTR_SET_VALUE(directObMonitorBargeCount_, directObMonitorBargeCount) };


        // directObMonitorDisconnectCount Field Functions 
        bool hasDirectObMonitorDisconnectCount() const { return this->directObMonitorDisconnectCount_ != nullptr;};
        void deleteDirectObMonitorDisconnectCount() { this->directObMonitorDisconnectCount_ = nullptr;};
        inline string getDirectObMonitorDisconnectCount() const { DARABONBA_PTR_GET_DEFAULT(directObMonitorDisconnectCount_, "") };
        inline List& setDirectObMonitorDisconnectCount(string directObMonitorDisconnectCount) { DARABONBA_PTR_SET_VALUE(directObMonitorDisconnectCount_, directObMonitorDisconnectCount) };


        // directObMonitorSpyCount Field Functions 
        bool hasDirectObMonitorSpyCount() const { return this->directObMonitorSpyCount_ != nullptr;};
        void deleteDirectObMonitorSpyCount() { this->directObMonitorSpyCount_ = nullptr;};
        inline string getDirectObMonitorSpyCount() const { DARABONBA_PTR_GET_DEFAULT(directObMonitorSpyCount_, "") };
        inline List& setDirectObMonitorSpyCount(string directObMonitorSpyCount) { DARABONBA_PTR_SET_VALUE(directObMonitorSpyCount_, directObMonitorSpyCount) };


        // directObMonitorThreewayCount Field Functions 
        bool hasDirectObMonitorThreewayCount() const { return this->directObMonitorThreewayCount_ != nullptr;};
        void deleteDirectObMonitorThreewayCount() { this->directObMonitorThreewayCount_ = nullptr;};
        inline string getDirectObMonitorThreewayCount() const { DARABONBA_PTR_GET_DEFAULT(directObMonitorThreewayCount_, "") };
        inline List& setDirectObMonitorThreewayCount(string directObMonitorThreewayCount) { DARABONBA_PTR_SET_VALUE(directObMonitorThreewayCount_, directObMonitorThreewayCount) };


        // directObMonitorWhisperCount Field Functions 
        bool hasDirectObMonitorWhisperCount() const { return this->directObMonitorWhisperCount_ != nullptr;};
        void deleteDirectObMonitorWhisperCount() { this->directObMonitorWhisperCount_ = nullptr;};
        inline string getDirectObMonitorWhisperCount() const { DARABONBA_PTR_GET_DEFAULT(directObMonitorWhisperCount_, "") };
        inline List& setDirectObMonitorWhisperCount(string directObMonitorWhisperCount) { DARABONBA_PTR_SET_VALUE(directObMonitorWhisperCount_, directObMonitorWhisperCount) };


        // directObTotalCount Field Functions 
        bool hasDirectObTotalCount() const { return this->directObTotalCount_ != nullptr;};
        void deleteDirectObTotalCount() { this->directObTotalCount_ = nullptr;};
        inline string getDirectObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(directObTotalCount_, "") };
        inline List& setDirectObTotalCount(string directObTotalCount) { DARABONBA_PTR_SET_VALUE(directObTotalCount_, directObTotalCount) };


        // directObTotalTime Field Functions 
        bool hasDirectObTotalTime() const { return this->directObTotalTime_ != nullptr;};
        void deleteDirectObTotalTime() { this->directObTotalTime_ = nullptr;};
        inline string getDirectObTotalTime() const { DARABONBA_PTR_GET_DEFAULT(directObTotalTime_, "") };
        inline List& setDirectObTotalTime(string directObTotalTime) { DARABONBA_PTR_SET_VALUE(directObTotalTime_, directObTotalTime) };


        // directObTransferCount Field Functions 
        bool hasDirectObTransferCount() const { return this->directObTransferCount_ != nullptr;};
        void deleteDirectObTransferCount() { this->directObTransferCount_ = nullptr;};
        inline string getDirectObTransferCount() const { DARABONBA_PTR_GET_DEFAULT(directObTransferCount_, "") };
        inline List& setDirectObTransferCount(string directObTransferCount) { DARABONBA_PTR_SET_VALUE(directObTransferCount_, directObTransferCount) };


        // directObValidCalls Field Functions 
        bool hasDirectObValidCalls() const { return this->directObValidCalls_ != nullptr;};
        void deleteDirectObValidCalls() { this->directObValidCalls_ = nullptr;};
        inline string getDirectObValidCalls() const { DARABONBA_PTR_GET_DEFAULT(directObValidCalls_, "") };
        inline List& setDirectObValidCalls(string directObValidCalls) { DARABONBA_PTR_SET_VALUE(directObValidCalls_, directObValidCalls) };


        // directObValidTotalBridgeTime Field Functions 
        bool hasDirectObValidTotalBridgeTime() const { return this->directObValidTotalBridgeTime_ != nullptr;};
        void deleteDirectObValidTotalBridgeTime() { this->directObValidTotalBridgeTime_ = nullptr;};
        inline string getDirectObValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(directObValidTotalBridgeTime_, "") };
        inline List& setDirectObValidTotalBridgeTime(string directObValidTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(directObValidTotalBridgeTime_, directObValidTotalBridgeTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline List& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // hoursUtilization Field Functions 
        bool hasHoursUtilization() const { return this->hoursUtilization_ != nullptr;};
        void deleteHoursUtilization() { this->hoursUtilization_ = nullptr;};
        inline string getHoursUtilization() const { DARABONBA_PTR_GET_DEFAULT(hoursUtilization_, "") };
        inline List& setHoursUtilization(string hoursUtilization) { DARABONBA_PTR_SET_VALUE(hoursUtilization_, hoursUtilization) };


        // ibAgentHangupCount Field Functions 
        bool hasIbAgentHangupCount() const { return this->ibAgentHangupCount_ != nullptr;};
        void deleteIbAgentHangupCount() { this->ibAgentHangupCount_ = nullptr;};
        inline string getIbAgentHangupCount() const { DARABONBA_PTR_GET_DEFAULT(ibAgentHangupCount_, "") };
        inline List& setIbAgentHangupCount(string ibAgentHangupCount) { DARABONBA_PTR_SET_VALUE(ibAgentHangupCount_, ibAgentHangupCount) };


        // ibAgentRefuseCount Field Functions 
        bool hasIbAgentRefuseCount() const { return this->ibAgentRefuseCount_ != nullptr;};
        void deleteIbAgentRefuseCount() { this->ibAgentRefuseCount_ = nullptr;};
        inline string getIbAgentRefuseCount() const { DARABONBA_PTR_GET_DEFAULT(ibAgentRefuseCount_, "") };
        inline List& setIbAgentRefuseCount(string ibAgentRefuseCount) { DARABONBA_PTR_SET_VALUE(ibAgentRefuseCount_, ibAgentRefuseCount) };


        // ibAnsweredCount Field Functions 
        bool hasIbAnsweredCount() const { return this->ibAnsweredCount_ != nullptr;};
        void deleteIbAnsweredCount() { this->ibAnsweredCount_ = nullptr;};
        inline string getIbAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibAnsweredCount_, "") };
        inline List& setIbAnsweredCount(string ibAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibAnsweredCount_, ibAnsweredCount) };


        // ibAnsweredDurationArray Field Functions 
        bool hasIbAnsweredDurationArray() const { return this->ibAnsweredDurationArray_ != nullptr;};
        void deleteIbAnsweredDurationArray() { this->ibAnsweredDurationArray_ = nullptr;};
        inline const vector<string> & getIbAnsweredDurationArray() const { DARABONBA_PTR_GET_CONST(ibAnsweredDurationArray_, vector<string>) };
        inline vector<string> getIbAnsweredDurationArray() { DARABONBA_PTR_GET(ibAnsweredDurationArray_, vector<string>) };
        inline List& setIbAnsweredDurationArray(const vector<string> & ibAnsweredDurationArray) { DARABONBA_PTR_SET_VALUE(ibAnsweredDurationArray_, ibAnsweredDurationArray) };
        inline List& setIbAnsweredDurationArray(vector<string> && ibAnsweredDurationArray) { DARABONBA_PTR_SET_RVALUE(ibAnsweredDurationArray_, ibAnsweredDurationArray) };


        // ibAnsweredDurationDscArray Field Functions 
        bool hasIbAnsweredDurationDscArray() const { return this->ibAnsweredDurationDscArray_ != nullptr;};
        void deleteIbAnsweredDurationDscArray() { this->ibAnsweredDurationDscArray_ = nullptr;};
        inline const vector<string> & getIbAnsweredDurationDscArray() const { DARABONBA_PTR_GET_CONST(ibAnsweredDurationDscArray_, vector<string>) };
        inline vector<string> getIbAnsweredDurationDscArray() { DARABONBA_PTR_GET(ibAnsweredDurationDscArray_, vector<string>) };
        inline List& setIbAnsweredDurationDscArray(const vector<string> & ibAnsweredDurationDscArray) { DARABONBA_PTR_SET_VALUE(ibAnsweredDurationDscArray_, ibAnsweredDurationDscArray) };
        inline List& setIbAnsweredDurationDscArray(vector<string> && ibAnsweredDurationDscArray) { DARABONBA_PTR_SET_RVALUE(ibAnsweredDurationDscArray_, ibAnsweredDurationDscArray) };


        // ibAvgAnswerDelayTime Field Functions 
        bool hasIbAvgAnswerDelayTime() const { return this->ibAvgAnswerDelayTime_ != nullptr;};
        void deleteIbAvgAnswerDelayTime() { this->ibAvgAnswerDelayTime_ = nullptr;};
        inline string getIbAvgAnswerDelayTime() const { DARABONBA_PTR_GET_DEFAULT(ibAvgAnswerDelayTime_, "") };
        inline List& setIbAvgAnswerDelayTime(string ibAvgAnswerDelayTime) { DARABONBA_PTR_SET_VALUE(ibAvgAnswerDelayTime_, ibAvgAnswerDelayTime) };


        // ibAvgBridgeTime Field Functions 
        bool hasIbAvgBridgeTime() const { return this->ibAvgBridgeTime_ != nullptr;};
        void deleteIbAvgBridgeTime() { this->ibAvgBridgeTime_ = nullptr;};
        inline string getIbAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(ibAvgBridgeTime_, "") };
        inline List& setIbAvgBridgeTime(string ibAvgBridgeTime) { DARABONBA_PTR_SET_VALUE(ibAvgBridgeTime_, ibAvgBridgeTime) };


        // ibAvgCallingTime Field Functions 
        bool hasIbAvgCallingTime() const { return this->ibAvgCallingTime_ != nullptr;};
        void deleteIbAvgCallingTime() { this->ibAvgCallingTime_ = nullptr;};
        inline string getIbAvgCallingTime() const { DARABONBA_PTR_GET_DEFAULT(ibAvgCallingTime_, "") };
        inline List& setIbAvgCallingTime(string ibAvgCallingTime) { DARABONBA_PTR_SET_VALUE(ibAvgCallingTime_, ibAvgCallingTime) };


        // ibAvgHoldTime Field Functions 
        bool hasIbAvgHoldTime() const { return this->ibAvgHoldTime_ != nullptr;};
        void deleteIbAvgHoldTime() { this->ibAvgHoldTime_ = nullptr;};
        inline string getIbAvgHoldTime() const { DARABONBA_PTR_GET_DEFAULT(ibAvgHoldTime_, "") };
        inline List& setIbAvgHoldTime(string ibAvgHoldTime) { DARABONBA_PTR_SET_VALUE(ibAvgHoldTime_, ibAvgHoldTime) };


        // ibAvgWrapupTime Field Functions 
        bool hasIbAvgWrapupTime() const { return this->ibAvgWrapupTime_ != nullptr;};
        void deleteIbAvgWrapupTime() { this->ibAvgWrapupTime_ = nullptr;};
        inline string getIbAvgWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(ibAvgWrapupTime_, "") };
        inline List& setIbAvgWrapupTime(string ibAvgWrapupTime) { DARABONBA_PTR_SET_VALUE(ibAvgWrapupTime_, ibAvgWrapupTime) };


        // ibBridgeCount Field Functions 
        bool hasIbBridgeCount() const { return this->ibBridgeCount_ != nullptr;};
        void deleteIbBridgeCount() { this->ibBridgeCount_ = nullptr;};
        inline string getIbBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(ibBridgeCount_, "") };
        inline List& setIbBridgeCount(string ibBridgeCount) { DARABONBA_PTR_SET_VALUE(ibBridgeCount_, ibBridgeCount) };


        // ibBridgeMinute Field Functions 
        bool hasIbBridgeMinute() const { return this->ibBridgeMinute_ != nullptr;};
        void deleteIbBridgeMinute() { this->ibBridgeMinute_ = nullptr;};
        inline string getIbBridgeMinute() const { DARABONBA_PTR_GET_DEFAULT(ibBridgeMinute_, "") };
        inline List& setIbBridgeMinute(string ibBridgeMinute) { DARABONBA_PTR_SET_VALUE(ibBridgeMinute_, ibBridgeMinute) };


        // ibBridgeTime Field Functions 
        bool hasIbBridgeTime() const { return this->ibBridgeTime_ != nullptr;};
        void deleteIbBridgeTime() { this->ibBridgeTime_ = nullptr;};
        inline string getIbBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(ibBridgeTime_, "") };
        inline List& setIbBridgeTime(string ibBridgeTime) { DARABONBA_PTR_SET_VALUE(ibBridgeTime_, ibBridgeTime) };


        // ibCallingCount Field Functions 
        bool hasIbCallingCount() const { return this->ibCallingCount_ != nullptr;};
        void deleteIbCallingCount() { this->ibCallingCount_ = nullptr;};
        inline string getIbCallingCount() const { DARABONBA_PTR_GET_DEFAULT(ibCallingCount_, "") };
        inline List& setIbCallingCount(string ibCallingCount) { DARABONBA_PTR_SET_VALUE(ibCallingCount_, ibCallingCount) };


        // ibCallingTime Field Functions 
        bool hasIbCallingTime() const { return this->ibCallingTime_ != nullptr;};
        void deleteIbCallingTime() { this->ibCallingTime_ = nullptr;};
        inline string getIbCallingTime() const { DARABONBA_PTR_GET_DEFAULT(ibCallingTime_, "") };
        inline List& setIbCallingTime(string ibCallingTime) { DARABONBA_PTR_SET_VALUE(ibCallingTime_, ibCallingTime) };


        // ibConsultCount Field Functions 
        bool hasIbConsultCount() const { return this->ibConsultCount_ != nullptr;};
        void deleteIbConsultCount() { this->ibConsultCount_ = nullptr;};
        inline string getIbConsultCount() const { DARABONBA_PTR_GET_DEFAULT(ibConsultCount_, "") };
        inline List& setIbConsultCount(string ibConsultCount) { DARABONBA_PTR_SET_VALUE(ibConsultCount_, ibConsultCount) };


        // ibCustomerHangupCount Field Functions 
        bool hasIbCustomerHangupCount() const { return this->ibCustomerHangupCount_ != nullptr;};
        void deleteIbCustomerHangupCount() { this->ibCustomerHangupCount_ = nullptr;};
        inline string getIbCustomerHangupCount() const { DARABONBA_PTR_GET_DEFAULT(ibCustomerHangupCount_, "") };
        inline List& setIbCustomerHangupCount(string ibCustomerHangupCount) { DARABONBA_PTR_SET_VALUE(ibCustomerHangupCount_, ibCustomerHangupCount) };


        // ibHoldCount Field Functions 
        bool hasIbHoldCount() const { return this->ibHoldCount_ != nullptr;};
        void deleteIbHoldCount() { this->ibHoldCount_ = nullptr;};
        inline string getIbHoldCount() const { DARABONBA_PTR_GET_DEFAULT(ibHoldCount_, "") };
        inline List& setIbHoldCount(string ibHoldCount) { DARABONBA_PTR_SET_VALUE(ibHoldCount_, ibHoldCount) };


        // ibHoldTime Field Functions 
        bool hasIbHoldTime() const { return this->ibHoldTime_ != nullptr;};
        void deleteIbHoldTime() { this->ibHoldTime_ = nullptr;};
        inline string getIbHoldTime() const { DARABONBA_PTR_GET_DEFAULT(ibHoldTime_, "") };
        inline List& setIbHoldTime(string ibHoldTime) { DARABONBA_PTR_SET_VALUE(ibHoldTime_, ibHoldTime) };


        // ibMaxAnswerDelayTime Field Functions 
        bool hasIbMaxAnswerDelayTime() const { return this->ibMaxAnswerDelayTime_ != nullptr;};
        void deleteIbMaxAnswerDelayTime() { this->ibMaxAnswerDelayTime_ = nullptr;};
        inline string getIbMaxAnswerDelayTime() const { DARABONBA_PTR_GET_DEFAULT(ibMaxAnswerDelayTime_, "") };
        inline List& setIbMaxAnswerDelayTime(string ibMaxAnswerDelayTime) { DARABONBA_PTR_SET_VALUE(ibMaxAnswerDelayTime_, ibMaxAnswerDelayTime) };


        // ibMaxBridgeTime Field Functions 
        bool hasIbMaxBridgeTime() const { return this->ibMaxBridgeTime_ != nullptr;};
        void deleteIbMaxBridgeTime() { this->ibMaxBridgeTime_ = nullptr;};
        inline string getIbMaxBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(ibMaxBridgeTime_, "") };
        inline List& setIbMaxBridgeTime(string ibMaxBridgeTime) { DARABONBA_PTR_SET_VALUE(ibMaxBridgeTime_, ibMaxBridgeTime) };


        // ibMaxCallingTime Field Functions 
        bool hasIbMaxCallingTime() const { return this->ibMaxCallingTime_ != nullptr;};
        void deleteIbMaxCallingTime() { this->ibMaxCallingTime_ = nullptr;};
        inline string getIbMaxCallingTime() const { DARABONBA_PTR_GET_DEFAULT(ibMaxCallingTime_, "") };
        inline List& setIbMaxCallingTime(string ibMaxCallingTime) { DARABONBA_PTR_SET_VALUE(ibMaxCallingTime_, ibMaxCallingTime) };


        // ibMaxHoldTime Field Functions 
        bool hasIbMaxHoldTime() const { return this->ibMaxHoldTime_ != nullptr;};
        void deleteIbMaxHoldTime() { this->ibMaxHoldTime_ = nullptr;};
        inline string getIbMaxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(ibMaxHoldTime_, "") };
        inline List& setIbMaxHoldTime(string ibMaxHoldTime) { DARABONBA_PTR_SET_VALUE(ibMaxHoldTime_, ibMaxHoldTime) };


        // ibMaxWrapupTime Field Functions 
        bool hasIbMaxWrapupTime() const { return this->ibMaxWrapupTime_ != nullptr;};
        void deleteIbMaxWrapupTime() { this->ibMaxWrapupTime_ = nullptr;};
        inline string getIbMaxWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(ibMaxWrapupTime_, "") };
        inline List& setIbMaxWrapupTime(string ibMaxWrapupTime) { DARABONBA_PTR_SET_VALUE(ibMaxWrapupTime_, ibMaxWrapupTime) };


        // ibMinAnswerDelayTime Field Functions 
        bool hasIbMinAnswerDelayTime() const { return this->ibMinAnswerDelayTime_ != nullptr;};
        void deleteIbMinAnswerDelayTime() { this->ibMinAnswerDelayTime_ = nullptr;};
        inline string getIbMinAnswerDelayTime() const { DARABONBA_PTR_GET_DEFAULT(ibMinAnswerDelayTime_, "") };
        inline List& setIbMinAnswerDelayTime(string ibMinAnswerDelayTime) { DARABONBA_PTR_SET_VALUE(ibMinAnswerDelayTime_, ibMinAnswerDelayTime) };


        // ibMinBridgeTime Field Functions 
        bool hasIbMinBridgeTime() const { return this->ibMinBridgeTime_ != nullptr;};
        void deleteIbMinBridgeTime() { this->ibMinBridgeTime_ = nullptr;};
        inline string getIbMinBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(ibMinBridgeTime_, "") };
        inline List& setIbMinBridgeTime(string ibMinBridgeTime) { DARABONBA_PTR_SET_VALUE(ibMinBridgeTime_, ibMinBridgeTime) };


        // ibMinCallingTime Field Functions 
        bool hasIbMinCallingTime() const { return this->ibMinCallingTime_ != nullptr;};
        void deleteIbMinCallingTime() { this->ibMinCallingTime_ = nullptr;};
        inline string getIbMinCallingTime() const { DARABONBA_PTR_GET_DEFAULT(ibMinCallingTime_, "") };
        inline List& setIbMinCallingTime(string ibMinCallingTime) { DARABONBA_PTR_SET_VALUE(ibMinCallingTime_, ibMinCallingTime) };


        // ibMinHoldTime Field Functions 
        bool hasIbMinHoldTime() const { return this->ibMinHoldTime_ != nullptr;};
        void deleteIbMinHoldTime() { this->ibMinHoldTime_ = nullptr;};
        inline string getIbMinHoldTime() const { DARABONBA_PTR_GET_DEFAULT(ibMinHoldTime_, "") };
        inline List& setIbMinHoldTime(string ibMinHoldTime) { DARABONBA_PTR_SET_VALUE(ibMinHoldTime_, ibMinHoldTime) };


        // ibMinWrapupTime Field Functions 
        bool hasIbMinWrapupTime() const { return this->ibMinWrapupTime_ != nullptr;};
        void deleteIbMinWrapupTime() { this->ibMinWrapupTime_ = nullptr;};
        inline string getIbMinWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(ibMinWrapupTime_, "") };
        inline List& setIbMinWrapupTime(string ibMinWrapupTime) { DARABONBA_PTR_SET_VALUE(ibMinWrapupTime_, ibMinWrapupTime) };


        // ibMonitorBargeCount Field Functions 
        bool hasIbMonitorBargeCount() const { return this->ibMonitorBargeCount_ != nullptr;};
        void deleteIbMonitorBargeCount() { this->ibMonitorBargeCount_ = nullptr;};
        inline string getIbMonitorBargeCount() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorBargeCount_, "") };
        inline List& setIbMonitorBargeCount(string ibMonitorBargeCount) { DARABONBA_PTR_SET_VALUE(ibMonitorBargeCount_, ibMonitorBargeCount) };


        // ibMonitorBargeDuration Field Functions 
        bool hasIbMonitorBargeDuration() const { return this->ibMonitorBargeDuration_ != nullptr;};
        void deleteIbMonitorBargeDuration() { this->ibMonitorBargeDuration_ = nullptr;};
        inline string getIbMonitorBargeDuration() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorBargeDuration_, "") };
        inline List& setIbMonitorBargeDuration(string ibMonitorBargeDuration) { DARABONBA_PTR_SET_VALUE(ibMonitorBargeDuration_, ibMonitorBargeDuration) };


        // ibMonitorDisconnectCount Field Functions 
        bool hasIbMonitorDisconnectCount() const { return this->ibMonitorDisconnectCount_ != nullptr;};
        void deleteIbMonitorDisconnectCount() { this->ibMonitorDisconnectCount_ = nullptr;};
        inline string getIbMonitorDisconnectCount() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorDisconnectCount_, "") };
        inline List& setIbMonitorDisconnectCount(string ibMonitorDisconnectCount) { DARABONBA_PTR_SET_VALUE(ibMonitorDisconnectCount_, ibMonitorDisconnectCount) };


        // ibMonitorPickupCount Field Functions 
        bool hasIbMonitorPickupCount() const { return this->ibMonitorPickupCount_ != nullptr;};
        void deleteIbMonitorPickupCount() { this->ibMonitorPickupCount_ = nullptr;};
        inline string getIbMonitorPickupCount() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorPickupCount_, "") };
        inline List& setIbMonitorPickupCount(string ibMonitorPickupCount) { DARABONBA_PTR_SET_VALUE(ibMonitorPickupCount_, ibMonitorPickupCount) };


        // ibMonitorPickupDuration Field Functions 
        bool hasIbMonitorPickupDuration() const { return this->ibMonitorPickupDuration_ != nullptr;};
        void deleteIbMonitorPickupDuration() { this->ibMonitorPickupDuration_ = nullptr;};
        inline string getIbMonitorPickupDuration() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorPickupDuration_, "") };
        inline List& setIbMonitorPickupDuration(string ibMonitorPickupDuration) { DARABONBA_PTR_SET_VALUE(ibMonitorPickupDuration_, ibMonitorPickupDuration) };


        // ibMonitorSpyCount Field Functions 
        bool hasIbMonitorSpyCount() const { return this->ibMonitorSpyCount_ != nullptr;};
        void deleteIbMonitorSpyCount() { this->ibMonitorSpyCount_ = nullptr;};
        inline string getIbMonitorSpyCount() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorSpyCount_, "") };
        inline List& setIbMonitorSpyCount(string ibMonitorSpyCount) { DARABONBA_PTR_SET_VALUE(ibMonitorSpyCount_, ibMonitorSpyCount) };


        // ibMonitorSpyDuration Field Functions 
        bool hasIbMonitorSpyDuration() const { return this->ibMonitorSpyDuration_ != nullptr;};
        void deleteIbMonitorSpyDuration() { this->ibMonitorSpyDuration_ = nullptr;};
        inline string getIbMonitorSpyDuration() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorSpyDuration_, "") };
        inline List& setIbMonitorSpyDuration(string ibMonitorSpyDuration) { DARABONBA_PTR_SET_VALUE(ibMonitorSpyDuration_, ibMonitorSpyDuration) };


        // ibMonitorThreewayCount Field Functions 
        bool hasIbMonitorThreewayCount() const { return this->ibMonitorThreewayCount_ != nullptr;};
        void deleteIbMonitorThreewayCount() { this->ibMonitorThreewayCount_ = nullptr;};
        inline string getIbMonitorThreewayCount() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorThreewayCount_, "") };
        inline List& setIbMonitorThreewayCount(string ibMonitorThreewayCount) { DARABONBA_PTR_SET_VALUE(ibMonitorThreewayCount_, ibMonitorThreewayCount) };


        // ibMonitorWhisperCount Field Functions 
        bool hasIbMonitorWhisperCount() const { return this->ibMonitorWhisperCount_ != nullptr;};
        void deleteIbMonitorWhisperCount() { this->ibMonitorWhisperCount_ = nullptr;};
        inline string getIbMonitorWhisperCount() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorWhisperCount_, "") };
        inline List& setIbMonitorWhisperCount(string ibMonitorWhisperCount) { DARABONBA_PTR_SET_VALUE(ibMonitorWhisperCount_, ibMonitorWhisperCount) };


        // ibMonitorWhisperDuration Field Functions 
        bool hasIbMonitorWhisperDuration() const { return this->ibMonitorWhisperDuration_ != nullptr;};
        void deleteIbMonitorWhisperDuration() { this->ibMonitorWhisperDuration_ = nullptr;};
        inline string getIbMonitorWhisperDuration() const { DARABONBA_PTR_GET_DEFAULT(ibMonitorWhisperDuration_, "") };
        inline List& setIbMonitorWhisperDuration(string ibMonitorWhisperDuration) { DARABONBA_PTR_SET_VALUE(ibMonitorWhisperDuration_, ibMonitorWhisperDuration) };


        // ibTotalAnswerDelayTime Field Functions 
        bool hasIbTotalAnswerDelayTime() const { return this->ibTotalAnswerDelayTime_ != nullptr;};
        void deleteIbTotalAnswerDelayTime() { this->ibTotalAnswerDelayTime_ = nullptr;};
        inline string getIbTotalAnswerDelayTime() const { DARABONBA_PTR_GET_DEFAULT(ibTotalAnswerDelayTime_, "") };
        inline List& setIbTotalAnswerDelayTime(string ibTotalAnswerDelayTime) { DARABONBA_PTR_SET_VALUE(ibTotalAnswerDelayTime_, ibTotalAnswerDelayTime) };


        // ibTotalCount Field Functions 
        bool hasIbTotalCount() const { return this->ibTotalCount_ != nullptr;};
        void deleteIbTotalCount() { this->ibTotalCount_ = nullptr;};
        inline string getIbTotalCount() const { DARABONBA_PTR_GET_DEFAULT(ibTotalCount_, "") };
        inline List& setIbTotalCount(string ibTotalCount) { DARABONBA_PTR_SET_VALUE(ibTotalCount_, ibTotalCount) };


        // ibTotalMinute Field Functions 
        bool hasIbTotalMinute() const { return this->ibTotalMinute_ != nullptr;};
        void deleteIbTotalMinute() { this->ibTotalMinute_ = nullptr;};
        inline string getIbTotalMinute() const { DARABONBA_PTR_GET_DEFAULT(ibTotalMinute_, "") };
        inline List& setIbTotalMinute(string ibTotalMinute) { DARABONBA_PTR_SET_VALUE(ibTotalMinute_, ibTotalMinute) };


        // ibTotalTime Field Functions 
        bool hasIbTotalTime() const { return this->ibTotalTime_ != nullptr;};
        void deleteIbTotalTime() { this->ibTotalTime_ = nullptr;};
        inline string getIbTotalTime() const { DARABONBA_PTR_GET_DEFAULT(ibTotalTime_, "") };
        inline List& setIbTotalTime(string ibTotalTime) { DARABONBA_PTR_SET_VALUE(ibTotalTime_, ibTotalTime) };


        // ibTransferCount Field Functions 
        bool hasIbTransferCount() const { return this->ibTransferCount_ != nullptr;};
        void deleteIbTransferCount() { this->ibTransferCount_ = nullptr;};
        inline string getIbTransferCount() const { DARABONBA_PTR_GET_DEFAULT(ibTransferCount_, "") };
        inline List& setIbTransferCount(string ibTransferCount) { DARABONBA_PTR_SET_VALUE(ibTransferCount_, ibTransferCount) };


        // ibUnansweredCount Field Functions 
        bool hasIbUnansweredCount() const { return this->ibUnansweredCount_ != nullptr;};
        void deleteIbUnansweredCount() { this->ibUnansweredCount_ = nullptr;};
        inline string getIbUnansweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibUnansweredCount_, "") };
        inline List& setIbUnansweredCount(string ibUnansweredCount) { DARABONBA_PTR_SET_VALUE(ibUnansweredCount_, ibUnansweredCount) };


        // ibUniqueAnsweredCount Field Functions 
        bool hasIbUniqueAnsweredCount() const { return this->ibUniqueAnsweredCount_ != nullptr;};
        void deleteIbUniqueAnsweredCount() { this->ibUniqueAnsweredCount_ = nullptr;};
        inline string getIbUniqueAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibUniqueAnsweredCount_, "") };
        inline List& setIbUniqueAnsweredCount(string ibUniqueAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibUniqueAnsweredCount_, ibUniqueAnsweredCount) };


        // ibUniqueTotalCount Field Functions 
        bool hasIbUniqueTotalCount() const { return this->ibUniqueTotalCount_ != nullptr;};
        void deleteIbUniqueTotalCount() { this->ibUniqueTotalCount_ = nullptr;};
        inline string getIbUniqueTotalCount() const { DARABONBA_PTR_GET_DEFAULT(ibUniqueTotalCount_, "") };
        inline List& setIbUniqueTotalCount(string ibUniqueTotalCount) { DARABONBA_PTR_SET_VALUE(ibUniqueTotalCount_, ibUniqueTotalCount) };


        // ibUniqueUnansweredCount Field Functions 
        bool hasIbUniqueUnansweredCount() const { return this->ibUniqueUnansweredCount_ != nullptr;};
        void deleteIbUniqueUnansweredCount() { this->ibUniqueUnansweredCount_ = nullptr;};
        inline string getIbUniqueUnansweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibUniqueUnansweredCount_, "") };
        inline List& setIbUniqueUnansweredCount(string ibUniqueUnansweredCount) { DARABONBA_PTR_SET_VALUE(ibUniqueUnansweredCount_, ibUniqueUnansweredCount) };


        // ibValidCalls Field Functions 
        bool hasIbValidCalls() const { return this->ibValidCalls_ != nullptr;};
        void deleteIbValidCalls() { this->ibValidCalls_ = nullptr;};
        inline string getIbValidCalls() const { DARABONBA_PTR_GET_DEFAULT(ibValidCalls_, "") };
        inline List& setIbValidCalls(string ibValidCalls) { DARABONBA_PTR_SET_VALUE(ibValidCalls_, ibValidCalls) };


        // ibValidTotalBridgeTime Field Functions 
        bool hasIbValidTotalBridgeTime() const { return this->ibValidTotalBridgeTime_ != nullptr;};
        void deleteIbValidTotalBridgeTime() { this->ibValidTotalBridgeTime_ = nullptr;};
        inline string getIbValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(ibValidTotalBridgeTime_, "") };
        inline List& setIbValidTotalBridgeTime(string ibValidTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(ibValidTotalBridgeTime_, ibValidTotalBridgeTime) };


        // ibWrapupCount Field Functions 
        bool hasIbWrapupCount() const { return this->ibWrapupCount_ != nullptr;};
        void deleteIbWrapupCount() { this->ibWrapupCount_ = nullptr;};
        inline string getIbWrapupCount() const { DARABONBA_PTR_GET_DEFAULT(ibWrapupCount_, "") };
        inline List& setIbWrapupCount(string ibWrapupCount) { DARABONBA_PTR_SET_VALUE(ibWrapupCount_, ibWrapupCount) };


        // ibWrapupTime Field Functions 
        bool hasIbWrapupTime() const { return this->ibWrapupTime_ != nullptr;};
        void deleteIbWrapupTime() { this->ibWrapupTime_ = nullptr;};
        inline string getIbWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(ibWrapupTime_, "") };
        inline List& setIbWrapupTime(string ibWrapupTime) { DARABONBA_PTR_SET_VALUE(ibWrapupTime_, ibWrapupTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idleCount Field Functions 
        bool hasIdleCount() const { return this->idleCount_ != nullptr;};
        void deleteIdleCount() { this->idleCount_ = nullptr;};
        inline string getIdleCount() const { DARABONBA_PTR_GET_DEFAULT(idleCount_, "") };
        inline List& setIdleCount(string idleCount) { DARABONBA_PTR_SET_VALUE(idleCount_, idleCount) };


        // idleTime Field Functions 
        bool hasIdleTime() const { return this->idleTime_ != nullptr;};
        void deleteIdleTime() { this->idleTime_ = nullptr;};
        inline string getIdleTime() const { DARABONBA_PTR_GET_DEFAULT(idleTime_, "") };
        inline List& setIdleTime(string idleTime) { DARABONBA_PTR_SET_VALUE(idleTime_, idleTime) };


        // ivrTransferBridgeCount Field Functions 
        bool hasIvrTransferBridgeCount() const { return this->ivrTransferBridgeCount_ != nullptr;};
        void deleteIvrTransferBridgeCount() { this->ivrTransferBridgeCount_ = nullptr;};
        inline string getIvrTransferBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(ivrTransferBridgeCount_, "") };
        inline List& setIvrTransferBridgeCount(string ivrTransferBridgeCount) { DARABONBA_PTR_SET_VALUE(ivrTransferBridgeCount_, ivrTransferBridgeCount) };


        // ivrTransferBridgeDuration Field Functions 
        bool hasIvrTransferBridgeDuration() const { return this->ivrTransferBridgeDuration_ != nullptr;};
        void deleteIvrTransferBridgeDuration() { this->ivrTransferBridgeDuration_ = nullptr;};
        inline string getIvrTransferBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(ivrTransferBridgeDuration_, "") };
        inline List& setIvrTransferBridgeDuration(string ivrTransferBridgeDuration) { DARABONBA_PTR_SET_VALUE(ivrTransferBridgeDuration_, ivrTransferBridgeDuration) };


        // ivrTransferCount Field Functions 
        bool hasIvrTransferCount() const { return this->ivrTransferCount_ != nullptr;};
        void deleteIvrTransferCount() { this->ivrTransferCount_ = nullptr;};
        inline string getIvrTransferCount() const { DARABONBA_PTR_GET_DEFAULT(ivrTransferCount_, "") };
        inline List& setIvrTransferCount(string ivrTransferCount) { DARABONBA_PTR_SET_VALUE(ivrTransferCount_, ivrTransferCount) };


        // loginTime Field Functions 
        bool hasLoginTime() const { return this->loginTime_ != nullptr;};
        void deleteLoginTime() { this->loginTime_ = nullptr;};
        inline string getLoginTime() const { DARABONBA_PTR_GET_DEFAULT(loginTime_, "") };
        inline List& setLoginTime(string loginTime) { DARABONBA_PTR_SET_VALUE(loginTime_, loginTime) };


        // maxIdleTime Field Functions 
        bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
        void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
        inline string getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, "") };
        inline List& setMaxIdleTime(string maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


        // maxPauseTime Field Functions 
        bool hasMaxPauseTime() const { return this->maxPauseTime_ != nullptr;};
        void deleteMaxPauseTime() { this->maxPauseTime_ = nullptr;};
        inline string getMaxPauseTime() const { DARABONBA_PTR_GET_DEFAULT(maxPauseTime_, "") };
        inline List& setMaxPauseTime(string maxPauseTime) { DARABONBA_PTR_SET_VALUE(maxPauseTime_, maxPauseTime) };


        // maxRestTime Field Functions 
        bool hasMaxRestTime() const { return this->maxRestTime_ != nullptr;};
        void deleteMaxRestTime() { this->maxRestTime_ = nullptr;};
        inline string getMaxRestTime() const { DARABONBA_PTR_GET_DEFAULT(maxRestTime_, "") };
        inline List& setMaxRestTime(string maxRestTime) { DARABONBA_PTR_SET_VALUE(maxRestTime_, maxRestTime) };


        // minIdleTime Field Functions 
        bool hasMinIdleTime() const { return this->minIdleTime_ != nullptr;};
        void deleteMinIdleTime() { this->minIdleTime_ = nullptr;};
        inline string getMinIdleTime() const { DARABONBA_PTR_GET_DEFAULT(minIdleTime_, "") };
        inline List& setMinIdleTime(string minIdleTime) { DARABONBA_PTR_SET_VALUE(minIdleTime_, minIdleTime) };


        // minPauseTime Field Functions 
        bool hasMinPauseTime() const { return this->minPauseTime_ != nullptr;};
        void deleteMinPauseTime() { this->minPauseTime_ = nullptr;};
        inline string getMinPauseTime() const { DARABONBA_PTR_GET_DEFAULT(minPauseTime_, "") };
        inline List& setMinPauseTime(string minPauseTime) { DARABONBA_PTR_SET_VALUE(minPauseTime_, minPauseTime) };


        // minRestTime Field Functions 
        bool hasMinRestTime() const { return this->minRestTime_ != nullptr;};
        void deleteMinRestTime() { this->minRestTime_ = nullptr;};
        inline string getMinRestTime() const { DARABONBA_PTR_GET_DEFAULT(minRestTime_, "") };
        inline List& setMinRestTime(string minRestTime) { DARABONBA_PTR_SET_VALUE(minRestTime_, minRestTime) };


        // obAvgBridgeTime Field Functions 
        bool hasObAvgBridgeTime() const { return this->obAvgBridgeTime_ != nullptr;};
        void deleteObAvgBridgeTime() { this->obAvgBridgeTime_ = nullptr;};
        inline string getObAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(obAvgBridgeTime_, "") };
        inline List& setObAvgBridgeTime(string obAvgBridgeTime) { DARABONBA_PTR_SET_VALUE(obAvgBridgeTime_, obAvgBridgeTime) };


        // obAvgCallingTime Field Functions 
        bool hasObAvgCallingTime() const { return this->obAvgCallingTime_ != nullptr;};
        void deleteObAvgCallingTime() { this->obAvgCallingTime_ = nullptr;};
        inline string getObAvgCallingTime() const { DARABONBA_PTR_GET_DEFAULT(obAvgCallingTime_, "") };
        inline List& setObAvgCallingTime(string obAvgCallingTime) { DARABONBA_PTR_SET_VALUE(obAvgCallingTime_, obAvgCallingTime) };


        // obAvgHoldTime Field Functions 
        bool hasObAvgHoldTime() const { return this->obAvgHoldTime_ != nullptr;};
        void deleteObAvgHoldTime() { this->obAvgHoldTime_ = nullptr;};
        inline string getObAvgHoldTime() const { DARABONBA_PTR_GET_DEFAULT(obAvgHoldTime_, "") };
        inline List& setObAvgHoldTime(string obAvgHoldTime) { DARABONBA_PTR_SET_VALUE(obAvgHoldTime_, obAvgHoldTime) };


        // obAvgWrapupTime Field Functions 
        bool hasObAvgWrapupTime() const { return this->obAvgWrapupTime_ != nullptr;};
        void deleteObAvgWrapupTime() { this->obAvgWrapupTime_ = nullptr;};
        inline string getObAvgWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(obAvgWrapupTime_, "") };
        inline List& setObAvgWrapupTime(string obAvgWrapupTime) { DARABONBA_PTR_SET_VALUE(obAvgWrapupTime_, obAvgWrapupTime) };


        // obBridgeCount Field Functions 
        bool hasObBridgeCount() const { return this->obBridgeCount_ != nullptr;};
        void deleteObBridgeCount() { this->obBridgeCount_ = nullptr;};
        inline string getObBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(obBridgeCount_, "") };
        inline List& setObBridgeCount(string obBridgeCount) { DARABONBA_PTR_SET_VALUE(obBridgeCount_, obBridgeCount) };


        // obBridgeTime Field Functions 
        bool hasObBridgeTime() const { return this->obBridgeTime_ != nullptr;};
        void deleteObBridgeTime() { this->obBridgeTime_ = nullptr;};
        inline string getObBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(obBridgeTime_, "") };
        inline List& setObBridgeTime(string obBridgeTime) { DARABONBA_PTR_SET_VALUE(obBridgeTime_, obBridgeTime) };


        // obCallingCount Field Functions 
        bool hasObCallingCount() const { return this->obCallingCount_ != nullptr;};
        void deleteObCallingCount() { this->obCallingCount_ = nullptr;};
        inline string getObCallingCount() const { DARABONBA_PTR_GET_DEFAULT(obCallingCount_, "") };
        inline List& setObCallingCount(string obCallingCount) { DARABONBA_PTR_SET_VALUE(obCallingCount_, obCallingCount) };


        // obCallingTime Field Functions 
        bool hasObCallingTime() const { return this->obCallingTime_ != nullptr;};
        void deleteObCallingTime() { this->obCallingTime_ = nullptr;};
        inline string getObCallingTime() const { DARABONBA_PTR_GET_DEFAULT(obCallingTime_, "") };
        inline List& setObCallingTime(string obCallingTime) { DARABONBA_PTR_SET_VALUE(obCallingTime_, obCallingTime) };


        // obHoldCount Field Functions 
        bool hasObHoldCount() const { return this->obHoldCount_ != nullptr;};
        void deleteObHoldCount() { this->obHoldCount_ = nullptr;};
        inline string getObHoldCount() const { DARABONBA_PTR_GET_DEFAULT(obHoldCount_, "") };
        inline List& setObHoldCount(string obHoldCount) { DARABONBA_PTR_SET_VALUE(obHoldCount_, obHoldCount) };


        // obHoldTime Field Functions 
        bool hasObHoldTime() const { return this->obHoldTime_ != nullptr;};
        void deleteObHoldTime() { this->obHoldTime_ = nullptr;};
        inline string getObHoldTime() const { DARABONBA_PTR_GET_DEFAULT(obHoldTime_, "") };
        inline List& setObHoldTime(string obHoldTime) { DARABONBA_PTR_SET_VALUE(obHoldTime_, obHoldTime) };


        // obMaxBridgeTime Field Functions 
        bool hasObMaxBridgeTime() const { return this->obMaxBridgeTime_ != nullptr;};
        void deleteObMaxBridgeTime() { this->obMaxBridgeTime_ = nullptr;};
        inline string getObMaxBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(obMaxBridgeTime_, "") };
        inline List& setObMaxBridgeTime(string obMaxBridgeTime) { DARABONBA_PTR_SET_VALUE(obMaxBridgeTime_, obMaxBridgeTime) };


        // obMaxCallingTime Field Functions 
        bool hasObMaxCallingTime() const { return this->obMaxCallingTime_ != nullptr;};
        void deleteObMaxCallingTime() { this->obMaxCallingTime_ = nullptr;};
        inline string getObMaxCallingTime() const { DARABONBA_PTR_GET_DEFAULT(obMaxCallingTime_, "") };
        inline List& setObMaxCallingTime(string obMaxCallingTime) { DARABONBA_PTR_SET_VALUE(obMaxCallingTime_, obMaxCallingTime) };


        // obMaxHoldTime Field Functions 
        bool hasObMaxHoldTime() const { return this->obMaxHoldTime_ != nullptr;};
        void deleteObMaxHoldTime() { this->obMaxHoldTime_ = nullptr;};
        inline string getObMaxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(obMaxHoldTime_, "") };
        inline List& setObMaxHoldTime(string obMaxHoldTime) { DARABONBA_PTR_SET_VALUE(obMaxHoldTime_, obMaxHoldTime) };


        // obMaxWrapupTime Field Functions 
        bool hasObMaxWrapupTime() const { return this->obMaxWrapupTime_ != nullptr;};
        void deleteObMaxWrapupTime() { this->obMaxWrapupTime_ = nullptr;};
        inline string getObMaxWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(obMaxWrapupTime_, "") };
        inline List& setObMaxWrapupTime(string obMaxWrapupTime) { DARABONBA_PTR_SET_VALUE(obMaxWrapupTime_, obMaxWrapupTime) };


        // obMinBridgeTime Field Functions 
        bool hasObMinBridgeTime() const { return this->obMinBridgeTime_ != nullptr;};
        void deleteObMinBridgeTime() { this->obMinBridgeTime_ = nullptr;};
        inline string getObMinBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(obMinBridgeTime_, "") };
        inline List& setObMinBridgeTime(string obMinBridgeTime) { DARABONBA_PTR_SET_VALUE(obMinBridgeTime_, obMinBridgeTime) };


        // obMinCallingTime Field Functions 
        bool hasObMinCallingTime() const { return this->obMinCallingTime_ != nullptr;};
        void deleteObMinCallingTime() { this->obMinCallingTime_ = nullptr;};
        inline string getObMinCallingTime() const { DARABONBA_PTR_GET_DEFAULT(obMinCallingTime_, "") };
        inline List& setObMinCallingTime(string obMinCallingTime) { DARABONBA_PTR_SET_VALUE(obMinCallingTime_, obMinCallingTime) };


        // obMinHoldTime Field Functions 
        bool hasObMinHoldTime() const { return this->obMinHoldTime_ != nullptr;};
        void deleteObMinHoldTime() { this->obMinHoldTime_ = nullptr;};
        inline string getObMinHoldTime() const { DARABONBA_PTR_GET_DEFAULT(obMinHoldTime_, "") };
        inline List& setObMinHoldTime(string obMinHoldTime) { DARABONBA_PTR_SET_VALUE(obMinHoldTime_, obMinHoldTime) };


        // obMinWrapupTime Field Functions 
        bool hasObMinWrapupTime() const { return this->obMinWrapupTime_ != nullptr;};
        void deleteObMinWrapupTime() { this->obMinWrapupTime_ = nullptr;};
        inline string getObMinWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(obMinWrapupTime_, "") };
        inline List& setObMinWrapupTime(string obMinWrapupTime) { DARABONBA_PTR_SET_VALUE(obMinWrapupTime_, obMinWrapupTime) };


        // obRealBridgeTime Field Functions 
        bool hasObRealBridgeTime() const { return this->obRealBridgeTime_ != nullptr;};
        void deleteObRealBridgeTime() { this->obRealBridgeTime_ = nullptr;};
        inline string getObRealBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(obRealBridgeTime_, "") };
        inline List& setObRealBridgeTime(string obRealBridgeTime) { DARABONBA_PTR_SET_VALUE(obRealBridgeTime_, obRealBridgeTime) };


        // obWrapupCount Field Functions 
        bool hasObWrapupCount() const { return this->obWrapupCount_ != nullptr;};
        void deleteObWrapupCount() { this->obWrapupCount_ = nullptr;};
        inline string getObWrapupCount() const { DARABONBA_PTR_GET_DEFAULT(obWrapupCount_, "") };
        inline List& setObWrapupCount(string obWrapupCount) { DARABONBA_PTR_SET_VALUE(obWrapupCount_, obWrapupCount) };


        // obWrapupTime Field Functions 
        bool hasObWrapupTime() const { return this->obWrapupTime_ != nullptr;};
        void deleteObWrapupTime() { this->obWrapupTime_ = nullptr;};
        inline string getObWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(obWrapupTime_, "") };
        inline List& setObWrapupTime(string obWrapupTime) { DARABONBA_PTR_SET_VALUE(obWrapupTime_, obWrapupTime) };


        // pauseCount Field Functions 
        bool hasPauseCount() const { return this->pauseCount_ != nullptr;};
        void deletePauseCount() { this->pauseCount_ = nullptr;};
        inline string getPauseCount() const { DARABONBA_PTR_GET_DEFAULT(pauseCount_, "") };
        inline List& setPauseCount(string pauseCount) { DARABONBA_PTR_SET_VALUE(pauseCount_, pauseCount) };


        // pauseTime Field Functions 
        bool hasPauseTime() const { return this->pauseTime_ != nullptr;};
        void deletePauseTime() { this->pauseTime_ = nullptr;};
        inline string getPauseTime() const { DARABONBA_PTR_GET_DEFAULT(pauseTime_, "") };
        inline List& setPauseTime(string pauseTime) { DARABONBA_PTR_SET_VALUE(pauseTime_, pauseTime) };


        // predictObAgentAnsweredHour Field Functions 
        bool hasPredictObAgentAnsweredHour() const { return this->predictObAgentAnsweredHour_ != nullptr;};
        void deletePredictObAgentAnsweredHour() { this->predictObAgentAnsweredHour_ = nullptr;};
        inline string getPredictObAgentAnsweredHour() const { DARABONBA_PTR_GET_DEFAULT(predictObAgentAnsweredHour_, "") };
        inline List& setPredictObAgentAnsweredHour(string predictObAgentAnsweredHour) { DARABONBA_PTR_SET_VALUE(predictObAgentAnsweredHour_, predictObAgentAnsweredHour) };


        // predictObAgentAnsweredTime Field Functions 
        bool hasPredictObAgentAnsweredTime() const { return this->predictObAgentAnsweredTime_ != nullptr;};
        void deletePredictObAgentAnsweredTime() { this->predictObAgentAnsweredTime_ = nullptr;};
        inline int64_t getPredictObAgentAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(predictObAgentAnsweredTime_, 0L) };
        inline List& setPredictObAgentAnsweredTime(int64_t predictObAgentAnsweredTime) { DARABONBA_PTR_SET_VALUE(predictObAgentAnsweredTime_, predictObAgentAnsweredTime) };


        // predictObAnsweredCount Field Functions 
        bool hasPredictObAnsweredCount() const { return this->predictObAnsweredCount_ != nullptr;};
        void deletePredictObAnsweredCount() { this->predictObAnsweredCount_ = nullptr;};
        inline int64_t getPredictObAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(predictObAnsweredCount_, 0L) };
        inline List& setPredictObAnsweredCount(int64_t predictObAnsweredCount) { DARABONBA_PTR_SET_VALUE(predictObAnsweredCount_, predictObAnsweredCount) };


        // predictObAnsweredDurationArray Field Functions 
        bool hasPredictObAnsweredDurationArray() const { return this->predictObAnsweredDurationArray_ != nullptr;};
        void deletePredictObAnsweredDurationArray() { this->predictObAnsweredDurationArray_ = nullptr;};
        inline string getPredictObAnsweredDurationArray() const { DARABONBA_PTR_GET_DEFAULT(predictObAnsweredDurationArray_, "") };
        inline List& setPredictObAnsweredDurationArray(string predictObAnsweredDurationArray) { DARABONBA_PTR_SET_VALUE(predictObAnsweredDurationArray_, predictObAnsweredDurationArray) };


        // predictObConsultCount Field Functions 
        bool hasPredictObConsultCount() const { return this->predictObConsultCount_ != nullptr;};
        void deletePredictObConsultCount() { this->predictObConsultCount_ = nullptr;};
        inline string getPredictObConsultCount() const { DARABONBA_PTR_GET_DEFAULT(predictObConsultCount_, "") };
        inline List& setPredictObConsultCount(string predictObConsultCount) { DARABONBA_PTR_SET_VALUE(predictObConsultCount_, predictObConsultCount) };


        // predictObMonitorBargeCount Field Functions 
        bool hasPredictObMonitorBargeCount() const { return this->predictObMonitorBargeCount_ != nullptr;};
        void deletePredictObMonitorBargeCount() { this->predictObMonitorBargeCount_ = nullptr;};
        inline string getPredictObMonitorBargeCount() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorBargeCount_, "") };
        inline List& setPredictObMonitorBargeCount(string predictObMonitorBargeCount) { DARABONBA_PTR_SET_VALUE(predictObMonitorBargeCount_, predictObMonitorBargeCount) };


        // predictObMonitorBargeDuration Field Functions 
        bool hasPredictObMonitorBargeDuration() const { return this->predictObMonitorBargeDuration_ != nullptr;};
        void deletePredictObMonitorBargeDuration() { this->predictObMonitorBargeDuration_ = nullptr;};
        inline string getPredictObMonitorBargeDuration() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorBargeDuration_, "") };
        inline List& setPredictObMonitorBargeDuration(string predictObMonitorBargeDuration) { DARABONBA_PTR_SET_VALUE(predictObMonitorBargeDuration_, predictObMonitorBargeDuration) };


        // predictObMonitorDisconnectCount Field Functions 
        bool hasPredictObMonitorDisconnectCount() const { return this->predictObMonitorDisconnectCount_ != nullptr;};
        void deletePredictObMonitorDisconnectCount() { this->predictObMonitorDisconnectCount_ = nullptr;};
        inline string getPredictObMonitorDisconnectCount() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorDisconnectCount_, "") };
        inline List& setPredictObMonitorDisconnectCount(string predictObMonitorDisconnectCount) { DARABONBA_PTR_SET_VALUE(predictObMonitorDisconnectCount_, predictObMonitorDisconnectCount) };


        // predictObMonitorSpyCount Field Functions 
        bool hasPredictObMonitorSpyCount() const { return this->predictObMonitorSpyCount_ != nullptr;};
        void deletePredictObMonitorSpyCount() { this->predictObMonitorSpyCount_ = nullptr;};
        inline string getPredictObMonitorSpyCount() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorSpyCount_, "") };
        inline List& setPredictObMonitorSpyCount(string predictObMonitorSpyCount) { DARABONBA_PTR_SET_VALUE(predictObMonitorSpyCount_, predictObMonitorSpyCount) };


        // predictObMonitorSpyDuration Field Functions 
        bool hasPredictObMonitorSpyDuration() const { return this->predictObMonitorSpyDuration_ != nullptr;};
        void deletePredictObMonitorSpyDuration() { this->predictObMonitorSpyDuration_ = nullptr;};
        inline string getPredictObMonitorSpyDuration() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorSpyDuration_, "") };
        inline List& setPredictObMonitorSpyDuration(string predictObMonitorSpyDuration) { DARABONBA_PTR_SET_VALUE(predictObMonitorSpyDuration_, predictObMonitorSpyDuration) };


        // predictObMonitorThreewayCount Field Functions 
        bool hasPredictObMonitorThreewayCount() const { return this->predictObMonitorThreewayCount_ != nullptr;};
        void deletePredictObMonitorThreewayCount() { this->predictObMonitorThreewayCount_ = nullptr;};
        inline string getPredictObMonitorThreewayCount() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorThreewayCount_, "") };
        inline List& setPredictObMonitorThreewayCount(string predictObMonitorThreewayCount) { DARABONBA_PTR_SET_VALUE(predictObMonitorThreewayCount_, predictObMonitorThreewayCount) };


        // predictObMonitorWhisperCount Field Functions 
        bool hasPredictObMonitorWhisperCount() const { return this->predictObMonitorWhisperCount_ != nullptr;};
        void deletePredictObMonitorWhisperCount() { this->predictObMonitorWhisperCount_ = nullptr;};
        inline string getPredictObMonitorWhisperCount() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorWhisperCount_, "") };
        inline List& setPredictObMonitorWhisperCount(string predictObMonitorWhisperCount) { DARABONBA_PTR_SET_VALUE(predictObMonitorWhisperCount_, predictObMonitorWhisperCount) };


        // predictObMonitorWhisperDuration Field Functions 
        bool hasPredictObMonitorWhisperDuration() const { return this->predictObMonitorWhisperDuration_ != nullptr;};
        void deletePredictObMonitorWhisperDuration() { this->predictObMonitorWhisperDuration_ = nullptr;};
        inline string getPredictObMonitorWhisperDuration() const { DARABONBA_PTR_GET_DEFAULT(predictObMonitorWhisperDuration_, "") };
        inline List& setPredictObMonitorWhisperDuration(string predictObMonitorWhisperDuration) { DARABONBA_PTR_SET_VALUE(predictObMonitorWhisperDuration_, predictObMonitorWhisperDuration) };


        // predictObTotalCount Field Functions 
        bool hasPredictObTotalCount() const { return this->predictObTotalCount_ != nullptr;};
        void deletePredictObTotalCount() { this->predictObTotalCount_ = nullptr;};
        inline int64_t getPredictObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(predictObTotalCount_, 0L) };
        inline List& setPredictObTotalCount(int64_t predictObTotalCount) { DARABONBA_PTR_SET_VALUE(predictObTotalCount_, predictObTotalCount) };


        // predictObTransferCount Field Functions 
        bool hasPredictObTransferCount() const { return this->predictObTransferCount_ != nullptr;};
        void deletePredictObTransferCount() { this->predictObTransferCount_ = nullptr;};
        inline string getPredictObTransferCount() const { DARABONBA_PTR_GET_DEFAULT(predictObTransferCount_, "") };
        inline List& setPredictObTransferCount(string predictObTransferCount) { DARABONBA_PTR_SET_VALUE(predictObTransferCount_, predictObTransferCount) };


        // predictObValidCalls Field Functions 
        bool hasPredictObValidCalls() const { return this->predictObValidCalls_ != nullptr;};
        void deletePredictObValidCalls() { this->predictObValidCalls_ = nullptr;};
        inline int64_t getPredictObValidCalls() const { DARABONBA_PTR_GET_DEFAULT(predictObValidCalls_, 0L) };
        inline List& setPredictObValidCalls(int64_t predictObValidCalls) { DARABONBA_PTR_SET_VALUE(predictObValidCalls_, predictObValidCalls) };


        // predictObValidTotalBridgeHour Field Functions 
        bool hasPredictObValidTotalBridgeHour() const { return this->predictObValidTotalBridgeHour_ != nullptr;};
        void deletePredictObValidTotalBridgeHour() { this->predictObValidTotalBridgeHour_ = nullptr;};
        inline string getPredictObValidTotalBridgeHour() const { DARABONBA_PTR_GET_DEFAULT(predictObValidTotalBridgeHour_, "") };
        inline List& setPredictObValidTotalBridgeHour(string predictObValidTotalBridgeHour) { DARABONBA_PTR_SET_VALUE(predictObValidTotalBridgeHour_, predictObValidTotalBridgeHour) };


        // predictObValidTotalBridgeTime Field Functions 
        bool hasPredictObValidTotalBridgeTime() const { return this->predictObValidTotalBridgeTime_ != nullptr;};
        void deletePredictObValidTotalBridgeTime() { this->predictObValidTotalBridgeTime_ = nullptr;};
        inline int64_t getPredictObValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(predictObValidTotalBridgeTime_, 0L) };
        inline List& setPredictObValidTotalBridgeTime(int64_t predictObValidTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(predictObValidTotalBridgeTime_, predictObValidTotalBridgeTime) };


        // previewAgentAnswerdRate Field Functions 
        bool hasPreviewAgentAnswerdRate() const { return this->previewAgentAnswerdRate_ != nullptr;};
        void deletePreviewAgentAnswerdRate() { this->previewAgentAnswerdRate_ = nullptr;};
        inline string getPreviewAgentAnswerdRate() const { DARABONBA_PTR_GET_DEFAULT(previewAgentAnswerdRate_, "") };
        inline List& setPreviewAgentAnswerdRate(string previewAgentAnswerdRate) { DARABONBA_PTR_SET_VALUE(previewAgentAnswerdRate_, previewAgentAnswerdRate) };


        // previewCustomerAnswerdRate Field Functions 
        bool hasPreviewCustomerAnswerdRate() const { return this->previewCustomerAnswerdRate_ != nullptr;};
        void deletePreviewCustomerAnswerdRate() { this->previewCustomerAnswerdRate_ = nullptr;};
        inline string getPreviewCustomerAnswerdRate() const { DARABONBA_PTR_GET_DEFAULT(previewCustomerAnswerdRate_, "") };
        inline List& setPreviewCustomerAnswerdRate(string previewCustomerAnswerdRate) { DARABONBA_PTR_SET_VALUE(previewCustomerAnswerdRate_, previewCustomerAnswerdRate) };


        // previewObAgentAnsweredCount Field Functions 
        bool hasPreviewObAgentAnsweredCount() const { return this->previewObAgentAnsweredCount_ != nullptr;};
        void deletePreviewObAgentAnsweredCount() { this->previewObAgentAnsweredCount_ = nullptr;};
        inline string getPreviewObAgentAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(previewObAgentAnsweredCount_, "") };
        inline List& setPreviewObAgentAnsweredCount(string previewObAgentAnsweredCount) { DARABONBA_PTR_SET_VALUE(previewObAgentAnsweredCount_, previewObAgentAnsweredCount) };


        // previewObAgentAnsweredTime Field Functions 
        bool hasPreviewObAgentAnsweredTime() const { return this->previewObAgentAnsweredTime_ != nullptr;};
        void deletePreviewObAgentAnsweredTime() { this->previewObAgentAnsweredTime_ = nullptr;};
        inline string getPreviewObAgentAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(previewObAgentAnsweredTime_, "") };
        inline List& setPreviewObAgentAnsweredTime(string previewObAgentAnsweredTime) { DARABONBA_PTR_SET_VALUE(previewObAgentAnsweredTime_, previewObAgentAnsweredTime) };


        // previewObAnsweredCount Field Functions 
        bool hasPreviewObAnsweredCount() const { return this->previewObAnsweredCount_ != nullptr;};
        void deletePreviewObAnsweredCount() { this->previewObAnsweredCount_ = nullptr;};
        inline string getPreviewObAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(previewObAnsweredCount_, "") };
        inline List& setPreviewObAnsweredCount(string previewObAnsweredCount) { DARABONBA_PTR_SET_VALUE(previewObAnsweredCount_, previewObAnsweredCount) };


        // previewObAnsweredDurationArray Field Functions 
        bool hasPreviewObAnsweredDurationArray() const { return this->previewObAnsweredDurationArray_ != nullptr;};
        void deletePreviewObAnsweredDurationArray() { this->previewObAnsweredDurationArray_ = nullptr;};
        inline const vector<string> & getPreviewObAnsweredDurationArray() const { DARABONBA_PTR_GET_CONST(previewObAnsweredDurationArray_, vector<string>) };
        inline vector<string> getPreviewObAnsweredDurationArray() { DARABONBA_PTR_GET(previewObAnsweredDurationArray_, vector<string>) };
        inline List& setPreviewObAnsweredDurationArray(const vector<string> & previewObAnsweredDurationArray) { DARABONBA_PTR_SET_VALUE(previewObAnsweredDurationArray_, previewObAnsweredDurationArray) };
        inline List& setPreviewObAnsweredDurationArray(vector<string> && previewObAnsweredDurationArray) { DARABONBA_PTR_SET_RVALUE(previewObAnsweredDurationArray_, previewObAnsweredDurationArray) };


        // previewObAnsweredDurationDscArray Field Functions 
        bool hasPreviewObAnsweredDurationDscArray() const { return this->previewObAnsweredDurationDscArray_ != nullptr;};
        void deletePreviewObAnsweredDurationDscArray() { this->previewObAnsweredDurationDscArray_ = nullptr;};
        inline const vector<string> & getPreviewObAnsweredDurationDscArray() const { DARABONBA_PTR_GET_CONST(previewObAnsweredDurationDscArray_, vector<string>) };
        inline vector<string> getPreviewObAnsweredDurationDscArray() { DARABONBA_PTR_GET(previewObAnsweredDurationDscArray_, vector<string>) };
        inline List& setPreviewObAnsweredDurationDscArray(const vector<string> & previewObAnsweredDurationDscArray) { DARABONBA_PTR_SET_VALUE(previewObAnsweredDurationDscArray_, previewObAnsweredDurationDscArray) };
        inline List& setPreviewObAnsweredDurationDscArray(vector<string> && previewObAnsweredDurationDscArray) { DARABONBA_PTR_SET_RVALUE(previewObAnsweredDurationDscArray_, previewObAnsweredDurationDscArray) };


        // previewObConsultCount Field Functions 
        bool hasPreviewObConsultCount() const { return this->previewObConsultCount_ != nullptr;};
        void deletePreviewObConsultCount() { this->previewObConsultCount_ = nullptr;};
        inline string getPreviewObConsultCount() const { DARABONBA_PTR_GET_DEFAULT(previewObConsultCount_, "") };
        inline List& setPreviewObConsultCount(string previewObConsultCount) { DARABONBA_PTR_SET_VALUE(previewObConsultCount_, previewObConsultCount) };


        // previewObCustomerAnsweredTime Field Functions 
        bool hasPreviewObCustomerAnsweredTime() const { return this->previewObCustomerAnsweredTime_ != nullptr;};
        void deletePreviewObCustomerAnsweredTime() { this->previewObCustomerAnsweredTime_ = nullptr;};
        inline string getPreviewObCustomerAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(previewObCustomerAnsweredTime_, "") };
        inline List& setPreviewObCustomerAnsweredTime(string previewObCustomerAnsweredTime) { DARABONBA_PTR_SET_VALUE(previewObCustomerAnsweredTime_, previewObCustomerAnsweredTime) };


        // previewObCustomerRingingCount Field Functions 
        bool hasPreviewObCustomerRingingCount() const { return this->previewObCustomerRingingCount_ != nullptr;};
        void deletePreviewObCustomerRingingCount() { this->previewObCustomerRingingCount_ = nullptr;};
        inline string getPreviewObCustomerRingingCount() const { DARABONBA_PTR_GET_DEFAULT(previewObCustomerRingingCount_, "") };
        inline List& setPreviewObCustomerRingingCount(string previewObCustomerRingingCount) { DARABONBA_PTR_SET_VALUE(previewObCustomerRingingCount_, previewObCustomerRingingCount) };


        // previewObCustomerRingingRate Field Functions 
        bool hasPreviewObCustomerRingingRate() const { return this->previewObCustomerRingingRate_ != nullptr;};
        void deletePreviewObCustomerRingingRate() { this->previewObCustomerRingingRate_ = nullptr;};
        inline string getPreviewObCustomerRingingRate() const { DARABONBA_PTR_GET_DEFAULT(previewObCustomerRingingRate_, "") };
        inline List& setPreviewObCustomerRingingRate(string previewObCustomerRingingRate) { DARABONBA_PTR_SET_VALUE(previewObCustomerRingingRate_, previewObCustomerRingingRate) };


        // previewObMonitorBargeCount Field Functions 
        bool hasPreviewObMonitorBargeCount() const { return this->previewObMonitorBargeCount_ != nullptr;};
        void deletePreviewObMonitorBargeCount() { this->previewObMonitorBargeCount_ = nullptr;};
        inline string getPreviewObMonitorBargeCount() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorBargeCount_, "") };
        inline List& setPreviewObMonitorBargeCount(string previewObMonitorBargeCount) { DARABONBA_PTR_SET_VALUE(previewObMonitorBargeCount_, previewObMonitorBargeCount) };


        // previewObMonitorBargeDuration Field Functions 
        bool hasPreviewObMonitorBargeDuration() const { return this->previewObMonitorBargeDuration_ != nullptr;};
        void deletePreviewObMonitorBargeDuration() { this->previewObMonitorBargeDuration_ = nullptr;};
        inline string getPreviewObMonitorBargeDuration() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorBargeDuration_, "") };
        inline List& setPreviewObMonitorBargeDuration(string previewObMonitorBargeDuration) { DARABONBA_PTR_SET_VALUE(previewObMonitorBargeDuration_, previewObMonitorBargeDuration) };


        // previewObMonitorDisconnectCount Field Functions 
        bool hasPreviewObMonitorDisconnectCount() const { return this->previewObMonitorDisconnectCount_ != nullptr;};
        void deletePreviewObMonitorDisconnectCount() { this->previewObMonitorDisconnectCount_ = nullptr;};
        inline string getPreviewObMonitorDisconnectCount() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorDisconnectCount_, "") };
        inline List& setPreviewObMonitorDisconnectCount(string previewObMonitorDisconnectCount) { DARABONBA_PTR_SET_VALUE(previewObMonitorDisconnectCount_, previewObMonitorDisconnectCount) };


        // previewObMonitorSpyCount Field Functions 
        bool hasPreviewObMonitorSpyCount() const { return this->previewObMonitorSpyCount_ != nullptr;};
        void deletePreviewObMonitorSpyCount() { this->previewObMonitorSpyCount_ = nullptr;};
        inline string getPreviewObMonitorSpyCount() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorSpyCount_, "") };
        inline List& setPreviewObMonitorSpyCount(string previewObMonitorSpyCount) { DARABONBA_PTR_SET_VALUE(previewObMonitorSpyCount_, previewObMonitorSpyCount) };


        // previewObMonitorSpyDuration Field Functions 
        bool hasPreviewObMonitorSpyDuration() const { return this->previewObMonitorSpyDuration_ != nullptr;};
        void deletePreviewObMonitorSpyDuration() { this->previewObMonitorSpyDuration_ = nullptr;};
        inline string getPreviewObMonitorSpyDuration() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorSpyDuration_, "") };
        inline List& setPreviewObMonitorSpyDuration(string previewObMonitorSpyDuration) { DARABONBA_PTR_SET_VALUE(previewObMonitorSpyDuration_, previewObMonitorSpyDuration) };


        // previewObMonitorThreewayCount Field Functions 
        bool hasPreviewObMonitorThreewayCount() const { return this->previewObMonitorThreewayCount_ != nullptr;};
        void deletePreviewObMonitorThreewayCount() { this->previewObMonitorThreewayCount_ = nullptr;};
        inline string getPreviewObMonitorThreewayCount() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorThreewayCount_, "") };
        inline List& setPreviewObMonitorThreewayCount(string previewObMonitorThreewayCount) { DARABONBA_PTR_SET_VALUE(previewObMonitorThreewayCount_, previewObMonitorThreewayCount) };


        // previewObMonitorWhisperCount Field Functions 
        bool hasPreviewObMonitorWhisperCount() const { return this->previewObMonitorWhisperCount_ != nullptr;};
        void deletePreviewObMonitorWhisperCount() { this->previewObMonitorWhisperCount_ = nullptr;};
        inline string getPreviewObMonitorWhisperCount() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorWhisperCount_, "") };
        inline List& setPreviewObMonitorWhisperCount(string previewObMonitorWhisperCount) { DARABONBA_PTR_SET_VALUE(previewObMonitorWhisperCount_, previewObMonitorWhisperCount) };


        // previewObMonitorWhisperDuration Field Functions 
        bool hasPreviewObMonitorWhisperDuration() const { return this->previewObMonitorWhisperDuration_ != nullptr;};
        void deletePreviewObMonitorWhisperDuration() { this->previewObMonitorWhisperDuration_ = nullptr;};
        inline string getPreviewObMonitorWhisperDuration() const { DARABONBA_PTR_GET_DEFAULT(previewObMonitorWhisperDuration_, "") };
        inline List& setPreviewObMonitorWhisperDuration(string previewObMonitorWhisperDuration) { DARABONBA_PTR_SET_VALUE(previewObMonitorWhisperDuration_, previewObMonitorWhisperDuration) };


        // previewObTotalBridgeHour Field Functions 
        bool hasPreviewObTotalBridgeHour() const { return this->previewObTotalBridgeHour_ != nullptr;};
        void deletePreviewObTotalBridgeHour() { this->previewObTotalBridgeHour_ = nullptr;};
        inline string getPreviewObTotalBridgeHour() const { DARABONBA_PTR_GET_DEFAULT(previewObTotalBridgeHour_, "") };
        inline List& setPreviewObTotalBridgeHour(string previewObTotalBridgeHour) { DARABONBA_PTR_SET_VALUE(previewObTotalBridgeHour_, previewObTotalBridgeHour) };


        // previewObTotalBridgeTime Field Functions 
        bool hasPreviewObTotalBridgeTime() const { return this->previewObTotalBridgeTime_ != nullptr;};
        void deletePreviewObTotalBridgeTime() { this->previewObTotalBridgeTime_ = nullptr;};
        inline string getPreviewObTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(previewObTotalBridgeTime_, "") };
        inline List& setPreviewObTotalBridgeTime(string previewObTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(previewObTotalBridgeTime_, previewObTotalBridgeTime) };


        // previewObTotalCount Field Functions 
        bool hasPreviewObTotalCount() const { return this->previewObTotalCount_ != nullptr;};
        void deletePreviewObTotalCount() { this->previewObTotalCount_ = nullptr;};
        inline string getPreviewObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(previewObTotalCount_, "") };
        inline List& setPreviewObTotalCount(string previewObTotalCount) { DARABONBA_PTR_SET_VALUE(previewObTotalCount_, previewObTotalCount) };


        // previewObTransferBridgeCount Field Functions 
        bool hasPreviewObTransferBridgeCount() const { return this->previewObTransferBridgeCount_ != nullptr;};
        void deletePreviewObTransferBridgeCount() { this->previewObTransferBridgeCount_ = nullptr;};
        inline string getPreviewObTransferBridgeCount() const { DARABONBA_PTR_GET_DEFAULT(previewObTransferBridgeCount_, "") };
        inline List& setPreviewObTransferBridgeCount(string previewObTransferBridgeCount) { DARABONBA_PTR_SET_VALUE(previewObTransferBridgeCount_, previewObTransferBridgeCount) };


        // previewObTransferBridgeDuration Field Functions 
        bool hasPreviewObTransferBridgeDuration() const { return this->previewObTransferBridgeDuration_ != nullptr;};
        void deletePreviewObTransferBridgeDuration() { this->previewObTransferBridgeDuration_ = nullptr;};
        inline string getPreviewObTransferBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(previewObTransferBridgeDuration_, "") };
        inline List& setPreviewObTransferBridgeDuration(string previewObTransferBridgeDuration) { DARABONBA_PTR_SET_VALUE(previewObTransferBridgeDuration_, previewObTransferBridgeDuration) };


        // previewObTransferCount Field Functions 
        bool hasPreviewObTransferCount() const { return this->previewObTransferCount_ != nullptr;};
        void deletePreviewObTransferCount() { this->previewObTransferCount_ = nullptr;};
        inline string getPreviewObTransferCount() const { DARABONBA_PTR_GET_DEFAULT(previewObTransferCount_, "") };
        inline List& setPreviewObTransferCount(string previewObTransferCount) { DARABONBA_PTR_SET_VALUE(previewObTransferCount_, previewObTransferCount) };


        // previewObValidCalls Field Functions 
        bool hasPreviewObValidCalls() const { return this->previewObValidCalls_ != nullptr;};
        void deletePreviewObValidCalls() { this->previewObValidCalls_ = nullptr;};
        inline string getPreviewObValidCalls() const { DARABONBA_PTR_GET_DEFAULT(previewObValidCalls_, "") };
        inline List& setPreviewObValidCalls(string previewObValidCalls) { DARABONBA_PTR_SET_VALUE(previewObValidCalls_, previewObValidCalls) };


        // previewObValidTotalBridgeHour Field Functions 
        bool hasPreviewObValidTotalBridgeHour() const { return this->previewObValidTotalBridgeHour_ != nullptr;};
        void deletePreviewObValidTotalBridgeHour() { this->previewObValidTotalBridgeHour_ = nullptr;};
        inline string getPreviewObValidTotalBridgeHour() const { DARABONBA_PTR_GET_DEFAULT(previewObValidTotalBridgeHour_, "") };
        inline List& setPreviewObValidTotalBridgeHour(string previewObValidTotalBridgeHour) { DARABONBA_PTR_SET_VALUE(previewObValidTotalBridgeHour_, previewObValidTotalBridgeHour) };


        // previewObValidTotalBridgeTime Field Functions 
        bool hasPreviewObValidTotalBridgeTime() const { return this->previewObValidTotalBridgeTime_ != nullptr;};
        void deletePreviewObValidTotalBridgeTime() { this->previewObValidTotalBridgeTime_ = nullptr;};
        inline string getPreviewObValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(previewObValidTotalBridgeTime_, "") };
        inline List& setPreviewObValidTotalBridgeTime(string previewObValidTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(previewObValidTotalBridgeTime_, previewObValidTotalBridgeTime) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline List& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // restCount Field Functions 
        bool hasRestCount() const { return this->restCount_ != nullptr;};
        void deleteRestCount() { this->restCount_ = nullptr;};
        inline string getRestCount() const { DARABONBA_PTR_GET_DEFAULT(restCount_, "") };
        inline List& setRestCount(string restCount) { DARABONBA_PTR_SET_VALUE(restCount_, restCount) };


        // restTime Field Functions 
        bool hasRestTime() const { return this->restTime_ != nullptr;};
        void deleteRestTime() { this->restTime_ = nullptr;};
        inline string getRestTime() const { DARABONBA_PTR_GET_DEFAULT(restTime_, "") };
        inline List& setRestTime(string restTime) { DARABONBA_PTR_SET_VALUE(restTime_, restTime) };


        // rowName Field Functions 
        bool hasRowName() const { return this->rowName_ != nullptr;};
        void deleteRowName() { this->rowName_ = nullptr;};
        inline string getRowName() const { DARABONBA_PTR_GET_DEFAULT(rowName_, "") };
        inline List& setRowName(string rowName) { DARABONBA_PTR_SET_VALUE(rowName_, rowName) };


        // totalBridgeTime Field Functions 
        bool hasTotalBridgeTime() const { return this->totalBridgeTime_ != nullptr;};
        void deleteTotalBridgeTime() { this->totalBridgeTime_ = nullptr;};
        inline string getTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(totalBridgeTime_, "") };
        inline List& setTotalBridgeTime(string totalBridgeTime) { DARABONBA_PTR_SET_VALUE(totalBridgeTime_, totalBridgeTime) };


        // webcallObAgentAnsweredTime Field Functions 
        bool hasWebcallObAgentAnsweredTime() const { return this->webcallObAgentAnsweredTime_ != nullptr;};
        void deleteWebcallObAgentAnsweredTime() { this->webcallObAgentAnsweredTime_ = nullptr;};
        inline string getWebcallObAgentAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(webcallObAgentAnsweredTime_, "") };
        inline List& setWebcallObAgentAnsweredTime(string webcallObAgentAnsweredTime) { DARABONBA_PTR_SET_VALUE(webcallObAgentAnsweredTime_, webcallObAgentAnsweredTime) };


        // webcallObAnsweredCount Field Functions 
        bool hasWebcallObAnsweredCount() const { return this->webcallObAnsweredCount_ != nullptr;};
        void deleteWebcallObAnsweredCount() { this->webcallObAnsweredCount_ = nullptr;};
        inline string getWebcallObAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObAnsweredCount_, "") };
        inline List& setWebcallObAnsweredCount(string webcallObAnsweredCount) { DARABONBA_PTR_SET_VALUE(webcallObAnsweredCount_, webcallObAnsweredCount) };


        // webcallObAnsweredDurationArray Field Functions 
        bool hasWebcallObAnsweredDurationArray() const { return this->webcallObAnsweredDurationArray_ != nullptr;};
        void deleteWebcallObAnsweredDurationArray() { this->webcallObAnsweredDurationArray_ = nullptr;};
        inline string getWebcallObAnsweredDurationArray() const { DARABONBA_PTR_GET_DEFAULT(webcallObAnsweredDurationArray_, "") };
        inline List& setWebcallObAnsweredDurationArray(string webcallObAnsweredDurationArray) { DARABONBA_PTR_SET_VALUE(webcallObAnsweredDurationArray_, webcallObAnsweredDurationArray) };


        // webcallObConsultCount Field Functions 
        bool hasWebcallObConsultCount() const { return this->webcallObConsultCount_ != nullptr;};
        void deleteWebcallObConsultCount() { this->webcallObConsultCount_ = nullptr;};
        inline string getWebcallObConsultCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObConsultCount_, "") };
        inline List& setWebcallObConsultCount(string webcallObConsultCount) { DARABONBA_PTR_SET_VALUE(webcallObConsultCount_, webcallObConsultCount) };


        // webcallObMonitorBargeCount Field Functions 
        bool hasWebcallObMonitorBargeCount() const { return this->webcallObMonitorBargeCount_ != nullptr;};
        void deleteWebcallObMonitorBargeCount() { this->webcallObMonitorBargeCount_ = nullptr;};
        inline string getWebcallObMonitorBargeCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorBargeCount_, "") };
        inline List& setWebcallObMonitorBargeCount(string webcallObMonitorBargeCount) { DARABONBA_PTR_SET_VALUE(webcallObMonitorBargeCount_, webcallObMonitorBargeCount) };


        // webcallObMonitorBargeDuration Field Functions 
        bool hasWebcallObMonitorBargeDuration() const { return this->webcallObMonitorBargeDuration_ != nullptr;};
        void deleteWebcallObMonitorBargeDuration() { this->webcallObMonitorBargeDuration_ = nullptr;};
        inline string getWebcallObMonitorBargeDuration() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorBargeDuration_, "") };
        inline List& setWebcallObMonitorBargeDuration(string webcallObMonitorBargeDuration) { DARABONBA_PTR_SET_VALUE(webcallObMonitorBargeDuration_, webcallObMonitorBargeDuration) };


        // webcallObMonitorDisconnectCount Field Functions 
        bool hasWebcallObMonitorDisconnectCount() const { return this->webcallObMonitorDisconnectCount_ != nullptr;};
        void deleteWebcallObMonitorDisconnectCount() { this->webcallObMonitorDisconnectCount_ = nullptr;};
        inline string getWebcallObMonitorDisconnectCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorDisconnectCount_, "") };
        inline List& setWebcallObMonitorDisconnectCount(string webcallObMonitorDisconnectCount) { DARABONBA_PTR_SET_VALUE(webcallObMonitorDisconnectCount_, webcallObMonitorDisconnectCount) };


        // webcallObMonitorSpyCount Field Functions 
        bool hasWebcallObMonitorSpyCount() const { return this->webcallObMonitorSpyCount_ != nullptr;};
        void deleteWebcallObMonitorSpyCount() { this->webcallObMonitorSpyCount_ = nullptr;};
        inline string getWebcallObMonitorSpyCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorSpyCount_, "") };
        inline List& setWebcallObMonitorSpyCount(string webcallObMonitorSpyCount) { DARABONBA_PTR_SET_VALUE(webcallObMonitorSpyCount_, webcallObMonitorSpyCount) };


        // webcallObMonitorSpyDuration Field Functions 
        bool hasWebcallObMonitorSpyDuration() const { return this->webcallObMonitorSpyDuration_ != nullptr;};
        void deleteWebcallObMonitorSpyDuration() { this->webcallObMonitorSpyDuration_ = nullptr;};
        inline string getWebcallObMonitorSpyDuration() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorSpyDuration_, "") };
        inline List& setWebcallObMonitorSpyDuration(string webcallObMonitorSpyDuration) { DARABONBA_PTR_SET_VALUE(webcallObMonitorSpyDuration_, webcallObMonitorSpyDuration) };


        // webcallObMonitorThreewayCount Field Functions 
        bool hasWebcallObMonitorThreewayCount() const { return this->webcallObMonitorThreewayCount_ != nullptr;};
        void deleteWebcallObMonitorThreewayCount() { this->webcallObMonitorThreewayCount_ = nullptr;};
        inline string getWebcallObMonitorThreewayCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorThreewayCount_, "") };
        inline List& setWebcallObMonitorThreewayCount(string webcallObMonitorThreewayCount) { DARABONBA_PTR_SET_VALUE(webcallObMonitorThreewayCount_, webcallObMonitorThreewayCount) };


        // webcallObMonitorWhisperCount Field Functions 
        bool hasWebcallObMonitorWhisperCount() const { return this->webcallObMonitorWhisperCount_ != nullptr;};
        void deleteWebcallObMonitorWhisperCount() { this->webcallObMonitorWhisperCount_ = nullptr;};
        inline string getWebcallObMonitorWhisperCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorWhisperCount_, "") };
        inline List& setWebcallObMonitorWhisperCount(string webcallObMonitorWhisperCount) { DARABONBA_PTR_SET_VALUE(webcallObMonitorWhisperCount_, webcallObMonitorWhisperCount) };


        // webcallObMonitorWhisperDuration Field Functions 
        bool hasWebcallObMonitorWhisperDuration() const { return this->webcallObMonitorWhisperDuration_ != nullptr;};
        void deleteWebcallObMonitorWhisperDuration() { this->webcallObMonitorWhisperDuration_ = nullptr;};
        inline string getWebcallObMonitorWhisperDuration() const { DARABONBA_PTR_GET_DEFAULT(webcallObMonitorWhisperDuration_, "") };
        inline List& setWebcallObMonitorWhisperDuration(string webcallObMonitorWhisperDuration) { DARABONBA_PTR_SET_VALUE(webcallObMonitorWhisperDuration_, webcallObMonitorWhisperDuration) };


        // webcallObTotalCount Field Functions 
        bool hasWebcallObTotalCount() const { return this->webcallObTotalCount_ != nullptr;};
        void deleteWebcallObTotalCount() { this->webcallObTotalCount_ = nullptr;};
        inline string getWebcallObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObTotalCount_, "") };
        inline List& setWebcallObTotalCount(string webcallObTotalCount) { DARABONBA_PTR_SET_VALUE(webcallObTotalCount_, webcallObTotalCount) };


        // webcallObTransferCount Field Functions 
        bool hasWebcallObTransferCount() const { return this->webcallObTransferCount_ != nullptr;};
        void deleteWebcallObTransferCount() { this->webcallObTransferCount_ = nullptr;};
        inline string getWebcallObTransferCount() const { DARABONBA_PTR_GET_DEFAULT(webcallObTransferCount_, "") };
        inline List& setWebcallObTransferCount(string webcallObTransferCount) { DARABONBA_PTR_SET_VALUE(webcallObTransferCount_, webcallObTransferCount) };


      protected:
        // 座席来电接听率
        shared_ptr<string> agentAnswerRate_ {};
        // 座席创建时间
        shared_ptr<string> agentCreateTime_ {};
        // 座席名称
        shared_ptr<string> agentName_ {};
        // 座席呼叫接听率
        shared_ptr<string> agentRate_ {};
        // 座席停用时间
        shared_ptr<string> agentStopTime_ {};
        // 平均空闲时长
        shared_ptr<string> avgIdleTime_ {};
        // 平均置忙时长
        shared_ptr<string> avgPauseTime_ {};
        // 平均等待时长
        shared_ptr<string> avgPreviewObWaitTime_ {};
        // 平均休息时长
        shared_ptr<string> avgRestTime_ {};
        // 通话利用率
        shared_ptr<string> callUtilization_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 创建时间
        shared_ptr<string> createTime_ {};
        // 时间范围
        shared_ptr<string> dateTimeRange_ {};
        // 统计日期
        shared_ptr<string> day_ {};
        // 主叫外呼客户接听数
        shared_ptr<string> directObAnsweredCount_ {};
        // 主叫外呼接听量分布
        shared_ptr<string> directObAnsweredDurationArray_ {};
        // 主叫外呼接听量分布描述
        shared_ptr<vector<string>> directObAnsweredDurationDscArray_ {};
        // 主叫外呼总时长
        shared_ptr<string> directObBridgeDuration_ {};
        // 主叫外呼双方接听分钟数
        shared_ptr<string> directObBridgeTime_ {};
        // 主叫外呼咨询总次数
        shared_ptr<string> directObConsultCount_ {};
        // 主叫外呼强插总次数
        shared_ptr<string> directObMonitorBargeCount_ {};
        // 主叫外呼总监控强拆次数
        shared_ptr<string> directObMonitorDisconnectCount_ {};
        // 主叫外呼监听总次数
        shared_ptr<string> directObMonitorSpyCount_ {};
        // 主叫外呼监控三方总次数
        shared_ptr<string> directObMonitorThreewayCount_ {};
        // 主叫外呼耳语总次数
        shared_ptr<string> directObMonitorWhisperCount_ {};
        // 主叫外呼总次数
        shared_ptr<string> directObTotalCount_ {};
        // 主叫外呼总分钟数
        shared_ptr<string> directObTotalTime_ {};
        // 主叫外呼转移总次数
        shared_ptr<string> directObTransferCount_ {};
        // 主叫外呼有效接听数
        shared_ptr<string> directObValidCalls_ {};
        // 主叫外呼有效接听时长
        shared_ptr<string> directObValidTotalBridgeTime_ {};
        // 企业id
        shared_ptr<string> enterpriseId_ {};
        // 工时利用率
        shared_ptr<string> hoursUtilization_ {};
        // 座席挂机数
        shared_ptr<string> ibAgentHangupCount_ {};
        // 来电座席拒接数
        shared_ptr<string> ibAgentRefuseCount_ {};
        // 呼入座席接听数
        shared_ptr<string> ibAnsweredCount_ {};
        // 接听量分布
        shared_ptr<vector<string>> ibAnsweredDurationArray_ {};
        // 呼入接听量分布描述
        shared_ptr<vector<string>> ibAnsweredDurationDscArray_ {};
        // 呼入接听平均延迟时间
        shared_ptr<string> ibAvgAnswerDelayTime_ {};
        // 呼入平均通话时长
        shared_ptr<string> ibAvgBridgeTime_ {};
        // 呼入平均呼叫时长
        shared_ptr<string> ibAvgCallingTime_ {};
        // 呼入平均保持时长
        shared_ptr<string> ibAvgHoldTime_ {};
        // 呼入平均整理时长
        shared_ptr<string> ibAvgWrapupTime_ {};
        // 呼入通话次数
        shared_ptr<string> ibBridgeCount_ {};
        // 呼入通话分钟数
        shared_ptr<string> ibBridgeMinute_ {};
        // 呼入双方接听时长
        shared_ptr<string> ibBridgeTime_ {};
        // 呼入呼叫次数
        shared_ptr<string> ibCallingCount_ {};
        // 呼入总呼叫时长
        shared_ptr<string> ibCallingTime_ {};
        // 呼入咨询数
        shared_ptr<string> ibConsultCount_ {};
        // 客户挂机数
        shared_ptr<string> ibCustomerHangupCount_ {};
        // 呼叫保持次数
        shared_ptr<string> ibHoldCount_ {};
        // 呼入总保持时长
        shared_ptr<string> ibHoldTime_ {};
        // 呼入接听最大延迟时间
        shared_ptr<string> ibMaxAnswerDelayTime_ {};
        // 呼入最大通话时长
        shared_ptr<string> ibMaxBridgeTime_ {};
        // 呼入最大呼叫时长
        shared_ptr<string> ibMaxCallingTime_ {};
        // 呼入最大保持时长
        shared_ptr<string> ibMaxHoldTime_ {};
        // 呼入最大整理时长
        shared_ptr<string> ibMaxWrapupTime_ {};
        // 呼入接听最小延迟时间
        shared_ptr<string> ibMinAnswerDelayTime_ {};
        // 呼入最小通话时长
        shared_ptr<string> ibMinBridgeTime_ {};
        // 呼入最小呼叫时长
        shared_ptr<string> ibMinCallingTime_ {};
        // 呼入最小保持时长
        shared_ptr<string> ibMinHoldTime_ {};
        // 呼入最小整理时长
        shared_ptr<string> ibMinWrapupTime_ {};
        // 呼入监控强插数
        shared_ptr<string> ibMonitorBargeCount_ {};
        // 呼入强插时长
        shared_ptr<string> ibMonitorBargeDuration_ {};
        // 呼入监控强拆数
        shared_ptr<string> ibMonitorDisconnectCount_ {};
        // 呼入监控抢线数
        shared_ptr<string> ibMonitorPickupCount_ {};
        // 呼入抢线时长
        shared_ptr<string> ibMonitorPickupDuration_ {};
        // 呼入监控监听数
        shared_ptr<string> ibMonitorSpyCount_ {};
        // 呼入监听时长
        shared_ptr<string> ibMonitorSpyDuration_ {};
        // 呼入监控三方数
        shared_ptr<string> ibMonitorThreewayCount_ {};
        // 呼入监控耳语数
        shared_ptr<string> ibMonitorWhisperCount_ {};
        // 呼入耳语时长
        shared_ptr<string> ibMonitorWhisperDuration_ {};
        // 呼入接听总延迟时间
        shared_ptr<string> ibTotalAnswerDelayTime_ {};
        // 总呼入座席数
        shared_ptr<string> ibTotalCount_ {};
        // 呼入总分钟数
        shared_ptr<string> ibTotalMinute_ {};
        // 呼入总通话时长
        shared_ptr<string> ibTotalTime_ {};
        // 呼入转移数
        shared_ptr<string> ibTransferCount_ {};
        // 呼入座席未接听数
        shared_ptr<string> ibUnansweredCount_ {};
        // 座席来电接听数
        shared_ptr<string> ibUniqueAnsweredCount_ {};
        // 座席来电数
        shared_ptr<string> ibUniqueTotalCount_ {};
        // 座席来电未接听数
        shared_ptr<string> ibUniqueUnansweredCount_ {};
        // 呼入有效通话次数
        shared_ptr<string> ibValidCalls_ {};
        // 呼入有效通话时长
        shared_ptr<string> ibValidTotalBridgeTime_ {};
        // 呼入整理次数
        shared_ptr<string> ibWrapupCount_ {};
        // 呼入总整理时长
        shared_ptr<string> ibWrapupTime_ {};
        // id
        shared_ptr<string> id_ {};
        // 空闲次数
        shared_ptr<string> idleCount_ {};
        // 总空闲时长
        shared_ptr<string> idleTime_ {};
        // 预览外呼IVR转移座席接听数
        shared_ptr<string> ivrTransferBridgeCount_ {};
        // 预览外呼IVR转移双方接听时长
        shared_ptr<string> ivrTransferBridgeDuration_ {};
        // 预览外呼IVR转移座席数
        shared_ptr<string> ivrTransferCount_ {};
        // 总登录时长
        shared_ptr<string> loginTime_ {};
        // 最大空闲时长
        shared_ptr<string> maxIdleTime_ {};
        // 最大置忙时长
        shared_ptr<string> maxPauseTime_ {};
        // 最大休息时长
        shared_ptr<string> maxRestTime_ {};
        // 最小空闲时长
        shared_ptr<string> minIdleTime_ {};
        // 最小置忙时长
        shared_ptr<string> minPauseTime_ {};
        // 最小休息时长
        shared_ptr<string> minRestTime_ {};
        // 外呼平均通话时长
        shared_ptr<string> obAvgBridgeTime_ {};
        // 外呼平均呼叫时长
        shared_ptr<string> obAvgCallingTime_ {};
        // 外呼平均保持时长
        shared_ptr<string> obAvgHoldTime_ {};
        // 外呼平均整理时长
        shared_ptr<string> obAvgWrapupTime_ {};
        // 外呼通话次数
        shared_ptr<string> obBridgeCount_ {};
        // 外呼总通话时长
        shared_ptr<string> obBridgeTime_ {};
        // 外呼呼叫次数
        shared_ptr<string> obCallingCount_ {};
        // 外呼总呼叫时长
        shared_ptr<string> obCallingTime_ {};
        // 外呼保持次数
        shared_ptr<string> obHoldCount_ {};
        // 外呼总保持时长
        shared_ptr<string> obHoldTime_ {};
        // 外呼最大通话时长
        shared_ptr<string> obMaxBridgeTime_ {};
        // 外呼最大呼叫时长
        shared_ptr<string> obMaxCallingTime_ {};
        // 外呼最大保持时长
        shared_ptr<string> obMaxHoldTime_ {};
        // 外呼最大整理时长
        shared_ptr<string> obMaxWrapupTime_ {};
        // 外呼最小通话时长
        shared_ptr<string> obMinBridgeTime_ {};
        // 外呼最小呼叫时长
        shared_ptr<string> obMinCallingTime_ {};
        // 外呼最小保持时长
        shared_ptr<string> obMinHoldTime_ {};
        // 外呼最小整理时长
        shared_ptr<string> obMinWrapupTime_ {};
        // 外呼双方接听时长
        shared_ptr<string> obRealBridgeTime_ {};
        // 外呼整理次数
        shared_ptr<string> obWrapupCount_ {};
        // 外呼总整理时长
        shared_ptr<string> obWrapupTime_ {};
        // 置忙次数
        shared_ptr<string> pauseCount_ {};
        // 总置忙时长
        shared_ptr<string> pauseTime_ {};
        // 预测外呼座席接听通话总小时
        shared_ptr<string> predictObAgentAnsweredHour_ {};
        // 预测外呼座席接听通话总时长
        shared_ptr<int64_t> predictObAgentAnsweredTime_ {};
        // 预测外呼座席接听数
        shared_ptr<int64_t> predictObAnsweredCount_ {};
        // 预测外呼接听量分布
        shared_ptr<string> predictObAnsweredDurationArray_ {};
        // 预测外呼咨询数
        shared_ptr<string> predictObConsultCount_ {};
        // 预测外呼监控强插数
        shared_ptr<string> predictObMonitorBargeCount_ {};
        // 预测外呼强插时长
        shared_ptr<string> predictObMonitorBargeDuration_ {};
        // 预测外呼监控强拆数
        shared_ptr<string> predictObMonitorDisconnectCount_ {};
        // 预测外呼监控监听数
        shared_ptr<string> predictObMonitorSpyCount_ {};
        // 预测外呼监听时长
        shared_ptr<string> predictObMonitorSpyDuration_ {};
        // 预测外呼监控三方数
        shared_ptr<string> predictObMonitorThreewayCount_ {};
        // 预测外呼监控耳语数
        shared_ptr<string> predictObMonitorWhisperCount_ {};
        // 预测外呼耳语时长
        shared_ptr<string> predictObMonitorWhisperDuration_ {};
        // 预测外呼总数
        shared_ptr<int64_t> predictObTotalCount_ {};
        // 预测外呼转移数
        shared_ptr<string> predictObTransferCount_ {};
        // 预测外呼有效通话数
        shared_ptr<int64_t> predictObValidCalls_ {};
        // 预测外呼有效通话总小时
        shared_ptr<string> predictObValidTotalBridgeHour_ {};
        // 预测外呼有效通话时长
        shared_ptr<int64_t> predictObValidTotalBridgeTime_ {};
        // 预览外呼座席接听率
        shared_ptr<string> previewAgentAnswerdRate_ {};
        // 预览外呼客户接听率
        shared_ptr<string> previewCustomerAnswerdRate_ {};
        // 预览外呼座席接听数
        shared_ptr<string> previewObAgentAnsweredCount_ {};
        // 预览外呼座席接听时长
        shared_ptr<string> previewObAgentAnsweredTime_ {};
        // 预览外呼双方接听数
        shared_ptr<string> previewObAnsweredCount_ {};
        // 预览外呼接听量分布
        shared_ptr<vector<string>> previewObAnsweredDurationArray_ {};
        // 预览外呼接听量分布描述
        shared_ptr<vector<string>> previewObAnsweredDurationDscArray_ {};
        // 预览外呼咨询数
        shared_ptr<string> previewObConsultCount_ {};
        // 预览外呼客户接听时长
        shared_ptr<string> previewObCustomerAnsweredTime_ {};
        // 响铃数
        shared_ptr<string> previewObCustomerRingingCount_ {};
        // 响铃率
        shared_ptr<string> previewObCustomerRingingRate_ {};
        // 预览外呼监控强插数
        shared_ptr<string> previewObMonitorBargeCount_ {};
        // 预览外呼强插时长
        shared_ptr<string> previewObMonitorBargeDuration_ {};
        // 预览外呼监控强拆数
        shared_ptr<string> previewObMonitorDisconnectCount_ {};
        // 预览外呼监控监听数
        shared_ptr<string> previewObMonitorSpyCount_ {};
        // 预览外呼监听时长
        shared_ptr<string> previewObMonitorSpyDuration_ {};
        // 预览外呼监控三方数
        shared_ptr<string> previewObMonitorThreewayCount_ {};
        // 预览外呼监控耳语数
        shared_ptr<string> previewObMonitorWhisperCount_ {};
        // 预览外呼耳语时长
        shared_ptr<string> previewObMonitorWhisperDuration_ {};
        // 预览外呼双方接听通话小时
        shared_ptr<string> previewObTotalBridgeHour_ {};
        // 预览外呼双方接听通话时长
        shared_ptr<string> previewObTotalBridgeTime_ {};
        // 总预览外呼数
        shared_ptr<string> previewObTotalCount_ {};
        // 预览外呼被转接听数
        shared_ptr<string> previewObTransferBridgeCount_ {};
        // 预览外呼被转接听时长
        shared_ptr<string> previewObTransferBridgeDuration_ {};
        // 预览外呼被转数
        shared_ptr<string> previewObTransferCount_ {};
        // 预览外呼有效通话次数
        shared_ptr<string> previewObValidCalls_ {};
        // 预览外呼有效通话总小时
        shared_ptr<string> previewObValidTotalBridgeHour_ {};
        // 预览外呼有效总通话时长
        shared_ptr<string> previewObValidTotalBridgeTime_ {};
        // 队列名
        shared_ptr<string> queueName_ {};
        // 休息次数
        shared_ptr<string> restCount_ {};
        // 总休息时长
        shared_ptr<string> restTime_ {};
        // 行名称
        shared_ptr<string> rowName_ {};
        // 总双方接听时长
        shared_ptr<string> totalBridgeTime_ {};
        // webcall座席接听分钟数
        shared_ptr<string> webcallObAgentAnsweredTime_ {};
        // webcall双方接听数
        shared_ptr<string> webcallObAnsweredCount_ {};
        // webcall接听量分布
        shared_ptr<string> webcallObAnsweredDurationArray_ {};
        // webcall咨询数
        shared_ptr<string> webcallObConsultCount_ {};
        // webcall监控强插数
        shared_ptr<string> webcallObMonitorBargeCount_ {};
        // webcall强插时长
        shared_ptr<string> webcallObMonitorBargeDuration_ {};
        // webcall监控强拆数
        shared_ptr<string> webcallObMonitorDisconnectCount_ {};
        // webcall监控监听数
        shared_ptr<string> webcallObMonitorSpyCount_ {};
        // webcall监听时长
        shared_ptr<string> webcallObMonitorSpyDuration_ {};
        // webcall监控三方数
        shared_ptr<string> webcallObMonitorThreewayCount_ {};
        // webcall监控耳语数
        shared_ptr<string> webcallObMonitorWhisperCount_ {};
        // webcall耳语时长
        shared_ptr<string> webcallObMonitorWhisperDuration_ {};
        // 总webcall数
        shared_ptr<string> webcallObTotalCount_ {};
        // webcall转移数
        shared_ptr<string> webcallObTransferCount_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPageCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Data& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPageCount Field Functions 
      bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
      void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
      inline string getTotalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, "") };
      inline Data& setTotalPageCount(string totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> totalCount_ {};
      shared_ptr<string> totalPageCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudAgentWorkloadReportResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudAgentWorkloadReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudAgentWorkloadReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudAgentWorkloadReportResponseBody::Data) };
    inline CloudAgentWorkloadReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudAgentWorkloadReportResponseBody::Data) };
    inline CloudAgentWorkloadReportResponseBody& setData(const CloudAgentWorkloadReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudAgentWorkloadReportResponseBody& setData(CloudAgentWorkloadReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudAgentWorkloadReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudAgentWorkloadReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudAgentWorkloadReportResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
