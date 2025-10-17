// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QualityOsSdkVersionStatDataList, qualityOsSdkVersionStatDataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QualityOsSdkVersionStatDataList, qualityOsSdkVersionStatDataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody(const DescribeQualityOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody(DescribeQualityOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody& operator=(const DescribeQualityOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody& operator=(DescribeQualityOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualityOsSdkVersionStatDataList_ == nullptr
        && return this->requestId_ == nullptr; };
    // qualityOsSdkVersionStatDataList Field Functions 
    bool hasQualityOsSdkVersionStatDataList() const { return this->qualityOsSdkVersionStatDataList_ != nullptr;};
    void deleteQualityOsSdkVersionStatDataList() { this->qualityOsSdkVersionStatDataList_ = nullptr;};
    inline const vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList> & qualityOsSdkVersionStatDataList() const { DARABONBA_PTR_GET_CONST(qualityOsSdkVersionStatDataList_, vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>) };
    inline vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList> qualityOsSdkVersionStatDataList() { DARABONBA_PTR_GET(qualityOsSdkVersionStatDataList_, vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>) };
    inline DescribeQualityOsSdkVersionDistributionStatDataResponseBody& setQualityOsSdkVersionStatDataList(const vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList> & qualityOsSdkVersionStatDataList) { DARABONBA_PTR_SET_VALUE(qualityOsSdkVersionStatDataList_, qualityOsSdkVersionStatDataList) };
    inline DescribeQualityOsSdkVersionDistributionStatDataResponseBody& setQualityOsSdkVersionStatDataList(vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList> && qualityOsSdkVersionStatDataList) { DARABONBA_PTR_SET_RVALUE(qualityOsSdkVersionStatDataList_, qualityOsSdkVersionStatDataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQualityOsSdkVersionDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>> qualityOsSdkVersionStatDataList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
