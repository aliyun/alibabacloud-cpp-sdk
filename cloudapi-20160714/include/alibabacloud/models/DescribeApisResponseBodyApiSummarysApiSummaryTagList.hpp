// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARYTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARYTAGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisResponseBodyApiSummarysApiSummaryTagListTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBodyApiSummarysApiSummaryTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBodyApiSummarysApiSummaryTagList& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBodyApiSummarysApiSummaryTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeApisResponseBodyApiSummarysApiSummaryTagList() = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryTagList(const DescribeApisResponseBodyApiSummarysApiSummaryTagList &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryTagList(DescribeApisResponseBodyApiSummarysApiSummaryTagList &&) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBodyApiSummarysApiSummaryTagList() = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryTagList& operator=(const DescribeApisResponseBodyApiSummarysApiSummaryTagList &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryTagList& operator=(DescribeApisResponseBodyApiSummarysApiSummaryTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag>) };
    inline vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag>) };
    inline DescribeApisResponseBodyApiSummarysApiSummaryTagList& setTag(const vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeApisResponseBodyApiSummarysApiSummaryTagList& setTag(vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagListTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
