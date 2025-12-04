// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYDBCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYDBCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyDBClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyDBClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyDBClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyDBClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBClusterAttributeResponseBodyDBClusterTags() = default ;
    DescribeDBClusterAttributeResponseBodyDBClusterTags(const DescribeDBClusterAttributeResponseBodyDBClusterTags &) = default ;
    DescribeDBClusterAttributeResponseBodyDBClusterTags(DescribeDBClusterAttributeResponseBodyDBClusterTags &&) = default ;
    DescribeDBClusterAttributeResponseBodyDBClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyDBClusterTags() = default ;
    DescribeDBClusterAttributeResponseBodyDBClusterTags& operator=(const DescribeDBClusterAttributeResponseBodyDBClusterTags &) = default ;
    DescribeDBClusterAttributeResponseBodyDBClusterTags& operator=(DescribeDBClusterAttributeResponseBodyDBClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag>) };
    inline vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag>) };
    inline DescribeDBClusterAttributeResponseBodyDBClusterTags& setTag(const vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBClusterAttributeResponseBodyDBClusterTags& setTag(vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAttributeResponseBodyDBClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
