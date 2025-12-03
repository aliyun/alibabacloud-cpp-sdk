// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODYVPCACCESSATTRIBUTESVPCACCESSATTRIBUTETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODYVPCACCESSATTRIBUTESVPCACCESSATTRIBUTETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags() = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags(const DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags &) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags(DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags &&) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags() = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags& operator=(const DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags &) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags& operator=(DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfo_ == nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo>) };
    inline vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo>) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags& setTagInfo(const vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags& setTagInfo(vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTagsTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
