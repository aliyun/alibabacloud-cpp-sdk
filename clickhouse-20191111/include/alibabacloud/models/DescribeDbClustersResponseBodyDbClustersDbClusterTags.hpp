// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERSDBCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERSDBCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClustersResponseBodyDBClustersDBClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyDBClustersDBClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyDBClustersDBClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBClustersResponseBodyDBClustersDBClusterTags() = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterTags(const DescribeDBClustersResponseBodyDBClustersDBClusterTags &) = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterTags(DescribeDBClustersResponseBodyDBClustersDBClusterTags &&) = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyDBClustersDBClusterTags() = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterTags& operator=(const DescribeDBClustersResponseBodyDBClustersDBClusterTags &) = default ;
    DescribeDBClustersResponseBodyDBClustersDBClusterTags& operator=(DescribeDBClustersResponseBodyDBClustersDBClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag>) };
    inline vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag>) };
    inline DescribeDBClustersResponseBodyDBClustersDBClusterTags& setTag(const vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBClustersResponseBodyDBClustersDBClusterTags& setTag(vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
