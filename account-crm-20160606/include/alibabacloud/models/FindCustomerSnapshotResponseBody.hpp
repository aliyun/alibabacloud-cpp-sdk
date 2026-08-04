// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCUSTOMERSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDCUSTOMERSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindCustomerSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindCustomerSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomerSnapshot, customerSnapshot_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindCustomerSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomerSnapshot, customerSnapshot_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindCustomerSnapshotResponseBody() = default ;
    FindCustomerSnapshotResponseBody(const FindCustomerSnapshotResponseBody &) = default ;
    FindCustomerSnapshotResponseBody(FindCustomerSnapshotResponseBody &&) = default ;
    FindCustomerSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindCustomerSnapshotResponseBody() = default ;
    FindCustomerSnapshotResponseBody& operator=(const FindCustomerSnapshotResponseBody &) = default ;
    FindCustomerSnapshotResponseBody& operator=(FindCustomerSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomerSnapshot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomerSnapshot& obj) { 
        DARABONBA_PTR_TO_JSON(AccountInfoSnapshotModel, accountInfoSnapshotModel_);
        DARABONBA_PTR_TO_JSON(AccountTaxSnapshotModel, accountTaxSnapshotModel_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InfoType, infoType_);
        DARABONBA_PTR_TO_JSON(KpId, kpId_);
      };
      friend void from_json(const Darabonba::Json& j, CustomerSnapshot& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountInfoSnapshotModel, accountInfoSnapshotModel_);
        DARABONBA_PTR_FROM_JSON(AccountTaxSnapshotModel, accountTaxSnapshotModel_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InfoType, infoType_);
        DARABONBA_PTR_FROM_JSON(KpId, kpId_);
      };
      CustomerSnapshot() = default ;
      CustomerSnapshot(const CustomerSnapshot &) = default ;
      CustomerSnapshot(CustomerSnapshot &&) = default ;
      CustomerSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomerSnapshot() = default ;
      CustomerSnapshot& operator=(const CustomerSnapshot &) = default ;
      CustomerSnapshot& operator=(CustomerSnapshot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccountTaxSnapshotModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountTaxSnapshotModel& obj) { 
          DARABONBA_PTR_TO_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
          DARABONBA_PTR_TO_JSON(FinanceTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
          DARABONBA_PTR_TO_JSON(SecondFinanceTax, secondFinanceTax_);
          DARABONBA_PTR_TO_JSON(SecondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
          DARABONBA_PTR_TO_JSON(SecondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
          DARABONBA_PTR_TO_JSON(Tax, tax_);
        };
        friend void from_json(const Darabonba::Json& j, AccountTaxSnapshotModel& obj) { 
          DARABONBA_PTR_FROM_JSON(FinanceTaxCertificateImgName, financeTaxCertificateImgName_);
          DARABONBA_PTR_FROM_JSON(FinanceTaxCertificateImgUrl, financeTaxCertificateImgUrl_);
          DARABONBA_PTR_FROM_JSON(SecondFinanceTax, secondFinanceTax_);
          DARABONBA_PTR_FROM_JSON(SecondFinanceTaxCertificateImgName, secondFinanceTaxCertificateImgName_);
          DARABONBA_PTR_FROM_JSON(SecondFinanceTaxCertificateImgUrl, secondFinanceTaxCertificateImgUrl_);
          DARABONBA_PTR_FROM_JSON(Tax, tax_);
        };
        AccountTaxSnapshotModel() = default ;
        AccountTaxSnapshotModel(const AccountTaxSnapshotModel &) = default ;
        AccountTaxSnapshotModel(AccountTaxSnapshotModel &&) = default ;
        AccountTaxSnapshotModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountTaxSnapshotModel() = default ;
        AccountTaxSnapshotModel& operator=(const AccountTaxSnapshotModel &) = default ;
        AccountTaxSnapshotModel& operator=(AccountTaxSnapshotModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->financeTaxCertificateImgName_ == nullptr
        && this->financeTaxCertificateImgUrl_ == nullptr && this->secondFinanceTax_ == nullptr && this->secondFinanceTaxCertificateImgName_ == nullptr && this->secondFinanceTaxCertificateImgUrl_ == nullptr && this->tax_ == nullptr; };
        // financeTaxCertificateImgName Field Functions 
        bool hasFinanceTaxCertificateImgName() const { return this->financeTaxCertificateImgName_ != nullptr;};
        void deleteFinanceTaxCertificateImgName() { this->financeTaxCertificateImgName_ = nullptr;};
        inline string getFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgName_, "") };
        inline AccountTaxSnapshotModel& setFinanceTaxCertificateImgName(string financeTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgName_, financeTaxCertificateImgName) };


        // financeTaxCertificateImgUrl Field Functions 
        bool hasFinanceTaxCertificateImgUrl() const { return this->financeTaxCertificateImgUrl_ != nullptr;};
        void deleteFinanceTaxCertificateImgUrl() { this->financeTaxCertificateImgUrl_ = nullptr;};
        inline string getFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(financeTaxCertificateImgUrl_, "") };
        inline AccountTaxSnapshotModel& setFinanceTaxCertificateImgUrl(string financeTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(financeTaxCertificateImgUrl_, financeTaxCertificateImgUrl) };


        // secondFinanceTax Field Functions 
        bool hasSecondFinanceTax() const { return this->secondFinanceTax_ != nullptr;};
        void deleteSecondFinanceTax() { this->secondFinanceTax_ = nullptr;};
        inline string getSecondFinanceTax() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTax_, "") };
        inline AccountTaxSnapshotModel& setSecondFinanceTax(string secondFinanceTax) { DARABONBA_PTR_SET_VALUE(secondFinanceTax_, secondFinanceTax) };


        // secondFinanceTaxCertificateImgName Field Functions 
        bool hasSecondFinanceTaxCertificateImgName() const { return this->secondFinanceTaxCertificateImgName_ != nullptr;};
        void deleteSecondFinanceTaxCertificateImgName() { this->secondFinanceTaxCertificateImgName_ = nullptr;};
        inline string getSecondFinanceTaxCertificateImgName() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgName_, "") };
        inline AccountTaxSnapshotModel& setSecondFinanceTaxCertificateImgName(string secondFinanceTaxCertificateImgName) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgName_, secondFinanceTaxCertificateImgName) };


        // secondFinanceTaxCertificateImgUrl Field Functions 
        bool hasSecondFinanceTaxCertificateImgUrl() const { return this->secondFinanceTaxCertificateImgUrl_ != nullptr;};
        void deleteSecondFinanceTaxCertificateImgUrl() { this->secondFinanceTaxCertificateImgUrl_ = nullptr;};
        inline string getSecondFinanceTaxCertificateImgUrl() const { DARABONBA_PTR_GET_DEFAULT(secondFinanceTaxCertificateImgUrl_, "") };
        inline AccountTaxSnapshotModel& setSecondFinanceTaxCertificateImgUrl(string secondFinanceTaxCertificateImgUrl) { DARABONBA_PTR_SET_VALUE(secondFinanceTaxCertificateImgUrl_, secondFinanceTaxCertificateImgUrl) };


        // tax Field Functions 
        bool hasTax() const { return this->tax_ != nullptr;};
        void deleteTax() { this->tax_ = nullptr;};
        inline string getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
        inline AccountTaxSnapshotModel& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


      protected:
        shared_ptr<string> financeTaxCertificateImgName_ {};
        shared_ptr<string> financeTaxCertificateImgUrl_ {};
        shared_ptr<string> secondFinanceTax_ {};
        shared_ptr<string> secondFinanceTaxCertificateImgName_ {};
        shared_ptr<string> secondFinanceTaxCertificateImgUrl_ {};
        shared_ptr<string> tax_ {};
      };

      class AccountInfoSnapshotModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountInfoSnapshotModel& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Address2, address2_);
          DARABONBA_PTR_TO_JSON(Address3, address3_);
          DARABONBA_PTR_TO_JSON(Address4, address4_);
          DARABONBA_PTR_TO_JSON(Address5, address5_);
          DARABONBA_PTR_TO_JSON(Address6, address6_);
          DARABONBA_PTR_TO_JSON(CityId, cityId_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(PostCode, postCode_);
          DARABONBA_PTR_TO_JSON(ProvinceId, provinceId_);
          DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_TO_JSON(TrueName, trueName_);
        };
        friend void from_json(const Darabonba::Json& j, AccountInfoSnapshotModel& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Address2, address2_);
          DARABONBA_PTR_FROM_JSON(Address3, address3_);
          DARABONBA_PTR_FROM_JSON(Address4, address4_);
          DARABONBA_PTR_FROM_JSON(Address5, address5_);
          DARABONBA_PTR_FROM_JSON(Address6, address6_);
          DARABONBA_PTR_FROM_JSON(CityId, cityId_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
          DARABONBA_PTR_FROM_JSON(ProvinceId, provinceId_);
          DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_FROM_JSON(TrueName, trueName_);
        };
        AccountInfoSnapshotModel() = default ;
        AccountInfoSnapshotModel(const AccountInfoSnapshotModel &) = default ;
        AccountInfoSnapshotModel(AccountInfoSnapshotModel &&) = default ;
        AccountInfoSnapshotModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountInfoSnapshotModel() = default ;
        AccountInfoSnapshotModel& operator=(const AccountInfoSnapshotModel &) = default ;
        AccountInfoSnapshotModel& operator=(AccountInfoSnapshotModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->address2_ == nullptr && this->address3_ == nullptr && this->address4_ == nullptr && this->address5_ == nullptr && this->address6_ == nullptr
        && this->cityId_ == nullptr && this->cityName_ == nullptr && this->postCode_ == nullptr && this->provinceId_ == nullptr && this->provinceName_ == nullptr
        && this->trueName_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline AccountInfoSnapshotModel& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // address2 Field Functions 
        bool hasAddress2() const { return this->address2_ != nullptr;};
        void deleteAddress2() { this->address2_ = nullptr;};
        inline string getAddress2() const { DARABONBA_PTR_GET_DEFAULT(address2_, "") };
        inline AccountInfoSnapshotModel& setAddress2(string address2) { DARABONBA_PTR_SET_VALUE(address2_, address2) };


        // address3 Field Functions 
        bool hasAddress3() const { return this->address3_ != nullptr;};
        void deleteAddress3() { this->address3_ = nullptr;};
        inline string getAddress3() const { DARABONBA_PTR_GET_DEFAULT(address3_, "") };
        inline AccountInfoSnapshotModel& setAddress3(string address3) { DARABONBA_PTR_SET_VALUE(address3_, address3) };


        // address4 Field Functions 
        bool hasAddress4() const { return this->address4_ != nullptr;};
        void deleteAddress4() { this->address4_ = nullptr;};
        inline string getAddress4() const { DARABONBA_PTR_GET_DEFAULT(address4_, "") };
        inline AccountInfoSnapshotModel& setAddress4(string address4) { DARABONBA_PTR_SET_VALUE(address4_, address4) };


        // address5 Field Functions 
        bool hasAddress5() const { return this->address5_ != nullptr;};
        void deleteAddress5() { this->address5_ = nullptr;};
        inline string getAddress5() const { DARABONBA_PTR_GET_DEFAULT(address5_, "") };
        inline AccountInfoSnapshotModel& setAddress5(string address5) { DARABONBA_PTR_SET_VALUE(address5_, address5) };


        // address6 Field Functions 
        bool hasAddress6() const { return this->address6_ != nullptr;};
        void deleteAddress6() { this->address6_ = nullptr;};
        inline string getAddress6() const { DARABONBA_PTR_GET_DEFAULT(address6_, "") };
        inline AccountInfoSnapshotModel& setAddress6(string address6) { DARABONBA_PTR_SET_VALUE(address6_, address6) };


        // cityId Field Functions 
        bool hasCityId() const { return this->cityId_ != nullptr;};
        void deleteCityId() { this->cityId_ = nullptr;};
        inline string getCityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
        inline AccountInfoSnapshotModel& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline AccountInfoSnapshotModel& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // postCode Field Functions 
        bool hasPostCode() const { return this->postCode_ != nullptr;};
        void deletePostCode() { this->postCode_ = nullptr;};
        inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
        inline AccountInfoSnapshotModel& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


        // provinceId Field Functions 
        bool hasProvinceId() const { return this->provinceId_ != nullptr;};
        void deleteProvinceId() { this->provinceId_ = nullptr;};
        inline string getProvinceId() const { DARABONBA_PTR_GET_DEFAULT(provinceId_, "") };
        inline AccountInfoSnapshotModel& setProvinceId(string provinceId) { DARABONBA_PTR_SET_VALUE(provinceId_, provinceId) };


        // provinceName Field Functions 
        bool hasProvinceName() const { return this->provinceName_ != nullptr;};
        void deleteProvinceName() { this->provinceName_ = nullptr;};
        inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
        inline AccountInfoSnapshotModel& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


        // trueName Field Functions 
        bool hasTrueName() const { return this->trueName_ != nullptr;};
        void deleteTrueName() { this->trueName_ = nullptr;};
        inline string getTrueName() const { DARABONBA_PTR_GET_DEFAULT(trueName_, "") };
        inline AccountInfoSnapshotModel& setTrueName(string trueName) { DARABONBA_PTR_SET_VALUE(trueName_, trueName) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> address2_ {};
        shared_ptr<string> address3_ {};
        shared_ptr<string> address4_ {};
        shared_ptr<string> address5_ {};
        shared_ptr<string> address6_ {};
        shared_ptr<string> cityId_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> postCode_ {};
        shared_ptr<string> provinceId_ {};
        shared_ptr<string> provinceName_ {};
        shared_ptr<string> trueName_ {};
      };

      virtual bool empty() const override { return this->accountInfoSnapshotModel_ == nullptr
        && this->accountTaxSnapshotModel_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->infoType_ == nullptr && this->kpId_ == nullptr; };
      // accountInfoSnapshotModel Field Functions 
      bool hasAccountInfoSnapshotModel() const { return this->accountInfoSnapshotModel_ != nullptr;};
      void deleteAccountInfoSnapshotModel() { this->accountInfoSnapshotModel_ = nullptr;};
      inline const CustomerSnapshot::AccountInfoSnapshotModel & getAccountInfoSnapshotModel() const { DARABONBA_PTR_GET_CONST(accountInfoSnapshotModel_, CustomerSnapshot::AccountInfoSnapshotModel) };
      inline CustomerSnapshot::AccountInfoSnapshotModel getAccountInfoSnapshotModel() { DARABONBA_PTR_GET(accountInfoSnapshotModel_, CustomerSnapshot::AccountInfoSnapshotModel) };
      inline CustomerSnapshot& setAccountInfoSnapshotModel(const CustomerSnapshot::AccountInfoSnapshotModel & accountInfoSnapshotModel) { DARABONBA_PTR_SET_VALUE(accountInfoSnapshotModel_, accountInfoSnapshotModel) };
      inline CustomerSnapshot& setAccountInfoSnapshotModel(CustomerSnapshot::AccountInfoSnapshotModel && accountInfoSnapshotModel) { DARABONBA_PTR_SET_RVALUE(accountInfoSnapshotModel_, accountInfoSnapshotModel) };


      // accountTaxSnapshotModel Field Functions 
      bool hasAccountTaxSnapshotModel() const { return this->accountTaxSnapshotModel_ != nullptr;};
      void deleteAccountTaxSnapshotModel() { this->accountTaxSnapshotModel_ = nullptr;};
      inline const CustomerSnapshot::AccountTaxSnapshotModel & getAccountTaxSnapshotModel() const { DARABONBA_PTR_GET_CONST(accountTaxSnapshotModel_, CustomerSnapshot::AccountTaxSnapshotModel) };
      inline CustomerSnapshot::AccountTaxSnapshotModel getAccountTaxSnapshotModel() { DARABONBA_PTR_GET(accountTaxSnapshotModel_, CustomerSnapshot::AccountTaxSnapshotModel) };
      inline CustomerSnapshot& setAccountTaxSnapshotModel(const CustomerSnapshot::AccountTaxSnapshotModel & accountTaxSnapshotModel) { DARABONBA_PTR_SET_VALUE(accountTaxSnapshotModel_, accountTaxSnapshotModel) };
      inline CustomerSnapshot& setAccountTaxSnapshotModel(CustomerSnapshot::AccountTaxSnapshotModel && accountTaxSnapshotModel) { DARABONBA_PTR_SET_RVALUE(accountTaxSnapshotModel_, accountTaxSnapshotModel) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline CustomerSnapshot& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline CustomerSnapshot& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // infoType Field Functions 
      bool hasInfoType() const { return this->infoType_ != nullptr;};
      void deleteInfoType() { this->infoType_ = nullptr;};
      inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
      inline CustomerSnapshot& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


      // kpId Field Functions 
      bool hasKpId() const { return this->kpId_ != nullptr;};
      void deleteKpId() { this->kpId_ = nullptr;};
      inline int64_t getKpId() const { DARABONBA_PTR_GET_DEFAULT(kpId_, 0L) };
      inline CustomerSnapshot& setKpId(int64_t kpId) { DARABONBA_PTR_SET_VALUE(kpId_, kpId) };


    protected:
      shared_ptr<CustomerSnapshot::AccountInfoSnapshotModel> accountInfoSnapshotModel_ {};
      shared_ptr<CustomerSnapshot::AccountTaxSnapshotModel> accountTaxSnapshotModel_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> infoType_ {};
      shared_ptr<int64_t> kpId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->customerSnapshot_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FindCustomerSnapshotResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customerSnapshot Field Functions 
    bool hasCustomerSnapshot() const { return this->customerSnapshot_ != nullptr;};
    void deleteCustomerSnapshot() { this->customerSnapshot_ = nullptr;};
    inline const FindCustomerSnapshotResponseBody::CustomerSnapshot & getCustomerSnapshot() const { DARABONBA_PTR_GET_CONST(customerSnapshot_, FindCustomerSnapshotResponseBody::CustomerSnapshot) };
    inline FindCustomerSnapshotResponseBody::CustomerSnapshot getCustomerSnapshot() { DARABONBA_PTR_GET(customerSnapshot_, FindCustomerSnapshotResponseBody::CustomerSnapshot) };
    inline FindCustomerSnapshotResponseBody& setCustomerSnapshot(const FindCustomerSnapshotResponseBody::CustomerSnapshot & customerSnapshot) { DARABONBA_PTR_SET_VALUE(customerSnapshot_, customerSnapshot) };
    inline FindCustomerSnapshotResponseBody& setCustomerSnapshot(FindCustomerSnapshotResponseBody::CustomerSnapshot && customerSnapshot) { DARABONBA_PTR_SET_RVALUE(customerSnapshot_, customerSnapshot) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindCustomerSnapshotResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindCustomerSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindCustomerSnapshotResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FindCustomerSnapshotResponseBody::CustomerSnapshot> customerSnapshot_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
