// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemTags() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemTags(const DescribeFileSystemsResponseBodyFileSystemsFileSystemTags &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemTags(DescribeFileSystemsResponseBodyFileSystemsFileSystemTags &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemTags() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemTags& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemTags &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemTags& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag>) };
    inline vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemTags& setTag(const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemTags& setTag(vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
