// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClustersResponseBodyItemsDBClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClustersResponseBodyItemsDBClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClustersResponseBodyItemsDBClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAIDBClustersResponseBodyItemsDBClusterTags() = default ;
    DescribeAIDBClustersResponseBodyItemsDBClusterTags(const DescribeAIDBClustersResponseBodyItemsDBClusterTags &) = default ;
    DescribeAIDBClustersResponseBodyItemsDBClusterTags(DescribeAIDBClustersResponseBodyItemsDBClusterTags &&) = default ;
    DescribeAIDBClustersResponseBodyItemsDBClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClustersResponseBodyItemsDBClusterTags() = default ;
    DescribeAIDBClustersResponseBodyItemsDBClusterTags& operator=(const DescribeAIDBClustersResponseBodyItemsDBClusterTags &) = default ;
    DescribeAIDBClustersResponseBodyItemsDBClusterTags& operator=(DescribeAIDBClustersResponseBodyItemsDBClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag>) };
    inline vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag>) };
    inline DescribeAIDBClustersResponseBodyItemsDBClusterTags& setTag(const vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAIDBClustersResponseBodyItemsDBClusterTags& setTag(vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
