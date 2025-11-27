// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterGroupResponseBodyParamGroupParameterGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupResponseBodyParamGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBodyParamGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroup, parameterGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBodyParamGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroup, parameterGroup_);
    };
    DescribeParameterGroupResponseBodyParamGroup() = default ;
    DescribeParameterGroupResponseBodyParamGroup(const DescribeParameterGroupResponseBodyParamGroup &) = default ;
    DescribeParameterGroupResponseBodyParamGroup(DescribeParameterGroupResponseBodyParamGroup &&) = default ;
    DescribeParameterGroupResponseBodyParamGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBodyParamGroup() = default ;
    DescribeParameterGroupResponseBodyParamGroup& operator=(const DescribeParameterGroupResponseBodyParamGroup &) = default ;
    DescribeParameterGroupResponseBodyParamGroup& operator=(DescribeParameterGroupResponseBodyParamGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterGroup_ == nullptr; };
    // parameterGroup Field Functions 
    bool hasParameterGroup() const { return this->parameterGroup_ != nullptr;};
    void deleteParameterGroup() { this->parameterGroup_ = nullptr;};
    inline const vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup> & parameterGroup() const { DARABONBA_PTR_GET_CONST(parameterGroup_, vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup>) };
    inline vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup> parameterGroup() { DARABONBA_PTR_GET(parameterGroup_, vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup>) };
    inline DescribeParameterGroupResponseBodyParamGroup& setParameterGroup(const vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup> & parameterGroup) { DARABONBA_PTR_SET_VALUE(parameterGroup_, parameterGroup) };
    inline DescribeParameterGroupResponseBodyParamGroup& setParameterGroup(vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup> && parameterGroup) { DARABONBA_PTR_SET_RVALUE(parameterGroup_, parameterGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroup>> parameterGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
