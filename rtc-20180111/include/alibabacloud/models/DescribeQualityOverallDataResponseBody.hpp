// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQualityOverallDataResponseBodyQualityOverallData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QualityOverallData, qualityOverallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QualityOverallData, qualityOverallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQualityOverallDataResponseBody() = default ;
    DescribeQualityOverallDataResponseBody(const DescribeQualityOverallDataResponseBody &) = default ;
    DescribeQualityOverallDataResponseBody(DescribeQualityOverallDataResponseBody &&) = default ;
    DescribeQualityOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityOverallDataResponseBody() = default ;
    DescribeQualityOverallDataResponseBody& operator=(const DescribeQualityOverallDataResponseBody &) = default ;
    DescribeQualityOverallDataResponseBody& operator=(DescribeQualityOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualityOverallData_ == nullptr
        && return this->requestId_ == nullptr; };
    // qualityOverallData Field Functions 
    bool hasQualityOverallData() const { return this->qualityOverallData_ != nullptr;};
    void deleteQualityOverallData() { this->qualityOverallData_ = nullptr;};
    inline const vector<DescribeQualityOverallDataResponseBodyQualityOverallData> & qualityOverallData() const { DARABONBA_PTR_GET_CONST(qualityOverallData_, vector<DescribeQualityOverallDataResponseBodyQualityOverallData>) };
    inline vector<DescribeQualityOverallDataResponseBodyQualityOverallData> qualityOverallData() { DARABONBA_PTR_GET(qualityOverallData_, vector<DescribeQualityOverallDataResponseBodyQualityOverallData>) };
    inline DescribeQualityOverallDataResponseBody& setQualityOverallData(const vector<DescribeQualityOverallDataResponseBodyQualityOverallData> & qualityOverallData) { DARABONBA_PTR_SET_VALUE(qualityOverallData_, qualityOverallData) };
    inline DescribeQualityOverallDataResponseBody& setQualityOverallData(vector<DescribeQualityOverallDataResponseBodyQualityOverallData> && qualityOverallData) { DARABONBA_PTR_SET_RVALUE(qualityOverallData_, qualityOverallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQualityOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeQualityOverallDataResponseBodyQualityOverallData>> qualityOverallData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
