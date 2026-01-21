// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCETYPEAUTOENABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCETYPEAUTOENABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRegionResourceTypeAutoEnableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionResourceTypeAutoEnableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionResourceAutoEnable, regionResourceAutoEnable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionResourceTypeAutoEnableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionResourceAutoEnable, regionResourceAutoEnable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionResourceTypeAutoEnableResponseBody() = default ;
    DescribeRegionResourceTypeAutoEnableResponseBody(const DescribeRegionResourceTypeAutoEnableResponseBody &) = default ;
    DescribeRegionResourceTypeAutoEnableResponseBody(DescribeRegionResourceTypeAutoEnableResponseBody &&) = default ;
    DescribeRegionResourceTypeAutoEnableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionResourceTypeAutoEnableResponseBody() = default ;
    DescribeRegionResourceTypeAutoEnableResponseBody& operator=(const DescribeRegionResourceTypeAutoEnableResponseBody &) = default ;
    DescribeRegionResourceTypeAutoEnableResponseBody& operator=(DescribeRegionResourceTypeAutoEnableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionResourceAutoEnable_ == nullptr
        && this->requestId_ == nullptr; };
    // regionResourceAutoEnable Field Functions 
    bool hasRegionResourceAutoEnable() const { return this->regionResourceAutoEnable_ != nullptr;};
    void deleteRegionResourceAutoEnable() { this->regionResourceAutoEnable_ = nullptr;};
    inline const map<string, Darabonba::Json> & getRegionResourceAutoEnable() const { DARABONBA_PTR_GET_CONST(regionResourceAutoEnable_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> getRegionResourceAutoEnable() { DARABONBA_PTR_GET(regionResourceAutoEnable_, map<string, Darabonba::Json>) };
    inline DescribeRegionResourceTypeAutoEnableResponseBody& setRegionResourceAutoEnable(const map<string, Darabonba::Json> & regionResourceAutoEnable) { DARABONBA_PTR_SET_VALUE(regionResourceAutoEnable_, regionResourceAutoEnable) };
    inline DescribeRegionResourceTypeAutoEnableResponseBody& setRegionResourceAutoEnable(map<string, Darabonba::Json> && regionResourceAutoEnable) { DARABONBA_PTR_SET_RVALUE(regionResourceAutoEnable_, regionResourceAutoEnable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionResourceTypeAutoEnableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<map<string, Darabonba::Json>> regionResourceAutoEnable_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
