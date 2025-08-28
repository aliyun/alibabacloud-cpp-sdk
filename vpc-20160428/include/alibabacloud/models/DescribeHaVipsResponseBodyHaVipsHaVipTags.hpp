// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIPTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIPTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVipTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsHaVipTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsHaVipTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsHaVipTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeHaVipsResponseBodyHaVipsHaVipTags() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipTags(const DescribeHaVipsResponseBodyHaVipsHaVipTags &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipTags(DescribeHaVipsResponseBodyHaVipsHaVipTags &&) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsHaVipTags() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipTags& operator=(const DescribeHaVipsResponseBodyHaVipsHaVipTags &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipTags& operator=(DescribeHaVipsResponseBodyHaVipsHaVipTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag>) };
    inline vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag>) };
    inline DescribeHaVipsResponseBodyHaVipsHaVipTags& setTag(const vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeHaVipsResponseBodyHaVipsHaVipTags& setTag(vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeHaVipsResponseBodyHaVipsHaVipTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
