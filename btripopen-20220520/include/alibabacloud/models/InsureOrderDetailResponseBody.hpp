// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    InsureOrderDetailResponseBody() = default ;
    InsureOrderDetailResponseBody(const InsureOrderDetailResponseBody &) = default ;
    InsureOrderDetailResponseBody(InsureOrderDetailResponseBody &&) = default ;
    InsureOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderDetailResponseBody() = default ;
    InsureOrderDetailResponseBody& operator=(const InsureOrderDetailResponseBody &) = default ;
    InsureOrderDetailResponseBody& operator=(InsureOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(applicant, applicant_);
        DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
        DARABONBA_PTR_TO_JSON(insure_order_detail_list, insureOrderDetailList_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(applicant, applicant_);
        DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
        DARABONBA_PTR_FROM_JSON(insure_order_detail_list, insureOrderDetailList_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InsureOrderDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsureOrderDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(effective_end_time, effectiveEndTime_);
          DARABONBA_PTR_TO_JSON(effective_start_time, effectiveStartTime_);
          DARABONBA_PTR_TO_JSON(insure_segment, insureSegment_);
          DARABONBA_PTR_TO_JSON(insure_time, insureTime_);
          DARABONBA_PTR_TO_JSON(insured, insured_);
          DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
          DARABONBA_PTR_TO_JSON(policy_no, policyNo_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(product_name, productName_);
          DARABONBA_PTR_TO_JSON(product_no, productNo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, InsureOrderDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(effective_end_time, effectiveEndTime_);
          DARABONBA_PTR_FROM_JSON(effective_start_time, effectiveStartTime_);
          DARABONBA_PTR_FROM_JSON(insure_segment, insureSegment_);
          DARABONBA_PTR_FROM_JSON(insure_time, insureTime_);
          DARABONBA_PTR_FROM_JSON(insured, insured_);
          DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
          DARABONBA_PTR_FROM_JSON(policy_no, policyNo_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(product_name, productName_);
          DARABONBA_PTR_FROM_JSON(product_no, productNo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
        };
        InsureOrderDetailList() = default ;
        InsureOrderDetailList(const InsureOrderDetailList &) = default ;
        InsureOrderDetailList(InsureOrderDetailList &&) = default ;
        InsureOrderDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsureOrderDetailList() = default ;
        InsureOrderDetailList& operator=(const InsureOrderDetailList &) = default ;
        InsureOrderDetailList& operator=(InsureOrderDetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Insured : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Insured& obj) { 
            DARABONBA_PTR_TO_JSON(birthday, birthday_);
            DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
            DARABONBA_PTR_TO_JSON(cert_name, certName_);
            DARABONBA_PTR_TO_JSON(cert_no, certNo_);
            DARABONBA_PTR_TO_JSON(cert_type, certType_);
            DARABONBA_PTR_TO_JSON(gender, gender_);
            DARABONBA_PTR_TO_JSON(phone, phone_);
          };
          friend void from_json(const Darabonba::Json& j, Insured& obj) { 
            DARABONBA_PTR_FROM_JSON(birthday, birthday_);
            DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
            DARABONBA_PTR_FROM_JSON(cert_name, certName_);
            DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
            DARABONBA_PTR_FROM_JSON(cert_type, certType_);
            DARABONBA_PTR_FROM_JSON(gender, gender_);
            DARABONBA_PTR_FROM_JSON(phone, phone_);
          };
          Insured() = default ;
          Insured(const Insured &) = default ;
          Insured(Insured &&) = default ;
          Insured(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Insured() = default ;
          Insured& operator=(const Insured &) = default ;
          Insured& operator=(Insured &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->birthday_ == nullptr
        && this->btripUserId_ == nullptr && this->certName_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->gender_ == nullptr
        && this->phone_ == nullptr; };
          // birthday Field Functions 
          bool hasBirthday() const { return this->birthday_ != nullptr;};
          void deleteBirthday() { this->birthday_ = nullptr;};
          inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
          inline Insured& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


          // btripUserId Field Functions 
          bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
          void deleteBtripUserId() { this->btripUserId_ = nullptr;};
          inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
          inline Insured& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


          // certName Field Functions 
          bool hasCertName() const { return this->certName_ != nullptr;};
          void deleteCertName() { this->certName_ = nullptr;};
          inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
          inline Insured& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


          // certNo Field Functions 
          bool hasCertNo() const { return this->certNo_ != nullptr;};
          void deleteCertNo() { this->certNo_ = nullptr;};
          inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
          inline Insured& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


          // certType Field Functions 
          bool hasCertType() const { return this->certType_ != nullptr;};
          void deleteCertType() { this->certType_ = nullptr;};
          inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
          inline Insured& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


          // gender Field Functions 
          bool hasGender() const { return this->gender_ != nullptr;};
          void deleteGender() { this->gender_ = nullptr;};
          inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
          inline Insured& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


          // phone Field Functions 
          bool hasPhone() const { return this->phone_ != nullptr;};
          void deletePhone() { this->phone_ = nullptr;};
          inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
          inline Insured& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        protected:
          shared_ptr<string> birthday_ {};
          shared_ptr<string> btripUserId_ {};
          shared_ptr<string> certName_ {};
          shared_ptr<string> certNo_ {};
          shared_ptr<string> certType_ {};
          shared_ptr<string> gender_ {};
          shared_ptr<string> phone_ {};
        };

        class InsureSegment : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InsureSegment& obj) { 
            DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          };
          friend void from_json(const Darabonba::Json& j, InsureSegment& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          };
          InsureSegment() = default ;
          InsureSegment(const InsureSegment &) = default ;
          InsureSegment(InsureSegment &&) = default ;
          InsureSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InsureSegment() = default ;
          InsureSegment& operator=(const InsureSegment &) = default ;
          InsureSegment& operator=(InsureSegment &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrAirportCode_ == nullptr
        && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->arrTime_ == nullptr && this->depAirportCode_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depTime_ == nullptr && this->flightNo_ == nullptr; };
          // arrAirportCode Field Functions 
          bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
          void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
          inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
          inline InsureSegment& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline InsureSegment& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline InsureSegment& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline InsureSegment& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depAirportCode Field Functions 
          bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
          void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
          inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
          inline InsureSegment& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline InsureSegment& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline InsureSegment& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline InsureSegment& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline InsureSegment& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        protected:
          shared_ptr<string> arrAirportCode_ {};
          shared_ptr<string> arrCity_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> depAirportCode_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightNo_ {};
        };

        virtual bool empty() const override { return this->effectiveEndTime_ == nullptr
        && this->effectiveStartTime_ == nullptr && this->insureSegment_ == nullptr && this->insureTime_ == nullptr && this->insured_ == nullptr && this->outSubInsOrderId_ == nullptr
        && this->policyNo_ == nullptr && this->price_ == nullptr && this->productName_ == nullptr && this->productNo_ == nullptr && this->status_ == nullptr
        && this->subInsOrderId_ == nullptr; };
        // effectiveEndTime Field Functions 
        bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
        void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
        inline string getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
        inline InsureOrderDetailList& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


        // effectiveStartTime Field Functions 
        bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
        void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
        inline string getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
        inline InsureOrderDetailList& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


        // insureSegment Field Functions 
        bool hasInsureSegment() const { return this->insureSegment_ != nullptr;};
        void deleteInsureSegment() { this->insureSegment_ = nullptr;};
        inline const InsureOrderDetailList::InsureSegment & getInsureSegment() const { DARABONBA_PTR_GET_CONST(insureSegment_, InsureOrderDetailList::InsureSegment) };
        inline InsureOrderDetailList::InsureSegment getInsureSegment() { DARABONBA_PTR_GET(insureSegment_, InsureOrderDetailList::InsureSegment) };
        inline InsureOrderDetailList& setInsureSegment(const InsureOrderDetailList::InsureSegment & insureSegment) { DARABONBA_PTR_SET_VALUE(insureSegment_, insureSegment) };
        inline InsureOrderDetailList& setInsureSegment(InsureOrderDetailList::InsureSegment && insureSegment) { DARABONBA_PTR_SET_RVALUE(insureSegment_, insureSegment) };


        // insureTime Field Functions 
        bool hasInsureTime() const { return this->insureTime_ != nullptr;};
        void deleteInsureTime() { this->insureTime_ = nullptr;};
        inline string getInsureTime() const { DARABONBA_PTR_GET_DEFAULT(insureTime_, "") };
        inline InsureOrderDetailList& setInsureTime(string insureTime) { DARABONBA_PTR_SET_VALUE(insureTime_, insureTime) };


        // insured Field Functions 
        bool hasInsured() const { return this->insured_ != nullptr;};
        void deleteInsured() { this->insured_ = nullptr;};
        inline const InsureOrderDetailList::Insured & getInsured() const { DARABONBA_PTR_GET_CONST(insured_, InsureOrderDetailList::Insured) };
        inline InsureOrderDetailList::Insured getInsured() { DARABONBA_PTR_GET(insured_, InsureOrderDetailList::Insured) };
        inline InsureOrderDetailList& setInsured(const InsureOrderDetailList::Insured & insured) { DARABONBA_PTR_SET_VALUE(insured_, insured) };
        inline InsureOrderDetailList& setInsured(InsureOrderDetailList::Insured && insured) { DARABONBA_PTR_SET_RVALUE(insured_, insured) };


        // outSubInsOrderId Field Functions 
        bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
        void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
        inline string getOutSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
        inline InsureOrderDetailList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


        // policyNo Field Functions 
        bool hasPolicyNo() const { return this->policyNo_ != nullptr;};
        void deletePolicyNo() { this->policyNo_ = nullptr;};
        inline string getPolicyNo() const { DARABONBA_PTR_GET_DEFAULT(policyNo_, "") };
        inline InsureOrderDetailList& setPolicyNo(string policyNo) { DARABONBA_PTR_SET_VALUE(policyNo_, policyNo) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline InsureOrderDetailList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline InsureOrderDetailList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // productNo Field Functions 
        bool hasProductNo() const { return this->productNo_ != nullptr;};
        void deleteProductNo() { this->productNo_ = nullptr;};
        inline string getProductNo() const { DARABONBA_PTR_GET_DEFAULT(productNo_, "") };
        inline InsureOrderDetailList& setProductNo(string productNo) { DARABONBA_PTR_SET_VALUE(productNo_, productNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InsureOrderDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subInsOrderId Field Functions 
        bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
        void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
        inline string getSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
        inline InsureOrderDetailList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


      protected:
        shared_ptr<string> effectiveEndTime_ {};
        shared_ptr<string> effectiveStartTime_ {};
        shared_ptr<InsureOrderDetailList::InsureSegment> insureSegment_ {};
        shared_ptr<string> insureTime_ {};
        shared_ptr<InsureOrderDetailList::Insured> insured_ {};
        shared_ptr<string> outSubInsOrderId_ {};
        shared_ptr<string> policyNo_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> productNo_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subInsOrderId_ {};
      };

      class Applicant : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applicant& obj) { 
          DARABONBA_PTR_TO_JSON(cert_name, certName_);
          DARABONBA_PTR_TO_JSON(cert_no, certNo_);
          DARABONBA_PTR_TO_JSON(cert_type, certType_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
        };
        friend void from_json(const Darabonba::Json& j, Applicant& obj) { 
          DARABONBA_PTR_FROM_JSON(cert_name, certName_);
          DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
          DARABONBA_PTR_FROM_JSON(cert_type, certType_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
        };
        Applicant() = default ;
        Applicant(const Applicant &) = default ;
        Applicant(Applicant &&) = default ;
        Applicant(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applicant() = default ;
        Applicant& operator=(const Applicant &) = default ;
        Applicant& operator=(Applicant &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certName_ == nullptr
        && this->certNo_ == nullptr && this->certType_ == nullptr && this->phone_ == nullptr; };
        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline Applicant& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // certNo Field Functions 
        bool hasCertNo() const { return this->certNo_ != nullptr;};
        void deleteCertNo() { this->certNo_ = nullptr;};
        inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
        inline Applicant& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
        inline Applicant& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline Applicant& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      protected:
        shared_ptr<string> certName_ {};
        shared_ptr<string> certNo_ {};
        shared_ptr<string> certType_ {};
        shared_ptr<string> phone_ {};
      };

      virtual bool empty() const override { return this->applicant_ == nullptr
        && this->insOrderId_ == nullptr && this->insureOrderDetailList_ == nullptr && this->status_ == nullptr; };
      // applicant Field Functions 
      bool hasApplicant() const { return this->applicant_ != nullptr;};
      void deleteApplicant() { this->applicant_ = nullptr;};
      inline const Module::Applicant & getApplicant() const { DARABONBA_PTR_GET_CONST(applicant_, Module::Applicant) };
      inline Module::Applicant getApplicant() { DARABONBA_PTR_GET(applicant_, Module::Applicant) };
      inline Module& setApplicant(const Module::Applicant & applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };
      inline Module& setApplicant(Module::Applicant && applicant) { DARABONBA_PTR_SET_RVALUE(applicant_, applicant) };


      // insOrderId Field Functions 
      bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
      void deleteInsOrderId() { this->insOrderId_ = nullptr;};
      inline string getInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
      inline Module& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


      // insureOrderDetailList Field Functions 
      bool hasInsureOrderDetailList() const { return this->insureOrderDetailList_ != nullptr;};
      void deleteInsureOrderDetailList() { this->insureOrderDetailList_ = nullptr;};
      inline const vector<Module::InsureOrderDetailList> & getInsureOrderDetailList() const { DARABONBA_PTR_GET_CONST(insureOrderDetailList_, vector<Module::InsureOrderDetailList>) };
      inline vector<Module::InsureOrderDetailList> getInsureOrderDetailList() { DARABONBA_PTR_GET(insureOrderDetailList_, vector<Module::InsureOrderDetailList>) };
      inline Module& setInsureOrderDetailList(const vector<Module::InsureOrderDetailList> & insureOrderDetailList) { DARABONBA_PTR_SET_VALUE(insureOrderDetailList_, insureOrderDetailList) };
      inline Module& setInsureOrderDetailList(vector<Module::InsureOrderDetailList> && insureOrderDetailList) { DARABONBA_PTR_SET_RVALUE(insureOrderDetailList_, insureOrderDetailList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<Module::Applicant> applicant_ {};
      shared_ptr<string> insOrderId_ {};
      shared_ptr<vector<Module::InsureOrderDetailList>> insureOrderDetailList_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InsureOrderDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsureOrderDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const InsureOrderDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, InsureOrderDetailResponseBody::Module) };
    inline InsureOrderDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, InsureOrderDetailResponseBody::Module) };
    inline InsureOrderDetailResponseBody& setModule(const InsureOrderDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline InsureOrderDetailResponseBody& setModule(InsureOrderDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsureOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InsureOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline InsureOrderDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<InsureOrderDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
