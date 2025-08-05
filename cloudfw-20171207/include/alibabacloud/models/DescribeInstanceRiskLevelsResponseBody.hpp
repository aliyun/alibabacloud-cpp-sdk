// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRiskLevelsResponseBodyInstanceRisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRisks, instanceRisks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRisks, instanceRisks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceRiskLevelsResponseBody() = default ;
    DescribeInstanceRiskLevelsResponseBody(const DescribeInstanceRiskLevelsResponseBody &) = default ;
    DescribeInstanceRiskLevelsResponseBody(DescribeInstanceRiskLevelsResponseBody &&) = default ;
    DescribeInstanceRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsResponseBody() = default ;
    DescribeInstanceRiskLevelsResponseBody& operator=(const DescribeInstanceRiskLevelsResponseBody &) = default ;
    DescribeInstanceRiskLevelsResponseBody& operator=(DescribeInstanceRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceRisks_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceRisks Field Functions 
    bool hasInstanceRisks() const { return this->instanceRisks_ != nullptr;};
    void deleteInstanceRisks() { this->instanceRisks_ = nullptr;};
    inline const vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks> & instanceRisks() const { DARABONBA_PTR_GET_CONST(instanceRisks_, vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks>) };
    inline vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks> instanceRisks() { DARABONBA_PTR_GET(instanceRisks_, vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks>) };
    inline DescribeInstanceRiskLevelsResponseBody& setInstanceRisks(const vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks> & instanceRisks) { DARABONBA_PTR_SET_VALUE(instanceRisks_, instanceRisks) };
    inline DescribeInstanceRiskLevelsResponseBody& setInstanceRisks(vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks> && instanceRisks) { DARABONBA_PTR_SET_RVALUE(instanceRisks_, instanceRisks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instances.
    std::shared_ptr<vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks>> instanceRisks_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
