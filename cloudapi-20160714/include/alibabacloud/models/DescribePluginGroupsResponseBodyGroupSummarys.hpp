// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODYGROUPSUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODYGROUPSUMMARYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginGroupsResponseBodyGroupSummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginGroupsResponseBodyGroupSummarys& obj) { 
      DARABONBA_PTR_TO_JSON(GroupPluginSummary, groupPluginSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginGroupsResponseBodyGroupSummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupPluginSummary, groupPluginSummary_);
    };
    DescribePluginGroupsResponseBodyGroupSummarys() = default ;
    DescribePluginGroupsResponseBodyGroupSummarys(const DescribePluginGroupsResponseBodyGroupSummarys &) = default ;
    DescribePluginGroupsResponseBodyGroupSummarys(DescribePluginGroupsResponseBodyGroupSummarys &&) = default ;
    DescribePluginGroupsResponseBodyGroupSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginGroupsResponseBodyGroupSummarys() = default ;
    DescribePluginGroupsResponseBodyGroupSummarys& operator=(const DescribePluginGroupsResponseBodyGroupSummarys &) = default ;
    DescribePluginGroupsResponseBodyGroupSummarys& operator=(DescribePluginGroupsResponseBodyGroupSummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupPluginSummary_ == nullptr; };
    // groupPluginSummary Field Functions 
    bool hasGroupPluginSummary() const { return this->groupPluginSummary_ != nullptr;};
    void deleteGroupPluginSummary() { this->groupPluginSummary_ = nullptr;};
    inline const vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary> & groupPluginSummary() const { DARABONBA_PTR_GET_CONST(groupPluginSummary_, vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary>) };
    inline vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary> groupPluginSummary() { DARABONBA_PTR_GET(groupPluginSummary_, vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary>) };
    inline DescribePluginGroupsResponseBodyGroupSummarys& setGroupPluginSummary(const vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary> & groupPluginSummary) { DARABONBA_PTR_SET_VALUE(groupPluginSummary_, groupPluginSummary) };
    inline DescribePluginGroupsResponseBodyGroupSummarys& setGroupPluginSummary(vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary> && groupPluginSummary) { DARABONBA_PTR_SET_RVALUE(groupPluginSummary_, groupPluginSummary) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary>> groupPluginSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
