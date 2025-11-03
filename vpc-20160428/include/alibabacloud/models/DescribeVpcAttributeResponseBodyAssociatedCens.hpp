// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDCENS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDCENS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyAssociatedCens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyAssociatedCens& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyAssociatedCens& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
    };
    DescribeVpcAttributeResponseBodyAssociatedCens() = default ;
    DescribeVpcAttributeResponseBodyAssociatedCens(const DescribeVpcAttributeResponseBodyAssociatedCens &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedCens(DescribeVpcAttributeResponseBodyAssociatedCens &&) = default ;
    DescribeVpcAttributeResponseBodyAssociatedCens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyAssociatedCens() = default ;
    DescribeVpcAttributeResponseBodyAssociatedCens& operator=(const DescribeVpcAttributeResponseBodyAssociatedCens &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedCens& operator=(DescribeVpcAttributeResponseBodyAssociatedCens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedCen_ == nullptr; };
    // associatedCen Field Functions 
    bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
    void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
    inline const vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen> & associatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen>) };
    inline vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen> associatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen>) };
    inline DescribeVpcAttributeResponseBodyAssociatedCens& setAssociatedCen(const vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
    inline DescribeVpcAttributeResponseBodyAssociatedCens& setAssociatedCen(vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen>> associatedCen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
