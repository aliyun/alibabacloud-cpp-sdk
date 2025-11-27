// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYPARAMGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYPARAMGROUPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParametersResponseBodyParamGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBodyParamGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ParamGroupId, paramGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBodyParamGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamGroupId, paramGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
    };
    DescribeParametersResponseBodyParamGroupInfo() = default ;
    DescribeParametersResponseBodyParamGroupInfo(const DescribeParametersResponseBodyParamGroupInfo &) = default ;
    DescribeParametersResponseBodyParamGroupInfo(DescribeParametersResponseBodyParamGroupInfo &&) = default ;
    DescribeParametersResponseBodyParamGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBodyParamGroupInfo() = default ;
    DescribeParametersResponseBodyParamGroupInfo& operator=(const DescribeParametersResponseBodyParamGroupInfo &) = default ;
    DescribeParametersResponseBodyParamGroupInfo& operator=(DescribeParametersResponseBodyParamGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramGroupId_ == nullptr
        && return this->parameterGroupDesc_ == nullptr && return this->parameterGroupName_ == nullptr && return this->parameterGroupType_ == nullptr; };
    // paramGroupId Field Functions 
    bool hasParamGroupId() const { return this->paramGroupId_ != nullptr;};
    void deleteParamGroupId() { this->paramGroupId_ = nullptr;};
    inline string paramGroupId() const { DARABONBA_PTR_GET_DEFAULT(paramGroupId_, "") };
    inline DescribeParametersResponseBodyParamGroupInfo& setParamGroupId(string paramGroupId) { DARABONBA_PTR_SET_VALUE(paramGroupId_, paramGroupId) };


    // parameterGroupDesc Field Functions 
    bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
    void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
    inline string parameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
    inline DescribeParametersResponseBodyParamGroupInfo& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string parameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline DescribeParametersResponseBodyParamGroupInfo& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameterGroupType Field Functions 
    bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
    void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
    inline string parameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
    inline DescribeParametersResponseBodyParamGroupInfo& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


  protected:
    // The ID of the parameter template.
    std::shared_ptr<string> paramGroupId_ = nullptr;
    // The description of the parameter template.
    std::shared_ptr<string> parameterGroupDesc_ = nullptr;
    // The name of the parameter template.
    std::shared_ptr<string> parameterGroupName_ = nullptr;
    // The type of the parameter template.
    std::shared_ptr<string> parameterGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
