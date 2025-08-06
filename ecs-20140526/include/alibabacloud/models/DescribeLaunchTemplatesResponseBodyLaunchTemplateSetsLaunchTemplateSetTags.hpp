// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODYLAUNCHTEMPLATESETSLAUNCHTEMPLATESETTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODYLAUNCHTEMPLATESETSLAUNCHTEMPLATESETTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags() = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags &) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags(DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags &&) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags() = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags& operator=(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags &) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags& operator=(DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag>) };
    inline vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag>) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags& setTag(const vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags& setTag(vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
