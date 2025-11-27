// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSRESPONSEBODYDEPLOYMENTSETSDEPLOYMENTSETTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags &&) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags() = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags& operator=(const DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags &) = default ;
    DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags& operator=(DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag>) };
    inline vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag>) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags& setTag(const vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTags& setTag(vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCDeploymentSetsResponseBodyDeploymentSetsDeploymentSetTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
