// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTPROFILEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTPROFILEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountProfileInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountProfileInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountProfileInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAccountProfileInfoResponseBody() = default ;
    QueryAccountProfileInfoResponseBody(const QueryAccountProfileInfoResponseBody &) = default ;
    QueryAccountProfileInfoResponseBody(QueryAccountProfileInfoResponseBody &&) = default ;
    QueryAccountProfileInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountProfileInfoResponseBody() = default ;
    QueryAccountProfileInfoResponseBody& operator=(const QueryAccountProfileInfoResponseBody &) = default ;
    QueryAccountProfileInfoResponseBody& operator=(QueryAccountProfileInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProfileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProfileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccountAttr, accountAttr_);
        DARABONBA_PTR_TO_JSON(AccountCertifyType, accountCertifyType_);
        DARABONBA_PTR_TO_JSON(ActiveNotSetMobile, activeNotSetMobile_);
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Address2, address2_);
        DARABONBA_PTR_TO_JSON(Address3, address3_);
        DARABONBA_PTR_TO_JSON(Address4, address4_);
        DARABONBA_PTR_TO_JSON(Address5, address5_);
        DARABONBA_PTR_TO_JSON(Address6, address6_);
        DARABONBA_PTR_TO_JSON(AlipayAccount, alipayAccount_);
        DARABONBA_PTR_TO_JSON(AlipayUid, alipayUid_);
        DARABONBA_PTR_TO_JSON(AliyunID, aliyunID_);
        DARABONBA_PTR_TO_JSON(AliyunPK, aliyunPK_);
        DARABONBA_PTR_TO_JSON(AuthAlipay, authAlipay_);
        DARABONBA_PTR_TO_JSON(AuthDomainUserId, authDomainUserId_);
        DARABONBA_PTR_TO_JSON(B2bhid, b2bhid_);
        DARABONBA_PTR_TO_JSON(BankId, bankId_);
        DARABONBA_PTR_TO_JSON(BankName, bankName_);
        DARABONBA_PTR_TO_JSON(BeiAnAuthCId, beiAnAuthCId_);
        DARABONBA_PTR_TO_JSON(BeiAnIcpNumber, beiAnIcpNumber_);
        DARABONBA_PTR_TO_JSON(BeiAnMobile, beiAnMobile_);
        DARABONBA_PTR_TO_JSON(BindAlipayNo, bindAlipayNo_);
        DARABONBA_PTR_TO_JSON(CertType, certType_);
        DARABONBA_PTR_TO_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_TO_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(ContactMethod, contactMethod_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(District, district_);
        DARABONBA_PTR_TO_JSON(Eid, eid_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Fax, fax_);
        DARABONBA_PTR_TO_JSON(FirstName, firstName_);
        DARABONBA_PTR_TO_JSON(Fyl, fyl_);
        DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
        DARABONBA_PTR_TO_JSON(Head, head_);
        DARABONBA_PTR_TO_JSON(HeadUrl, headUrl_);
        DARABONBA_PTR_TO_JSON(IDNumber, IDNumber_);
        DARABONBA_PTR_TO_JSON(IsBankIDAuth, isBankIDAuth_);
        DARABONBA_PTR_TO_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_TO_JSON(LastName, lastName_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(NationalityCode, nationalityCode_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(Own, own_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(PostCode, postCode_);
        DARABONBA_PTR_TO_JSON(PreferredLanguage, preferredLanguage_);
        DARABONBA_PTR_TO_JSON(ProcessingEnterpriseCertify, processingEnterpriseCertify_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(RegisterIP, registerIP_);
        DARABONBA_PTR_TO_JSON(SecurityMobile, securityMobile_);
        DARABONBA_PTR_TO_JSON(SecurityQuestionExists, securityQuestionExists_);
        DARABONBA_PTR_TO_JSON(SelfServicingBusinessRegNum, selfServicingBusinessRegNum_);
        DARABONBA_PTR_TO_JSON(SelfServicingIdentificationNum, selfServicingIdentificationNum_);
        DARABONBA_PTR_TO_JSON(ShowNickName, showNickName_);
        DARABONBA_PTR_TO_JSON(Src, src_);
        DARABONBA_PTR_TO_JSON(TaobaoAccount, taobaoAccount_);
        DARABONBA_PTR_TO_JSON(TaobaoNickFromHavana, taobaoNickFromHavana_);
        DARABONBA_PTR_TO_JSON(Tbhid, tbhid_);
        DARABONBA_PTR_TO_JSON(TrueName, trueName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(YahooEmail, yahooEmail_);
      };
      friend void from_json(const Darabonba::Json& j, ProfileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountAttr, accountAttr_);
        DARABONBA_PTR_FROM_JSON(AccountCertifyType, accountCertifyType_);
        DARABONBA_PTR_FROM_JSON(ActiveNotSetMobile, activeNotSetMobile_);
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Address2, address2_);
        DARABONBA_PTR_FROM_JSON(Address3, address3_);
        DARABONBA_PTR_FROM_JSON(Address4, address4_);
        DARABONBA_PTR_FROM_JSON(Address5, address5_);
        DARABONBA_PTR_FROM_JSON(Address6, address6_);
        DARABONBA_PTR_FROM_JSON(AlipayAccount, alipayAccount_);
        DARABONBA_PTR_FROM_JSON(AlipayUid, alipayUid_);
        DARABONBA_PTR_FROM_JSON(AliyunID, aliyunID_);
        DARABONBA_PTR_FROM_JSON(AliyunPK, aliyunPK_);
        DARABONBA_PTR_FROM_JSON(AuthAlipay, authAlipay_);
        DARABONBA_PTR_FROM_JSON(AuthDomainUserId, authDomainUserId_);
        DARABONBA_PTR_FROM_JSON(B2bhid, b2bhid_);
        DARABONBA_PTR_FROM_JSON(BankId, bankId_);
        DARABONBA_PTR_FROM_JSON(BankName, bankName_);
        DARABONBA_PTR_FROM_JSON(BeiAnAuthCId, beiAnAuthCId_);
        DARABONBA_PTR_FROM_JSON(BeiAnIcpNumber, beiAnIcpNumber_);
        DARABONBA_PTR_FROM_JSON(BeiAnMobile, beiAnMobile_);
        DARABONBA_PTR_FROM_JSON(BindAlipayNo, bindAlipayNo_);
        DARABONBA_PTR_FROM_JSON(CertType, certType_);
        DARABONBA_PTR_FROM_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_FROM_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(ContactMethod, contactMethod_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(District, district_);
        DARABONBA_PTR_FROM_JSON(Eid, eid_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Fax, fax_);
        DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
        DARABONBA_PTR_FROM_JSON(Fyl, fyl_);
        DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
        DARABONBA_PTR_FROM_JSON(Head, head_);
        DARABONBA_PTR_FROM_JSON(HeadUrl, headUrl_);
        DARABONBA_PTR_FROM_JSON(IDNumber, IDNumber_);
        DARABONBA_PTR_FROM_JSON(IsBankIDAuth, isBankIDAuth_);
        DARABONBA_PTR_FROM_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_FROM_JSON(LastName, lastName_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(NationalityCode, nationalityCode_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(Own, own_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
        DARABONBA_PTR_FROM_JSON(PreferredLanguage, preferredLanguage_);
        DARABONBA_PTR_FROM_JSON(ProcessingEnterpriseCertify, processingEnterpriseCertify_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(RegisterIP, registerIP_);
        DARABONBA_PTR_FROM_JSON(SecurityMobile, securityMobile_);
        DARABONBA_PTR_FROM_JSON(SecurityQuestionExists, securityQuestionExists_);
        DARABONBA_PTR_FROM_JSON(SelfServicingBusinessRegNum, selfServicingBusinessRegNum_);
        DARABONBA_PTR_FROM_JSON(SelfServicingIdentificationNum, selfServicingIdentificationNum_);
        DARABONBA_PTR_FROM_JSON(ShowNickName, showNickName_);
        DARABONBA_PTR_FROM_JSON(Src, src_);
        DARABONBA_PTR_FROM_JSON(TaobaoAccount, taobaoAccount_);
        DARABONBA_PTR_FROM_JSON(TaobaoNickFromHavana, taobaoNickFromHavana_);
        DARABONBA_PTR_FROM_JSON(Tbhid, tbhid_);
        DARABONBA_PTR_FROM_JSON(TrueName, trueName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(YahooEmail, yahooEmail_);
      };
      ProfileInfo() = default ;
      ProfileInfo(const ProfileInfo &) = default ;
      ProfileInfo(ProfileInfo &&) = default ;
      ProfileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProfileInfo() = default ;
      ProfileInfo& operator=(const ProfileInfo &) = default ;
      ProfileInfo& operator=(ProfileInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Province : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Province& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Province& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Province() = default ;
        Province(const Province &) = default ;
        Province(Province &&) = default ;
        Province(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Province() = default ;
        Province& operator=(const Province &) = default ;
        Province& operator=(Province &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Province& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Province& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class District : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const District& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, District& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        District() = default ;
        District(const District &) = default ;
        District(District &&) = default ;
        District(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~District() = default ;
        District& operator=(const District &) = default ;
        District& operator=(District &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline District& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline District& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class City : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const City& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, City& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        City() = default ;
        City(const City &) = default ;
        City(City &&) = default ;
        City(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~City() = default ;
        City& operator=(const City &) = default ;
        City& operator=(City &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline City& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline City& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->accountAttr_ == nullptr
        && this->accountCertifyType_ == nullptr && this->activeNotSetMobile_ == nullptr && this->address_ == nullptr && this->address2_ == nullptr && this->address3_ == nullptr
        && this->address4_ == nullptr && this->address5_ == nullptr && this->address6_ == nullptr && this->alipayAccount_ == nullptr && this->alipayUid_ == nullptr
        && this->aliyunID_ == nullptr && this->aliyunPK_ == nullptr && this->authAlipay_ == nullptr && this->authDomainUserId_ == nullptr && this->b2bhid_ == nullptr
        && this->bankId_ == nullptr && this->bankName_ == nullptr && this->beiAnAuthCId_ == nullptr && this->beiAnIcpNumber_ == nullptr && this->beiAnMobile_ == nullptr
        && this->bindAlipayNo_ == nullptr && this->certType_ == nullptr && this->certifiedFrom_ == nullptr && this->certifiedTime_ == nullptr && this->city_ == nullptr
        && this->contactMethod_ == nullptr && this->createTime_ == nullptr && this->district_ == nullptr && this->eid_ == nullptr && this->email_ == nullptr
        && this->fax_ == nullptr && this->firstName_ == nullptr && this->fyl_ == nullptr && this->havanaId_ == nullptr && this->head_ == nullptr
        && this->headUrl_ == nullptr && this->IDNumber_ == nullptr && this->isBankIDAuth_ == nullptr && this->isCertified_ == nullptr && this->lastName_ == nullptr
        && this->mobile_ == nullptr && this->nationalityCode_ == nullptr && this->nickName_ == nullptr && this->own_ == nullptr && this->phone_ == nullptr
        && this->postCode_ == nullptr && this->preferredLanguage_ == nullptr && this->processingEnterpriseCertify_ == nullptr && this->province_ == nullptr && this->registerIP_ == nullptr
        && this->securityMobile_ == nullptr && this->securityQuestionExists_ == nullptr && this->selfServicingBusinessRegNum_ == nullptr && this->selfServicingIdentificationNum_ == nullptr && this->showNickName_ == nullptr
        && this->src_ == nullptr && this->taobaoAccount_ == nullptr && this->taobaoNickFromHavana_ == nullptr && this->tbhid_ == nullptr && this->trueName_ == nullptr
        && this->updateTime_ == nullptr && this->yahooEmail_ == nullptr; };
      // accountAttr Field Functions 
      bool hasAccountAttr() const { return this->accountAttr_ != nullptr;};
      void deleteAccountAttr() { this->accountAttr_ = nullptr;};
      inline string getAccountAttr() const { DARABONBA_PTR_GET_DEFAULT(accountAttr_, "") };
      inline ProfileInfo& setAccountAttr(string accountAttr) { DARABONBA_PTR_SET_VALUE(accountAttr_, accountAttr) };


      // accountCertifyType Field Functions 
      bool hasAccountCertifyType() const { return this->accountCertifyType_ != nullptr;};
      void deleteAccountCertifyType() { this->accountCertifyType_ = nullptr;};
      inline string getAccountCertifyType() const { DARABONBA_PTR_GET_DEFAULT(accountCertifyType_, "") };
      inline ProfileInfo& setAccountCertifyType(string accountCertifyType) { DARABONBA_PTR_SET_VALUE(accountCertifyType_, accountCertifyType) };


      // activeNotSetMobile Field Functions 
      bool hasActiveNotSetMobile() const { return this->activeNotSetMobile_ != nullptr;};
      void deleteActiveNotSetMobile() { this->activeNotSetMobile_ = nullptr;};
      inline string getActiveNotSetMobile() const { DARABONBA_PTR_GET_DEFAULT(activeNotSetMobile_, "") };
      inline ProfileInfo& setActiveNotSetMobile(string activeNotSetMobile) { DARABONBA_PTR_SET_VALUE(activeNotSetMobile_, activeNotSetMobile) };


      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline ProfileInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // address2 Field Functions 
      bool hasAddress2() const { return this->address2_ != nullptr;};
      void deleteAddress2() { this->address2_ = nullptr;};
      inline string getAddress2() const { DARABONBA_PTR_GET_DEFAULT(address2_, "") };
      inline ProfileInfo& setAddress2(string address2) { DARABONBA_PTR_SET_VALUE(address2_, address2) };


      // address3 Field Functions 
      bool hasAddress3() const { return this->address3_ != nullptr;};
      void deleteAddress3() { this->address3_ = nullptr;};
      inline string getAddress3() const { DARABONBA_PTR_GET_DEFAULT(address3_, "") };
      inline ProfileInfo& setAddress3(string address3) { DARABONBA_PTR_SET_VALUE(address3_, address3) };


      // address4 Field Functions 
      bool hasAddress4() const { return this->address4_ != nullptr;};
      void deleteAddress4() { this->address4_ = nullptr;};
      inline string getAddress4() const { DARABONBA_PTR_GET_DEFAULT(address4_, "") };
      inline ProfileInfo& setAddress4(string address4) { DARABONBA_PTR_SET_VALUE(address4_, address4) };


      // address5 Field Functions 
      bool hasAddress5() const { return this->address5_ != nullptr;};
      void deleteAddress5() { this->address5_ = nullptr;};
      inline string getAddress5() const { DARABONBA_PTR_GET_DEFAULT(address5_, "") };
      inline ProfileInfo& setAddress5(string address5) { DARABONBA_PTR_SET_VALUE(address5_, address5) };


      // address6 Field Functions 
      bool hasAddress6() const { return this->address6_ != nullptr;};
      void deleteAddress6() { this->address6_ = nullptr;};
      inline string getAddress6() const { DARABONBA_PTR_GET_DEFAULT(address6_, "") };
      inline ProfileInfo& setAddress6(string address6) { DARABONBA_PTR_SET_VALUE(address6_, address6) };


      // alipayAccount Field Functions 
      bool hasAlipayAccount() const { return this->alipayAccount_ != nullptr;};
      void deleteAlipayAccount() { this->alipayAccount_ = nullptr;};
      inline string getAlipayAccount() const { DARABONBA_PTR_GET_DEFAULT(alipayAccount_, "") };
      inline ProfileInfo& setAlipayAccount(string alipayAccount) { DARABONBA_PTR_SET_VALUE(alipayAccount_, alipayAccount) };


      // alipayUid Field Functions 
      bool hasAlipayUid() const { return this->alipayUid_ != nullptr;};
      void deleteAlipayUid() { this->alipayUid_ = nullptr;};
      inline string getAlipayUid() const { DARABONBA_PTR_GET_DEFAULT(alipayUid_, "") };
      inline ProfileInfo& setAlipayUid(string alipayUid) { DARABONBA_PTR_SET_VALUE(alipayUid_, alipayUid) };


      // aliyunID Field Functions 
      bool hasAliyunID() const { return this->aliyunID_ != nullptr;};
      void deleteAliyunID() { this->aliyunID_ = nullptr;};
      inline string getAliyunID() const { DARABONBA_PTR_GET_DEFAULT(aliyunID_, "") };
      inline ProfileInfo& setAliyunID(string aliyunID) { DARABONBA_PTR_SET_VALUE(aliyunID_, aliyunID) };


      // aliyunPK Field Functions 
      bool hasAliyunPK() const { return this->aliyunPK_ != nullptr;};
      void deleteAliyunPK() { this->aliyunPK_ = nullptr;};
      inline string getAliyunPK() const { DARABONBA_PTR_GET_DEFAULT(aliyunPK_, "") };
      inline ProfileInfo& setAliyunPK(string aliyunPK) { DARABONBA_PTR_SET_VALUE(aliyunPK_, aliyunPK) };


      // authAlipay Field Functions 
      bool hasAuthAlipay() const { return this->authAlipay_ != nullptr;};
      void deleteAuthAlipay() { this->authAlipay_ = nullptr;};
      inline string getAuthAlipay() const { DARABONBA_PTR_GET_DEFAULT(authAlipay_, "") };
      inline ProfileInfo& setAuthAlipay(string authAlipay) { DARABONBA_PTR_SET_VALUE(authAlipay_, authAlipay) };


      // authDomainUserId Field Functions 
      bool hasAuthDomainUserId() const { return this->authDomainUserId_ != nullptr;};
      void deleteAuthDomainUserId() { this->authDomainUserId_ = nullptr;};
      inline string getAuthDomainUserId() const { DARABONBA_PTR_GET_DEFAULT(authDomainUserId_, "") };
      inline ProfileInfo& setAuthDomainUserId(string authDomainUserId) { DARABONBA_PTR_SET_VALUE(authDomainUserId_, authDomainUserId) };


      // b2bhid Field Functions 
      bool hasB2bhid() const { return this->b2bhid_ != nullptr;};
      void deleteB2bhid() { this->b2bhid_ = nullptr;};
      inline string getB2bhid() const { DARABONBA_PTR_GET_DEFAULT(b2bhid_, "") };
      inline ProfileInfo& setB2bhid(string b2bhid) { DARABONBA_PTR_SET_VALUE(b2bhid_, b2bhid) };


      // bankId Field Functions 
      bool hasBankId() const { return this->bankId_ != nullptr;};
      void deleteBankId() { this->bankId_ = nullptr;};
      inline string getBankId() const { DARABONBA_PTR_GET_DEFAULT(bankId_, "") };
      inline ProfileInfo& setBankId(string bankId) { DARABONBA_PTR_SET_VALUE(bankId_, bankId) };


      // bankName Field Functions 
      bool hasBankName() const { return this->bankName_ != nullptr;};
      void deleteBankName() { this->bankName_ = nullptr;};
      inline string getBankName() const { DARABONBA_PTR_GET_DEFAULT(bankName_, "") };
      inline ProfileInfo& setBankName(string bankName) { DARABONBA_PTR_SET_VALUE(bankName_, bankName) };


      // beiAnAuthCId Field Functions 
      bool hasBeiAnAuthCId() const { return this->beiAnAuthCId_ != nullptr;};
      void deleteBeiAnAuthCId() { this->beiAnAuthCId_ = nullptr;};
      inline string getBeiAnAuthCId() const { DARABONBA_PTR_GET_DEFAULT(beiAnAuthCId_, "") };
      inline ProfileInfo& setBeiAnAuthCId(string beiAnAuthCId) { DARABONBA_PTR_SET_VALUE(beiAnAuthCId_, beiAnAuthCId) };


      // beiAnIcpNumber Field Functions 
      bool hasBeiAnIcpNumber() const { return this->beiAnIcpNumber_ != nullptr;};
      void deleteBeiAnIcpNumber() { this->beiAnIcpNumber_ = nullptr;};
      inline string getBeiAnIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(beiAnIcpNumber_, "") };
      inline ProfileInfo& setBeiAnIcpNumber(string beiAnIcpNumber) { DARABONBA_PTR_SET_VALUE(beiAnIcpNumber_, beiAnIcpNumber) };


      // beiAnMobile Field Functions 
      bool hasBeiAnMobile() const { return this->beiAnMobile_ != nullptr;};
      void deleteBeiAnMobile() { this->beiAnMobile_ = nullptr;};
      inline string getBeiAnMobile() const { DARABONBA_PTR_GET_DEFAULT(beiAnMobile_, "") };
      inline ProfileInfo& setBeiAnMobile(string beiAnMobile) { DARABONBA_PTR_SET_VALUE(beiAnMobile_, beiAnMobile) };


      // bindAlipayNo Field Functions 
      bool hasBindAlipayNo() const { return this->bindAlipayNo_ != nullptr;};
      void deleteBindAlipayNo() { this->bindAlipayNo_ = nullptr;};
      inline string getBindAlipayNo() const { DARABONBA_PTR_GET_DEFAULT(bindAlipayNo_, "") };
      inline ProfileInfo& setBindAlipayNo(string bindAlipayNo) { DARABONBA_PTR_SET_VALUE(bindAlipayNo_, bindAlipayNo) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline ProfileInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // certifiedFrom Field Functions 
      bool hasCertifiedFrom() const { return this->certifiedFrom_ != nullptr;};
      void deleteCertifiedFrom() { this->certifiedFrom_ = nullptr;};
      inline string getCertifiedFrom() const { DARABONBA_PTR_GET_DEFAULT(certifiedFrom_, "") };
      inline ProfileInfo& setCertifiedFrom(string certifiedFrom) { DARABONBA_PTR_SET_VALUE(certifiedFrom_, certifiedFrom) };


      // certifiedTime Field Functions 
      bool hasCertifiedTime() const { return this->certifiedTime_ != nullptr;};
      void deleteCertifiedTime() { this->certifiedTime_ = nullptr;};
      inline string getCertifiedTime() const { DARABONBA_PTR_GET_DEFAULT(certifiedTime_, "") };
      inline ProfileInfo& setCertifiedTime(string certifiedTime) { DARABONBA_PTR_SET_VALUE(certifiedTime_, certifiedTime) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline const ProfileInfo::City & getCity() const { DARABONBA_PTR_GET_CONST(city_, ProfileInfo::City) };
      inline ProfileInfo::City getCity() { DARABONBA_PTR_GET(city_, ProfileInfo::City) };
      inline ProfileInfo& setCity(const ProfileInfo::City & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
      inline ProfileInfo& setCity(ProfileInfo::City && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


      // contactMethod Field Functions 
      bool hasContactMethod() const { return this->contactMethod_ != nullptr;};
      void deleteContactMethod() { this->contactMethod_ = nullptr;};
      inline string getContactMethod() const { DARABONBA_PTR_GET_DEFAULT(contactMethod_, "") };
      inline ProfileInfo& setContactMethod(string contactMethod) { DARABONBA_PTR_SET_VALUE(contactMethod_, contactMethod) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProfileInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // district Field Functions 
      bool hasDistrict() const { return this->district_ != nullptr;};
      void deleteDistrict() { this->district_ = nullptr;};
      inline const ProfileInfo::District & getDistrict() const { DARABONBA_PTR_GET_CONST(district_, ProfileInfo::District) };
      inline ProfileInfo::District getDistrict() { DARABONBA_PTR_GET(district_, ProfileInfo::District) };
      inline ProfileInfo& setDistrict(const ProfileInfo::District & district) { DARABONBA_PTR_SET_VALUE(district_, district) };
      inline ProfileInfo& setDistrict(ProfileInfo::District && district) { DARABONBA_PTR_SET_RVALUE(district_, district) };


      // eid Field Functions 
      bool hasEid() const { return this->eid_ != nullptr;};
      void deleteEid() { this->eid_ = nullptr;};
      inline string getEid() const { DARABONBA_PTR_GET_DEFAULT(eid_, "") };
      inline ProfileInfo& setEid(string eid) { DARABONBA_PTR_SET_VALUE(eid_, eid) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline ProfileInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // fax Field Functions 
      bool hasFax() const { return this->fax_ != nullptr;};
      void deleteFax() { this->fax_ = nullptr;};
      inline string getFax() const { DARABONBA_PTR_GET_DEFAULT(fax_, "") };
      inline ProfileInfo& setFax(string fax) { DARABONBA_PTR_SET_VALUE(fax_, fax) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline ProfileInfo& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // fyl Field Functions 
      bool hasFyl() const { return this->fyl_ != nullptr;};
      void deleteFyl() { this->fyl_ = nullptr;};
      inline string getFyl() const { DARABONBA_PTR_GET_DEFAULT(fyl_, "") };
      inline ProfileInfo& setFyl(string fyl) { DARABONBA_PTR_SET_VALUE(fyl_, fyl) };


      // havanaId Field Functions 
      bool hasHavanaId() const { return this->havanaId_ != nullptr;};
      void deleteHavanaId() { this->havanaId_ = nullptr;};
      inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
      inline ProfileInfo& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


      // head Field Functions 
      bool hasHead() const { return this->head_ != nullptr;};
      void deleteHead() { this->head_ = nullptr;};
      inline string getHead() const { DARABONBA_PTR_GET_DEFAULT(head_, "") };
      inline ProfileInfo& setHead(string head) { DARABONBA_PTR_SET_VALUE(head_, head) };


      // headUrl Field Functions 
      bool hasHeadUrl() const { return this->headUrl_ != nullptr;};
      void deleteHeadUrl() { this->headUrl_ = nullptr;};
      inline string getHeadUrl() const { DARABONBA_PTR_GET_DEFAULT(headUrl_, "") };
      inline ProfileInfo& setHeadUrl(string headUrl) { DARABONBA_PTR_SET_VALUE(headUrl_, headUrl) };


      // IDNumber Field Functions 
      bool hasIDNumber() const { return this->IDNumber_ != nullptr;};
      void deleteIDNumber() { this->IDNumber_ = nullptr;};
      inline string getIDNumber() const { DARABONBA_PTR_GET_DEFAULT(IDNumber_, "") };
      inline ProfileInfo& setIDNumber(string IDNumber) { DARABONBA_PTR_SET_VALUE(IDNumber_, IDNumber) };


      // isBankIDAuth Field Functions 
      bool hasIsBankIDAuth() const { return this->isBankIDAuth_ != nullptr;};
      void deleteIsBankIDAuth() { this->isBankIDAuth_ = nullptr;};
      inline string getIsBankIDAuth() const { DARABONBA_PTR_GET_DEFAULT(isBankIDAuth_, "") };
      inline ProfileInfo& setIsBankIDAuth(string isBankIDAuth) { DARABONBA_PTR_SET_VALUE(isBankIDAuth_, isBankIDAuth) };


      // isCertified Field Functions 
      bool hasIsCertified() const { return this->isCertified_ != nullptr;};
      void deleteIsCertified() { this->isCertified_ = nullptr;};
      inline string getIsCertified() const { DARABONBA_PTR_GET_DEFAULT(isCertified_, "") };
      inline ProfileInfo& setIsCertified(string isCertified) { DARABONBA_PTR_SET_VALUE(isCertified_, isCertified) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline ProfileInfo& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline ProfileInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // nationalityCode Field Functions 
      bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
      void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
      inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
      inline ProfileInfo& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline ProfileInfo& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // own Field Functions 
      bool hasOwn() const { return this->own_ != nullptr;};
      void deleteOwn() { this->own_ = nullptr;};
      inline string getOwn() const { DARABONBA_PTR_GET_DEFAULT(own_, "") };
      inline ProfileInfo& setOwn(string own) { DARABONBA_PTR_SET_VALUE(own_, own) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline ProfileInfo& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // postCode Field Functions 
      bool hasPostCode() const { return this->postCode_ != nullptr;};
      void deletePostCode() { this->postCode_ = nullptr;};
      inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
      inline ProfileInfo& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


      // preferredLanguage Field Functions 
      bool hasPreferredLanguage() const { return this->preferredLanguage_ != nullptr;};
      void deletePreferredLanguage() { this->preferredLanguage_ = nullptr;};
      inline string getPreferredLanguage() const { DARABONBA_PTR_GET_DEFAULT(preferredLanguage_, "") };
      inline ProfileInfo& setPreferredLanguage(string preferredLanguage) { DARABONBA_PTR_SET_VALUE(preferredLanguage_, preferredLanguage) };


      // processingEnterpriseCertify Field Functions 
      bool hasProcessingEnterpriseCertify() const { return this->processingEnterpriseCertify_ != nullptr;};
      void deleteProcessingEnterpriseCertify() { this->processingEnterpriseCertify_ = nullptr;};
      inline bool getProcessingEnterpriseCertify() const { DARABONBA_PTR_GET_DEFAULT(processingEnterpriseCertify_, false) };
      inline ProfileInfo& setProcessingEnterpriseCertify(bool processingEnterpriseCertify) { DARABONBA_PTR_SET_VALUE(processingEnterpriseCertify_, processingEnterpriseCertify) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline const ProfileInfo::Province & getProvince() const { DARABONBA_PTR_GET_CONST(province_, ProfileInfo::Province) };
      inline ProfileInfo::Province getProvince() { DARABONBA_PTR_GET(province_, ProfileInfo::Province) };
      inline ProfileInfo& setProvince(const ProfileInfo::Province & province) { DARABONBA_PTR_SET_VALUE(province_, province) };
      inline ProfileInfo& setProvince(ProfileInfo::Province && province) { DARABONBA_PTR_SET_RVALUE(province_, province) };


      // registerIP Field Functions 
      bool hasRegisterIP() const { return this->registerIP_ != nullptr;};
      void deleteRegisterIP() { this->registerIP_ = nullptr;};
      inline string getRegisterIP() const { DARABONBA_PTR_GET_DEFAULT(registerIP_, "") };
      inline ProfileInfo& setRegisterIP(string registerIP) { DARABONBA_PTR_SET_VALUE(registerIP_, registerIP) };


      // securityMobile Field Functions 
      bool hasSecurityMobile() const { return this->securityMobile_ != nullptr;};
      void deleteSecurityMobile() { this->securityMobile_ = nullptr;};
      inline string getSecurityMobile() const { DARABONBA_PTR_GET_DEFAULT(securityMobile_, "") };
      inline ProfileInfo& setSecurityMobile(string securityMobile) { DARABONBA_PTR_SET_VALUE(securityMobile_, securityMobile) };


      // securityQuestionExists Field Functions 
      bool hasSecurityQuestionExists() const { return this->securityQuestionExists_ != nullptr;};
      void deleteSecurityQuestionExists() { this->securityQuestionExists_ = nullptr;};
      inline bool getSecurityQuestionExists() const { DARABONBA_PTR_GET_DEFAULT(securityQuestionExists_, false) };
      inline ProfileInfo& setSecurityQuestionExists(bool securityQuestionExists) { DARABONBA_PTR_SET_VALUE(securityQuestionExists_, securityQuestionExists) };


      // selfServicingBusinessRegNum Field Functions 
      bool hasSelfServicingBusinessRegNum() const { return this->selfServicingBusinessRegNum_ != nullptr;};
      void deleteSelfServicingBusinessRegNum() { this->selfServicingBusinessRegNum_ = nullptr;};
      inline string getSelfServicingBusinessRegNum() const { DARABONBA_PTR_GET_DEFAULT(selfServicingBusinessRegNum_, "") };
      inline ProfileInfo& setSelfServicingBusinessRegNum(string selfServicingBusinessRegNum) { DARABONBA_PTR_SET_VALUE(selfServicingBusinessRegNum_, selfServicingBusinessRegNum) };


      // selfServicingIdentificationNum Field Functions 
      bool hasSelfServicingIdentificationNum() const { return this->selfServicingIdentificationNum_ != nullptr;};
      void deleteSelfServicingIdentificationNum() { this->selfServicingIdentificationNum_ = nullptr;};
      inline string getSelfServicingIdentificationNum() const { DARABONBA_PTR_GET_DEFAULT(selfServicingIdentificationNum_, "") };
      inline ProfileInfo& setSelfServicingIdentificationNum(string selfServicingIdentificationNum) { DARABONBA_PTR_SET_VALUE(selfServicingIdentificationNum_, selfServicingIdentificationNum) };


      // showNickName Field Functions 
      bool hasShowNickName() const { return this->showNickName_ != nullptr;};
      void deleteShowNickName() { this->showNickName_ = nullptr;};
      inline string getShowNickName() const { DARABONBA_PTR_GET_DEFAULT(showNickName_, "") };
      inline ProfileInfo& setShowNickName(string showNickName) { DARABONBA_PTR_SET_VALUE(showNickName_, showNickName) };


      // src Field Functions 
      bool hasSrc() const { return this->src_ != nullptr;};
      void deleteSrc() { this->src_ = nullptr;};
      inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
      inline ProfileInfo& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


      // taobaoAccount Field Functions 
      bool hasTaobaoAccount() const { return this->taobaoAccount_ != nullptr;};
      void deleteTaobaoAccount() { this->taobaoAccount_ = nullptr;};
      inline string getTaobaoAccount() const { DARABONBA_PTR_GET_DEFAULT(taobaoAccount_, "") };
      inline ProfileInfo& setTaobaoAccount(string taobaoAccount) { DARABONBA_PTR_SET_VALUE(taobaoAccount_, taobaoAccount) };


      // taobaoNickFromHavana Field Functions 
      bool hasTaobaoNickFromHavana() const { return this->taobaoNickFromHavana_ != nullptr;};
      void deleteTaobaoNickFromHavana() { this->taobaoNickFromHavana_ = nullptr;};
      inline string getTaobaoNickFromHavana() const { DARABONBA_PTR_GET_DEFAULT(taobaoNickFromHavana_, "") };
      inline ProfileInfo& setTaobaoNickFromHavana(string taobaoNickFromHavana) { DARABONBA_PTR_SET_VALUE(taobaoNickFromHavana_, taobaoNickFromHavana) };


      // tbhid Field Functions 
      bool hasTbhid() const { return this->tbhid_ != nullptr;};
      void deleteTbhid() { this->tbhid_ = nullptr;};
      inline string getTbhid() const { DARABONBA_PTR_GET_DEFAULT(tbhid_, "") };
      inline ProfileInfo& setTbhid(string tbhid) { DARABONBA_PTR_SET_VALUE(tbhid_, tbhid) };


      // trueName Field Functions 
      bool hasTrueName() const { return this->trueName_ != nullptr;};
      void deleteTrueName() { this->trueName_ = nullptr;};
      inline string getTrueName() const { DARABONBA_PTR_GET_DEFAULT(trueName_, "") };
      inline ProfileInfo& setTrueName(string trueName) { DARABONBA_PTR_SET_VALUE(trueName_, trueName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ProfileInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // yahooEmail Field Functions 
      bool hasYahooEmail() const { return this->yahooEmail_ != nullptr;};
      void deleteYahooEmail() { this->yahooEmail_ = nullptr;};
      inline string getYahooEmail() const { DARABONBA_PTR_GET_DEFAULT(yahooEmail_, "") };
      inline ProfileInfo& setYahooEmail(string yahooEmail) { DARABONBA_PTR_SET_VALUE(yahooEmail_, yahooEmail) };


    protected:
      shared_ptr<string> accountAttr_ {};
      shared_ptr<string> accountCertifyType_ {};
      shared_ptr<string> activeNotSetMobile_ {};
      shared_ptr<string> address_ {};
      shared_ptr<string> address2_ {};
      shared_ptr<string> address3_ {};
      shared_ptr<string> address4_ {};
      shared_ptr<string> address5_ {};
      shared_ptr<string> address6_ {};
      shared_ptr<string> alipayAccount_ {};
      shared_ptr<string> alipayUid_ {};
      shared_ptr<string> aliyunID_ {};
      shared_ptr<string> aliyunPK_ {};
      shared_ptr<string> authAlipay_ {};
      shared_ptr<string> authDomainUserId_ {};
      shared_ptr<string> b2bhid_ {};
      shared_ptr<string> bankId_ {};
      shared_ptr<string> bankName_ {};
      shared_ptr<string> beiAnAuthCId_ {};
      shared_ptr<string> beiAnIcpNumber_ {};
      shared_ptr<string> beiAnMobile_ {};
      shared_ptr<string> bindAlipayNo_ {};
      shared_ptr<string> certType_ {};
      shared_ptr<string> certifiedFrom_ {};
      shared_ptr<string> certifiedTime_ {};
      shared_ptr<ProfileInfo::City> city_ {};
      shared_ptr<string> contactMethod_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<ProfileInfo::District> district_ {};
      shared_ptr<string> eid_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> fax_ {};
      shared_ptr<string> firstName_ {};
      shared_ptr<string> fyl_ {};
      shared_ptr<string> havanaId_ {};
      shared_ptr<string> head_ {};
      shared_ptr<string> headUrl_ {};
      shared_ptr<string> IDNumber_ {};
      shared_ptr<string> isBankIDAuth_ {};
      shared_ptr<string> isCertified_ {};
      shared_ptr<string> lastName_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> nationalityCode_ {};
      shared_ptr<string> nickName_ {};
      shared_ptr<string> own_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> postCode_ {};
      shared_ptr<string> preferredLanguage_ {};
      shared_ptr<bool> processingEnterpriseCertify_ {};
      shared_ptr<ProfileInfo::Province> province_ {};
      shared_ptr<string> registerIP_ {};
      shared_ptr<string> securityMobile_ {};
      shared_ptr<bool> securityQuestionExists_ {};
      shared_ptr<string> selfServicingBusinessRegNum_ {};
      shared_ptr<string> selfServicingIdentificationNum_ {};
      shared_ptr<string> showNickName_ {};
      shared_ptr<string> src_ {};
      shared_ptr<string> taobaoAccount_ {};
      shared_ptr<string> taobaoNickFromHavana_ {};
      shared_ptr<string> tbhid_ {};
      shared_ptr<string> trueName_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> yahooEmail_ {};
    };

    virtual bool empty() const override { return this->profileInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // profileInfo Field Functions 
    bool hasProfileInfo() const { return this->profileInfo_ != nullptr;};
    void deleteProfileInfo() { this->profileInfo_ = nullptr;};
    inline const QueryAccountProfileInfoResponseBody::ProfileInfo & getProfileInfo() const { DARABONBA_PTR_GET_CONST(profileInfo_, QueryAccountProfileInfoResponseBody::ProfileInfo) };
    inline QueryAccountProfileInfoResponseBody::ProfileInfo getProfileInfo() { DARABONBA_PTR_GET(profileInfo_, QueryAccountProfileInfoResponseBody::ProfileInfo) };
    inline QueryAccountProfileInfoResponseBody& setProfileInfo(const QueryAccountProfileInfoResponseBody::ProfileInfo & profileInfo) { DARABONBA_PTR_SET_VALUE(profileInfo_, profileInfo) };
    inline QueryAccountProfileInfoResponseBody& setProfileInfo(QueryAccountProfileInfoResponseBody::ProfileInfo && profileInfo) { DARABONBA_PTR_SET_RVALUE(profileInfo_, profileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountProfileInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryAccountProfileInfoResponseBody::ProfileInfo> profileInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
