// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERMODELRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERMODELRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterModelResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterModelResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterModelResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterModelResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeClusterModelResponseBodyTags() = default ;
    DescribeClusterModelResponseBodyTags(const DescribeClusterModelResponseBodyTags &) = default ;
    DescribeClusterModelResponseBodyTags(DescribeClusterModelResponseBodyTags &&) = default ;
    DescribeClusterModelResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterModelResponseBodyTags() = default ;
    DescribeClusterModelResponseBodyTags& operator=(const DescribeClusterModelResponseBodyTags &) = default ;
    DescribeClusterModelResponseBodyTags& operator=(DescribeClusterModelResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeClusterModelResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeClusterModelResponseBodyTagsTag>) };
    inline vector<Models::DescribeClusterModelResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeClusterModelResponseBodyTagsTag>) };
    inline DescribeClusterModelResponseBodyTags& setTag(const vector<Models::DescribeClusterModelResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeClusterModelResponseBodyTags& setTag(vector<Models::DescribeClusterModelResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterModelResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
