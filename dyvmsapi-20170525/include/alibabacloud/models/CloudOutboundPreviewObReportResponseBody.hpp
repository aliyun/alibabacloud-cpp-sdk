// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDOUTBOUNDPREVIEWOBREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDOUTBOUNDPREVIEWOBREPORTRESPONSEBODY_HPP_
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
  class CloudOutboundPreviewObReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudOutboundPreviewObReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudOutboundPreviewObReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudOutboundPreviewObReportResponseBody() = default ;
    CloudOutboundPreviewObReportResponseBody(const CloudOutboundPreviewObReportResponseBody &) = default ;
    CloudOutboundPreviewObReportResponseBody(CloudOutboundPreviewObReportResponseBody &&) = default ;
    CloudOutboundPreviewObReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudOutboundPreviewObReportResponseBody() = default ;
    CloudOutboundPreviewObReportResponseBody& operator=(const CloudOutboundPreviewObReportResponseBody &) = default ;
    CloudOutboundPreviewObReportResponseBody& operator=(CloudOutboundPreviewObReportResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentAnsweredCount, agentAnsweredCount_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(AgentRate, agentRate_);
          DARABONBA_PTR_TO_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_TO_JSON(AxbBothAnsweredCount, axbBothAnsweredCount_);
          DARABONBA_PTR_TO_JSON(AxbBothAnsweredRate, axbBothAnsweredRate_);
          DARABONBA_PTR_TO_JSON(AxbBothAnsweredTime, axbBothAnsweredTime_);
          DARABONBA_PTR_TO_JSON(AxbObTotalCount, axbObTotalCount_);
          DARABONBA_PTR_TO_JSON(BothAnsweredCount, bothAnsweredCount_);
          DARABONBA_PTR_TO_JSON(BothAnsweredTime, bothAnsweredTime_);
          DARABONBA_PTR_TO_JSON(CallBridgedRate, callBridgedRate_);
          DARABONBA_PTR_TO_JSON(CallTotalCount, callTotalCount_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerAnsweredCount, customerAnsweredCount_);
          DARABONBA_PTR_TO_JSON(CustomerRate, customerRate_);
          DARABONBA_PTR_TO_JSON(DateTimeRange, dateTimeRange_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(InterceptionCount, interceptionCount_);
          DARABONBA_PTR_TO_JSON(InterceptionRate, interceptionRate_);
          DARABONBA_PTR_TO_JSON(LandlineBothAnsweredCount, landlineBothAnsweredCount_);
          DARABONBA_PTR_TO_JSON(LandlineBothAnsweredRate, landlineBothAnsweredRate_);
          DARABONBA_PTR_TO_JSON(LandlineBothAnsweredTime, landlineBothAnsweredTime_);
          DARABONBA_PTR_TO_JSON(LandlineObTotalCount, landlineObTotalCount_);
          DARABONBA_PTR_TO_JSON(MaxBridgeTime, maxBridgeTime_);
          DARABONBA_PTR_TO_JSON(MinBridgeTime, minBridgeTime_);
          DARABONBA_PTR_TO_JSON(TotalBridgeTime, totalBridgeTime_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(VadRate, vadRate_);
          DARABONBA_PTR_TO_JSON(ValidAvgBridgeTime, validAvgBridgeTime_);
          DARABONBA_PTR_TO_JSON(ValidCalls, validCalls_);
          DARABONBA_PTR_TO_JSON(ValidTotalBridgeTime, validTotalBridgeTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAnsweredCount, agentAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(AgentRate, agentRate_);
          DARABONBA_PTR_FROM_JSON(AvgBridgeTime, avgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(AxbBothAnsweredCount, axbBothAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(AxbBothAnsweredRate, axbBothAnsweredRate_);
          DARABONBA_PTR_FROM_JSON(AxbBothAnsweredTime, axbBothAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(AxbObTotalCount, axbObTotalCount_);
          DARABONBA_PTR_FROM_JSON(BothAnsweredCount, bothAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(BothAnsweredTime, bothAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(CallBridgedRate, callBridgedRate_);
          DARABONBA_PTR_FROM_JSON(CallTotalCount, callTotalCount_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerAnsweredCount, customerAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(CustomerRate, customerRate_);
          DARABONBA_PTR_FROM_JSON(DateTimeRange, dateTimeRange_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(InterceptionCount, interceptionCount_);
          DARABONBA_PTR_FROM_JSON(InterceptionRate, interceptionRate_);
          DARABONBA_PTR_FROM_JSON(LandlineBothAnsweredCount, landlineBothAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(LandlineBothAnsweredRate, landlineBothAnsweredRate_);
          DARABONBA_PTR_FROM_JSON(LandlineBothAnsweredTime, landlineBothAnsweredTime_);
          DARABONBA_PTR_FROM_JSON(LandlineObTotalCount, landlineObTotalCount_);
          DARABONBA_PTR_FROM_JSON(MaxBridgeTime, maxBridgeTime_);
          DARABONBA_PTR_FROM_JSON(MinBridgeTime, minBridgeTime_);
          DARABONBA_PTR_FROM_JSON(TotalBridgeTime, totalBridgeTime_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(VadRate, vadRate_);
          DARABONBA_PTR_FROM_JSON(ValidAvgBridgeTime, validAvgBridgeTime_);
          DARABONBA_PTR_FROM_JSON(ValidCalls, validCalls_);
          DARABONBA_PTR_FROM_JSON(ValidTotalBridgeTime, validTotalBridgeTime_);
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
        virtual bool empty() const override { return this->agentAnsweredCount_ == nullptr
        && this->agentName_ == nullptr && this->agentRate_ == nullptr && this->avgBridgeTime_ == nullptr && this->axbBothAnsweredCount_ == nullptr && this->axbBothAnsweredRate_ == nullptr
        && this->axbBothAnsweredTime_ == nullptr && this->axbObTotalCount_ == nullptr && this->bothAnsweredCount_ == nullptr && this->bothAnsweredTime_ == nullptr && this->callBridgedRate_ == nullptr
        && this->callTotalCount_ == nullptr && this->cno_ == nullptr && this->customerAnsweredCount_ == nullptr && this->customerRate_ == nullptr && this->dateTimeRange_ == nullptr
        && this->enterpriseId_ == nullptr && this->interceptionCount_ == nullptr && this->interceptionRate_ == nullptr && this->landlineBothAnsweredCount_ == nullptr && this->landlineBothAnsweredRate_ == nullptr
        && this->landlineBothAnsweredTime_ == nullptr && this->landlineObTotalCount_ == nullptr && this->maxBridgeTime_ == nullptr && this->minBridgeTime_ == nullptr && this->totalBridgeTime_ == nullptr
        && this->totalCount_ == nullptr && this->vadRate_ == nullptr && this->validAvgBridgeTime_ == nullptr && this->validCalls_ == nullptr && this->validTotalBridgeTime_ == nullptr; };
        // agentAnsweredCount Field Functions 
        bool hasAgentAnsweredCount() const { return this->agentAnsweredCount_ != nullptr;};
        void deleteAgentAnsweredCount() { this->agentAnsweredCount_ = nullptr;};
        inline string getAgentAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(agentAnsweredCount_, "") };
        inline List& setAgentAnsweredCount(string agentAnsweredCount) { DARABONBA_PTR_SET_VALUE(agentAnsweredCount_, agentAnsweredCount) };


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


        // avgBridgeTime Field Functions 
        bool hasAvgBridgeTime() const { return this->avgBridgeTime_ != nullptr;};
        void deleteAvgBridgeTime() { this->avgBridgeTime_ = nullptr;};
        inline string getAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(avgBridgeTime_, "") };
        inline List& setAvgBridgeTime(string avgBridgeTime) { DARABONBA_PTR_SET_VALUE(avgBridgeTime_, avgBridgeTime) };


        // axbBothAnsweredCount Field Functions 
        bool hasAxbBothAnsweredCount() const { return this->axbBothAnsweredCount_ != nullptr;};
        void deleteAxbBothAnsweredCount() { this->axbBothAnsweredCount_ = nullptr;};
        inline string getAxbBothAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(axbBothAnsweredCount_, "") };
        inline List& setAxbBothAnsweredCount(string axbBothAnsweredCount) { DARABONBA_PTR_SET_VALUE(axbBothAnsweredCount_, axbBothAnsweredCount) };


        // axbBothAnsweredRate Field Functions 
        bool hasAxbBothAnsweredRate() const { return this->axbBothAnsweredRate_ != nullptr;};
        void deleteAxbBothAnsweredRate() { this->axbBothAnsweredRate_ = nullptr;};
        inline string getAxbBothAnsweredRate() const { DARABONBA_PTR_GET_DEFAULT(axbBothAnsweredRate_, "") };
        inline List& setAxbBothAnsweredRate(string axbBothAnsweredRate) { DARABONBA_PTR_SET_VALUE(axbBothAnsweredRate_, axbBothAnsweredRate) };


        // axbBothAnsweredTime Field Functions 
        bool hasAxbBothAnsweredTime() const { return this->axbBothAnsweredTime_ != nullptr;};
        void deleteAxbBothAnsweredTime() { this->axbBothAnsweredTime_ = nullptr;};
        inline string getAxbBothAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(axbBothAnsweredTime_, "") };
        inline List& setAxbBothAnsweredTime(string axbBothAnsweredTime) { DARABONBA_PTR_SET_VALUE(axbBothAnsweredTime_, axbBothAnsweredTime) };


        // axbObTotalCount Field Functions 
        bool hasAxbObTotalCount() const { return this->axbObTotalCount_ != nullptr;};
        void deleteAxbObTotalCount() { this->axbObTotalCount_ = nullptr;};
        inline string getAxbObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(axbObTotalCount_, "") };
        inline List& setAxbObTotalCount(string axbObTotalCount) { DARABONBA_PTR_SET_VALUE(axbObTotalCount_, axbObTotalCount) };


        // bothAnsweredCount Field Functions 
        bool hasBothAnsweredCount() const { return this->bothAnsweredCount_ != nullptr;};
        void deleteBothAnsweredCount() { this->bothAnsweredCount_ = nullptr;};
        inline string getBothAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(bothAnsweredCount_, "") };
        inline List& setBothAnsweredCount(string bothAnsweredCount) { DARABONBA_PTR_SET_VALUE(bothAnsweredCount_, bothAnsweredCount) };


        // bothAnsweredTime Field Functions 
        bool hasBothAnsweredTime() const { return this->bothAnsweredTime_ != nullptr;};
        void deleteBothAnsweredTime() { this->bothAnsweredTime_ = nullptr;};
        inline string getBothAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(bothAnsweredTime_, "") };
        inline List& setBothAnsweredTime(string bothAnsweredTime) { DARABONBA_PTR_SET_VALUE(bothAnsweredTime_, bothAnsweredTime) };


        // callBridgedRate Field Functions 
        bool hasCallBridgedRate() const { return this->callBridgedRate_ != nullptr;};
        void deleteCallBridgedRate() { this->callBridgedRate_ = nullptr;};
        inline string getCallBridgedRate() const { DARABONBA_PTR_GET_DEFAULT(callBridgedRate_, "") };
        inline List& setCallBridgedRate(string callBridgedRate) { DARABONBA_PTR_SET_VALUE(callBridgedRate_, callBridgedRate) };


        // callTotalCount Field Functions 
        bool hasCallTotalCount() const { return this->callTotalCount_ != nullptr;};
        void deleteCallTotalCount() { this->callTotalCount_ = nullptr;};
        inline string getCallTotalCount() const { DARABONBA_PTR_GET_DEFAULT(callTotalCount_, "") };
        inline List& setCallTotalCount(string callTotalCount) { DARABONBA_PTR_SET_VALUE(callTotalCount_, callTotalCount) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline List& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // customerAnsweredCount Field Functions 
        bool hasCustomerAnsweredCount() const { return this->customerAnsweredCount_ != nullptr;};
        void deleteCustomerAnsweredCount() { this->customerAnsweredCount_ = nullptr;};
        inline string getCustomerAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(customerAnsweredCount_, "") };
        inline List& setCustomerAnsweredCount(string customerAnsweredCount) { DARABONBA_PTR_SET_VALUE(customerAnsweredCount_, customerAnsweredCount) };


        // customerRate Field Functions 
        bool hasCustomerRate() const { return this->customerRate_ != nullptr;};
        void deleteCustomerRate() { this->customerRate_ = nullptr;};
        inline string getCustomerRate() const { DARABONBA_PTR_GET_DEFAULT(customerRate_, "") };
        inline List& setCustomerRate(string customerRate) { DARABONBA_PTR_SET_VALUE(customerRate_, customerRate) };


        // dateTimeRange Field Functions 
        bool hasDateTimeRange() const { return this->dateTimeRange_ != nullptr;};
        void deleteDateTimeRange() { this->dateTimeRange_ = nullptr;};
        inline string getDateTimeRange() const { DARABONBA_PTR_GET_DEFAULT(dateTimeRange_, "") };
        inline List& setDateTimeRange(string dateTimeRange) { DARABONBA_PTR_SET_VALUE(dateTimeRange_, dateTimeRange) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline List& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // interceptionCount Field Functions 
        bool hasInterceptionCount() const { return this->interceptionCount_ != nullptr;};
        void deleteInterceptionCount() { this->interceptionCount_ = nullptr;};
        inline string getInterceptionCount() const { DARABONBA_PTR_GET_DEFAULT(interceptionCount_, "") };
        inline List& setInterceptionCount(string interceptionCount) { DARABONBA_PTR_SET_VALUE(interceptionCount_, interceptionCount) };


        // interceptionRate Field Functions 
        bool hasInterceptionRate() const { return this->interceptionRate_ != nullptr;};
        void deleteInterceptionRate() { this->interceptionRate_ = nullptr;};
        inline string getInterceptionRate() const { DARABONBA_PTR_GET_DEFAULT(interceptionRate_, "") };
        inline List& setInterceptionRate(string interceptionRate) { DARABONBA_PTR_SET_VALUE(interceptionRate_, interceptionRate) };


        // landlineBothAnsweredCount Field Functions 
        bool hasLandlineBothAnsweredCount() const { return this->landlineBothAnsweredCount_ != nullptr;};
        void deleteLandlineBothAnsweredCount() { this->landlineBothAnsweredCount_ = nullptr;};
        inline string getLandlineBothAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(landlineBothAnsweredCount_, "") };
        inline List& setLandlineBothAnsweredCount(string landlineBothAnsweredCount) { DARABONBA_PTR_SET_VALUE(landlineBothAnsweredCount_, landlineBothAnsweredCount) };


        // landlineBothAnsweredRate Field Functions 
        bool hasLandlineBothAnsweredRate() const { return this->landlineBothAnsweredRate_ != nullptr;};
        void deleteLandlineBothAnsweredRate() { this->landlineBothAnsweredRate_ = nullptr;};
        inline string getLandlineBothAnsweredRate() const { DARABONBA_PTR_GET_DEFAULT(landlineBothAnsweredRate_, "") };
        inline List& setLandlineBothAnsweredRate(string landlineBothAnsweredRate) { DARABONBA_PTR_SET_VALUE(landlineBothAnsweredRate_, landlineBothAnsweredRate) };


        // landlineBothAnsweredTime Field Functions 
        bool hasLandlineBothAnsweredTime() const { return this->landlineBothAnsweredTime_ != nullptr;};
        void deleteLandlineBothAnsweredTime() { this->landlineBothAnsweredTime_ = nullptr;};
        inline string getLandlineBothAnsweredTime() const { DARABONBA_PTR_GET_DEFAULT(landlineBothAnsweredTime_, "") };
        inline List& setLandlineBothAnsweredTime(string landlineBothAnsweredTime) { DARABONBA_PTR_SET_VALUE(landlineBothAnsweredTime_, landlineBothAnsweredTime) };


        // landlineObTotalCount Field Functions 
        bool hasLandlineObTotalCount() const { return this->landlineObTotalCount_ != nullptr;};
        void deleteLandlineObTotalCount() { this->landlineObTotalCount_ = nullptr;};
        inline string getLandlineObTotalCount() const { DARABONBA_PTR_GET_DEFAULT(landlineObTotalCount_, "") };
        inline List& setLandlineObTotalCount(string landlineObTotalCount) { DARABONBA_PTR_SET_VALUE(landlineObTotalCount_, landlineObTotalCount) };


        // maxBridgeTime Field Functions 
        bool hasMaxBridgeTime() const { return this->maxBridgeTime_ != nullptr;};
        void deleteMaxBridgeTime() { this->maxBridgeTime_ = nullptr;};
        inline string getMaxBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(maxBridgeTime_, "") };
        inline List& setMaxBridgeTime(string maxBridgeTime) { DARABONBA_PTR_SET_VALUE(maxBridgeTime_, maxBridgeTime) };


        // minBridgeTime Field Functions 
        bool hasMinBridgeTime() const { return this->minBridgeTime_ != nullptr;};
        void deleteMinBridgeTime() { this->minBridgeTime_ = nullptr;};
        inline string getMinBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(minBridgeTime_, "") };
        inline List& setMinBridgeTime(string minBridgeTime) { DARABONBA_PTR_SET_VALUE(minBridgeTime_, minBridgeTime) };


        // totalBridgeTime Field Functions 
        bool hasTotalBridgeTime() const { return this->totalBridgeTime_ != nullptr;};
        void deleteTotalBridgeTime() { this->totalBridgeTime_ = nullptr;};
        inline string getTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(totalBridgeTime_, "") };
        inline List& setTotalBridgeTime(string totalBridgeTime) { DARABONBA_PTR_SET_VALUE(totalBridgeTime_, totalBridgeTime) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
        inline List& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // vadRate Field Functions 
        bool hasVadRate() const { return this->vadRate_ != nullptr;};
        void deleteVadRate() { this->vadRate_ = nullptr;};
        inline string getVadRate() const { DARABONBA_PTR_GET_DEFAULT(vadRate_, "") };
        inline List& setVadRate(string vadRate) { DARABONBA_PTR_SET_VALUE(vadRate_, vadRate) };


        // validAvgBridgeTime Field Functions 
        bool hasValidAvgBridgeTime() const { return this->validAvgBridgeTime_ != nullptr;};
        void deleteValidAvgBridgeTime() { this->validAvgBridgeTime_ = nullptr;};
        inline string getValidAvgBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(validAvgBridgeTime_, "") };
        inline List& setValidAvgBridgeTime(string validAvgBridgeTime) { DARABONBA_PTR_SET_VALUE(validAvgBridgeTime_, validAvgBridgeTime) };


        // validCalls Field Functions 
        bool hasValidCalls() const { return this->validCalls_ != nullptr;};
        void deleteValidCalls() { this->validCalls_ = nullptr;};
        inline string getValidCalls() const { DARABONBA_PTR_GET_DEFAULT(validCalls_, "") };
        inline List& setValidCalls(string validCalls) { DARABONBA_PTR_SET_VALUE(validCalls_, validCalls) };


        // validTotalBridgeTime Field Functions 
        bool hasValidTotalBridgeTime() const { return this->validTotalBridgeTime_ != nullptr;};
        void deleteValidTotalBridgeTime() { this->validTotalBridgeTime_ = nullptr;};
        inline string getValidTotalBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(validTotalBridgeTime_, "") };
        inline List& setValidTotalBridgeTime(string validTotalBridgeTime) { DARABONBA_PTR_SET_VALUE(validTotalBridgeTime_, validTotalBridgeTime) };


      protected:
        // 座席接听数
        shared_ptr<string> agentAnsweredCount_ {};
        // 座席姓名
        shared_ptr<string> agentName_ {};
        // 座席接听率
        shared_ptr<string> agentRate_ {};
        // 平均通话时长
        shared_ptr<string> avgBridgeTime_ {};
        // AXB双方接听数
        shared_ptr<string> axbBothAnsweredCount_ {};
        // AXB双方接听率 = AXB双方接听数 / AXB外呼总数
        shared_ptr<string> axbBothAnsweredRate_ {};
        // AXB外呼双方接听分钟数
        shared_ptr<string> axbBothAnsweredTime_ {};
        // AXB外呼总数
        shared_ptr<string> axbObTotalCount_ {};
        // 双方接听数
        shared_ptr<string> bothAnsweredCount_ {};
        // 双方接听时长
        shared_ptr<string> bothAnsweredTime_ {};
        // 呼叫接通率
        shared_ptr<string> callBridgedRate_ {};
        // 发起呼叫次数
        shared_ptr<string> callTotalCount_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 客户接听数
        shared_ptr<string> customerAnsweredCount_ {};
        // 客户接听率
        shared_ptr<string> customerRate_ {};
        // 统计周期
        shared_ptr<string> dateTimeRange_ {};
        // 企业Id
        shared_ptr<string> enterpriseId_ {};
        // 拦截次数
        shared_ptr<string> interceptionCount_ {};
        // 拦截率
        shared_ptr<string> interceptionRate_ {};
        // 固话双方接听数
        shared_ptr<string> landlineBothAnsweredCount_ {};
        // 固话双方接听率 = 固话双方接听数 / 固话外呼总数
        shared_ptr<string> landlineBothAnsweredRate_ {};
        // 固话双方接听分钟数
        shared_ptr<string> landlineBothAnsweredTime_ {};
        // 固话外呼总数
        shared_ptr<string> landlineObTotalCount_ {};
        // 最长通话时长
        shared_ptr<string> maxBridgeTime_ {};
        // 最短通话时长
        shared_ptr<string> minBridgeTime_ {};
        // 总通话时长
        shared_ptr<string> totalBridgeTime_ {};
        // 外呼总数
        shared_ptr<string> totalCount_ {};
        // 通话占比
        shared_ptr<string> vadRate_ {};
        // 有效通话平均通话时长
        shared_ptr<string> validAvgBridgeTime_ {};
        // 有效通话次数
        shared_ptr<string> validCalls_ {};
        // 有效通话总通话时长
        shared_ptr<string> validTotalBridgeTime_ {};
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
    inline CloudOutboundPreviewObReportResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudOutboundPreviewObReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudOutboundPreviewObReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudOutboundPreviewObReportResponseBody::Data) };
    inline CloudOutboundPreviewObReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudOutboundPreviewObReportResponseBody::Data) };
    inline CloudOutboundPreviewObReportResponseBody& setData(const CloudOutboundPreviewObReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudOutboundPreviewObReportResponseBody& setData(CloudOutboundPreviewObReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudOutboundPreviewObReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudOutboundPreviewObReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudOutboundPreviewObReportResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
