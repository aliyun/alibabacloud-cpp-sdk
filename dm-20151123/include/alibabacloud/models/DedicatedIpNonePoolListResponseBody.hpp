// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPNONEPOOLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPNONEPOOLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpNonePoolListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpNonePoolListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpNonePoolListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DedicatedIpNonePoolListResponseBody() = default ;
    DedicatedIpNonePoolListResponseBody(const DedicatedIpNonePoolListResponseBody &) = default ;
    DedicatedIpNonePoolListResponseBody(DedicatedIpNonePoolListResponseBody &&) = default ;
    DedicatedIpNonePoolListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpNonePoolListResponseBody() = default ;
    DedicatedIpNonePoolListResponseBody& operator=(const DedicatedIpNonePoolListResponseBody &) = default ;
    DedicatedIpNonePoolListResponseBody& operator=(DedicatedIpNonePoolListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ips& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Ips& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Ips() = default ;
      Ips(const Ips &) = default ;
      Ips(Ips &&) = default ;
      Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ips() = default ;
      Ips& operator=(const Ips &) = default ;
      Ips& operator=(Ips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->ip_ == nullptr && this->zoneId_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Ips& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Ips& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Ips& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Purchased instance ID
      shared_ptr<string> id_ {};
      // IP address
      shared_ptr<string> ip_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->ips_ == nullptr
        && this->requestId_ == nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<DedicatedIpNonePoolListResponseBody::Ips> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<DedicatedIpNonePoolListResponseBody::Ips>) };
    inline vector<DedicatedIpNonePoolListResponseBody::Ips> getIps() { DARABONBA_PTR_GET(ips_, vector<DedicatedIpNonePoolListResponseBody::Ips>) };
    inline DedicatedIpNonePoolListResponseBody& setIps(const vector<DedicatedIpNonePoolListResponseBody::Ips> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DedicatedIpNonePoolListResponseBody& setIps(vector<DedicatedIpNonePoolListResponseBody::Ips> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DedicatedIpNonePoolListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information on IPs not added to the IP pool
    shared_ptr<vector<DedicatedIpNonePoolListResponseBody::Ips>> ips_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
