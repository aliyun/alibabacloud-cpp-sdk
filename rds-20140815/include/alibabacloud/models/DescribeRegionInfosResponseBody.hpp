// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRegionInfosResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRegionInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionInfosResponseBody() = default ;
    DescribeRegionInfosResponseBody(const DescribeRegionInfosResponseBody &) = default ;
    DescribeRegionInfosResponseBody(DescribeRegionInfosResponseBody &&) = default ;
    DescribeRegionInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionInfosResponseBody() = default ;
    DescribeRegionInfosResponseBody& operator=(const DescribeRegionInfosResponseBody &) = default ;
    DescribeRegionInfosResponseBody& operator=(DescribeRegionInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr
        && return this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionInfosResponseBodyRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionInfosResponseBodyRegions) };
    inline DescribeRegionInfosResponseBodyRegions regions() { DARABONBA_PTR_GET(regions_, DescribeRegionInfosResponseBodyRegions) };
    inline DescribeRegionInfosResponseBody& setRegions(const DescribeRegionInfosResponseBodyRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionInfosResponseBody& setRegions(DescribeRegionInfosResponseBodyRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of regions.
    std::shared_ptr<DescribeRegionInfosResponseBodyRegions> regions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
