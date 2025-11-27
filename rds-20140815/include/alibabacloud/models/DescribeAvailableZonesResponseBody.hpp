// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableZonesResponseBodyAvailableZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableZonesResponseBody() = default ;
    DescribeAvailableZonesResponseBody(const DescribeAvailableZonesResponseBody &) = default ;
    DescribeAvailableZonesResponseBody(DescribeAvailableZonesResponseBody &&) = default ;
    DescribeAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBody() = default ;
    DescribeAvailableZonesResponseBody& operator=(const DescribeAvailableZonesResponseBody &) = default ;
    DescribeAvailableZonesResponseBody& operator=(DescribeAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableZones_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeAvailableZonesResponseBodyAvailableZones> & availableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeAvailableZonesResponseBodyAvailableZones>) };
    inline vector<DescribeAvailableZonesResponseBodyAvailableZones> availableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeAvailableZonesResponseBodyAvailableZones>) };
    inline DescribeAvailableZonesResponseBody& setAvailableZones(const vector<DescribeAvailableZonesResponseBodyAvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeAvailableZonesResponseBody& setAvailableZones(vector<DescribeAvailableZonesResponseBodyAvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The available zones in the region.
    std::shared_ptr<vector<DescribeAvailableZonesResponseBodyAvailableZones>> availableZones_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
