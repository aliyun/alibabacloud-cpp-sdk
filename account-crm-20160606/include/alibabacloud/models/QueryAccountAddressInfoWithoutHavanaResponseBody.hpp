// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTADDRESSINFOWITHOUTHAVANARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTADDRESSINFOWITHOUTHAVANARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountAddressInfoWithoutHavanaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountAddressInfoWithoutHavanaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountAddressInfoWithoutHavanaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccountAddressInfoWithoutHavanaResponseBody() = default ;
    QueryAccountAddressInfoWithoutHavanaResponseBody(const QueryAccountAddressInfoWithoutHavanaResponseBody &) = default ;
    QueryAccountAddressInfoWithoutHavanaResponseBody(QueryAccountAddressInfoWithoutHavanaResponseBody &&) = default ;
    QueryAccountAddressInfoWithoutHavanaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountAddressInfoWithoutHavanaResponseBody() = default ;
    QueryAccountAddressInfoWithoutHavanaResponseBody& operator=(const QueryAccountAddressInfoWithoutHavanaResponseBody &) = default ;
    QueryAccountAddressInfoWithoutHavanaResponseBody& operator=(QueryAccountAddressInfoWithoutHavanaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProfileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProfileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccountAttr, accountAttr_);
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Address2, address2_);
        DARABONBA_PTR_TO_JSON(Address3, address3_);
        DARABONBA_PTR_TO_JSON(Address4, address4_);
        DARABONBA_PTR_TO_JSON(Address5, address5_);
        DARABONBA_PTR_TO_JSON(Address6, address6_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
        DARABONBA_PTR_TO_JSON(PostCode, postCode_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(TrueName, trueName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ProfileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountAttr, accountAttr_);
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Address2, address2_);
        DARABONBA_PTR_FROM_JSON(Address3, address3_);
        DARABONBA_PTR_FROM_JSON(Address4, address4_);
        DARABONBA_PTR_FROM_JSON(Address5, address5_);
        DARABONBA_PTR_FROM_JSON(Address6, address6_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
        DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(TrueName, trueName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
        && this->address_ == nullptr && this->address2_ == nullptr && this->address3_ == nullptr && this->address4_ == nullptr && this->address5_ == nullptr
        && this->address6_ == nullptr && this->city_ == nullptr && this->havanaId_ == nullptr && this->postCode_ == nullptr && this->province_ == nullptr
        && this->trueName_ == nullptr && this->version_ == nullptr; };
      // accountAttr Field Functions 
      bool hasAccountAttr() const { return this->accountAttr_ != nullptr;};
      void deleteAccountAttr() { this->accountAttr_ = nullptr;};
      inline string getAccountAttr() const { DARABONBA_PTR_GET_DEFAULT(accountAttr_, "") };
      inline ProfileInfo& setAccountAttr(string accountAttr) { DARABONBA_PTR_SET_VALUE(accountAttr_, accountAttr) };


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


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline const ProfileInfo::City & getCity() const { DARABONBA_PTR_GET_CONST(city_, ProfileInfo::City) };
      inline ProfileInfo::City getCity() { DARABONBA_PTR_GET(city_, ProfileInfo::City) };
      inline ProfileInfo& setCity(const ProfileInfo::City & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
      inline ProfileInfo& setCity(ProfileInfo::City && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


      // havanaId Field Functions 
      bool hasHavanaId() const { return this->havanaId_ != nullptr;};
      void deleteHavanaId() { this->havanaId_ = nullptr;};
      inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
      inline ProfileInfo& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


      // postCode Field Functions 
      bool hasPostCode() const { return this->postCode_ != nullptr;};
      void deletePostCode() { this->postCode_ = nullptr;};
      inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
      inline ProfileInfo& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline const ProfileInfo::Province & getProvince() const { DARABONBA_PTR_GET_CONST(province_, ProfileInfo::Province) };
      inline ProfileInfo::Province getProvince() { DARABONBA_PTR_GET(province_, ProfileInfo::Province) };
      inline ProfileInfo& setProvince(const ProfileInfo::Province & province) { DARABONBA_PTR_SET_VALUE(province_, province) };
      inline ProfileInfo& setProvince(ProfileInfo::Province && province) { DARABONBA_PTR_SET_RVALUE(province_, province) };


      // trueName Field Functions 
      bool hasTrueName() const { return this->trueName_ != nullptr;};
      void deleteTrueName() { this->trueName_ = nullptr;};
      inline string getTrueName() const { DARABONBA_PTR_GET_DEFAULT(trueName_, "") };
      inline ProfileInfo& setTrueName(string trueName) { DARABONBA_PTR_SET_VALUE(trueName_, trueName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ProfileInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> accountAttr_ {};
      shared_ptr<string> address_ {};
      shared_ptr<string> address2_ {};
      shared_ptr<string> address3_ {};
      shared_ptr<string> address4_ {};
      shared_ptr<string> address5_ {};
      shared_ptr<string> address6_ {};
      shared_ptr<ProfileInfo::City> city_ {};
      shared_ptr<string> havanaId_ {};
      shared_ptr<string> postCode_ {};
      shared_ptr<ProfileInfo::Province> province_ {};
      shared_ptr<string> trueName_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->profileInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // profileInfo Field Functions 
    bool hasProfileInfo() const { return this->profileInfo_ != nullptr;};
    void deleteProfileInfo() { this->profileInfo_ = nullptr;};
    inline const QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo & getProfileInfo() const { DARABONBA_PTR_GET_CONST(profileInfo_, QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo) };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo getProfileInfo() { DARABONBA_PTR_GET(profileInfo_, QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo) };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody& setProfileInfo(const QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo & profileInfo) { DARABONBA_PTR_SET_VALUE(profileInfo_, profileInfo) };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody& setProfileInfo(QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo && profileInfo) { DARABONBA_PTR_SET_RVALUE(profileInfo_, profileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccountAddressInfoWithoutHavanaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryAccountAddressInfoWithoutHavanaResponseBody::ProfileInfo> profileInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
