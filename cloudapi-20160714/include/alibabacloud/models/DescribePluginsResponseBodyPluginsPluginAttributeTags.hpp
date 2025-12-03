// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSRESPONSEBODYPLUGINSPLUGINATTRIBUTETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSRESPONSEBODYPLUGINSPLUGINATTRIBUTETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsResponseBodyPluginsPluginAttributeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsResponseBodyPluginsPluginAttributeTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsResponseBodyPluginsPluginAttributeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
    };
    DescribePluginsResponseBodyPluginsPluginAttributeTags() = default ;
    DescribePluginsResponseBodyPluginsPluginAttributeTags(const DescribePluginsResponseBodyPluginsPluginAttributeTags &) = default ;
    DescribePluginsResponseBodyPluginsPluginAttributeTags(DescribePluginsResponseBodyPluginsPluginAttributeTags &&) = default ;
    DescribePluginsResponseBodyPluginsPluginAttributeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsResponseBodyPluginsPluginAttributeTags() = default ;
    DescribePluginsResponseBodyPluginsPluginAttributeTags& operator=(const DescribePluginsResponseBodyPluginsPluginAttributeTags &) = default ;
    DescribePluginsResponseBodyPluginsPluginAttributeTags& operator=(DescribePluginsResponseBodyPluginsPluginAttributeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagInfo_ == nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline const vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo> & tagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo>) };
    inline vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo> tagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo>) };
    inline DescribePluginsResponseBodyPluginsPluginAttributeTags& setTagInfo(const vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
    inline DescribePluginsResponseBodyPluginsPluginAttributeTags& setTagInfo(vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginsResponseBodyPluginsPluginAttributeTagsTagInfo>> tagInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
