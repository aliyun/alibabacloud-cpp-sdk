// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFORESPONSEBODYIPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFORESPONSEBODYIPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchDescribeCdnIpInfoResponseBodyIpInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDescribeCdnIpInfoResponseBodyIpInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CdnIp, cdnIp_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDescribeCdnIpInfoResponseBodyIpInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnIp, cdnIp_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    BatchDescribeCdnIpInfoResponseBodyIpInfoList() = default ;
    BatchDescribeCdnIpInfoResponseBodyIpInfoList(const BatchDescribeCdnIpInfoResponseBodyIpInfoList &) = default ;
    BatchDescribeCdnIpInfoResponseBodyIpInfoList(BatchDescribeCdnIpInfoResponseBodyIpInfoList &&) = default ;
    BatchDescribeCdnIpInfoResponseBodyIpInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDescribeCdnIpInfoResponseBodyIpInfoList() = default ;
    BatchDescribeCdnIpInfoResponseBodyIpInfoList& operator=(const BatchDescribeCdnIpInfoResponseBodyIpInfoList &) = default ;
    BatchDescribeCdnIpInfoResponseBodyIpInfoList& operator=(BatchDescribeCdnIpInfoResponseBodyIpInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnIp_ == nullptr
        && return this->city_ == nullptr && return this->country_ == nullptr && return this->ipAddress_ == nullptr && return this->ispName_ == nullptr && return this->province_ == nullptr; };
    // cdnIp Field Functions 
    bool hasCdnIp() const { return this->cdnIp_ != nullptr;};
    void deleteCdnIp() { this->cdnIp_ = nullptr;};
    inline string cdnIp() const { DARABONBA_PTR_GET_DEFAULT(cdnIp_, "") };
    inline BatchDescribeCdnIpInfoResponseBodyIpInfoList& setCdnIp(string cdnIp) { DARABONBA_PTR_SET_VALUE(cdnIp_, cdnIp) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline BatchDescribeCdnIpInfoResponseBodyIpInfoList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline BatchDescribeCdnIpInfoResponseBodyIpInfoList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline BatchDescribeCdnIpInfoResponseBodyIpInfoList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline BatchDescribeCdnIpInfoResponseBodyIpInfoList& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline BatchDescribeCdnIpInfoResponseBodyIpInfoList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    // Indicates whether the IP address belongs to an Alibaba Cloud CDN point of presence (POP).
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> cdnIp_ = nullptr;
    // The city to which the IP address belongs.
    std::shared_ptr<string> city_ = nullptr;
    // The country to which the IP address belongs.
    std::shared_ptr<string> country_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The ISP to which the IP address belongs.
    std::shared_ptr<string> ispName_ = nullptr;
    // The province to which the IP address belongs.
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
