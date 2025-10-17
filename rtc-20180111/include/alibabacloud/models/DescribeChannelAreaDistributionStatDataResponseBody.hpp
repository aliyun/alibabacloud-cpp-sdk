// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelAreaDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AreaStatList, areaStatList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaStatList, areaStatList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelAreaDistributionStatDataResponseBody() = default ;
    DescribeChannelAreaDistributionStatDataResponseBody(const DescribeChannelAreaDistributionStatDataResponseBody &) = default ;
    DescribeChannelAreaDistributionStatDataResponseBody(DescribeChannelAreaDistributionStatDataResponseBody &&) = default ;
    DescribeChannelAreaDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelAreaDistributionStatDataResponseBody() = default ;
    DescribeChannelAreaDistributionStatDataResponseBody& operator=(const DescribeChannelAreaDistributionStatDataResponseBody &) = default ;
    DescribeChannelAreaDistributionStatDataResponseBody& operator=(DescribeChannelAreaDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaStatList_ == nullptr
        && return this->requestId_ == nullptr; };
    // areaStatList Field Functions 
    bool hasAreaStatList() const { return this->areaStatList_ != nullptr;};
    void deleteAreaStatList() { this->areaStatList_ = nullptr;};
    inline const vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList> & areaStatList() const { DARABONBA_PTR_GET_CONST(areaStatList_, vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>) };
    inline vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList> areaStatList() { DARABONBA_PTR_GET(areaStatList_, vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>) };
    inline DescribeChannelAreaDistributionStatDataResponseBody& setAreaStatList(const vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList> & areaStatList) { DARABONBA_PTR_SET_VALUE(areaStatList_, areaStatList) };
    inline DescribeChannelAreaDistributionStatDataResponseBody& setAreaStatList(vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList> && areaStatList) { DARABONBA_PTR_SET_RVALUE(areaStatList_, areaStatList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelAreaDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>> areaStatList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
