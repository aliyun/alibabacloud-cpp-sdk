// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEDETAILRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEDETAILRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVariableDetailResponseBodyResultObjectBaseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableDetailResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(baseInfo, baseInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(baseInfo, baseInfo_);
    };
    DescribeVariableDetailResponseBodyResultObject() = default ;
    DescribeVariableDetailResponseBodyResultObject(const DescribeVariableDetailResponseBodyResultObject &) = default ;
    DescribeVariableDetailResponseBodyResultObject(DescribeVariableDetailResponseBodyResultObject &&) = default ;
    DescribeVariableDetailResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableDetailResponseBodyResultObject() = default ;
    DescribeVariableDetailResponseBodyResultObject& operator=(const DescribeVariableDetailResponseBodyResultObject &) = default ;
    DescribeVariableDetailResponseBodyResultObject& operator=(DescribeVariableDetailResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseInfo_ == nullptr; };
    // baseInfo Field Functions 
    bool hasBaseInfo() const { return this->baseInfo_ != nullptr;};
    void deleteBaseInfo() { this->baseInfo_ = nullptr;};
    inline const Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo & baseInfo() const { DARABONBA_PTR_GET_CONST(baseInfo_, Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo) };
    inline Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo baseInfo() { DARABONBA_PTR_GET(baseInfo_, Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo) };
    inline DescribeVariableDetailResponseBodyResultObject& setBaseInfo(const Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo & baseInfo) { DARABONBA_PTR_SET_VALUE(baseInfo_, baseInfo) };
    inline DescribeVariableDetailResponseBodyResultObject& setBaseInfo(Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo && baseInfo) { DARABONBA_PTR_SET_RVALUE(baseInfo_, baseInfo) };


  protected:
    // Basic attributes.
    std::shared_ptr<Models::DescribeVariableDetailResponseBodyResultObjectBaseInfo> baseInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
