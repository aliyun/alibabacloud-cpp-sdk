// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMGROUPPARAMETERGROUPPARAMDETAILPARAMETERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMGROUPPARAMETERGROUPPARAMDETAILPARAMETERDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
    };
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail() = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail(const DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail &) = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail(DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail &&) = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail() = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail& operator=(const DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail &) = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail& operator=(DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramName_ == nullptr
        && return this->paramValue_ == nullptr; };
    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


  protected:
    // The name of the parameter.
    std::shared_ptr<string> paramName_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> paramValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
