// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOTTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshotsSnapshotTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshotsSnapshotTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshotsSnapshotTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeSnapshotsResponseBodySnapshotsSnapshotTags() = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshotTags(const DescribeSnapshotsResponseBodySnapshotsSnapshotTags &) = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshotTags(DescribeSnapshotsResponseBodySnapshotsSnapshotTags &&) = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshotTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBodySnapshotsSnapshotTags() = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshotTags& operator=(const DescribeSnapshotsResponseBodySnapshotsSnapshotTags &) = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshotTags& operator=(DescribeSnapshotsResponseBodySnapshotsSnapshotTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag>) };
    inline vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag>) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshotTags& setTag(const vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshotTags& setTag(vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
