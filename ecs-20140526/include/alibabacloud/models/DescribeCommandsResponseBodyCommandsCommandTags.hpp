// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMANDTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommandTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsResponseBodyCommandsCommandTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommandsCommandTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommandsCommandTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCommandsResponseBodyCommandsCommandTags() = default ;
    DescribeCommandsResponseBodyCommandsCommandTags(const DescribeCommandsResponseBodyCommandsCommandTags &) = default ;
    DescribeCommandsResponseBodyCommandsCommandTags(DescribeCommandsResponseBodyCommandsCommandTags &&) = default ;
    DescribeCommandsResponseBodyCommandsCommandTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommandsCommandTags() = default ;
    DescribeCommandsResponseBodyCommandsCommandTags& operator=(const DescribeCommandsResponseBodyCommandsCommandTags &) = default ;
    DescribeCommandsResponseBodyCommandsCommandTags& operator=(DescribeCommandsResponseBodyCommandsCommandTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag>) };
    inline vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag>) };
    inline DescribeCommandsResponseBodyCommandsCommandTags& setTag(const vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCommandsResponseBodyCommandsCommandTags& setTag(vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCommandsResponseBodyCommandsCommandTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
