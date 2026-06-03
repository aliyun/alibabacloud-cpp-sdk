// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class DescribeLoginTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginTicket, loginTicket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginTicket, loginTicket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoginTicketResponseBody() = default ;
    DescribeLoginTicketResponseBody(const DescribeLoginTicketResponseBody &) = default ;
    DescribeLoginTicketResponseBody(DescribeLoginTicketResponseBody &&) = default ;
    DescribeLoginTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginTicketResponseBody() = default ;
    DescribeLoginTicketResponseBody& operator=(const DescribeLoginTicketResponseBody &) = default ;
    DescribeLoginTicketResponseBody& operator=(DescribeLoginTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginTicket : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginTicket& obj) { 
        DARABONBA_PTR_TO_JSON(Certificate, certificate_);
        DARABONBA_PTR_TO_JSON(Ticket, ticket_);
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, LoginTicket& obj) { 
        DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
        DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      LoginTicket() = default ;
      LoginTicket(const LoginTicket &) = default ;
      LoginTicket(LoginTicket &&) = default ;
      LoginTicket(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginTicket() = default ;
      LoginTicket& operator=(const LoginTicket &) = default ;
      LoginTicket& operator=(LoginTicket &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zones& obj) { 
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zones& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Zones() = default ;
        Zones(const Zones &) = default ;
        Zones(Zones &&) = default ;
        Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zones() = default ;
        Zones& operator=(const Zones &) = default ;
        Zones& operator=(Zones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->localName_ == nullptr
        && this->zoneId_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Zones& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> localName_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->certificate_ == nullptr
        && this->ticket_ == nullptr && this->zones_ == nullptr; };
      // certificate Field Functions 
      bool hasCertificate() const { return this->certificate_ != nullptr;};
      void deleteCertificate() { this->certificate_ = nullptr;};
      inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
      inline LoginTicket& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


      // ticket Field Functions 
      bool hasTicket() const { return this->ticket_ != nullptr;};
      void deleteTicket() { this->ticket_ = nullptr;};
      inline string getTicket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
      inline LoginTicket& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<LoginTicket::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<LoginTicket::Zones>) };
      inline vector<LoginTicket::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<LoginTicket::Zones>) };
      inline LoginTicket& setZones(const vector<LoginTicket::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline LoginTicket& setZones(vector<LoginTicket::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      shared_ptr<string> certificate_ {};
      shared_ptr<string> ticket_ {};
      shared_ptr<vector<LoginTicket::Zones>> zones_ {};
    };

    virtual bool empty() const override { return this->loginTicket_ == nullptr
        && this->requestId_ == nullptr; };
    // loginTicket Field Functions 
    bool hasLoginTicket() const { return this->loginTicket_ != nullptr;};
    void deleteLoginTicket() { this->loginTicket_ = nullptr;};
    inline const DescribeLoginTicketResponseBody::LoginTicket & getLoginTicket() const { DARABONBA_PTR_GET_CONST(loginTicket_, DescribeLoginTicketResponseBody::LoginTicket) };
    inline DescribeLoginTicketResponseBody::LoginTicket getLoginTicket() { DARABONBA_PTR_GET(loginTicket_, DescribeLoginTicketResponseBody::LoginTicket) };
    inline DescribeLoginTicketResponseBody& setLoginTicket(const DescribeLoginTicketResponseBody::LoginTicket & loginTicket) { DARABONBA_PTR_SET_VALUE(loginTicket_, loginTicket) };
    inline DescribeLoginTicketResponseBody& setLoginTicket(DescribeLoginTicketResponseBody::LoginTicket && loginTicket) { DARABONBA_PTR_SET_RVALUE(loginTicket_, loginTicket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoginTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLoginTicketResponseBody::LoginTicket> loginTicket_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
