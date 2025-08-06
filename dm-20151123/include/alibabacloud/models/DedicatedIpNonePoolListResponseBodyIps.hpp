// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPNONEPOOLLISTRESPONSEBODYIPS_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPNONEPOOLLISTRESPONSEBODYIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpNonePoolListResponseBodyIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpNonePoolListResponseBodyIps& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpNonePoolListResponseBodyIps& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DedicatedIpNonePoolListResponseBodyIps() = default ;
    DedicatedIpNonePoolListResponseBodyIps(const DedicatedIpNonePoolListResponseBodyIps &) = default ;
    DedicatedIpNonePoolListResponseBodyIps(DedicatedIpNonePoolListResponseBodyIps &&) = default ;
    DedicatedIpNonePoolListResponseBodyIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpNonePoolListResponseBodyIps() = default ;
    DedicatedIpNonePoolListResponseBodyIps& operator=(const DedicatedIpNonePoolListResponseBodyIps &) = default ;
    DedicatedIpNonePoolListResponseBodyIps& operator=(DedicatedIpNonePoolListResponseBodyIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->ip_ != nullptr && this->zoneId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DedicatedIpNonePoolListResponseBodyIps& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DedicatedIpNonePoolListResponseBodyIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DedicatedIpNonePoolListResponseBodyIps& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Purchased instance ID
    std::shared_ptr<string> id_ = nullptr;
    // IP address
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
