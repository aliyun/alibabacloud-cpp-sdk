// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListOrganizationMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListOrganizationMembersResponseBody() = default ;
    ListOrganizationMembersResponseBody(const ListOrganizationMembersResponseBody &) = default ;
    ListOrganizationMembersResponseBody(ListOrganizationMembersResponseBody &&) = default ;
    ListOrganizationMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationMembersResponseBody() = default ;
    ListOrganizationMembersResponseBody& operator=(const ListOrganizationMembersResponseBody &) = default ;
    ListOrganizationMembersResponseBody& operator=(ListOrganizationMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountBizId, accountBizId_);
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(MaskedApiKey, maskedApiKey_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(PackLimitInfo, packLimitInfo_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(SeatId, seatId_);
        DARABONBA_PTR_TO_JSON(SpecType, specType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubscriptionInfo, subscriptionInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountBizId, accountBizId_);
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(MaskedApiKey, maskedApiKey_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(PackLimitInfo, packLimitInfo_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(SeatId, seatId_);
        DARABONBA_PTR_FROM_JSON(SpecType, specType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubscriptionInfo, subscriptionInfo_);
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
      class SubscriptionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EquityList, equityList_);
          DARABONBA_PTR_TO_JSON(InstanceCode, instanceCode_);
          DARABONBA_PTR_TO_JSON(PayMode, payMode_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(SpecType, specType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EquityList, equityList_);
          DARABONBA_PTR_FROM_JSON(InstanceCode, instanceCode_);
          DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(SpecType, specType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SubscriptionInfo() = default ;
        SubscriptionInfo(const SubscriptionInfo &) = default ;
        SubscriptionInfo(SubscriptionInfo &&) = default ;
        SubscriptionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionInfo() = default ;
        SubscriptionInfo& operator=(const SubscriptionInfo &) = default ;
        SubscriptionInfo& operator=(SubscriptionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EquityList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EquityList& obj) { 
            DARABONBA_PTR_TO_JSON(CycleEndTime, cycleEndTime_);
            DARABONBA_PTR_TO_JSON(CycleStartTime, cycleStartTime_);
            DARABONBA_PTR_TO_JSON(CycleSurplusValue, cycleSurplusValue_);
            DARABONBA_PTR_TO_JSON(CycleTotalValue, cycleTotalValue_);
            DARABONBA_PTR_TO_JSON(EquityType, equityType_);
            DARABONBA_PTR_TO_JSON(EquityUnit, equityUnit_);
          };
          friend void from_json(const Darabonba::Json& j, EquityList& obj) { 
            DARABONBA_PTR_FROM_JSON(CycleEndTime, cycleEndTime_);
            DARABONBA_PTR_FROM_JSON(CycleStartTime, cycleStartTime_);
            DARABONBA_PTR_FROM_JSON(CycleSurplusValue, cycleSurplusValue_);
            DARABONBA_PTR_FROM_JSON(CycleTotalValue, cycleTotalValue_);
            DARABONBA_PTR_FROM_JSON(EquityType, equityType_);
            DARABONBA_PTR_FROM_JSON(EquityUnit, equityUnit_);
          };
          EquityList() = default ;
          EquityList(const EquityList &) = default ;
          EquityList(EquityList &&) = default ;
          EquityList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EquityList() = default ;
          EquityList& operator=(const EquityList &) = default ;
          EquityList& operator=(EquityList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cycleEndTime_ == nullptr
        && this->cycleStartTime_ == nullptr && this->cycleSurplusValue_ == nullptr && this->cycleTotalValue_ == nullptr && this->equityType_ == nullptr && this->equityUnit_ == nullptr; };
          // cycleEndTime Field Functions 
          bool hasCycleEndTime() const { return this->cycleEndTime_ != nullptr;};
          void deleteCycleEndTime() { this->cycleEndTime_ = nullptr;};
          inline int64_t getCycleEndTime() const { DARABONBA_PTR_GET_DEFAULT(cycleEndTime_, 0L) };
          inline EquityList& setCycleEndTime(int64_t cycleEndTime) { DARABONBA_PTR_SET_VALUE(cycleEndTime_, cycleEndTime) };


          // cycleStartTime Field Functions 
          bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
          void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
          inline int64_t getCycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, 0L) };
          inline EquityList& setCycleStartTime(int64_t cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


          // cycleSurplusValue Field Functions 
          bool hasCycleSurplusValue() const { return this->cycleSurplusValue_ != nullptr;};
          void deleteCycleSurplusValue() { this->cycleSurplusValue_ = nullptr;};
          inline double getCycleSurplusValue() const { DARABONBA_PTR_GET_DEFAULT(cycleSurplusValue_, 0.0) };
          inline EquityList& setCycleSurplusValue(double cycleSurplusValue) { DARABONBA_PTR_SET_VALUE(cycleSurplusValue_, cycleSurplusValue) };


          // cycleTotalValue Field Functions 
          bool hasCycleTotalValue() const { return this->cycleTotalValue_ != nullptr;};
          void deleteCycleTotalValue() { this->cycleTotalValue_ = nullptr;};
          inline double getCycleTotalValue() const { DARABONBA_PTR_GET_DEFAULT(cycleTotalValue_, 0.0) };
          inline EquityList& setCycleTotalValue(double cycleTotalValue) { DARABONBA_PTR_SET_VALUE(cycleTotalValue_, cycleTotalValue) };


          // equityType Field Functions 
          bool hasEquityType() const { return this->equityType_ != nullptr;};
          void deleteEquityType() { this->equityType_ = nullptr;};
          inline string getEquityType() const { DARABONBA_PTR_GET_DEFAULT(equityType_, "") };
          inline EquityList& setEquityType(string equityType) { DARABONBA_PTR_SET_VALUE(equityType_, equityType) };


          // equityUnit Field Functions 
          bool hasEquityUnit() const { return this->equityUnit_ != nullptr;};
          void deleteEquityUnit() { this->equityUnit_ = nullptr;};
          inline string getEquityUnit() const { DARABONBA_PTR_GET_DEFAULT(equityUnit_, "") };
          inline EquityList& setEquityUnit(string equityUnit) { DARABONBA_PTR_SET_VALUE(equityUnit_, equityUnit) };


        protected:
          shared_ptr<int64_t> cycleEndTime_ {};
          shared_ptr<int64_t> cycleStartTime_ {};
          shared_ptr<double> cycleSurplusValue_ {};
          shared_ptr<double> cycleTotalValue_ {};
          shared_ptr<string> equityType_ {};
          shared_ptr<string> equityUnit_ {};
        };

        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->equityList_ == nullptr && this->instanceCode_ == nullptr && this->payMode_ == nullptr && this->productCode_ == nullptr && this->specType_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SubscriptionInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // equityList Field Functions 
        bool hasEquityList() const { return this->equityList_ != nullptr;};
        void deleteEquityList() { this->equityList_ = nullptr;};
        inline const vector<SubscriptionInfo::EquityList> & getEquityList() const { DARABONBA_PTR_GET_CONST(equityList_, vector<SubscriptionInfo::EquityList>) };
        inline vector<SubscriptionInfo::EquityList> getEquityList() { DARABONBA_PTR_GET(equityList_, vector<SubscriptionInfo::EquityList>) };
        inline SubscriptionInfo& setEquityList(const vector<SubscriptionInfo::EquityList> & equityList) { DARABONBA_PTR_SET_VALUE(equityList_, equityList) };
        inline SubscriptionInfo& setEquityList(vector<SubscriptionInfo::EquityList> && equityList) { DARABONBA_PTR_SET_RVALUE(equityList_, equityList) };


        // instanceCode Field Functions 
        bool hasInstanceCode() const { return this->instanceCode_ != nullptr;};
        void deleteInstanceCode() { this->instanceCode_ = nullptr;};
        inline string getInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(instanceCode_, "") };
        inline SubscriptionInfo& setInstanceCode(string instanceCode) { DARABONBA_PTR_SET_VALUE(instanceCode_, instanceCode) };


        // payMode Field Functions 
        bool hasPayMode() const { return this->payMode_ != nullptr;};
        void deletePayMode() { this->payMode_ = nullptr;};
        inline string getPayMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
        inline SubscriptionInfo& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline SubscriptionInfo& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // specType Field Functions 
        bool hasSpecType() const { return this->specType_ != nullptr;};
        void deleteSpecType() { this->specType_ = nullptr;};
        inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
        inline SubscriptionInfo& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SubscriptionInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SubscriptionInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<vector<SubscriptionInfo::EquityList>> equityList_ {};
        shared_ptr<string> instanceCode_ {};
        shared_ptr<string> payMode_ {};
        shared_ptr<string> productCode_ {};
        shared_ptr<string> specType_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> status_ {};
      };

      class PackLimitInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackLimitInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableLimit, availableLimit_);
          DARABONBA_PTR_TO_JSON(CycleEndTime, cycleEndTime_);
          DARABONBA_PTR_TO_JSON(CycleStartTime, cycleStartTime_);
          DARABONBA_PTR_TO_JSON(FrozenCredits, frozenCredits_);
          DARABONBA_PTR_TO_JSON(HasShareLimit, hasShareLimit_);
          DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_TO_JSON(LastConfirmedTime, lastConfirmedTime_);
          DARABONBA_PTR_TO_JSON(UpperLimit, upperLimit_);
          DARABONBA_PTR_TO_JSON(UsedCredits, usedCredits_);
        };
        friend void from_json(const Darabonba::Json& j, PackLimitInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableLimit, availableLimit_);
          DARABONBA_PTR_FROM_JSON(CycleEndTime, cycleEndTime_);
          DARABONBA_PTR_FROM_JSON(CycleStartTime, cycleStartTime_);
          DARABONBA_PTR_FROM_JSON(FrozenCredits, frozenCredits_);
          DARABONBA_PTR_FROM_JSON(HasShareLimit, hasShareLimit_);
          DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_FROM_JSON(LastConfirmedTime, lastConfirmedTime_);
          DARABONBA_PTR_FROM_JSON(UpperLimit, upperLimit_);
          DARABONBA_PTR_FROM_JSON(UsedCredits, usedCredits_);
        };
        PackLimitInfo() = default ;
        PackLimitInfo(const PackLimitInfo &) = default ;
        PackLimitInfo(PackLimitInfo &&) = default ;
        PackLimitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackLimitInfo() = default ;
        PackLimitInfo& operator=(const PackLimitInfo &) = default ;
        PackLimitInfo& operator=(PackLimitInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableLimit_ == nullptr
        && this->cycleEndTime_ == nullptr && this->cycleStartTime_ == nullptr && this->frozenCredits_ == nullptr && this->hasShareLimit_ == nullptr && this->isAvailable_ == nullptr
        && this->lastConfirmedTime_ == nullptr && this->upperLimit_ == nullptr && this->usedCredits_ == nullptr; };
        // availableLimit Field Functions 
        bool hasAvailableLimit() const { return this->availableLimit_ != nullptr;};
        void deleteAvailableLimit() { this->availableLimit_ = nullptr;};
        inline double getAvailableLimit() const { DARABONBA_PTR_GET_DEFAULT(availableLimit_, 0.0) };
        inline PackLimitInfo& setAvailableLimit(double availableLimit) { DARABONBA_PTR_SET_VALUE(availableLimit_, availableLimit) };


        // cycleEndTime Field Functions 
        bool hasCycleEndTime() const { return this->cycleEndTime_ != nullptr;};
        void deleteCycleEndTime() { this->cycleEndTime_ = nullptr;};
        inline int64_t getCycleEndTime() const { DARABONBA_PTR_GET_DEFAULT(cycleEndTime_, 0L) };
        inline PackLimitInfo& setCycleEndTime(int64_t cycleEndTime) { DARABONBA_PTR_SET_VALUE(cycleEndTime_, cycleEndTime) };


        // cycleStartTime Field Functions 
        bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
        void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
        inline int64_t getCycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, 0L) };
        inline PackLimitInfo& setCycleStartTime(int64_t cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


        // frozenCredits Field Functions 
        bool hasFrozenCredits() const { return this->frozenCredits_ != nullptr;};
        void deleteFrozenCredits() { this->frozenCredits_ = nullptr;};
        inline double getFrozenCredits() const { DARABONBA_PTR_GET_DEFAULT(frozenCredits_, 0.0) };
        inline PackLimitInfo& setFrozenCredits(double frozenCredits) { DARABONBA_PTR_SET_VALUE(frozenCredits_, frozenCredits) };


        // hasShareLimit Field Functions 
        bool hasHasShareLimit() const { return this->hasShareLimit_ != nullptr;};
        void deleteHasShareLimit() { this->hasShareLimit_ = nullptr;};
        inline bool getHasShareLimit() const { DARABONBA_PTR_GET_DEFAULT(hasShareLimit_, false) };
        inline PackLimitInfo& setHasShareLimit(bool hasShareLimit) { DARABONBA_PTR_SET_VALUE(hasShareLimit_, hasShareLimit) };


        // isAvailable Field Functions 
        bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
        void deleteIsAvailable() { this->isAvailable_ = nullptr;};
        inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
        inline PackLimitInfo& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


        // lastConfirmedTime Field Functions 
        bool hasLastConfirmedTime() const { return this->lastConfirmedTime_ != nullptr;};
        void deleteLastConfirmedTime() { this->lastConfirmedTime_ = nullptr;};
        inline int64_t getLastConfirmedTime() const { DARABONBA_PTR_GET_DEFAULT(lastConfirmedTime_, 0L) };
        inline PackLimitInfo& setLastConfirmedTime(int64_t lastConfirmedTime) { DARABONBA_PTR_SET_VALUE(lastConfirmedTime_, lastConfirmedTime) };


        // upperLimit Field Functions 
        bool hasUpperLimit() const { return this->upperLimit_ != nullptr;};
        void deleteUpperLimit() { this->upperLimit_ = nullptr;};
        inline double getUpperLimit() const { DARABONBA_PTR_GET_DEFAULT(upperLimit_, 0.0) };
        inline PackLimitInfo& setUpperLimit(double upperLimit) { DARABONBA_PTR_SET_VALUE(upperLimit_, upperLimit) };


        // usedCredits Field Functions 
        bool hasUsedCredits() const { return this->usedCredits_ != nullptr;};
        void deleteUsedCredits() { this->usedCredits_ = nullptr;};
        inline double getUsedCredits() const { DARABONBA_PTR_GET_DEFAULT(usedCredits_, 0.0) };
        inline PackLimitInfo& setUsedCredits(double usedCredits) { DARABONBA_PTR_SET_VALUE(usedCredits_, usedCredits) };


      protected:
        shared_ptr<double> availableLimit_ {};
        shared_ptr<int64_t> cycleEndTime_ {};
        shared_ptr<int64_t> cycleStartTime_ {};
        shared_ptr<double> frozenCredits_ {};
        shared_ptr<bool> hasShareLimit_ {};
        shared_ptr<bool> isAvailable_ {};
        shared_ptr<int64_t> lastConfirmedTime_ {};
        shared_ptr<double> upperLimit_ {};
        shared_ptr<double> usedCredits_ {};
      };

      virtual bool empty() const override { return this->accountBizId_ == nullptr
        && this->accountId_ == nullptr && this->accountName_ == nullptr && this->apiKeyId_ == nullptr && this->email_ == nullptr && this->gmtCreate_ == nullptr
        && this->maskedApiKey_ == nullptr && this->orgId_ == nullptr && this->packLimitInfo_ == nullptr && this->roles_ == nullptr && this->seatId_ == nullptr
        && this->specType_ == nullptr && this->status_ == nullptr && this->subscriptionInfo_ == nullptr; };
      // accountBizId Field Functions 
      bool hasAccountBizId() const { return this->accountBizId_ != nullptr;};
      void deleteAccountBizId() { this->accountBizId_ = nullptr;};
      inline string getAccountBizId() const { DARABONBA_PTR_GET_DEFAULT(accountBizId_, "") };
      inline Data& setAccountBizId(string accountBizId) { DARABONBA_PTR_SET_VALUE(accountBizId_, accountBizId) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
      inline Data& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // maskedApiKey Field Functions 
      bool hasMaskedApiKey() const { return this->maskedApiKey_ != nullptr;};
      void deleteMaskedApiKey() { this->maskedApiKey_ = nullptr;};
      inline string getMaskedApiKey() const { DARABONBA_PTR_GET_DEFAULT(maskedApiKey_, "") };
      inline Data& setMaskedApiKey(string maskedApiKey) { DARABONBA_PTR_SET_VALUE(maskedApiKey_, maskedApiKey) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Data& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // packLimitInfo Field Functions 
      bool hasPackLimitInfo() const { return this->packLimitInfo_ != nullptr;};
      void deletePackLimitInfo() { this->packLimitInfo_ = nullptr;};
      inline const Data::PackLimitInfo & getPackLimitInfo() const { DARABONBA_PTR_GET_CONST(packLimitInfo_, Data::PackLimitInfo) };
      inline Data::PackLimitInfo getPackLimitInfo() { DARABONBA_PTR_GET(packLimitInfo_, Data::PackLimitInfo) };
      inline Data& setPackLimitInfo(const Data::PackLimitInfo & packLimitInfo) { DARABONBA_PTR_SET_VALUE(packLimitInfo_, packLimitInfo) };
      inline Data& setPackLimitInfo(Data::PackLimitInfo && packLimitInfo) { DARABONBA_PTR_SET_RVALUE(packLimitInfo_, packLimitInfo) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline Data& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Data& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // seatId Field Functions 
      bool hasSeatId() const { return this->seatId_ != nullptr;};
      void deleteSeatId() { this->seatId_ = nullptr;};
      inline string getSeatId() const { DARABONBA_PTR_GET_DEFAULT(seatId_, "") };
      inline Data& setSeatId(string seatId) { DARABONBA_PTR_SET_VALUE(seatId_, seatId) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline Data& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subscriptionInfo Field Functions 
      bool hasSubscriptionInfo() const { return this->subscriptionInfo_ != nullptr;};
      void deleteSubscriptionInfo() { this->subscriptionInfo_ = nullptr;};
      inline const Data::SubscriptionInfo & getSubscriptionInfo() const { DARABONBA_PTR_GET_CONST(subscriptionInfo_, Data::SubscriptionInfo) };
      inline Data::SubscriptionInfo getSubscriptionInfo() { DARABONBA_PTR_GET(subscriptionInfo_, Data::SubscriptionInfo) };
      inline Data& setSubscriptionInfo(const Data::SubscriptionInfo & subscriptionInfo) { DARABONBA_PTR_SET_VALUE(subscriptionInfo_, subscriptionInfo) };
      inline Data& setSubscriptionInfo(Data::SubscriptionInfo && subscriptionInfo) { DARABONBA_PTR_SET_RVALUE(subscriptionInfo_, subscriptionInfo) };


    protected:
      // The member business ID.
      shared_ptr<string> accountBizId_ {};
      // The ID of the member accounts.
      shared_ptr<string> accountId_ {};
      // The name of the member accounts.
      shared_ptr<string> accountName_ {};
      // API Key ID
      shared_ptr<string> apiKeyId_ {};
      // The member email address.
      shared_ptr<string> email_ {};
      // The time when the member joined.
      shared_ptr<string> gmtCreate_ {};
      // The masked API key.
      shared_ptr<string> maskedApiKey_ {};
      // The organization ID.
      shared_ptr<string> orgId_ {};
      shared_ptr<Data::PackLimitInfo> packLimitInfo_ {};
      // The list of member roles.
      shared_ptr<vector<string>> roles_ {};
      // The seat resource allocate ID.
      shared_ptr<string> seatId_ {};
      // The seat specification type. Valid values:
      // - standard: Standard seat.
      // - pro: Pro seat.
      // - max: Max seat.
      shared_ptr<string> specType_ {};
      // The member status.
      shared_ptr<string> status_ {};
      shared_ptr<Data::SubscriptionInfo> subscriptionInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOrganizationMembersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOrganizationMembersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOrganizationMembersResponseBody::Data>) };
    inline vector<ListOrganizationMembersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOrganizationMembersResponseBody::Data>) };
    inline ListOrganizationMembersResponseBody& setData(const vector<ListOrganizationMembersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOrganizationMembersResponseBody& setData(vector<ListOrganizationMembersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOrganizationMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListOrganizationMembersResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrganizationMembersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOrganizationMembersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListOrganizationMembersResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The business data.
    shared_ptr<vector<ListOrganizationMembersResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
