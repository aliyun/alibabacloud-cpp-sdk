// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODYAPPSAPPATTRIBUTETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODYAPPSAPPATTRIBUTETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppAttributesResponseBodyAppsAppAttributeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAttributesResponseBodyAppsAppAttributeTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAttributesResponseBodyAppsAppAttributeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    DescribeAppAttributesResponseBodyAppsAppAttributeTags() = default ;
    DescribeAppAttributesResponseBodyAppsAppAttributeTags(const DescribeAppAttributesResponseBodyAppsAppAttributeTags &) = default ;
    DescribeAppAttributesResponseBodyAppsAppAttributeTags(DescribeAppAttributesResponseBodyAppsAppAttributeTags &&) = default ;
    DescribeAppAttributesResponseBodyAppsAppAttributeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAttributesResponseBodyAppsAppAttributeTags() = default ;
    DescribeAppAttributesResponseBodyAppsAppAttributeTags& operator=(const DescribeAppAttributesResponseBodyAppsAppAttributeTags &) = default ;
    DescribeAppAttributesResponseBodyAppsAppAttributeTags& operator=(DescribeAppAttributesResponseBodyAppsAppAttributeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfo_ == nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo>) };
    inline vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo>) };
    inline DescribeAppAttributesResponseBodyAppsAppAttributeTags& setTagInfo(const vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline DescribeAppAttributesResponseBodyAppsAppAttributeTags& setTagInfo(vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTagsTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
