// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcZoneResponseBodyZoneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneList, zoneList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneList, zoneList_);
    };
    DescribeVpcZoneResponseBody() = default ;
    DescribeVpcZoneResponseBody(const DescribeVpcZoneResponseBody &) = default ;
    DescribeVpcZoneResponseBody(DescribeVpcZoneResponseBody &&) = default ;
    DescribeVpcZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcZoneResponseBody() = default ;
    DescribeVpcZoneResponseBody& operator=(const DescribeVpcZoneResponseBody &) = default ;
    DescribeVpcZoneResponseBody& operator=(DescribeVpcZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->zoneList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneList Field Functions 
    bool hasZoneList() const { return this->zoneList_ != nullptr;};
    void deleteZoneList() { this->zoneList_ = nullptr;};
    inline const vector<DescribeVpcZoneResponseBodyZoneList> & zoneList() const { DARABONBA_PTR_GET_CONST(zoneList_, vector<DescribeVpcZoneResponseBodyZoneList>) };
    inline vector<DescribeVpcZoneResponseBodyZoneList> zoneList() { DARABONBA_PTR_GET(zoneList_, vector<DescribeVpcZoneResponseBodyZoneList>) };
    inline DescribeVpcZoneResponseBody& setZoneList(const vector<DescribeVpcZoneResponseBodyZoneList> & zoneList) { DARABONBA_PTR_SET_VALUE(zoneList_, zoneList) };
    inline DescribeVpcZoneResponseBody& setZoneList(vector<DescribeVpcZoneResponseBodyZoneList> && zoneList) { DARABONBA_PTR_SET_RVALUE(zoneList_, zoneList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The zones.
    std::shared_ptr<vector<DescribeVpcZoneResponseBodyZoneList>> zoneList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
