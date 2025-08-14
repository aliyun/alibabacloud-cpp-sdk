// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHILDINSTANCEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHILDINSTANCEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeChildInstanceRegionsResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeChildInstanceRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChildInstanceRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChildInstanceRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChildInstanceRegionsResponseBody() = default ;
    DescribeChildInstanceRegionsResponseBody(const DescribeChildInstanceRegionsResponseBody &) = default ;
    DescribeChildInstanceRegionsResponseBody(DescribeChildInstanceRegionsResponseBody &&) = default ;
    DescribeChildInstanceRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChildInstanceRegionsResponseBody() = default ;
    DescribeChildInstanceRegionsResponseBody& operator=(const DescribeChildInstanceRegionsResponseBody &) = default ;
    DescribeChildInstanceRegionsResponseBody& operator=(DescribeChildInstanceRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regions_ != nullptr
        && this->requestId_ != nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeChildInstanceRegionsResponseBodyRegions & regions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeChildInstanceRegionsResponseBodyRegions) };
    inline DescribeChildInstanceRegionsResponseBodyRegions regions() { DARABONBA_PTR_GET(regions_, DescribeChildInstanceRegionsResponseBodyRegions) };
    inline DescribeChildInstanceRegionsResponseBody& setRegions(const DescribeChildInstanceRegionsResponseBodyRegions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeChildInstanceRegionsResponseBody& setRegions(DescribeChildInstanceRegionsResponseBodyRegions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChildInstanceRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of regions.
    std::shared_ptr<DescribeChildInstanceRegionsResponseBodyRegions> regions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
