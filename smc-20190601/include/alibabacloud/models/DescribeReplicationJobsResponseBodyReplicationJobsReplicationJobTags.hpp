// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag>) };
    inline vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag>) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags& setTag(const vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags& setTag(vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
