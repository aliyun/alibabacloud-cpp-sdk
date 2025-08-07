// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAvailableResourcesResponseBodyAvailableZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAvailableResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAvailableResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAvailableResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAvailableResourcesResponseBody() = default ;
    DescribeDBClusterAvailableResourcesResponseBody(const DescribeDBClusterAvailableResourcesResponseBody &) = default ;
    DescribeDBClusterAvailableResourcesResponseBody(DescribeDBClusterAvailableResourcesResponseBody &&) = default ;
    DescribeDBClusterAvailableResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAvailableResourcesResponseBody() = default ;
    DescribeDBClusterAvailableResourcesResponseBody& operator=(const DescribeDBClusterAvailableResourcesResponseBody &) = default ;
    DescribeDBClusterAvailableResourcesResponseBody& operator=(DescribeDBClusterAvailableResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableZones_ != nullptr
        && this->requestId_ != nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones> & availableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones>) };
    inline vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones> availableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones>) };
    inline DescribeDBClusterAvailableResourcesResponseBody& setAvailableZones(const vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeDBClusterAvailableResourcesResponseBody& setAvailableZones(vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The available zones of the cluster.
    std::shared_ptr<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones>> availableZones_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
