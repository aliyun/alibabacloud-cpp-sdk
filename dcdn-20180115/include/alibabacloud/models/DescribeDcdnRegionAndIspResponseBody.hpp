// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREGIONANDISPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREGIONANDISPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnRegionAndIspResponseBodyIsps.hpp>
#include <alibabacloud/models/DescribeDcdnRegionAndIspResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRegionAndIspResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRegionAndIspResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRegionAndIspResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnRegionAndIspResponseBody() = default ;
    DescribeDcdnRegionAndIspResponseBody(const DescribeDcdnRegionAndIspResponseBody &) = default ;
    DescribeDcdnRegionAndIspResponseBody(DescribeDcdnRegionAndIspResponseBody &&) = default ;
    DescribeDcdnRegionAndIspResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRegionAndIspResponseBody() = default ;
    DescribeDcdnRegionAndIspResponseBody& operator=(const DescribeDcdnRegionAndIspResponseBody &) = default ;
    DescribeDcdnRegionAndIspResponseBody& operator=(DescribeDcdnRegionAndIspResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isps_ != nullptr
        && this->regions_ != nullptr && this->requestId_ != nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const DescribeDcdnRegionAndIspResponseBodyIsps & isps() const { DARABONBA_PTR_GET_CONST(isps_, DescribeDcdnRegionAndIspResponseBodyIsps) };
    inline DescribeDcdnRegionAndIspResponseBodyIsps isps() { DARABONBA_PTR_GET(isps_, DescribeDcdnRegionAndIspResponseBodyIsps) };
    inline DescribeDcdnRegionAndIspResponseBody& setIsps(const DescribeDcdnRegionAndIspResponseBodyIsps & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeDcdnRegionAndIspResponseBody& setIsps(DescribeDcdnRegionAndIspResponseBodyIsps && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeDcdnRegionAndIspResponseBodyRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeDcdnRegionAndIspResponseBodyRegions) };
    inline DescribeDcdnRegionAndIspResponseBodyRegions regions() { DARABONBA_PTR_GET(regions_, DescribeDcdnRegionAndIspResponseBodyRegions) };
    inline DescribeDcdnRegionAndIspResponseBody& setRegions(const DescribeDcdnRegionAndIspResponseBodyRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeDcdnRegionAndIspResponseBody& setRegions(DescribeDcdnRegionAndIspResponseBodyRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnRegionAndIspResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of ISPs.
    std::shared_ptr<DescribeDcdnRegionAndIspResponseBodyIsps> isps_ = nullptr;
    // The list of regions.
    std::shared_ptr<DescribeDcdnRegionAndIspResponseBodyRegions> regions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
