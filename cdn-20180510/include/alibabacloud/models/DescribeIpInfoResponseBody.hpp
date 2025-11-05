// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeIpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CdnIp, cdnIp_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(IspEname, ispEname_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnIp, cdnIp_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(IspEname, ispEname_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpInfoResponseBody() = default ;
    DescribeIpInfoResponseBody(const DescribeIpInfoResponseBody &) = default ;
    DescribeIpInfoResponseBody(DescribeIpInfoResponseBody &&) = default ;
    DescribeIpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpInfoResponseBody() = default ;
    DescribeIpInfoResponseBody& operator=(const DescribeIpInfoResponseBody &) = default ;
    DescribeIpInfoResponseBody& operator=(DescribeIpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnIp_ == nullptr
        && return this->ISP_ == nullptr && return this->ispEname_ == nullptr && return this->region_ == nullptr && return this->regionEname_ == nullptr && return this->requestId_ == nullptr; };
    // cdnIp Field Functions 
    bool hasCdnIp() const { return this->cdnIp_ != nullptr;};
    void deleteCdnIp() { this->cdnIp_ = nullptr;};
    inline string cdnIp() const { DARABONBA_PTR_GET_DEFAULT(cdnIp_, "") };
    inline DescribeIpInfoResponseBody& setCdnIp(string cdnIp) { DARABONBA_PTR_SET_VALUE(cdnIp_, cdnIp) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeIpInfoResponseBody& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // ispEname Field Functions 
    bool hasIspEname() const { return this->ispEname_ != nullptr;};
    void deleteIspEname() { this->ispEname_ = nullptr;};
    inline string ispEname() const { DARABONBA_PTR_GET_DEFAULT(ispEname_, "") };
    inline DescribeIpInfoResponseBody& setIspEname(string ispEname) { DARABONBA_PTR_SET_VALUE(ispEname_, ispEname) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeIpInfoResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionEname Field Functions 
    bool hasRegionEname() const { return this->regionEname_ != nullptr;};
    void deleteRegionEname() { this->regionEname_ = nullptr;};
    inline string regionEname() const { DARABONBA_PTR_GET_DEFAULT(regionEname_, "") };
    inline DescribeIpInfoResponseBody& setRegionEname(string regionEname) { DARABONBA_PTR_SET_VALUE(regionEname_, regionEname) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the IP address belongs to an Alibaba Cloud CDN POP.
    // *   **True**:Yes.
    // *   **False**:No.
    std::shared_ptr<string> cdnIp_ = nullptr;
    // The name of the ISP in Chinese.
    std::shared_ptr<string> ISP_ = nullptr;
    // The name of the ISP.
    std::shared_ptr<string> ispEname_ = nullptr;
    // The name of the region in Chinese.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionEname_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
