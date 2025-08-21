// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODYWEBINSTANCERELATIONSINSTANCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODYWEBINSTANCERELATIONSINSTANCEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EipList, eipList_);
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EipList, eipList_);
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails() = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails(const DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails &) = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails(DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails &&) = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails() = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& operator=(const DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails &) = default ;
    DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& operator=(DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipList_ != nullptr
        && this->functionVersion_ != nullptr && this->instanceId_ != nullptr; };
    // eipList Field Functions 
    bool hasEipList() const { return this->eipList_ != nullptr;};
    void deleteEipList() { this->eipList_ = nullptr;};
    inline const vector<string> & eipList() const { DARABONBA_PTR_GET_CONST(eipList_, vector<string>) };
    inline vector<string> eipList() { DARABONBA_PTR_GET(eipList_, vector<string>) };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& setEipList(const vector<string> & eipList) { DARABONBA_PTR_SET_VALUE(eipList_, eipList) };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& setEipList(vector<string> && eipList) { DARABONBA_PTR_SET_RVALUE(eipList_, eipList) };


    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline string functionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeWebInstanceRelationsResponseBodyWebInstanceRelationsInstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The IP addresses of the instance.
    std::shared_ptr<vector<string>> eipList_ = nullptr;
    // The function plan of the instance. Valid values:
    // 
    // *   **default**: Standard function plan
    // *   **enhance**: Enhanced function plan
    std::shared_ptr<string> functionVersion_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
