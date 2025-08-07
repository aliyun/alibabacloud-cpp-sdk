// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues.hpp>
#include <alibabacloud/models/DescribeSecurityEventTopNMetricResponseBodyTopNMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventTopNValues, securityEventTopNValues_);
      DARABONBA_PTR_TO_JSON(TopNMetaData, topNMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventTopNValues, securityEventTopNValues_);
      DARABONBA_PTR_FROM_JSON(TopNMetaData, topNMetaData_);
    };
    DescribeSecurityEventTopNMetricResponseBody() = default ;
    DescribeSecurityEventTopNMetricResponseBody(const DescribeSecurityEventTopNMetricResponseBody &) = default ;
    DescribeSecurityEventTopNMetricResponseBody(DescribeSecurityEventTopNMetricResponseBody &&) = default ;
    DescribeSecurityEventTopNMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricResponseBody() = default ;
    DescribeSecurityEventTopNMetricResponseBody& operator=(const DescribeSecurityEventTopNMetricResponseBody &) = default ;
    DescribeSecurityEventTopNMetricResponseBody& operator=(DescribeSecurityEventTopNMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityEventTopNValues_ != nullptr && this->topNMetaData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventTopNMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventTopNValues Field Functions 
    bool hasSecurityEventTopNValues() const { return this->securityEventTopNValues_ != nullptr;};
    void deleteSecurityEventTopNValues() { this->securityEventTopNValues_ = nullptr;};
    inline const vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues> & securityEventTopNValues() const { DARABONBA_PTR_GET_CONST(securityEventTopNValues_, vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues>) };
    inline vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues> securityEventTopNValues() { DARABONBA_PTR_GET(securityEventTopNValues_, vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues>) };
    inline DescribeSecurityEventTopNMetricResponseBody& setSecurityEventTopNValues(const vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues> & securityEventTopNValues) { DARABONBA_PTR_SET_VALUE(securityEventTopNValues_, securityEventTopNValues) };
    inline DescribeSecurityEventTopNMetricResponseBody& setSecurityEventTopNValues(vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues> && securityEventTopNValues) { DARABONBA_PTR_SET_RVALUE(securityEventTopNValues_, securityEventTopNValues) };


    // topNMetaData Field Functions 
    bool hasTopNMetaData() const { return this->topNMetaData_ != nullptr;};
    void deleteTopNMetaData() { this->topNMetaData_ = nullptr;};
    inline const DescribeSecurityEventTopNMetricResponseBodyTopNMetaData & topNMetaData() const { DARABONBA_PTR_GET_CONST(topNMetaData_, DescribeSecurityEventTopNMetricResponseBodyTopNMetaData) };
    inline DescribeSecurityEventTopNMetricResponseBodyTopNMetaData topNMetaData() { DARABONBA_PTR_GET(topNMetaData_, DescribeSecurityEventTopNMetricResponseBodyTopNMetaData) };
    inline DescribeSecurityEventTopNMetricResponseBody& setTopNMetaData(const DescribeSecurityEventTopNMetricResponseBodyTopNMetaData & topNMetaData) { DARABONBA_PTR_SET_VALUE(topNMetaData_, topNMetaData) };
    inline DescribeSecurityEventTopNMetricResponseBody& setTopNMetaData(DescribeSecurityEventTopNMetricResponseBodyTopNMetaData && topNMetaData) { DARABONBA_PTR_SET_RVALUE(topNMetaData_, topNMetaData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The top N data entries returned.
    std::shared_ptr<vector<DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues>> securityEventTopNValues_ = nullptr;
    // The metadata of the data entries returned.
    std::shared_ptr<DescribeSecurityEventTopNMetricResponseBodyTopNMetaData> topNMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
