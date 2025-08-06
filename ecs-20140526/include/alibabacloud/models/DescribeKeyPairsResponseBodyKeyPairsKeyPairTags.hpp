// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRSKEYPAIRTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODYKEYPAIRSKEYPAIRTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeKeyPairsResponseBodyKeyPairsKeyPairTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBodyKeyPairsKeyPairTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBodyKeyPairsKeyPairTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeKeyPairsResponseBodyKeyPairsKeyPairTags() = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPairTags(const DescribeKeyPairsResponseBodyKeyPairsKeyPairTags &) = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPairTags(DescribeKeyPairsResponseBodyKeyPairsKeyPairTags &&) = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPairTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsResponseBodyKeyPairsKeyPairTags() = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPairTags& operator=(const DescribeKeyPairsResponseBodyKeyPairsKeyPairTags &) = default ;
    DescribeKeyPairsResponseBodyKeyPairsKeyPairTags& operator=(DescribeKeyPairsResponseBodyKeyPairsKeyPairTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag>) };
    inline vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag>) };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPairTags& setTag(const vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeKeyPairsResponseBodyKeyPairsKeyPairTags& setTag(vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeKeyPairsResponseBodyKeyPairsKeyPairTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
