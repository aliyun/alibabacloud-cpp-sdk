// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUEST_HPP_
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
  class InsureOrderCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(ins_person_and_segment_list, insPersonAndSegmentList_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(ins_person_and_segment_list, insPersonAndSegmentList_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureOrderCreateRequest() = default ;
    InsureOrderCreateRequest(const InsureOrderCreateRequest &) = default ;
    InsureOrderCreateRequest(InsureOrderCreateRequest &&) = default ;
    InsureOrderCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateRequest() = default ;
    InsureOrderCreateRequest& operator=(const InsureOrderCreateRequest &) = default ;
    InsureOrderCreateRequest& operator=(InsureOrderCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InsPersonAndSegmentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InsPersonAndSegmentList& obj) { 
        DARABONBA_PTR_TO_JSON(insure_segment, insureSegment_);
        DARABONBA_PTR_TO_JSON(insured, insured_);
        DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      };
      friend void from_json(const Darabonba::Json& j, InsPersonAndSegmentList& obj) { 
        DARABONBA_PTR_FROM_JSON(insure_segment, insureSegment_);
        DARABONBA_PTR_FROM_JSON(insured, insured_);
        DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      };
      InsPersonAndSegmentList() = default ;
      InsPersonAndSegmentList(const InsPersonAndSegmentList &) = default ;
      InsPersonAndSegmentList(InsPersonAndSegmentList &&) = default ;
      InsPersonAndSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InsPersonAndSegmentList() = default ;
      InsPersonAndSegmentList& operator=(const InsPersonAndSegmentList &) = default ;
      InsPersonAndSegmentList& operator=(InsPersonAndSegmentList &&) = default ;
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

      virtual bool empty() const override { return this->insureSegment_ == nullptr
        && this->insured_ == nullptr && this->outSubInsOrderId_ == nullptr; };
      // insureSegment Field Functions 
      bool hasInsureSegment() const { return this->insureSegment_ != nullptr;};
      void deleteInsureSegment() { this->insureSegment_ = nullptr;};
      inline const InsPersonAndSegmentList::InsureSegment & getInsureSegment() const { DARABONBA_PTR_GET_CONST(insureSegment_, InsPersonAndSegmentList::InsureSegment) };
      inline InsPersonAndSegmentList::InsureSegment getInsureSegment() { DARABONBA_PTR_GET(insureSegment_, InsPersonAndSegmentList::InsureSegment) };
      inline InsPersonAndSegmentList& setInsureSegment(const InsPersonAndSegmentList::InsureSegment & insureSegment) { DARABONBA_PTR_SET_VALUE(insureSegment_, insureSegment) };
      inline InsPersonAndSegmentList& setInsureSegment(InsPersonAndSegmentList::InsureSegment && insureSegment) { DARABONBA_PTR_SET_RVALUE(insureSegment_, insureSegment) };


      // insured Field Functions 
      bool hasInsured() const { return this->insured_ != nullptr;};
      void deleteInsured() { this->insured_ = nullptr;};
      inline const InsPersonAndSegmentList::Insured & getInsured() const { DARABONBA_PTR_GET_CONST(insured_, InsPersonAndSegmentList::Insured) };
      inline InsPersonAndSegmentList::Insured getInsured() { DARABONBA_PTR_GET(insured_, InsPersonAndSegmentList::Insured) };
      inline InsPersonAndSegmentList& setInsured(const InsPersonAndSegmentList::Insured & insured) { DARABONBA_PTR_SET_VALUE(insured_, insured) };
      inline InsPersonAndSegmentList& setInsured(InsPersonAndSegmentList::Insured && insured) { DARABONBA_PTR_SET_RVALUE(insured_, insured) };


      // outSubInsOrderId Field Functions 
      bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
      void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
      inline string getOutSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
      inline InsPersonAndSegmentList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


    protected:
      shared_ptr<InsPersonAndSegmentList::InsureSegment> insureSegment_ {};
      shared_ptr<InsPersonAndSegmentList::Insured> insured_ {};
      shared_ptr<string> outSubInsOrderId_ {};
    };

    class Applicant : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applicant& obj) { 
        DARABONBA_PTR_TO_JSON(birthday, birthday_);
        DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
        DARABONBA_PTR_TO_JSON(cert_name, certName_);
        DARABONBA_PTR_TO_JSON(cert_no, certNo_);
        DARABONBA_PTR_TO_JSON(cert_type, certType_);
        DARABONBA_PTR_TO_JSON(gender, gender_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
      };
      friend void from_json(const Darabonba::Json& j, Applicant& obj) { 
        DARABONBA_PTR_FROM_JSON(birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
        DARABONBA_PTR_FROM_JSON(cert_name, certName_);
        DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
        DARABONBA_PTR_FROM_JSON(cert_type, certType_);
        DARABONBA_PTR_FROM_JSON(gender, gender_);
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
      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->btripUserId_ == nullptr && this->certName_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->gender_ == nullptr
        && this->phone_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline Applicant& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // btripUserId Field Functions 
      bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
      void deleteBtripUserId() { this->btripUserId_ = nullptr;};
      inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
      inline Applicant& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


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


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
      inline Applicant& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Applicant& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    protected:
      shared_ptr<string> birthday_ {};
      shared_ptr<string> btripUserId_ {};
      shared_ptr<string> certName_ {};
      shared_ptr<string> certNo_ {};
      shared_ptr<string> certType_ {};
      shared_ptr<string> gender_ {};
      shared_ptr<string> phone_ {};
    };

    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->btripUserId_ == nullptr && this->buyerName_ == nullptr && this->insPersonAndSegmentList_ == nullptr && this->isvName_ == nullptr && this->outInsOrderId_ == nullptr
        && this->outOrderId_ == nullptr && this->outSubOrderId_ == nullptr && this->supplierCode_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline const InsureOrderCreateRequest::Applicant & getApplicant() const { DARABONBA_PTR_GET_CONST(applicant_, InsureOrderCreateRequest::Applicant) };
    inline InsureOrderCreateRequest::Applicant getApplicant() { DARABONBA_PTR_GET(applicant_, InsureOrderCreateRequest::Applicant) };
    inline InsureOrderCreateRequest& setApplicant(const InsureOrderCreateRequest::Applicant & applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };
    inline InsureOrderCreateRequest& setApplicant(InsureOrderCreateRequest::Applicant && applicant) { DARABONBA_PTR_SET_RVALUE(applicant_, applicant) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderCreateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string getBuyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureOrderCreateRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // insPersonAndSegmentList Field Functions 
    bool hasInsPersonAndSegmentList() const { return this->insPersonAndSegmentList_ != nullptr;};
    void deleteInsPersonAndSegmentList() { this->insPersonAndSegmentList_ = nullptr;};
    inline const vector<InsureOrderCreateRequest::InsPersonAndSegmentList> & getInsPersonAndSegmentList() const { DARABONBA_PTR_GET_CONST(insPersonAndSegmentList_, vector<InsureOrderCreateRequest::InsPersonAndSegmentList>) };
    inline vector<InsureOrderCreateRequest::InsPersonAndSegmentList> getInsPersonAndSegmentList() { DARABONBA_PTR_GET(insPersonAndSegmentList_, vector<InsureOrderCreateRequest::InsPersonAndSegmentList>) };
    inline InsureOrderCreateRequest& setInsPersonAndSegmentList(const vector<InsureOrderCreateRequest::InsPersonAndSegmentList> & insPersonAndSegmentList) { DARABONBA_PTR_SET_VALUE(insPersonAndSegmentList_, insPersonAndSegmentList) };
    inline InsureOrderCreateRequest& setInsPersonAndSegmentList(vector<InsureOrderCreateRequest::InsPersonAndSegmentList> && insPersonAndSegmentList) { DARABONBA_PTR_SET_RVALUE(insPersonAndSegmentList_, insPersonAndSegmentList) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureOrderCreateRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outInsOrderId Field Functions 
    bool hasOutInsOrderId() const { return this->outInsOrderId_ != nullptr;};
    void deleteOutInsOrderId() { this->outInsOrderId_ = nullptr;};
    inline string getOutInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outInsOrderId_, "") };
    inline InsureOrderCreateRequest& setOutInsOrderId(string outInsOrderId) { DARABONBA_PTR_SET_VALUE(outInsOrderId_, outInsOrderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline InsureOrderCreateRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string getOutSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline InsureOrderCreateRequest& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string getSupplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureOrderCreateRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    // This parameter is required.
    shared_ptr<InsureOrderCreateRequest::Applicant> applicant_ {};
    shared_ptr<string> btripUserId_ {};
    shared_ptr<string> buyerName_ {};
    // This parameter is required.
    shared_ptr<vector<InsureOrderCreateRequest::InsPersonAndSegmentList>> insPersonAndSegmentList_ {};
    // This parameter is required.
    shared_ptr<string> isvName_ {};
    shared_ptr<string> outInsOrderId_ {};
    // This parameter is required.
    shared_ptr<string> outOrderId_ {};
    shared_ptr<string> outSubOrderId_ {};
    shared_ptr<string> supplierCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
