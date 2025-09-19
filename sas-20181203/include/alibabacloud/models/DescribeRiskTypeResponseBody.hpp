// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskTypeResponseBodyRiskTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskTypes, riskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskTypes, riskTypes_);
    };
    DescribeRiskTypeResponseBody() = default ;
    DescribeRiskTypeResponseBody(const DescribeRiskTypeResponseBody &) = default ;
    DescribeRiskTypeResponseBody(DescribeRiskTypeResponseBody &&) = default ;
    DescribeRiskTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTypeResponseBody() = default ;
    DescribeRiskTypeResponseBody& operator=(const DescribeRiskTypeResponseBody &) = default ;
    DescribeRiskTypeResponseBody& operator=(DescribeRiskTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->riskTypes_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskTypes Field Functions 
    bool hasRiskTypes() const { return this->riskTypes_ != nullptr;};
    void deleteRiskTypes() { this->riskTypes_ = nullptr;};
    inline const vector<DescribeRiskTypeResponseBodyRiskTypes> & riskTypes() const { DARABONBA_PTR_GET_CONST(riskTypes_, vector<DescribeRiskTypeResponseBodyRiskTypes>) };
    inline vector<DescribeRiskTypeResponseBodyRiskTypes> riskTypes() { DARABONBA_PTR_GET(riskTypes_, vector<DescribeRiskTypeResponseBodyRiskTypes>) };
    inline DescribeRiskTypeResponseBody& setRiskTypes(const vector<DescribeRiskTypeResponseBodyRiskTypes> & riskTypes) { DARABONBA_PTR_SET_VALUE(riskTypes_, riskTypes) };
    inline DescribeRiskTypeResponseBody& setRiskTypes(vector<DescribeRiskTypeResponseBodyRiskTypes> && riskTypes) { DARABONBA_PTR_SET_RVALUE(riskTypes_, riskTypes) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the information about baseline types.
    std::shared_ptr<vector<DescribeRiskTypeResponseBodyRiskTypes>> riskTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
