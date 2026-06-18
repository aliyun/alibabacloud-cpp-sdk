// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENEWALRATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRENEWALRATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetRenewalRateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenewalRateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenewalRateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRenewalRateListResponseBody() = default ;
    GetRenewalRateListResponseBody(const GetRenewalRateListResponseBody &) = default ;
    GetRenewalRateListResponseBody(GetRenewalRateListResponseBody &&) = default ;
    GetRenewalRateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenewalRateListResponseBody() = default ;
    GetRenewalRateListResponseBody& operator=(const GetRenewalRateListResponseBody &) = default ;
    GetRenewalRateListResponseBody& operator=(GetRenewalRateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerAdjustedRenewalAmountDue, customerAdjustedRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(CustomerOtherBillAmount, customerOtherBillAmount_);
        DARABONBA_PTR_TO_JSON(FinalCustomerRenewalAmountDue, finalCustomerRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(FinalCustomerRenewalRate, finalCustomerRenewalRate_);
        DARABONBA_PTR_TO_JSON(FinalCustomerRenewedAmount, finalCustomerRenewedAmount_);
        DARABONBA_PTR_TO_JSON(FinalOtherBillAmount, finalOtherBillAmount_);
        DARABONBA_PTR_TO_JSON(FinalRenewalAmountDue, finalRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(FinalRenewalRate, finalRenewalRate_);
        DARABONBA_PTR_TO_JSON(FinalRenewedAmount, finalRenewedAmount_);
        DARABONBA_PTR_TO_JSON(FinalSubPartnerRenewalAmountDue, finalSubPartnerRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(FinalSubPartnerRenewalRate, finalSubPartnerRenewalRate_);
        DARABONBA_PTR_TO_JSON(FinalSubPartnerRenewedAmount, finalSubPartnerRenewedAmount_);
        DARABONBA_PTR_TO_JSON(FiscalYearAndQuarter, fiscalYearAndQuarter_);
        DARABONBA_PTR_TO_JSON(MasterPid, masterPid_);
        DARABONBA_PTR_TO_JSON(MasterPidName, masterPidName_);
        DARABONBA_PTR_TO_JSON(SpecialCustomerRenewRatio, specialCustomerRenewRatio_);
        DARABONBA_PTR_TO_JSON(SpecialCustomerRenewalAmountDue, specialCustomerRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(SpecialCustomerRenewedAmount, specialCustomerRenewedAmount_);
        DARABONBA_PTR_TO_JSON(SpecialFinalRenewRatio, specialFinalRenewRatio_);
        DARABONBA_PTR_TO_JSON(SpecialFinalRenewalAmountDue, specialFinalRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(SpecialFinalRenewedAmount, specialFinalRenewedAmount_);
        DARABONBA_PTR_TO_JSON(SpecialSubPartnerRenewRatio, specialSubPartnerRenewRatio_);
        DARABONBA_PTR_TO_JSON(SpecialSubPartnerRenewalAmountDue, specialSubPartnerRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(SpecialSubPartnerRenewedAmount, specialSubPartnerRenewedAmount_);
        DARABONBA_PTR_TO_JSON(SubPartnerAdjustedRenewalAmountDue, subPartnerAdjustedRenewalAmountDue_);
        DARABONBA_PTR_TO_JSON(SubPartnerOtherBillAmount, subPartnerOtherBillAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerAdjustedRenewalAmountDue, customerAdjustedRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(CustomerOtherBillAmount, customerOtherBillAmount_);
        DARABONBA_PTR_FROM_JSON(FinalCustomerRenewalAmountDue, finalCustomerRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(FinalCustomerRenewalRate, finalCustomerRenewalRate_);
        DARABONBA_PTR_FROM_JSON(FinalCustomerRenewedAmount, finalCustomerRenewedAmount_);
        DARABONBA_PTR_FROM_JSON(FinalOtherBillAmount, finalOtherBillAmount_);
        DARABONBA_PTR_FROM_JSON(FinalRenewalAmountDue, finalRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(FinalRenewalRate, finalRenewalRate_);
        DARABONBA_PTR_FROM_JSON(FinalRenewedAmount, finalRenewedAmount_);
        DARABONBA_PTR_FROM_JSON(FinalSubPartnerRenewalAmountDue, finalSubPartnerRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(FinalSubPartnerRenewalRate, finalSubPartnerRenewalRate_);
        DARABONBA_PTR_FROM_JSON(FinalSubPartnerRenewedAmount, finalSubPartnerRenewedAmount_);
        DARABONBA_PTR_FROM_JSON(FiscalYearAndQuarter, fiscalYearAndQuarter_);
        DARABONBA_PTR_FROM_JSON(MasterPid, masterPid_);
        DARABONBA_PTR_FROM_JSON(MasterPidName, masterPidName_);
        DARABONBA_PTR_FROM_JSON(SpecialCustomerRenewRatio, specialCustomerRenewRatio_);
        DARABONBA_PTR_FROM_JSON(SpecialCustomerRenewalAmountDue, specialCustomerRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(SpecialCustomerRenewedAmount, specialCustomerRenewedAmount_);
        DARABONBA_PTR_FROM_JSON(SpecialFinalRenewRatio, specialFinalRenewRatio_);
        DARABONBA_PTR_FROM_JSON(SpecialFinalRenewalAmountDue, specialFinalRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(SpecialFinalRenewedAmount, specialFinalRenewedAmount_);
        DARABONBA_PTR_FROM_JSON(SpecialSubPartnerRenewRatio, specialSubPartnerRenewRatio_);
        DARABONBA_PTR_FROM_JSON(SpecialSubPartnerRenewalAmountDue, specialSubPartnerRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(SpecialSubPartnerRenewedAmount, specialSubPartnerRenewedAmount_);
        DARABONBA_PTR_FROM_JSON(SubPartnerAdjustedRenewalAmountDue, subPartnerAdjustedRenewalAmountDue_);
        DARABONBA_PTR_FROM_JSON(SubPartnerOtherBillAmount, subPartnerOtherBillAmount_);
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
      virtual bool empty() const override { return this->customerAdjustedRenewalAmountDue_ == nullptr
        && this->customerOtherBillAmount_ == nullptr && this->finalCustomerRenewalAmountDue_ == nullptr && this->finalCustomerRenewalRate_ == nullptr && this->finalCustomerRenewedAmount_ == nullptr && this->finalOtherBillAmount_ == nullptr
        && this->finalRenewalAmountDue_ == nullptr && this->finalRenewalRate_ == nullptr && this->finalRenewedAmount_ == nullptr && this->finalSubPartnerRenewalAmountDue_ == nullptr && this->finalSubPartnerRenewalRate_ == nullptr
        && this->finalSubPartnerRenewedAmount_ == nullptr && this->fiscalYearAndQuarter_ == nullptr && this->masterPid_ == nullptr && this->masterPidName_ == nullptr && this->specialCustomerRenewRatio_ == nullptr
        && this->specialCustomerRenewalAmountDue_ == nullptr && this->specialCustomerRenewedAmount_ == nullptr && this->specialFinalRenewRatio_ == nullptr && this->specialFinalRenewalAmountDue_ == nullptr && this->specialFinalRenewedAmount_ == nullptr
        && this->specialSubPartnerRenewRatio_ == nullptr && this->specialSubPartnerRenewalAmountDue_ == nullptr && this->specialSubPartnerRenewedAmount_ == nullptr && this->subPartnerAdjustedRenewalAmountDue_ == nullptr && this->subPartnerOtherBillAmount_ == nullptr; };
      // customerAdjustedRenewalAmountDue Field Functions 
      bool hasCustomerAdjustedRenewalAmountDue() const { return this->customerAdjustedRenewalAmountDue_ != nullptr;};
      void deleteCustomerAdjustedRenewalAmountDue() { this->customerAdjustedRenewalAmountDue_ = nullptr;};
      inline double getCustomerAdjustedRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(customerAdjustedRenewalAmountDue_, 0.0) };
      inline Data& setCustomerAdjustedRenewalAmountDue(double customerAdjustedRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(customerAdjustedRenewalAmountDue_, customerAdjustedRenewalAmountDue) };


      // customerOtherBillAmount Field Functions 
      bool hasCustomerOtherBillAmount() const { return this->customerOtherBillAmount_ != nullptr;};
      void deleteCustomerOtherBillAmount() { this->customerOtherBillAmount_ = nullptr;};
      inline double getCustomerOtherBillAmount() const { DARABONBA_PTR_GET_DEFAULT(customerOtherBillAmount_, 0.0) };
      inline Data& setCustomerOtherBillAmount(double customerOtherBillAmount) { DARABONBA_PTR_SET_VALUE(customerOtherBillAmount_, customerOtherBillAmount) };


      // finalCustomerRenewalAmountDue Field Functions 
      bool hasFinalCustomerRenewalAmountDue() const { return this->finalCustomerRenewalAmountDue_ != nullptr;};
      void deleteFinalCustomerRenewalAmountDue() { this->finalCustomerRenewalAmountDue_ = nullptr;};
      inline double getFinalCustomerRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(finalCustomerRenewalAmountDue_, 0.0) };
      inline Data& setFinalCustomerRenewalAmountDue(double finalCustomerRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(finalCustomerRenewalAmountDue_, finalCustomerRenewalAmountDue) };


      // finalCustomerRenewalRate Field Functions 
      bool hasFinalCustomerRenewalRate() const { return this->finalCustomerRenewalRate_ != nullptr;};
      void deleteFinalCustomerRenewalRate() { this->finalCustomerRenewalRate_ = nullptr;};
      inline double getFinalCustomerRenewalRate() const { DARABONBA_PTR_GET_DEFAULT(finalCustomerRenewalRate_, 0.0) };
      inline Data& setFinalCustomerRenewalRate(double finalCustomerRenewalRate) { DARABONBA_PTR_SET_VALUE(finalCustomerRenewalRate_, finalCustomerRenewalRate) };


      // finalCustomerRenewedAmount Field Functions 
      bool hasFinalCustomerRenewedAmount() const { return this->finalCustomerRenewedAmount_ != nullptr;};
      void deleteFinalCustomerRenewedAmount() { this->finalCustomerRenewedAmount_ = nullptr;};
      inline double getFinalCustomerRenewedAmount() const { DARABONBA_PTR_GET_DEFAULT(finalCustomerRenewedAmount_, 0.0) };
      inline Data& setFinalCustomerRenewedAmount(double finalCustomerRenewedAmount) { DARABONBA_PTR_SET_VALUE(finalCustomerRenewedAmount_, finalCustomerRenewedAmount) };


      // finalOtherBillAmount Field Functions 
      bool hasFinalOtherBillAmount() const { return this->finalOtherBillAmount_ != nullptr;};
      void deleteFinalOtherBillAmount() { this->finalOtherBillAmount_ = nullptr;};
      inline double getFinalOtherBillAmount() const { DARABONBA_PTR_GET_DEFAULT(finalOtherBillAmount_, 0.0) };
      inline Data& setFinalOtherBillAmount(double finalOtherBillAmount) { DARABONBA_PTR_SET_VALUE(finalOtherBillAmount_, finalOtherBillAmount) };


      // finalRenewalAmountDue Field Functions 
      bool hasFinalRenewalAmountDue() const { return this->finalRenewalAmountDue_ != nullptr;};
      void deleteFinalRenewalAmountDue() { this->finalRenewalAmountDue_ = nullptr;};
      inline double getFinalRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(finalRenewalAmountDue_, 0.0) };
      inline Data& setFinalRenewalAmountDue(double finalRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(finalRenewalAmountDue_, finalRenewalAmountDue) };


      // finalRenewalRate Field Functions 
      bool hasFinalRenewalRate() const { return this->finalRenewalRate_ != nullptr;};
      void deleteFinalRenewalRate() { this->finalRenewalRate_ = nullptr;};
      inline double getFinalRenewalRate() const { DARABONBA_PTR_GET_DEFAULT(finalRenewalRate_, 0.0) };
      inline Data& setFinalRenewalRate(double finalRenewalRate) { DARABONBA_PTR_SET_VALUE(finalRenewalRate_, finalRenewalRate) };


      // finalRenewedAmount Field Functions 
      bool hasFinalRenewedAmount() const { return this->finalRenewedAmount_ != nullptr;};
      void deleteFinalRenewedAmount() { this->finalRenewedAmount_ = nullptr;};
      inline double getFinalRenewedAmount() const { DARABONBA_PTR_GET_DEFAULT(finalRenewedAmount_, 0.0) };
      inline Data& setFinalRenewedAmount(double finalRenewedAmount) { DARABONBA_PTR_SET_VALUE(finalRenewedAmount_, finalRenewedAmount) };


      // finalSubPartnerRenewalAmountDue Field Functions 
      bool hasFinalSubPartnerRenewalAmountDue() const { return this->finalSubPartnerRenewalAmountDue_ != nullptr;};
      void deleteFinalSubPartnerRenewalAmountDue() { this->finalSubPartnerRenewalAmountDue_ = nullptr;};
      inline double getFinalSubPartnerRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(finalSubPartnerRenewalAmountDue_, 0.0) };
      inline Data& setFinalSubPartnerRenewalAmountDue(double finalSubPartnerRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(finalSubPartnerRenewalAmountDue_, finalSubPartnerRenewalAmountDue) };


      // finalSubPartnerRenewalRate Field Functions 
      bool hasFinalSubPartnerRenewalRate() const { return this->finalSubPartnerRenewalRate_ != nullptr;};
      void deleteFinalSubPartnerRenewalRate() { this->finalSubPartnerRenewalRate_ = nullptr;};
      inline double getFinalSubPartnerRenewalRate() const { DARABONBA_PTR_GET_DEFAULT(finalSubPartnerRenewalRate_, 0.0) };
      inline Data& setFinalSubPartnerRenewalRate(double finalSubPartnerRenewalRate) { DARABONBA_PTR_SET_VALUE(finalSubPartnerRenewalRate_, finalSubPartnerRenewalRate) };


      // finalSubPartnerRenewedAmount Field Functions 
      bool hasFinalSubPartnerRenewedAmount() const { return this->finalSubPartnerRenewedAmount_ != nullptr;};
      void deleteFinalSubPartnerRenewedAmount() { this->finalSubPartnerRenewedAmount_ = nullptr;};
      inline double getFinalSubPartnerRenewedAmount() const { DARABONBA_PTR_GET_DEFAULT(finalSubPartnerRenewedAmount_, 0.0) };
      inline Data& setFinalSubPartnerRenewedAmount(double finalSubPartnerRenewedAmount) { DARABONBA_PTR_SET_VALUE(finalSubPartnerRenewedAmount_, finalSubPartnerRenewedAmount) };


      // fiscalYearAndQuarter Field Functions 
      bool hasFiscalYearAndQuarter() const { return this->fiscalYearAndQuarter_ != nullptr;};
      void deleteFiscalYearAndQuarter() { this->fiscalYearAndQuarter_ = nullptr;};
      inline string getFiscalYearAndQuarter() const { DARABONBA_PTR_GET_DEFAULT(fiscalYearAndQuarter_, "") };
      inline Data& setFiscalYearAndQuarter(string fiscalYearAndQuarter) { DARABONBA_PTR_SET_VALUE(fiscalYearAndQuarter_, fiscalYearAndQuarter) };


      // masterPid Field Functions 
      bool hasMasterPid() const { return this->masterPid_ != nullptr;};
      void deleteMasterPid() { this->masterPid_ = nullptr;};
      inline string getMasterPid() const { DARABONBA_PTR_GET_DEFAULT(masterPid_, "") };
      inline Data& setMasterPid(string masterPid) { DARABONBA_PTR_SET_VALUE(masterPid_, masterPid) };


      // masterPidName Field Functions 
      bool hasMasterPidName() const { return this->masterPidName_ != nullptr;};
      void deleteMasterPidName() { this->masterPidName_ = nullptr;};
      inline string getMasterPidName() const { DARABONBA_PTR_GET_DEFAULT(masterPidName_, "") };
      inline Data& setMasterPidName(string masterPidName) { DARABONBA_PTR_SET_VALUE(masterPidName_, masterPidName) };


      // specialCustomerRenewRatio Field Functions 
      bool hasSpecialCustomerRenewRatio() const { return this->specialCustomerRenewRatio_ != nullptr;};
      void deleteSpecialCustomerRenewRatio() { this->specialCustomerRenewRatio_ = nullptr;};
      inline double getSpecialCustomerRenewRatio() const { DARABONBA_PTR_GET_DEFAULT(specialCustomerRenewRatio_, 0.0) };
      inline Data& setSpecialCustomerRenewRatio(double specialCustomerRenewRatio) { DARABONBA_PTR_SET_VALUE(specialCustomerRenewRatio_, specialCustomerRenewRatio) };


      // specialCustomerRenewalAmountDue Field Functions 
      bool hasSpecialCustomerRenewalAmountDue() const { return this->specialCustomerRenewalAmountDue_ != nullptr;};
      void deleteSpecialCustomerRenewalAmountDue() { this->specialCustomerRenewalAmountDue_ = nullptr;};
      inline double getSpecialCustomerRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(specialCustomerRenewalAmountDue_, 0.0) };
      inline Data& setSpecialCustomerRenewalAmountDue(double specialCustomerRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(specialCustomerRenewalAmountDue_, specialCustomerRenewalAmountDue) };


      // specialCustomerRenewedAmount Field Functions 
      bool hasSpecialCustomerRenewedAmount() const { return this->specialCustomerRenewedAmount_ != nullptr;};
      void deleteSpecialCustomerRenewedAmount() { this->specialCustomerRenewedAmount_ = nullptr;};
      inline double getSpecialCustomerRenewedAmount() const { DARABONBA_PTR_GET_DEFAULT(specialCustomerRenewedAmount_, 0.0) };
      inline Data& setSpecialCustomerRenewedAmount(double specialCustomerRenewedAmount) { DARABONBA_PTR_SET_VALUE(specialCustomerRenewedAmount_, specialCustomerRenewedAmount) };


      // specialFinalRenewRatio Field Functions 
      bool hasSpecialFinalRenewRatio() const { return this->specialFinalRenewRatio_ != nullptr;};
      void deleteSpecialFinalRenewRatio() { this->specialFinalRenewRatio_ = nullptr;};
      inline double getSpecialFinalRenewRatio() const { DARABONBA_PTR_GET_DEFAULT(specialFinalRenewRatio_, 0.0) };
      inline Data& setSpecialFinalRenewRatio(double specialFinalRenewRatio) { DARABONBA_PTR_SET_VALUE(specialFinalRenewRatio_, specialFinalRenewRatio) };


      // specialFinalRenewalAmountDue Field Functions 
      bool hasSpecialFinalRenewalAmountDue() const { return this->specialFinalRenewalAmountDue_ != nullptr;};
      void deleteSpecialFinalRenewalAmountDue() { this->specialFinalRenewalAmountDue_ = nullptr;};
      inline double getSpecialFinalRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(specialFinalRenewalAmountDue_, 0.0) };
      inline Data& setSpecialFinalRenewalAmountDue(double specialFinalRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(specialFinalRenewalAmountDue_, specialFinalRenewalAmountDue) };


      // specialFinalRenewedAmount Field Functions 
      bool hasSpecialFinalRenewedAmount() const { return this->specialFinalRenewedAmount_ != nullptr;};
      void deleteSpecialFinalRenewedAmount() { this->specialFinalRenewedAmount_ = nullptr;};
      inline double getSpecialFinalRenewedAmount() const { DARABONBA_PTR_GET_DEFAULT(specialFinalRenewedAmount_, 0.0) };
      inline Data& setSpecialFinalRenewedAmount(double specialFinalRenewedAmount) { DARABONBA_PTR_SET_VALUE(specialFinalRenewedAmount_, specialFinalRenewedAmount) };


      // specialSubPartnerRenewRatio Field Functions 
      bool hasSpecialSubPartnerRenewRatio() const { return this->specialSubPartnerRenewRatio_ != nullptr;};
      void deleteSpecialSubPartnerRenewRatio() { this->specialSubPartnerRenewRatio_ = nullptr;};
      inline double getSpecialSubPartnerRenewRatio() const { DARABONBA_PTR_GET_DEFAULT(specialSubPartnerRenewRatio_, 0.0) };
      inline Data& setSpecialSubPartnerRenewRatio(double specialSubPartnerRenewRatio) { DARABONBA_PTR_SET_VALUE(specialSubPartnerRenewRatio_, specialSubPartnerRenewRatio) };


      // specialSubPartnerRenewalAmountDue Field Functions 
      bool hasSpecialSubPartnerRenewalAmountDue() const { return this->specialSubPartnerRenewalAmountDue_ != nullptr;};
      void deleteSpecialSubPartnerRenewalAmountDue() { this->specialSubPartnerRenewalAmountDue_ = nullptr;};
      inline double getSpecialSubPartnerRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(specialSubPartnerRenewalAmountDue_, 0.0) };
      inline Data& setSpecialSubPartnerRenewalAmountDue(double specialSubPartnerRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(specialSubPartnerRenewalAmountDue_, specialSubPartnerRenewalAmountDue) };


      // specialSubPartnerRenewedAmount Field Functions 
      bool hasSpecialSubPartnerRenewedAmount() const { return this->specialSubPartnerRenewedAmount_ != nullptr;};
      void deleteSpecialSubPartnerRenewedAmount() { this->specialSubPartnerRenewedAmount_ = nullptr;};
      inline double getSpecialSubPartnerRenewedAmount() const { DARABONBA_PTR_GET_DEFAULT(specialSubPartnerRenewedAmount_, 0.0) };
      inline Data& setSpecialSubPartnerRenewedAmount(double specialSubPartnerRenewedAmount) { DARABONBA_PTR_SET_VALUE(specialSubPartnerRenewedAmount_, specialSubPartnerRenewedAmount) };


      // subPartnerAdjustedRenewalAmountDue Field Functions 
      bool hasSubPartnerAdjustedRenewalAmountDue() const { return this->subPartnerAdjustedRenewalAmountDue_ != nullptr;};
      void deleteSubPartnerAdjustedRenewalAmountDue() { this->subPartnerAdjustedRenewalAmountDue_ = nullptr;};
      inline double getSubPartnerAdjustedRenewalAmountDue() const { DARABONBA_PTR_GET_DEFAULT(subPartnerAdjustedRenewalAmountDue_, 0.0) };
      inline Data& setSubPartnerAdjustedRenewalAmountDue(double subPartnerAdjustedRenewalAmountDue) { DARABONBA_PTR_SET_VALUE(subPartnerAdjustedRenewalAmountDue_, subPartnerAdjustedRenewalAmountDue) };


      // subPartnerOtherBillAmount Field Functions 
      bool hasSubPartnerOtherBillAmount() const { return this->subPartnerOtherBillAmount_ != nullptr;};
      void deleteSubPartnerOtherBillAmount() { this->subPartnerOtherBillAmount_ = nullptr;};
      inline double getSubPartnerOtherBillAmount() const { DARABONBA_PTR_GET_DEFAULT(subPartnerOtherBillAmount_, 0.0) };
      inline Data& setSubPartnerOtherBillAmount(double subPartnerOtherBillAmount) { DARABONBA_PTR_SET_VALUE(subPartnerOtherBillAmount_, subPartnerOtherBillAmount) };


    protected:
      // The adjusted customer acquisition amount due for renewal.
      shared_ptr<double> customerAdjustedRenewalAmountDue_ {};
      // The customer acquisition amount for new purchases, upgrades, and refunds.
      shared_ptr<double> customerOtherBillAmount_ {};
      // The customer acquisition amount due for renewal.
      shared_ptr<double> finalCustomerRenewalAmountDue_ {};
      // The customer acquisition commission renewal rate.
      shared_ptr<double> finalCustomerRenewalRate_ {};
      // The customer acquisition renewed amount.
      shared_ptr<double> finalCustomerRenewedAmount_ {};
      // The total amount for new purchases, upgrades, and refunds.
      shared_ptr<double> finalOtherBillAmount_ {};
      // The final amount due for renewal.
      shared_ptr<double> finalRenewalAmountDue_ {};
      // The final commission renewal rate.
      shared_ptr<double> finalRenewalRate_ {};
      // The final renewed amount.
      shared_ptr<double> finalRenewedAmount_ {};
      // The sub-partner acquisition amount due for renewal.
      shared_ptr<double> finalSubPartnerRenewalAmountDue_ {};
      // The sub-partner acquisition commission renewal rate.
      shared_ptr<double> finalSubPartnerRenewalRate_ {};
      // The sub-partner acquisition renewed amount.
      shared_ptr<double> finalSubPartnerRenewedAmount_ {};
      // The fiscal year and quarter.
      shared_ptr<string> fiscalYearAndQuarter_ {};
      // The partner PID.
      shared_ptr<string> masterPid_ {};
      // The partner PID name.
      shared_ptr<string> masterPidName_ {};
      // The customer acquisition commission renewal rate including special approvals.
      shared_ptr<double> specialCustomerRenewRatio_ {};
      // The customer acquisition amount due for renewal including special approvals.
      shared_ptr<double> specialCustomerRenewalAmountDue_ {};
      // The customer acquisition renewed amount including special approvals.
      shared_ptr<double> specialCustomerRenewedAmount_ {};
      // The final quarterly commission renewal rate including special approvals.
      shared_ptr<double> specialFinalRenewRatio_ {};
      // The final quarterly commission amount due for renewal including special approvals.
      shared_ptr<double> specialFinalRenewalAmountDue_ {};
      // The final quarterly commission renewed amount including special approvals.
      shared_ptr<double> specialFinalRenewedAmount_ {};
      // The sub-partner acquisition commission renewal rate including special approvals.
      shared_ptr<double> specialSubPartnerRenewRatio_ {};
      // The sub-partner acquisition amount due for renewal including special approvals.
      shared_ptr<double> specialSubPartnerRenewalAmountDue_ {};
      // The sub-partner acquisition renewed amount including special approvals.
      shared_ptr<double> specialSubPartnerRenewedAmount_ {};
      // The adjusted sub-partner acquisition amount due for renewal.
      shared_ptr<double> subPartnerAdjustedRenewalAmountDue_ {};
      // The sub-partner acquisition amount for new purchases, upgrades, and refunds.
      shared_ptr<double> subPartnerOtherBillAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRenewalRateListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetRenewalRateListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetRenewalRateListResponseBody::Data>) };
    inline vector<GetRenewalRateListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetRenewalRateListResponseBody::Data>) };
    inline GetRenewalRateListResponseBody& setData(const vector<GetRenewalRateListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRenewalRateListResponseBody& setData(vector<GetRenewalRateListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRenewalRateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRenewalRateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRenewalRateListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<GetRenewalRateListResponseBody::Data>> data_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
