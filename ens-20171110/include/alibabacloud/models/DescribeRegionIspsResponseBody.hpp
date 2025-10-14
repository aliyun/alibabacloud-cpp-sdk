// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONISPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONISPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionIspsResponseBodyIsps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeRegionIspsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionIspsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionIspsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionIspsResponseBody() = default ;
    DescribeRegionIspsResponseBody(const DescribeRegionIspsResponseBody &) = default ;
    DescribeRegionIspsResponseBody(DescribeRegionIspsResponseBody &&) = default ;
    DescribeRegionIspsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionIspsResponseBody() = default ;
    DescribeRegionIspsResponseBody& operator=(const DescribeRegionIspsResponseBody &) = default ;
    DescribeRegionIspsResponseBody& operator=(DescribeRegionIspsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isps_ == nullptr
        && return this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const vector<DescribeRegionIspsResponseBodyIsps> & isps() const { DARABONBA_PTR_GET_CONST(isps_, vector<DescribeRegionIspsResponseBodyIsps>) };
    inline vector<DescribeRegionIspsResponseBodyIsps> isps() { DARABONBA_PTR_GET(isps_, vector<DescribeRegionIspsResponseBodyIsps>) };
    inline DescribeRegionIspsResponseBody& setIsps(const vector<DescribeRegionIspsResponseBodyIsps> & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeRegionIspsResponseBody& setIsps(vector<DescribeRegionIspsResponseBodyIsps> && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionIspsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of ISPs.
    std::shared_ptr<vector<DescribeRegionIspsResponseBodyIsps>> isps_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
