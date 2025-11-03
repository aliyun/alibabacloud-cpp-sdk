// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMMOUNTTARGETSMOUNTTARGETTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMMOUNTTARGETSMOUNTTARGETTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags(const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags(DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag>) };
    inline vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags& setTag(const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags& setTag(vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
