// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsResponseBodyTagSetsTagSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeTagsResponseBodyTagSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyTagSets& obj) { 
      DARABONBA_PTR_TO_JSON(TagSet, tagSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyTagSets& obj) { 
      DARABONBA_PTR_FROM_JSON(TagSet, tagSet_);
    };
    DescribeTagsResponseBodyTagSets() = default ;
    DescribeTagsResponseBodyTagSets(const DescribeTagsResponseBodyTagSets &) = default ;
    DescribeTagsResponseBodyTagSets(DescribeTagsResponseBodyTagSets &&) = default ;
    DescribeTagsResponseBodyTagSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyTagSets() = default ;
    DescribeTagsResponseBodyTagSets& operator=(const DescribeTagsResponseBodyTagSets &) = default ;
    DescribeTagsResponseBodyTagSets& operator=(DescribeTagsResponseBodyTagSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagSet_ == nullptr; };
    // tagSet Field Functions 
    bool hasTagSet() const { return this->tagSet_ != nullptr;};
    void deleteTagSet() { this->tagSet_ = nullptr;};
    inline const vector<Models::DescribeTagsResponseBodyTagSetsTagSet> & tagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<Models::DescribeTagsResponseBodyTagSetsTagSet>) };
    inline vector<Models::DescribeTagsResponseBodyTagSetsTagSet> tagSet() { DARABONBA_PTR_GET(tagSet_, vector<Models::DescribeTagsResponseBodyTagSetsTagSet>) };
    inline DescribeTagsResponseBodyTagSets& setTagSet(const vector<Models::DescribeTagsResponseBodyTagSetsTagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
    inline DescribeTagsResponseBodyTagSets& setTagSet(vector<Models::DescribeTagsResponseBodyTagSetsTagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeTagsResponseBodyTagSetsTagSet>> tagSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
