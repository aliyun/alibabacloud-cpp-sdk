// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskListCheckResultResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskListCheckResultResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskListCheckResultResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
    };
    DescribeRiskListCheckResultResponseBodyList() = default ;
    DescribeRiskListCheckResultResponseBodyList(const DescribeRiskListCheckResultResponseBodyList &) = default ;
    DescribeRiskListCheckResultResponseBodyList(DescribeRiskListCheckResultResponseBodyList &&) = default ;
    DescribeRiskListCheckResultResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskListCheckResultResponseBodyList() = default ;
    DescribeRiskListCheckResultResponseBodyList& operator=(const DescribeRiskListCheckResultResponseBodyList &) = default ;
    DescribeRiskListCheckResultResponseBodyList& operator=(DescribeRiskListCheckResultResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->riskCount_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRiskListCheckResultResponseBodyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int64_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
    inline DescribeRiskListCheckResultResponseBodyList& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


  protected:
    // The instance ID of the cloud service.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The total number of risk items detected in the current cloud service.
    std::shared_ptr<int64_t> riskCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
