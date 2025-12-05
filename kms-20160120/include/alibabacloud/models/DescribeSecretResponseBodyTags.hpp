// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecretResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeSecretResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeSecretResponseBodyTags() = default ;
    DescribeSecretResponseBodyTags(const DescribeSecretResponseBodyTags &) = default ;
    DescribeSecretResponseBodyTags(DescribeSecretResponseBodyTags &&) = default ;
    DescribeSecretResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretResponseBodyTags() = default ;
    DescribeSecretResponseBodyTags& operator=(const DescribeSecretResponseBodyTags &) = default ;
    DescribeSecretResponseBodyTags& operator=(DescribeSecretResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeSecretResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeSecretResponseBodyTagsTag>) };
    inline vector<Models::DescribeSecretResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeSecretResponseBodyTagsTag>) };
    inline DescribeSecretResponseBodyTags& setTag(const vector<Models::DescribeSecretResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeSecretResponseBodyTags& setTag(vector<Models::DescribeSecretResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecretResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
