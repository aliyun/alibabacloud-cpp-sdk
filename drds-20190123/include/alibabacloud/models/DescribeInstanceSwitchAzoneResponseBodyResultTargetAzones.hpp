// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHAZONERESPONSEBODYRESULTTARGETAZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHAZONERESPONSEBODYRESULTTARGETAZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones& obj) { 
      DARABONBA_PTR_TO_JSON(TargetAzone, targetAzone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetAzone, targetAzone_);
    };
    DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones() = default ;
    DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones(const DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones &) = default ;
    DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones(DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones &&) = default ;
    DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones() = default ;
    DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones& operator=(const DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones &) = default ;
    DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones& operator=(DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetAzone_ != nullptr; };
    // targetAzone Field Functions 
    bool hasTargetAzone() const { return this->targetAzone_ != nullptr;};
    void deleteTargetAzone() { this->targetAzone_ = nullptr;};
    inline const vector<string> & targetAzone() const { DARABONBA_PTR_GET_CONST(targetAzone_, vector<string>) };
    inline vector<string> targetAzone() { DARABONBA_PTR_GET(targetAzone_, vector<string>) };
    inline DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones& setTargetAzone(const vector<string> & targetAzone) { DARABONBA_PTR_SET_VALUE(targetAzone_, targetAzone) };
    inline DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones& setTargetAzone(vector<string> && targetAzone) { DARABONBA_PTR_SET_RVALUE(targetAzone_, targetAzone) };


  protected:
    std::shared_ptr<vector<string>> targetAzone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
