// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQualityDistributionStatDataResponseBodyQualityStatDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QualityStatDataList, qualityStatDataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QualityStatDataList, qualityStatDataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQualityDistributionStatDataResponseBody() = default ;
    DescribeQualityDistributionStatDataResponseBody(const DescribeQualityDistributionStatDataResponseBody &) = default ;
    DescribeQualityDistributionStatDataResponseBody(DescribeQualityDistributionStatDataResponseBody &&) = default ;
    DescribeQualityDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityDistributionStatDataResponseBody() = default ;
    DescribeQualityDistributionStatDataResponseBody& operator=(const DescribeQualityDistributionStatDataResponseBody &) = default ;
    DescribeQualityDistributionStatDataResponseBody& operator=(DescribeQualityDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualityStatDataList_ == nullptr
        && return this->requestId_ == nullptr; };
    // qualityStatDataList Field Functions 
    bool hasQualityStatDataList() const { return this->qualityStatDataList_ != nullptr;};
    void deleteQualityStatDataList() { this->qualityStatDataList_ = nullptr;};
    inline const vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList> & qualityStatDataList() const { DARABONBA_PTR_GET_CONST(qualityStatDataList_, vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>) };
    inline vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList> qualityStatDataList() { DARABONBA_PTR_GET(qualityStatDataList_, vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>) };
    inline DescribeQualityDistributionStatDataResponseBody& setQualityStatDataList(const vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList> & qualityStatDataList) { DARABONBA_PTR_SET_VALUE(qualityStatDataList_, qualityStatDataList) };
    inline DescribeQualityDistributionStatDataResponseBody& setQualityStatDataList(vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList> && qualityStatDataList) { DARABONBA_PTR_SET_RVALUE(qualityStatDataList_, qualityStatDataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQualityDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>> qualityStatDataList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
