// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERLISTRESPONSEBODYCLUSTERLISTCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERLISTRESPONSEBODYCLUSTERLISTCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterListResponseBodyClusterListClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterListResponseBodyClusterListClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterListResponseBodyClusterListClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterListResponseBodyClusterListClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeClusterListResponseBodyClusterListClusterTags() = default ;
    DescribeClusterListResponseBodyClusterListClusterTags(const DescribeClusterListResponseBodyClusterListClusterTags &) = default ;
    DescribeClusterListResponseBodyClusterListClusterTags(DescribeClusterListResponseBodyClusterListClusterTags &&) = default ;
    DescribeClusterListResponseBodyClusterListClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterListResponseBodyClusterListClusterTags() = default ;
    DescribeClusterListResponseBodyClusterListClusterTags& operator=(const DescribeClusterListResponseBodyClusterListClusterTags &) = default ;
    DescribeClusterListResponseBodyClusterListClusterTags& operator=(DescribeClusterListResponseBodyClusterListClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag>) };
    inline vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag>) };
    inline DescribeClusterListResponseBodyClusterListClusterTags& setTag(const vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeClusterListResponseBodyClusterListClusterTags& setTag(vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterListResponseBodyClusterListClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
