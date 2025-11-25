// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskEventTopAttackAppResponseBodyAttackApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskEventTopAttackAppResponseBody() = default ;
    DescribeRiskEventTopAttackAppResponseBody(const DescribeRiskEventTopAttackAppResponseBody &) = default ;
    DescribeRiskEventTopAttackAppResponseBody(DescribeRiskEventTopAttackAppResponseBody &&) = default ;
    DescribeRiskEventTopAttackAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackAppResponseBody() = default ;
    DescribeRiskEventTopAttackAppResponseBody& operator=(const DescribeRiskEventTopAttackAppResponseBody &) = default ;
    DescribeRiskEventTopAttackAppResponseBody& operator=(DescribeRiskEventTopAttackAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackApps_ == nullptr
        && return this->requestId_ == nullptr; };
    // attackApps Field Functions 
    bool hasAttackApps() const { return this->attackApps_ != nullptr;};
    void deleteAttackApps() { this->attackApps_ = nullptr;};
    inline const vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps> & attackApps() const { DARABONBA_PTR_GET_CONST(attackApps_, vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps>) };
    inline vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps> attackApps() { DARABONBA_PTR_GET(attackApps_, vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps>) };
    inline DescribeRiskEventTopAttackAppResponseBody& setAttackApps(const vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps> & attackApps) { DARABONBA_PTR_SET_VALUE(attackApps_, attackApps) };
    inline DescribeRiskEventTopAttackAppResponseBody& setAttackApps(vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps> && attackApps) { DARABONBA_PTR_SET_RVALUE(attackApps_, attackApps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventTopAttackAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeRiskEventTopAttackAppResponseBodyAttackApps>> attackApps_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
