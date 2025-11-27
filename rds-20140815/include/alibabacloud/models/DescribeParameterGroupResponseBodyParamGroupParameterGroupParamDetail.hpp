// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMGROUPPARAMETERGROUPPARAMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYPARAMGROUPPARAMETERGROUPPARAMDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterDetail, parameterDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterDetail, parameterDetail_);
    };
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail() = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail(const DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail &) = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail(DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail &&) = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail() = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail& operator=(const DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail &) = default ;
    DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail& operator=(DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterDetail_ == nullptr; };
    // parameterDetail Field Functions 
    bool hasParameterDetail() const { return this->parameterDetail_ != nullptr;};
    void deleteParameterDetail() { this->parameterDetail_ = nullptr;};
    inline const vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail> & parameterDetail() const { DARABONBA_PTR_GET_CONST(parameterDetail_, vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail>) };
    inline vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail> parameterDetail() { DARABONBA_PTR_GET(parameterDetail_, vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail>) };
    inline DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail& setParameterDetail(const vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail> & parameterDetail) { DARABONBA_PTR_SET_VALUE(parameterDetail_, parameterDetail) };
    inline DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetail& setParameterDetail(vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail> && parameterDetail) { DARABONBA_PTR_SET_RVALUE(parameterDetail_, parameterDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeParameterGroupResponseBodyParamGroupParameterGroupParamDetailParameterDetail>> parameterDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
