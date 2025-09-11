// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionModelList, regionModelList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionModelList, regionModelList_);
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
    virtual bool empty() const override { this->regionModelList_ != nullptr
        && this->requestId_ != nullptr; };
    // regionModelList Field Functions 
    bool hasRegionModelList() const { return this->regionModelList_ != nullptr;};
    void deleteRegionModelList() { this->regionModelList_ = nullptr;};
    inline const vector<DescribeRegionsResponseBodyRegionModelList> & regionModelList() const { DARABONBA_PTR_GET_CONST(regionModelList_, vector<DescribeRegionsResponseBodyRegionModelList>) };
    inline vector<DescribeRegionsResponseBodyRegionModelList> regionModelList() { DARABONBA_PTR_GET(regionModelList_, vector<DescribeRegionsResponseBodyRegionModelList>) };
    inline DescribeRegionsResponseBody& setRegionModelList(const vector<DescribeRegionsResponseBodyRegionModelList> & regionModelList) { DARABONBA_PTR_SET_VALUE(regionModelList_, regionModelList) };
    inline DescribeRegionsResponseBody& setRegionModelList(vector<DescribeRegionsResponseBodyRegionModelList> && regionModelList) { DARABONBA_PTR_SET_RVALUE(regionModelList_, regionModelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of regions.
    std::shared_ptr<vector<DescribeRegionsResponseBodyRegionModelList>> regionModelList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
