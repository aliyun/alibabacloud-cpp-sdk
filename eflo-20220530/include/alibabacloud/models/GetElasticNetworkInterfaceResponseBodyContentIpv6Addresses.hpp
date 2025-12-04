// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELASTICNETWORKINTERFACERESPONSEBODYCONTENTIPV6ADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_GETELASTICNETWORKINTERFACERESPONSEBODYCONTENTIPV6ADDRESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses() = default ;
    GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses(const GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses &) = default ;
    GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses(GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses &&) = default ;
    GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses() = default ;
    GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& operator=(const GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses &) = default ;
    GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& operator=(GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->elasticNetworkInterfaceId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->ipName_ == nullptr && return this->ipv6Address_ == nullptr
        && return this->message_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string elasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string ipName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string ipv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // Lingjun Elastic Network Interface ID
    std::shared_ptr<string> elasticNetworkInterfaceId_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the cluster was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // IPV6 unique identifier
    std::shared_ptr<string> ipName_ = nullptr;
    // IPV6 address
    std::shared_ptr<string> ipv6Address_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the intervention entry. Valid value:
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
