// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClustersResponseBodyItemsDBClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItemsDBClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItemsDBClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBClustersResponseBodyItemsDBClusterTags() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTags(const DescribeDBClustersResponseBodyItemsDBClusterTags &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTags(DescribeDBClustersResponseBodyItemsDBClusterTags &&) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItemsDBClusterTags() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTags& operator=(const DescribeDBClustersResponseBodyItemsDBClusterTags &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterTags& operator=(DescribeDBClustersResponseBodyItemsDBClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag>) };
    inline vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag>) };
    inline DescribeDBClustersResponseBodyItemsDBClusterTags& setTag(const vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBClustersResponseBodyItemsDBClusterTags& setTag(vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersResponseBodyItemsDBClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
