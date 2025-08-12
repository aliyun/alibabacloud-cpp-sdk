// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddTagsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class AddTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, AddTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    AddTagsRequest() = default ;
    AddTagsRequest(const AddTagsRequest &) = default ;
    AddTagsRequest(AddTagsRequest &&) = default ;
    AddTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTagsRequest() = default ;
    AddTagsRequest& operator=(const AddTagsRequest &) = default ;
    AddTagsRequest& operator=(AddTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupIds_ != nullptr
        && this->regionId_ != nullptr && this->tag_ != nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline AddTagsRequest& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline AddTagsRequest& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddTagsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddTagsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddTagsRequestTag>) };
    inline vector<AddTagsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AddTagsRequestTag>) };
    inline AddTagsRequest& setTag(const vector<AddTagsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddTagsRequest& setTag(vector<AddTagsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the application group.
    // 
    // Valid values of N: 1 to 20.
    // 
    // For information about how to query the IDs of application groups, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/2513168.html).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> groupIds_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddTagsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
