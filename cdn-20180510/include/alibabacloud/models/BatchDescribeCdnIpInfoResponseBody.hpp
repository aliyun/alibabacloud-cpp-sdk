// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchDescribeCdnIpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDescribeCdnIpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpInfoList, ipInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDescribeCdnIpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpInfoList, ipInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchDescribeCdnIpInfoResponseBody() = default ;
    BatchDescribeCdnIpInfoResponseBody(const BatchDescribeCdnIpInfoResponseBody &) = default ;
    BatchDescribeCdnIpInfoResponseBody(BatchDescribeCdnIpInfoResponseBody &&) = default ;
    BatchDescribeCdnIpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDescribeCdnIpInfoResponseBody() = default ;
    BatchDescribeCdnIpInfoResponseBody& operator=(const BatchDescribeCdnIpInfoResponseBody &) = default ;
    BatchDescribeCdnIpInfoResponseBody& operator=(BatchDescribeCdnIpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CdnIp, cdnIp_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(IspName, ispName_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, IpInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CdnIp, cdnIp_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
      };
      IpInfoList() = default ;
      IpInfoList(const IpInfoList &) = default ;
      IpInfoList(IpInfoList &&) = default ;
      IpInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpInfoList() = default ;
      IpInfoList& operator=(const IpInfoList &) = default ;
      IpInfoList& operator=(IpInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cdnIp_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->ipAddress_ == nullptr && this->ispName_ == nullptr && this->province_ == nullptr; };
      // cdnIp Field Functions 
      bool hasCdnIp() const { return this->cdnIp_ != nullptr;};
      void deleteCdnIp() { this->cdnIp_ = nullptr;};
      inline string getCdnIp() const { DARABONBA_PTR_GET_DEFAULT(cdnIp_, "") };
      inline IpInfoList& setCdnIp(string cdnIp) { DARABONBA_PTR_SET_VALUE(cdnIp_, cdnIp) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline IpInfoList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline IpInfoList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline IpInfoList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline IpInfoList& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline IpInfoList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      // Indicates whether the IP address belongs to an Alibaba Cloud CDN point of presence (POP).
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> cdnIp_ {};
      // The city to which the IP address belongs.
      shared_ptr<string> city_ {};
      // The country to which the IP address belongs.
      shared_ptr<string> country_ {};
      // The IP address.
      shared_ptr<string> ipAddress_ {};
      // The ISP to which the IP address belongs.
      shared_ptr<string> ispName_ {};
      // The province to which the IP address belongs.
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->ipInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // ipInfoList Field Functions 
    bool hasIpInfoList() const { return this->ipInfoList_ != nullptr;};
    void deleteIpInfoList() { this->ipInfoList_ = nullptr;};
    inline const vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList> & getIpInfoList() const { DARABONBA_PTR_GET_CONST(ipInfoList_, vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList>) };
    inline vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList> getIpInfoList() { DARABONBA_PTR_GET(ipInfoList_, vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList>) };
    inline BatchDescribeCdnIpInfoResponseBody& setIpInfoList(const vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList> & ipInfoList) { DARABONBA_PTR_SET_VALUE(ipInfoList_, ipInfoList) };
    inline BatchDescribeCdnIpInfoResponseBody& setIpInfoList(vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList> && ipInfoList) { DARABONBA_PTR_SET_RVALUE(ipInfoList_, ipInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDescribeCdnIpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results about IP addresses returned.
    shared_ptr<vector<BatchDescribeCdnIpInfoResponseBody::IpInfoList>> ipInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
