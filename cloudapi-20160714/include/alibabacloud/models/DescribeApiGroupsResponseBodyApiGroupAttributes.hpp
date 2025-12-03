// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODYAPIGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODYAPIGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupsResponseBodyApiGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupsResponseBodyApiGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(ApiGroupAttribute, apiGroupAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupsResponseBodyApiGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiGroupAttribute, apiGroupAttribute_);
    };
    DescribeApiGroupsResponseBodyApiGroupAttributes() = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributes(const DescribeApiGroupsResponseBodyApiGroupAttributes &) = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributes(DescribeApiGroupsResponseBodyApiGroupAttributes &&) = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupsResponseBodyApiGroupAttributes() = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributes& operator=(const DescribeApiGroupsResponseBodyApiGroupAttributes &) = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributes& operator=(DescribeApiGroupsResponseBodyApiGroupAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiGroupAttribute_ == nullptr; };
    // apiGroupAttribute Field Functions 
    bool hasApiGroupAttribute() const { return this->apiGroupAttribute_ != nullptr;};
    void deleteApiGroupAttribute() { this->apiGroupAttribute_ = nullptr;};
    inline const vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute> & apiGroupAttribute() const { DARABONBA_PTR_GET_CONST(apiGroupAttribute_, vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute>) };
    inline vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute> apiGroupAttribute() { DARABONBA_PTR_GET(apiGroupAttribute_, vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute>) };
    inline DescribeApiGroupsResponseBodyApiGroupAttributes& setApiGroupAttribute(const vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute> & apiGroupAttribute) { DARABONBA_PTR_SET_VALUE(apiGroupAttribute_, apiGroupAttribute) };
    inline DescribeApiGroupsResponseBodyApiGroupAttributes& setApiGroupAttribute(vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute> && apiGroupAttribute) { DARABONBA_PTR_SET_RVALUE(apiGroupAttribute_, apiGroupAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute>> apiGroupAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
