// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttributeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttributeTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttributeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttributeTags() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeTags(const DescribeInstancesResponseBodyInstancesInstanceAttributeTags &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeTags(DescribeInstancesResponseBodyInstancesInstanceAttributeTags &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttributeTags() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeTags& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttributeTags &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeTags& operator=(DescribeInstancesResponseBodyInstancesInstanceAttributeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfo_ == nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo>) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeTags& setTagInfo(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeTags& setTagInfo(vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeTagsTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
