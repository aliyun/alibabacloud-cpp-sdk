// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONRESPONSEBODYIPADDRESSATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONRESPONSEBODYIPADDRESSATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceConfigurationResponseBodyIpAddressAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationResponseBodyIpAddressAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationResponseBodyIpAddressAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetResourceConfigurationResponseBodyIpAddressAttributes() = default ;
    GetResourceConfigurationResponseBodyIpAddressAttributes(const GetResourceConfigurationResponseBodyIpAddressAttributes &) = default ;
    GetResourceConfigurationResponseBodyIpAddressAttributes(GetResourceConfigurationResponseBodyIpAddressAttributes &&) = default ;
    GetResourceConfigurationResponseBodyIpAddressAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationResponseBodyIpAddressAttributes() = default ;
    GetResourceConfigurationResponseBodyIpAddressAttributes& operator=(const GetResourceConfigurationResponseBodyIpAddressAttributes &) = default ;
    GetResourceConfigurationResponseBodyIpAddressAttributes& operator=(GetResourceConfigurationResponseBodyIpAddressAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipAddress_ == nullptr
        && return this->networkType_ == nullptr && return this->version_ == nullptr; };
    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline GetResourceConfigurationResponseBodyIpAddressAttributes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetResourceConfigurationResponseBodyIpAddressAttributes& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetResourceConfigurationResponseBodyIpAddressAttributes& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The IP address.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **Public**: the Internet
    // *   **Private**: internal network
    std::shared_ptr<string> networkType_ = nullptr;
    // The version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
