// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZoneList, availableZoneList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZoneList, availableZoneList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableZoneList_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr; };
    // availableZoneList Field Functions 
    bool hasAvailableZoneList() const { return this->availableZoneList_ != nullptr;};
    void deleteAvailableZoneList() { this->availableZoneList_ = nullptr;};
    inline const vector<DescribeAvailableResourceResponseBodyAvailableZoneList> & availableZoneList() const { DARABONBA_PTR_GET_CONST(availableZoneList_, vector<DescribeAvailableResourceResponseBodyAvailableZoneList>) };
    inline vector<DescribeAvailableResourceResponseBodyAvailableZoneList> availableZoneList() { DARABONBA_PTR_GET(availableZoneList_, vector<DescribeAvailableResourceResponseBodyAvailableZoneList>) };
    inline DescribeAvailableResourceResponseBody& setAvailableZoneList(const vector<DescribeAvailableResourceResponseBodyAvailableZoneList> & availableZoneList) { DARABONBA_PTR_SET_VALUE(availableZoneList_, availableZoneList) };
    inline DescribeAvailableResourceResponseBody& setAvailableZoneList(vector<DescribeAvailableResourceResponseBodyAvailableZoneList> && availableZoneList) { DARABONBA_PTR_SET_RVALUE(availableZoneList_, availableZoneList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableResourceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The supported zones.
    std::shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneList>> availableZoneList_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
