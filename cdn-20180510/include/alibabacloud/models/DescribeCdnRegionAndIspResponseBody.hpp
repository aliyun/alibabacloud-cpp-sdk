// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnRegionAndIspResponseBodyIsps.hpp>
#include <alibabacloud/models/DescribeCdnRegionAndIspResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnRegionAndIspResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnRegionAndIspResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnRegionAndIspResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnRegionAndIspResponseBody() = default ;
    DescribeCdnRegionAndIspResponseBody(const DescribeCdnRegionAndIspResponseBody &) = default ;
    DescribeCdnRegionAndIspResponseBody(DescribeCdnRegionAndIspResponseBody &&) = default ;
    DescribeCdnRegionAndIspResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnRegionAndIspResponseBody() = default ;
    DescribeCdnRegionAndIspResponseBody& operator=(const DescribeCdnRegionAndIspResponseBody &) = default ;
    DescribeCdnRegionAndIspResponseBody& operator=(DescribeCdnRegionAndIspResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isps_ == nullptr
        && return this->regions_ == nullptr && return this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const DescribeCdnRegionAndIspResponseBodyIsps & isps() const { DARABONBA_PTR_GET_CONST(isps_, DescribeCdnRegionAndIspResponseBodyIsps) };
    inline DescribeCdnRegionAndIspResponseBodyIsps isps() { DARABONBA_PTR_GET(isps_, DescribeCdnRegionAndIspResponseBodyIsps) };
    inline DescribeCdnRegionAndIspResponseBody& setIsps(const DescribeCdnRegionAndIspResponseBodyIsps & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeCdnRegionAndIspResponseBody& setIsps(DescribeCdnRegionAndIspResponseBodyIsps && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeCdnRegionAndIspResponseBodyRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeCdnRegionAndIspResponseBodyRegions) };
    inline DescribeCdnRegionAndIspResponseBodyRegions regions() { DARABONBA_PTR_GET(regions_, DescribeCdnRegionAndIspResponseBodyRegions) };
    inline DescribeCdnRegionAndIspResponseBody& setRegions(const DescribeCdnRegionAndIspResponseBodyRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeCdnRegionAndIspResponseBody& setRegions(DescribeCdnRegionAndIspResponseBodyRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnRegionAndIspResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of ISPs.
    std::shared_ptr<DescribeCdnRegionAndIspResponseBodyIsps> isps_ = nullptr;
    // The list of regions.
    std::shared_ptr<DescribeCdnRegionAndIspResponseBodyRegions> regions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
