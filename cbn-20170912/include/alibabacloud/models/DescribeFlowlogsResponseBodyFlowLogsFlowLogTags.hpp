// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOGTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOGTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeFlowlogsResponseBodyFlowLogsFlowLogTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowlogsResponseBodyFlowLogsFlowLogTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowlogsResponseBodyFlowLogsFlowLogTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeFlowlogsResponseBodyFlowLogsFlowLogTags() = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLogTags(const DescribeFlowlogsResponseBodyFlowLogsFlowLogTags &) = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLogTags(DescribeFlowlogsResponseBodyFlowLogsFlowLogTags &&) = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLogTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowlogsResponseBodyFlowLogsFlowLogTags() = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLogTags& operator=(const DescribeFlowlogsResponseBodyFlowLogsFlowLogTags &) = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLogTags& operator=(DescribeFlowlogsResponseBodyFlowLogsFlowLogTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag>) };
    inline vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag>) };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLogTags& setTag(const vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLogTags& setTag(vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
