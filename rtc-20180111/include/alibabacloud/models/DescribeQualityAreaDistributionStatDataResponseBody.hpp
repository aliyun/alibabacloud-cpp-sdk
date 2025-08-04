// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityAreaDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QualityStatDataList, qualityStatDataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QualityStatDataList, qualityStatDataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQualityAreaDistributionStatDataResponseBody() = default ;
    DescribeQualityAreaDistributionStatDataResponseBody(const DescribeQualityAreaDistributionStatDataResponseBody &) = default ;
    DescribeQualityAreaDistributionStatDataResponseBody(DescribeQualityAreaDistributionStatDataResponseBody &&) = default ;
    DescribeQualityAreaDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityAreaDistributionStatDataResponseBody() = default ;
    DescribeQualityAreaDistributionStatDataResponseBody& operator=(const DescribeQualityAreaDistributionStatDataResponseBody &) = default ;
    DescribeQualityAreaDistributionStatDataResponseBody& operator=(DescribeQualityAreaDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualityStatDataList_ != nullptr
        && this->requestId_ != nullptr; };
    // qualityStatDataList Field Functions 
    bool hasQualityStatDataList() const { return this->qualityStatDataList_ != nullptr;};
    void deleteQualityStatDataList() { this->qualityStatDataList_ = nullptr;};
    inline const vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList> & qualityStatDataList() const { DARABONBA_PTR_GET_CONST(qualityStatDataList_, vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>) };
    inline vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList> qualityStatDataList() { DARABONBA_PTR_GET(qualityStatDataList_, vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>) };
    inline DescribeQualityAreaDistributionStatDataResponseBody& setQualityStatDataList(const vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList> & qualityStatDataList) { DARABONBA_PTR_SET_VALUE(qualityStatDataList_, qualityStatDataList) };
    inline DescribeQualityAreaDistributionStatDataResponseBody& setQualityStatDataList(vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList> && qualityStatDataList) { DARABONBA_PTR_SET_RVALUE(qualityStatDataList_, qualityStatDataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>> qualityStatDataList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
