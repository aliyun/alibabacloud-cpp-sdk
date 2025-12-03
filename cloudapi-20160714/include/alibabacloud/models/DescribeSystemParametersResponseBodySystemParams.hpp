// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODYSYSTEMPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODYSYSTEMPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemParametersResponseBodySystemParamsSystemParamItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSystemParametersResponseBodySystemParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemParametersResponseBodySystemParams& obj) { 
      DARABONBA_PTR_TO_JSON(SystemParamItem, systemParamItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemParametersResponseBodySystemParams& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemParamItem, systemParamItem_);
    };
    DescribeSystemParametersResponseBodySystemParams() = default ;
    DescribeSystemParametersResponseBodySystemParams(const DescribeSystemParametersResponseBodySystemParams &) = default ;
    DescribeSystemParametersResponseBodySystemParams(DescribeSystemParametersResponseBodySystemParams &&) = default ;
    DescribeSystemParametersResponseBodySystemParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemParametersResponseBodySystemParams() = default ;
    DescribeSystemParametersResponseBodySystemParams& operator=(const DescribeSystemParametersResponseBodySystemParams &) = default ;
    DescribeSystemParametersResponseBodySystemParams& operator=(DescribeSystemParametersResponseBodySystemParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->systemParamItem_ == nullptr; };
    // systemParamItem Field Functions 
    bool hasSystemParamItem() const { return this->systemParamItem_ != nullptr;};
    void deleteSystemParamItem() { this->systemParamItem_ = nullptr;};
    inline const vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem> & systemParamItem() const { DARABONBA_PTR_GET_CONST(systemParamItem_, vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem>) };
    inline vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem> systemParamItem() { DARABONBA_PTR_GET(systemParamItem_, vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem>) };
    inline DescribeSystemParametersResponseBodySystemParams& setSystemParamItem(const vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem> & systemParamItem) { DARABONBA_PTR_SET_VALUE(systemParamItem_, systemParamItem) };
    inline DescribeSystemParametersResponseBodySystemParams& setSystemParamItem(vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem> && systemParamItem) { DARABONBA_PTR_SET_RVALUE(systemParamItem_, systemParamItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemParametersResponseBodySystemParamsSystemParamItem>> systemParamItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
