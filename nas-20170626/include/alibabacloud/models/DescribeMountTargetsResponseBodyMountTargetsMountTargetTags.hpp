// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGETTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargetsMountTargetTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargetsMountTargetTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargetsMountTargetTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTags() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTags(const DescribeMountTargetsResponseBodyMountTargetsMountTargetTags &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTags(DescribeMountTargetsResponseBodyMountTargetsMountTargetTags &&) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTargetTags() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTags& operator=(const DescribeMountTargetsResponseBodyMountTargetsMountTargetTags &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTargetTags& operator=(DescribeMountTargetsResponseBodyMountTargetsMountTargetTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag>) };
    inline vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag>) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetTags& setTag(const vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTargetTags& setTag(vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
