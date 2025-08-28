// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDPROPAGATIONSOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDPROPAGATIONSOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyAssociatedPropagationSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyAssociatedPropagationSources& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedPropagationSources, associatedPropagationSources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyAssociatedPropagationSources& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedPropagationSources, associatedPropagationSources_);
    };
    DescribeVpcAttributeResponseBodyAssociatedPropagationSources() = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSources(const DescribeVpcAttributeResponseBodyAssociatedPropagationSources &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSources(DescribeVpcAttributeResponseBodyAssociatedPropagationSources &&) = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyAssociatedPropagationSources() = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSources& operator=(const DescribeVpcAttributeResponseBodyAssociatedPropagationSources &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSources& operator=(DescribeVpcAttributeResponseBodyAssociatedPropagationSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedPropagationSources_ != nullptr; };
    // associatedPropagationSources Field Functions 
    bool hasAssociatedPropagationSources() const { return this->associatedPropagationSources_ != nullptr;};
    void deleteAssociatedPropagationSources() { this->associatedPropagationSources_ = nullptr;};
    inline const vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources> & associatedPropagationSources() const { DARABONBA_PTR_GET_CONST(associatedPropagationSources_, vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources>) };
    inline vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources> associatedPropagationSources() { DARABONBA_PTR_GET(associatedPropagationSources_, vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources>) };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSources& setAssociatedPropagationSources(const vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources> & associatedPropagationSources) { DARABONBA_PTR_SET_VALUE(associatedPropagationSources_, associatedPropagationSources) };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSources& setAssociatedPropagationSources(vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources> && associatedPropagationSources) { DARABONBA_PTR_SET_RVALUE(associatedPropagationSources_, associatedPropagationSources) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources>> associatedPropagationSources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
