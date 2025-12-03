// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODYVPCACCESSATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODYVPCACCESSATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeVpcAccessesResponseBodyVpcAccessAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAccessesResponseBodyVpcAccessAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(VpcAccessAttribute, vpcAccessAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAccessesResponseBodyVpcAccessAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcAccessAttribute, vpcAccessAttribute_);
    };
    DescribeVpcAccessesResponseBodyVpcAccessAttributes() = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributes(const DescribeVpcAccessesResponseBodyVpcAccessAttributes &) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributes(DescribeVpcAccessesResponseBodyVpcAccessAttributes &&) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAccessesResponseBodyVpcAccessAttributes() = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributes& operator=(const DescribeVpcAccessesResponseBodyVpcAccessAttributes &) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributes& operator=(DescribeVpcAccessesResponseBodyVpcAccessAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcAccessAttribute_ == nullptr; };
    // vpcAccessAttribute Field Functions 
    bool hasVpcAccessAttribute() const { return this->vpcAccessAttribute_ != nullptr;};
    void deleteVpcAccessAttribute() { this->vpcAccessAttribute_ = nullptr;};
    inline const vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute> & vpcAccessAttribute() const { DARABONBA_PTR_GET_CONST(vpcAccessAttribute_, vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute>) };
    inline vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute> vpcAccessAttribute() { DARABONBA_PTR_GET(vpcAccessAttribute_, vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute>) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributes& setVpcAccessAttribute(const vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute> & vpcAccessAttribute) { DARABONBA_PTR_SET_VALUE(vpcAccessAttribute_, vpcAccessAttribute) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributes& setVpcAccessAttribute(vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute> && vpcAccessAttribute) { DARABONBA_PTR_SET_RVALUE(vpcAccessAttribute_, vpcAccessAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute>> vpcAccessAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
