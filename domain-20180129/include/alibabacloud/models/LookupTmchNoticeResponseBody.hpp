// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Claims, claims_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Claims, claims_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LookupTmchNoticeResponseBody() = default ;
    LookupTmchNoticeResponseBody(const LookupTmchNoticeResponseBody &) = default ;
    LookupTmchNoticeResponseBody(LookupTmchNoticeResponseBody &&) = default ;
    LookupTmchNoticeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBody() = default ;
    LookupTmchNoticeResponseBody& operator=(const LookupTmchNoticeResponseBody &) = default ;
    LookupTmchNoticeResponseBody& operator=(LookupTmchNoticeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Claims : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Claims& obj) { 
        DARABONBA_PTR_TO_JSON(Claim, claim_);
      };
      friend void from_json(const Darabonba::Json& j, Claims& obj) { 
        DARABONBA_PTR_FROM_JSON(Claim, claim_);
      };
      Claims() = default ;
      Claims(const Claims &) = default ;
      Claims(Claims &&) = default ;
      Claims(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Claims() = default ;
      Claims& operator=(const Claims &) = default ;
      Claims& operator=(Claims &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Claim : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Claim& obj) { 
          DARABONBA_PTR_TO_JSON(ClassDescs, classDescs_);
          DARABONBA_PTR_TO_JSON(Contacts, contacts_);
          DARABONBA_PTR_TO_JSON(GoodsAndServices, goodsAndServices_);
          DARABONBA_PTR_TO_JSON(Holders, holders_);
          DARABONBA_PTR_TO_JSON(JurDesc, jurDesc_);
          DARABONBA_PTR_TO_JSON(MarkName, markName_);
        };
        friend void from_json(const Darabonba::Json& j, Claim& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassDescs, classDescs_);
          DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
          DARABONBA_PTR_FROM_JSON(GoodsAndServices, goodsAndServices_);
          DARABONBA_PTR_FROM_JSON(Holders, holders_);
          DARABONBA_PTR_FROM_JSON(JurDesc, jurDesc_);
          DARABONBA_PTR_FROM_JSON(MarkName, markName_);
        };
        Claim() = default ;
        Claim(const Claim &) = default ;
        Claim(Claim &&) = default ;
        Claim(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Claim() = default ;
        Claim& operator=(const Claim &) = default ;
        Claim& operator=(Claim &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class JurDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const JurDesc& obj) { 
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(JurCC, jurCC_);
          };
          friend void from_json(const Darabonba::Json& j, JurDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(JurCC, jurCC_);
          };
          JurDesc() = default ;
          JurDesc(const JurDesc &) = default ;
          JurDesc(JurDesc &&) = default ;
          JurDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~JurDesc() = default ;
          JurDesc& operator=(const JurDesc &) = default ;
          JurDesc& operator=(JurDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->jurCC_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline JurDesc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // jurCC Field Functions 
          bool hasJurCC() const { return this->jurCC_ != nullptr;};
          void deleteJurCC() { this->jurCC_ = nullptr;};
          inline string getJurCC() const { DARABONBA_PTR_GET_DEFAULT(jurCC_, "") };
          inline JurDesc& setJurCC(string jurCC) { DARABONBA_PTR_SET_VALUE(jurCC_, jurCC) };


        protected:
          shared_ptr<string> desc_ {};
          shared_ptr<string> jurCC_ {};
        };

        class Holders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Holders& obj) { 
            DARABONBA_PTR_TO_JSON(Holder, holder_);
          };
          friend void from_json(const Darabonba::Json& j, Holders& obj) { 
            DARABONBA_PTR_FROM_JSON(Holder, holder_);
          };
          Holders() = default ;
          Holders(const Holders &) = default ;
          Holders(Holders &&) = default ;
          Holders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Holders() = default ;
          Holders& operator=(const Holders &) = default ;
          Holders& operator=(Holders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Holder : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Holder& obj) { 
              DARABONBA_PTR_TO_JSON(Addr, addr_);
              DARABONBA_PTR_TO_JSON(Entitlement, entitlement_);
              DARABONBA_PTR_TO_JSON(Org, org_);
            };
            friend void from_json(const Darabonba::Json& j, Holder& obj) { 
              DARABONBA_PTR_FROM_JSON(Addr, addr_);
              DARABONBA_PTR_FROM_JSON(Entitlement, entitlement_);
              DARABONBA_PTR_FROM_JSON(Org, org_);
            };
            Holder() = default ;
            Holder(const Holder &) = default ;
            Holder(Holder &&) = default ;
            Holder(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Holder() = default ;
            Holder& operator=(const Holder &) = default ;
            Holder& operator=(Holder &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Addr : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Addr& obj) { 
                DARABONBA_PTR_TO_JSON(Cc, cc_);
                DARABONBA_PTR_TO_JSON(City, city_);
                DARABONBA_PTR_TO_JSON(Pc, pc_);
                DARABONBA_PTR_TO_JSON(Sp, sp_);
                DARABONBA_PTR_TO_JSON(Street, street_);
              };
              friend void from_json(const Darabonba::Json& j, Addr& obj) { 
                DARABONBA_PTR_FROM_JSON(Cc, cc_);
                DARABONBA_PTR_FROM_JSON(City, city_);
                DARABONBA_PTR_FROM_JSON(Pc, pc_);
                DARABONBA_PTR_FROM_JSON(Sp, sp_);
                DARABONBA_PTR_FROM_JSON(Street, street_);
              };
              Addr() = default ;
              Addr(const Addr &) = default ;
              Addr(Addr &&) = default ;
              Addr(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Addr() = default ;
              Addr& operator=(const Addr &) = default ;
              Addr& operator=(Addr &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Street : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Street& obj) { 
                  DARABONBA_PTR_TO_JSON(Street, street_);
                };
                friend void from_json(const Darabonba::Json& j, Street& obj) { 
                  DARABONBA_PTR_FROM_JSON(Street, street_);
                };
                Street() = default ;
                Street(const Street &) = default ;
                Street(Street &&) = default ;
                Street(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Street() = default ;
                Street& operator=(const Street &) = default ;
                Street& operator=(Street &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->street_ == nullptr; };
                // street Field Functions 
                bool hasStreet() const { return this->street_ != nullptr;};
                void deleteStreet() { this->street_ = nullptr;};
                inline const vector<string> & getStreet() const { DARABONBA_PTR_GET_CONST(street_, vector<string>) };
                inline vector<string> getStreet() { DARABONBA_PTR_GET(street_, vector<string>) };
                inline Street& setStreet(const vector<string> & street) { DARABONBA_PTR_SET_VALUE(street_, street) };
                inline Street& setStreet(vector<string> && street) { DARABONBA_PTR_SET_RVALUE(street_, street) };


              protected:
                shared_ptr<vector<string>> street_ {};
              };

              virtual bool empty() const override { return this->cc_ == nullptr
        && this->city_ == nullptr && this->pc_ == nullptr && this->sp_ == nullptr && this->street_ == nullptr; };
              // cc Field Functions 
              bool hasCc() const { return this->cc_ != nullptr;};
              void deleteCc() { this->cc_ = nullptr;};
              inline string getCc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
              inline Addr& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


              // city Field Functions 
              bool hasCity() const { return this->city_ != nullptr;};
              void deleteCity() { this->city_ = nullptr;};
              inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
              inline Addr& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


              // pc Field Functions 
              bool hasPc() const { return this->pc_ != nullptr;};
              void deletePc() { this->pc_ = nullptr;};
              inline string getPc() const { DARABONBA_PTR_GET_DEFAULT(pc_, "") };
              inline Addr& setPc(string pc) { DARABONBA_PTR_SET_VALUE(pc_, pc) };


              // sp Field Functions 
              bool hasSp() const { return this->sp_ != nullptr;};
              void deleteSp() { this->sp_ = nullptr;};
              inline string getSp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
              inline Addr& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


              // street Field Functions 
              bool hasStreet() const { return this->street_ != nullptr;};
              void deleteStreet() { this->street_ = nullptr;};
              inline const Addr::Street & getStreet() const { DARABONBA_PTR_GET_CONST(street_, Addr::Street) };
              inline Addr::Street getStreet() { DARABONBA_PTR_GET(street_, Addr::Street) };
              inline Addr& setStreet(const Addr::Street & street) { DARABONBA_PTR_SET_VALUE(street_, street) };
              inline Addr& setStreet(Addr::Street && street) { DARABONBA_PTR_SET_RVALUE(street_, street) };


            protected:
              shared_ptr<string> cc_ {};
              shared_ptr<string> city_ {};
              shared_ptr<string> pc_ {};
              shared_ptr<string> sp_ {};
              shared_ptr<Addr::Street> street_ {};
            };

            virtual bool empty() const override { return this->addr_ == nullptr
        && this->entitlement_ == nullptr && this->org_ == nullptr; };
            // addr Field Functions 
            bool hasAddr() const { return this->addr_ != nullptr;};
            void deleteAddr() { this->addr_ = nullptr;};
            inline const Holder::Addr & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, Holder::Addr) };
            inline Holder::Addr getAddr() { DARABONBA_PTR_GET(addr_, Holder::Addr) };
            inline Holder& setAddr(const Holder::Addr & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
            inline Holder& setAddr(Holder::Addr && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


            // entitlement Field Functions 
            bool hasEntitlement() const { return this->entitlement_ != nullptr;};
            void deleteEntitlement() { this->entitlement_ = nullptr;};
            inline string getEntitlement() const { DARABONBA_PTR_GET_DEFAULT(entitlement_, "") };
            inline Holder& setEntitlement(string entitlement) { DARABONBA_PTR_SET_VALUE(entitlement_, entitlement) };


            // org Field Functions 
            bool hasOrg() const { return this->org_ != nullptr;};
            void deleteOrg() { this->org_ = nullptr;};
            inline string getOrg() const { DARABONBA_PTR_GET_DEFAULT(org_, "") };
            inline Holder& setOrg(string org) { DARABONBA_PTR_SET_VALUE(org_, org) };


          protected:
            shared_ptr<Holder::Addr> addr_ {};
            shared_ptr<string> entitlement_ {};
            shared_ptr<string> org_ {};
          };

          virtual bool empty() const override { return this->holder_ == nullptr; };
          // holder Field Functions 
          bool hasHolder() const { return this->holder_ != nullptr;};
          void deleteHolder() { this->holder_ = nullptr;};
          inline const vector<Holders::Holder> & getHolder() const { DARABONBA_PTR_GET_CONST(holder_, vector<Holders::Holder>) };
          inline vector<Holders::Holder> getHolder() { DARABONBA_PTR_GET(holder_, vector<Holders::Holder>) };
          inline Holders& setHolder(const vector<Holders::Holder> & holder) { DARABONBA_PTR_SET_VALUE(holder_, holder) };
          inline Holders& setHolder(vector<Holders::Holder> && holder) { DARABONBA_PTR_SET_RVALUE(holder_, holder) };


        protected:
          shared_ptr<vector<Holders::Holder>> holder_ {};
        };

        class Contacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
            DARABONBA_PTR_TO_JSON(Contact, contact_);
          };
          friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
            DARABONBA_PTR_FROM_JSON(Contact, contact_);
          };
          Contacts() = default ;
          Contacts(const Contacts &) = default ;
          Contacts(Contacts &&) = default ;
          Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Contacts() = default ;
          Contacts& operator=(const Contacts &) = default ;
          Contacts& operator=(Contacts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Contact : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Contact& obj) { 
              DARABONBA_PTR_TO_JSON(Addr, addr_);
              DARABONBA_PTR_TO_JSON(Email, email_);
              DARABONBA_PTR_TO_JSON(Fax, fax_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Org, org_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Voice, voice_);
            };
            friend void from_json(const Darabonba::Json& j, Contact& obj) { 
              DARABONBA_PTR_FROM_JSON(Addr, addr_);
              DARABONBA_PTR_FROM_JSON(Email, email_);
              DARABONBA_PTR_FROM_JSON(Fax, fax_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Org, org_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Voice, voice_);
            };
            Contact() = default ;
            Contact(const Contact &) = default ;
            Contact(Contact &&) = default ;
            Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Contact() = default ;
            Contact& operator=(const Contact &) = default ;
            Contact& operator=(Contact &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Addr : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Addr& obj) { 
                DARABONBA_PTR_TO_JSON(Cc, cc_);
                DARABONBA_PTR_TO_JSON(City, city_);
                DARABONBA_PTR_TO_JSON(Pc, pc_);
                DARABONBA_PTR_TO_JSON(Sp, sp_);
                DARABONBA_PTR_TO_JSON(Street, street_);
              };
              friend void from_json(const Darabonba::Json& j, Addr& obj) { 
                DARABONBA_PTR_FROM_JSON(Cc, cc_);
                DARABONBA_PTR_FROM_JSON(City, city_);
                DARABONBA_PTR_FROM_JSON(Pc, pc_);
                DARABONBA_PTR_FROM_JSON(Sp, sp_);
                DARABONBA_PTR_FROM_JSON(Street, street_);
              };
              Addr() = default ;
              Addr(const Addr &) = default ;
              Addr(Addr &&) = default ;
              Addr(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Addr() = default ;
              Addr& operator=(const Addr &) = default ;
              Addr& operator=(Addr &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Street : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Street& obj) { 
                  DARABONBA_PTR_TO_JSON(Street, street_);
                };
                friend void from_json(const Darabonba::Json& j, Street& obj) { 
                  DARABONBA_PTR_FROM_JSON(Street, street_);
                };
                Street() = default ;
                Street(const Street &) = default ;
                Street(Street &&) = default ;
                Street(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Street() = default ;
                Street& operator=(const Street &) = default ;
                Street& operator=(Street &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->street_ == nullptr; };
                // street Field Functions 
                bool hasStreet() const { return this->street_ != nullptr;};
                void deleteStreet() { this->street_ = nullptr;};
                inline const vector<string> & getStreet() const { DARABONBA_PTR_GET_CONST(street_, vector<string>) };
                inline vector<string> getStreet() { DARABONBA_PTR_GET(street_, vector<string>) };
                inline Street& setStreet(const vector<string> & street) { DARABONBA_PTR_SET_VALUE(street_, street) };
                inline Street& setStreet(vector<string> && street) { DARABONBA_PTR_SET_RVALUE(street_, street) };


              protected:
                shared_ptr<vector<string>> street_ {};
              };

              virtual bool empty() const override { return this->cc_ == nullptr
        && this->city_ == nullptr && this->pc_ == nullptr && this->sp_ == nullptr && this->street_ == nullptr; };
              // cc Field Functions 
              bool hasCc() const { return this->cc_ != nullptr;};
              void deleteCc() { this->cc_ = nullptr;};
              inline string getCc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
              inline Addr& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


              // city Field Functions 
              bool hasCity() const { return this->city_ != nullptr;};
              void deleteCity() { this->city_ = nullptr;};
              inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
              inline Addr& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


              // pc Field Functions 
              bool hasPc() const { return this->pc_ != nullptr;};
              void deletePc() { this->pc_ = nullptr;};
              inline string getPc() const { DARABONBA_PTR_GET_DEFAULT(pc_, "") };
              inline Addr& setPc(string pc) { DARABONBA_PTR_SET_VALUE(pc_, pc) };


              // sp Field Functions 
              bool hasSp() const { return this->sp_ != nullptr;};
              void deleteSp() { this->sp_ = nullptr;};
              inline string getSp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
              inline Addr& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


              // street Field Functions 
              bool hasStreet() const { return this->street_ != nullptr;};
              void deleteStreet() { this->street_ = nullptr;};
              inline const Addr::Street & getStreet() const { DARABONBA_PTR_GET_CONST(street_, Addr::Street) };
              inline Addr::Street getStreet() { DARABONBA_PTR_GET(street_, Addr::Street) };
              inline Addr& setStreet(const Addr::Street & street) { DARABONBA_PTR_SET_VALUE(street_, street) };
              inline Addr& setStreet(Addr::Street && street) { DARABONBA_PTR_SET_RVALUE(street_, street) };


            protected:
              shared_ptr<string> cc_ {};
              shared_ptr<string> city_ {};
              shared_ptr<string> pc_ {};
              shared_ptr<string> sp_ {};
              shared_ptr<Addr::Street> street_ {};
            };

            virtual bool empty() const override { return this->addr_ == nullptr
        && this->email_ == nullptr && this->fax_ == nullptr && this->name_ == nullptr && this->org_ == nullptr && this->type_ == nullptr
        && this->voice_ == nullptr; };
            // addr Field Functions 
            bool hasAddr() const { return this->addr_ != nullptr;};
            void deleteAddr() { this->addr_ = nullptr;};
            inline const Contact::Addr & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, Contact::Addr) };
            inline Contact::Addr getAddr() { DARABONBA_PTR_GET(addr_, Contact::Addr) };
            inline Contact& setAddr(const Contact::Addr & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
            inline Contact& setAddr(Contact::Addr && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


            // email Field Functions 
            bool hasEmail() const { return this->email_ != nullptr;};
            void deleteEmail() { this->email_ = nullptr;};
            inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
            inline Contact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


            // fax Field Functions 
            bool hasFax() const { return this->fax_ != nullptr;};
            void deleteFax() { this->fax_ = nullptr;};
            inline string getFax() const { DARABONBA_PTR_GET_DEFAULT(fax_, "") };
            inline Contact& setFax(string fax) { DARABONBA_PTR_SET_VALUE(fax_, fax) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Contact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // org Field Functions 
            bool hasOrg() const { return this->org_ != nullptr;};
            void deleteOrg() { this->org_ = nullptr;};
            inline string getOrg() const { DARABONBA_PTR_GET_DEFAULT(org_, "") };
            inline Contact& setOrg(string org) { DARABONBA_PTR_SET_VALUE(org_, org) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Contact& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // voice Field Functions 
            bool hasVoice() const { return this->voice_ != nullptr;};
            void deleteVoice() { this->voice_ = nullptr;};
            inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
            inline Contact& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


          protected:
            shared_ptr<Contact::Addr> addr_ {};
            shared_ptr<string> email_ {};
            shared_ptr<string> fax_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> org_ {};
            shared_ptr<string> type_ {};
            shared_ptr<string> voice_ {};
          };

          virtual bool empty() const override { return this->contact_ == nullptr; };
          // contact Field Functions 
          bool hasContact() const { return this->contact_ != nullptr;};
          void deleteContact() { this->contact_ = nullptr;};
          inline const vector<Contacts::Contact> & getContact() const { DARABONBA_PTR_GET_CONST(contact_, vector<Contacts::Contact>) };
          inline vector<Contacts::Contact> getContact() { DARABONBA_PTR_GET(contact_, vector<Contacts::Contact>) };
          inline Contacts& setContact(const vector<Contacts::Contact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
          inline Contacts& setContact(vector<Contacts::Contact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


        protected:
          shared_ptr<vector<Contacts::Contact>> contact_ {};
        };

        class ClassDescs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClassDescs& obj) { 
            DARABONBA_PTR_TO_JSON(ClassDesc, classDesc_);
          };
          friend void from_json(const Darabonba::Json& j, ClassDescs& obj) { 
            DARABONBA_PTR_FROM_JSON(ClassDesc, classDesc_);
          };
          ClassDescs() = default ;
          ClassDescs(const ClassDescs &) = default ;
          ClassDescs(ClassDescs &&) = default ;
          ClassDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClassDescs() = default ;
          ClassDescs& operator=(const ClassDescs &) = default ;
          ClassDescs& operator=(ClassDescs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ClassDesc : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ClassDesc& obj) { 
              DARABONBA_PTR_TO_JSON(ClassNum, classNum_);
              DARABONBA_PTR_TO_JSON(Desc, desc_);
            };
            friend void from_json(const Darabonba::Json& j, ClassDesc& obj) { 
              DARABONBA_PTR_FROM_JSON(ClassNum, classNum_);
              DARABONBA_PTR_FROM_JSON(Desc, desc_);
            };
            ClassDesc() = default ;
            ClassDesc(const ClassDesc &) = default ;
            ClassDesc(ClassDesc &&) = default ;
            ClassDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ClassDesc() = default ;
            ClassDesc& operator=(const ClassDesc &) = default ;
            ClassDesc& operator=(ClassDesc &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->classNum_ == nullptr
        && this->desc_ == nullptr; };
            // classNum Field Functions 
            bool hasClassNum() const { return this->classNum_ != nullptr;};
            void deleteClassNum() { this->classNum_ = nullptr;};
            inline int32_t getClassNum() const { DARABONBA_PTR_GET_DEFAULT(classNum_, 0) };
            inline ClassDesc& setClassNum(int32_t classNum) { DARABONBA_PTR_SET_VALUE(classNum_, classNum) };


            // desc Field Functions 
            bool hasDesc() const { return this->desc_ != nullptr;};
            void deleteDesc() { this->desc_ = nullptr;};
            inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
            inline ClassDesc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          protected:
            shared_ptr<int32_t> classNum_ {};
            shared_ptr<string> desc_ {};
          };

          virtual bool empty() const override { return this->classDesc_ == nullptr; };
          // classDesc Field Functions 
          bool hasClassDesc() const { return this->classDesc_ != nullptr;};
          void deleteClassDesc() { this->classDesc_ = nullptr;};
          inline const vector<ClassDescs::ClassDesc> & getClassDesc() const { DARABONBA_PTR_GET_CONST(classDesc_, vector<ClassDescs::ClassDesc>) };
          inline vector<ClassDescs::ClassDesc> getClassDesc() { DARABONBA_PTR_GET(classDesc_, vector<ClassDescs::ClassDesc>) };
          inline ClassDescs& setClassDesc(const vector<ClassDescs::ClassDesc> & classDesc) { DARABONBA_PTR_SET_VALUE(classDesc_, classDesc) };
          inline ClassDescs& setClassDesc(vector<ClassDescs::ClassDesc> && classDesc) { DARABONBA_PTR_SET_RVALUE(classDesc_, classDesc) };


        protected:
          shared_ptr<vector<ClassDescs::ClassDesc>> classDesc_ {};
        };

        virtual bool empty() const override { return this->classDescs_ == nullptr
        && this->contacts_ == nullptr && this->goodsAndServices_ == nullptr && this->holders_ == nullptr && this->jurDesc_ == nullptr && this->markName_ == nullptr; };
        // classDescs Field Functions 
        bool hasClassDescs() const { return this->classDescs_ != nullptr;};
        void deleteClassDescs() { this->classDescs_ = nullptr;};
        inline const Claim::ClassDescs & getClassDescs() const { DARABONBA_PTR_GET_CONST(classDescs_, Claim::ClassDescs) };
        inline Claim::ClassDescs getClassDescs() { DARABONBA_PTR_GET(classDescs_, Claim::ClassDescs) };
        inline Claim& setClassDescs(const Claim::ClassDescs & classDescs) { DARABONBA_PTR_SET_VALUE(classDescs_, classDescs) };
        inline Claim& setClassDescs(Claim::ClassDescs && classDescs) { DARABONBA_PTR_SET_RVALUE(classDescs_, classDescs) };


        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline const Claim::Contacts & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, Claim::Contacts) };
        inline Claim::Contacts getContacts() { DARABONBA_PTR_GET(contacts_, Claim::Contacts) };
        inline Claim& setContacts(const Claim::Contacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
        inline Claim& setContacts(Claim::Contacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


        // goodsAndServices Field Functions 
        bool hasGoodsAndServices() const { return this->goodsAndServices_ != nullptr;};
        void deleteGoodsAndServices() { this->goodsAndServices_ = nullptr;};
        inline string getGoodsAndServices() const { DARABONBA_PTR_GET_DEFAULT(goodsAndServices_, "") };
        inline Claim& setGoodsAndServices(string goodsAndServices) { DARABONBA_PTR_SET_VALUE(goodsAndServices_, goodsAndServices) };


        // holders Field Functions 
        bool hasHolders() const { return this->holders_ != nullptr;};
        void deleteHolders() { this->holders_ = nullptr;};
        inline const Claim::Holders & getHolders() const { DARABONBA_PTR_GET_CONST(holders_, Claim::Holders) };
        inline Claim::Holders getHolders() { DARABONBA_PTR_GET(holders_, Claim::Holders) };
        inline Claim& setHolders(const Claim::Holders & holders) { DARABONBA_PTR_SET_VALUE(holders_, holders) };
        inline Claim& setHolders(Claim::Holders && holders) { DARABONBA_PTR_SET_RVALUE(holders_, holders) };


        // jurDesc Field Functions 
        bool hasJurDesc() const { return this->jurDesc_ != nullptr;};
        void deleteJurDesc() { this->jurDesc_ = nullptr;};
        inline const Claim::JurDesc & getJurDesc() const { DARABONBA_PTR_GET_CONST(jurDesc_, Claim::JurDesc) };
        inline Claim::JurDesc getJurDesc() { DARABONBA_PTR_GET(jurDesc_, Claim::JurDesc) };
        inline Claim& setJurDesc(const Claim::JurDesc & jurDesc) { DARABONBA_PTR_SET_VALUE(jurDesc_, jurDesc) };
        inline Claim& setJurDesc(Claim::JurDesc && jurDesc) { DARABONBA_PTR_SET_RVALUE(jurDesc_, jurDesc) };


        // markName Field Functions 
        bool hasMarkName() const { return this->markName_ != nullptr;};
        void deleteMarkName() { this->markName_ = nullptr;};
        inline string getMarkName() const { DARABONBA_PTR_GET_DEFAULT(markName_, "") };
        inline Claim& setMarkName(string markName) { DARABONBA_PTR_SET_VALUE(markName_, markName) };


      protected:
        shared_ptr<Claim::ClassDescs> classDescs_ {};
        shared_ptr<Claim::Contacts> contacts_ {};
        shared_ptr<string> goodsAndServices_ {};
        shared_ptr<Claim::Holders> holders_ {};
        shared_ptr<Claim::JurDesc> jurDesc_ {};
        shared_ptr<string> markName_ {};
      };

      virtual bool empty() const override { return this->claim_ == nullptr; };
      // claim Field Functions 
      bool hasClaim() const { return this->claim_ != nullptr;};
      void deleteClaim() { this->claim_ = nullptr;};
      inline const vector<Claims::Claim> & getClaim() const { DARABONBA_PTR_GET_CONST(claim_, vector<Claims::Claim>) };
      inline vector<Claims::Claim> getClaim() { DARABONBA_PTR_GET(claim_, vector<Claims::Claim>) };
      inline Claims& setClaim(const vector<Claims::Claim> & claim) { DARABONBA_PTR_SET_VALUE(claim_, claim) };
      inline Claims& setClaim(vector<Claims::Claim> && claim) { DARABONBA_PTR_SET_RVALUE(claim_, claim) };


    protected:
      shared_ptr<vector<Claims::Claim>> claim_ {};
    };

    virtual bool empty() const override { return this->claims_ == nullptr
        && this->id_ == nullptr && this->label_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->requestId_ == nullptr; };
    // claims Field Functions 
    bool hasClaims() const { return this->claims_ != nullptr;};
    void deleteClaims() { this->claims_ = nullptr;};
    inline const LookupTmchNoticeResponseBody::Claims & getClaims() const { DARABONBA_PTR_GET_CONST(claims_, LookupTmchNoticeResponseBody::Claims) };
    inline LookupTmchNoticeResponseBody::Claims getClaims() { DARABONBA_PTR_GET(claims_, LookupTmchNoticeResponseBody::Claims) };
    inline LookupTmchNoticeResponseBody& setClaims(const LookupTmchNoticeResponseBody::Claims & claims) { DARABONBA_PTR_SET_VALUE(claims_, claims) };
    inline LookupTmchNoticeResponseBody& setClaims(LookupTmchNoticeResponseBody::Claims && claims) { DARABONBA_PTR_SET_RVALUE(claims_, claims) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline LookupTmchNoticeResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline LookupTmchNoticeResponseBody& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline LookupTmchNoticeResponseBody& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline LookupTmchNoticeResponseBody& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupTmchNoticeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<LookupTmchNoticeResponseBody::Claims> claims_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> label_ {};
    shared_ptr<string> notAfter_ {};
    shared_ptr<string> notBefore_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
