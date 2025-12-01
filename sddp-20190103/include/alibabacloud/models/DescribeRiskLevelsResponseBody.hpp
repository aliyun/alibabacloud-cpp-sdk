// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskLevelsResponseBodyRiskLevelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
    };
    DescribeRiskLevelsResponseBody() = default ;
    DescribeRiskLevelsResponseBody(const DescribeRiskLevelsResponseBody &) = default ;
    DescribeRiskLevelsResponseBody(DescribeRiskLevelsResponseBody &&) = default ;
    DescribeRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskLevelsResponseBody() = default ;
    DescribeRiskLevelsResponseBody& operator=(const DescribeRiskLevelsResponseBody &) = default ;
    DescribeRiskLevelsResponseBody& operator=(DescribeRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->riskLevelList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<DescribeRiskLevelsResponseBodyRiskLevelList> & riskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<DescribeRiskLevelsResponseBodyRiskLevelList>) };
    inline vector<DescribeRiskLevelsResponseBodyRiskLevelList> riskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<DescribeRiskLevelsResponseBodyRiskLevelList>) };
    inline DescribeRiskLevelsResponseBody& setRiskLevelList(const vector<DescribeRiskLevelsResponseBodyRiskLevelList> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline DescribeRiskLevelsResponseBody& setRiskLevelList(vector<DescribeRiskLevelsResponseBodyRiskLevelList> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of sensitivity levels.
    std::shared_ptr<vector<DescribeRiskLevelsResponseBodyRiskLevelList>> riskLevelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
