// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveTagsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class RemoveTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    RemoveTagsRequest() = default ;
    RemoveTagsRequest(const RemoveTagsRequest &) = default ;
    RemoveTagsRequest(RemoveTagsRequest &&) = default ;
    RemoveTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTagsRequest() = default ;
    RemoveTagsRequest& operator=(const RemoveTagsRequest &) = default ;
    RemoveTagsRequest& operator=(RemoveTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIds_ == nullptr
        && return this->regionId_ == nullptr && return this->tag_ == nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline RemoveTagsRequest& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline RemoveTagsRequest& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveTagsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RemoveTagsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RemoveTagsRequestTag>) };
    inline vector<RemoveTagsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<RemoveTagsRequestTag>) };
    inline RemoveTagsRequest& setTag(const vector<RemoveTagsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RemoveTagsRequest& setTag(vector<RemoveTagsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the application groups.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> groupIds_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    // 
    // This parameter is required.
    std::shared_ptr<vector<RemoveTagsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
