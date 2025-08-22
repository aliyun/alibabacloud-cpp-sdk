// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DcdnIp, dcdnIp_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(IspEname, ispEname_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DcdnIp, dcdnIp_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(IspEname, ispEname_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnIpInfoResponseBody() = default ;
    DescribeDcdnIpInfoResponseBody(const DescribeDcdnIpInfoResponseBody &) = default ;
    DescribeDcdnIpInfoResponseBody(DescribeDcdnIpInfoResponseBody &&) = default ;
    DescribeDcdnIpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpInfoResponseBody() = default ;
    DescribeDcdnIpInfoResponseBody& operator=(const DescribeDcdnIpInfoResponseBody &) = default ;
    DescribeDcdnIpInfoResponseBody& operator=(DescribeDcdnIpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dcdnIp_ != nullptr
        && this->ISP_ != nullptr && this->ispEname_ != nullptr && this->region_ != nullptr && this->regionEname_ != nullptr && this->requestId_ != nullptr; };
    // dcdnIp Field Functions 
    bool hasDcdnIp() const { return this->dcdnIp_ != nullptr;};
    void deleteDcdnIp() { this->dcdnIp_ = nullptr;};
    inline string dcdnIp() const { DARABONBA_PTR_GET_DEFAULT(dcdnIp_, "") };
    inline DescribeDcdnIpInfoResponseBody& setDcdnIp(string dcdnIp) { DARABONBA_PTR_SET_VALUE(dcdnIp_, dcdnIp) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeDcdnIpInfoResponseBody& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // ispEname Field Functions 
    bool hasIspEname() const { return this->ispEname_ != nullptr;};
    void deleteIspEname() { this->ispEname_ = nullptr;};
    inline string ispEname() const { DARABONBA_PTR_GET_DEFAULT(ispEname_, "") };
    inline DescribeDcdnIpInfoResponseBody& setIspEname(string ispEname) { DARABONBA_PTR_SET_VALUE(ispEname_, ispEname) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDcdnIpInfoResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionEname Field Functions 
    bool hasRegionEname() const { return this->regionEname_ != nullptr;};
    void deleteRegionEname() { this->regionEname_ = nullptr;};
    inline string regionEname() const { DARABONBA_PTR_GET_DEFAULT(regionEname_, "") };
    inline DescribeDcdnIpInfoResponseBody& setRegionEname(string regionEname) { DARABONBA_PTR_SET_VALUE(regionEname_, regionEname) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnIpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the specified IP address is assigned to an Alibaba Cloud DCDN POP.
    // 
    // *   True
    // *   False
    std::shared_ptr<string> dcdnIp_ = nullptr;
    // The ISP to which the specified IP address belongs.
    std::shared_ptr<string> ISP_ = nullptr;
    // The name of the Internet service provider (ISP).
    std::shared_ptr<string> ispEname_ = nullptr;
    // The Chinese name of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The English name of the region.
    std::shared_ptr<string> regionEname_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
