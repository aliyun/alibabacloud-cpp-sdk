// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMETERGROUPPARAMETERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMETERGROUPPARAMETERDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterGroupResponseBodyParameterGroupParameterDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBodyParameterGroupParameterDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBodyParameterGroupParameterDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
    };
    DescribeParameterGroupResponseBodyParameterGroupParameterDetail() = default ;
    DescribeParameterGroupResponseBodyParameterGroupParameterDetail(const DescribeParameterGroupResponseBodyParameterGroupParameterDetail &) = default ;
    DescribeParameterGroupResponseBodyParameterGroupParameterDetail(DescribeParameterGroupResponseBodyParameterGroupParameterDetail &&) = default ;
    DescribeParameterGroupResponseBodyParameterGroupParameterDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBodyParameterGroupParameterDetail() = default ;
    DescribeParameterGroupResponseBodyParameterGroupParameterDetail& operator=(const DescribeParameterGroupResponseBodyParameterGroupParameterDetail &) = default ;
    DescribeParameterGroupResponseBodyParameterGroupParameterDetail& operator=(DescribeParameterGroupResponseBodyParameterGroupParameterDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramName_ != nullptr
        && this->paramValue_ != nullptr; };
    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline DescribeParameterGroupResponseBodyParameterGroupParameterDetail& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline DescribeParameterGroupResponseBodyParameterGroupParameterDetail& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


  protected:
    // The name of the parameter.
    std::shared_ptr<string> paramName_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> paramValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
