// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionModels, regionModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionModels, regionModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody(DescribeRegionsResponseBody &&) = default ;
    DescribeRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody& operator=(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody& operator=(DescribeRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionModels_ == nullptr
        && return this->requestId_ == nullptr; };
    // regionModels Field Functions 
    bool hasRegionModels() const { return this->regionModels_ != nullptr;};
    void deleteRegionModels() { this->regionModels_ = nullptr;};
    inline const vector<DescribeRegionsResponseBodyRegionModels> & regionModels() const { DARABONBA_PTR_GET_CONST(regionModels_, vector<DescribeRegionsResponseBodyRegionModels>) };
    inline vector<DescribeRegionsResponseBodyRegionModels> regionModels() { DARABONBA_PTR_GET(regionModels_, vector<DescribeRegionsResponseBodyRegionModels>) };
    inline DescribeRegionsResponseBody& setRegionModels(const vector<DescribeRegionsResponseBodyRegionModels> & regionModels) { DARABONBA_PTR_SET_VALUE(regionModels_, regionModels) };
    inline DescribeRegionsResponseBody& setRegionModels(vector<DescribeRegionsResponseBodyRegionModels> && regionModels) { DARABONBA_PTR_SET_RVALUE(regionModels_, regionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Available regions.
    std::shared_ptr<vector<DescribeRegionsResponseBodyRegionModels>> regionModels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
