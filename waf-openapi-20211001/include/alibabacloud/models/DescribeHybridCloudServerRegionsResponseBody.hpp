// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSERVERREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSERVERREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudServerRegionsResponseBodyRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudServerRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudServerRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudServerRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudServerRegionsResponseBody() = default ;
    DescribeHybridCloudServerRegionsResponseBody(const DescribeHybridCloudServerRegionsResponseBody &) = default ;
    DescribeHybridCloudServerRegionsResponseBody(DescribeHybridCloudServerRegionsResponseBody &&) = default ;
    DescribeHybridCloudServerRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudServerRegionsResponseBody() = default ;
    DescribeHybridCloudServerRegionsResponseBody& operator=(const DescribeHybridCloudServerRegionsResponseBody &) = default ;
    DescribeHybridCloudServerRegionsResponseBody& operator=(DescribeHybridCloudServerRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regions_ != nullptr
        && this->requestId_ != nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<DescribeHybridCloudServerRegionsResponseBodyRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<DescribeHybridCloudServerRegionsResponseBodyRegions>) };
    inline vector<DescribeHybridCloudServerRegionsResponseBodyRegions> regions() { DARABONBA_PTR_GET(regions_, vector<DescribeHybridCloudServerRegionsResponseBodyRegions>) };
    inline DescribeHybridCloudServerRegionsResponseBody& setRegions(const vector<DescribeHybridCloudServerRegionsResponseBodyRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeHybridCloudServerRegionsResponseBody& setRegions(vector<DescribeHybridCloudServerRegionsResponseBodyRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudServerRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the regions.
    std::shared_ptr<vector<DescribeHybridCloudServerRegionsResponseBodyRegions>> regions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
