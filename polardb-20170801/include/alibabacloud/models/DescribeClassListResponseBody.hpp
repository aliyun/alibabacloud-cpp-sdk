// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClassListResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeClassListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClassListResponseBody() = default ;
    DescribeClassListResponseBody(const DescribeClassListResponseBody &) = default ;
    DescribeClassListResponseBody(DescribeClassListResponseBody &&) = default ;
    DescribeClassListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassListResponseBody() = default ;
    DescribeClassListResponseBody& operator=(const DescribeClassListResponseBody &) = default ;
    DescribeClassListResponseBody& operator=(DescribeClassListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeClassListResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeClassListResponseBodyItems>) };
    inline vector<DescribeClassListResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeClassListResponseBodyItems>) };
    inline DescribeClassListResponseBody& setItems(const vector<DescribeClassListResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeClassListResponseBody& setItems(vector<DescribeClassListResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClassListResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClassListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster specifications.
    std::shared_ptr<vector<DescribeClassListResponseBodyItems>> items_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
