// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYSYNCGROUPSCONFIGSYNCGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYSYNCGROUPSCONFIGSYNCGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& obj) { 
      DARABONBA_PTR_TO_JSON(HostResourceId, hostResourceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(HostResourceId, hostResourceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup() = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup(const DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup &) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup(DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup &&) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup() = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& operator=(const DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup &) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& operator=(DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostResourceId_ == nullptr
        && return this->mode_ == nullptr && return this->resourceIds_ == nullptr; };
    // hostResourceId Field Functions 
    bool hasHostResourceId() const { return this->hostResourceId_ != nullptr;};
    void deleteHostResourceId() { this->hostResourceId_ = nullptr;};
    inline string hostResourceId() const { DARABONBA_PTR_GET_DEFAULT(hostResourceId_, "") };
    inline DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& setHostResourceId(string hostResourceId) { DARABONBA_PTR_SET_VALUE(hostResourceId_, hostResourceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds) };
    inline Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds resourceIds() { DARABONBA_PTR_GET(resourceIds_, Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& setResourceIds(const Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup& setResourceIds(Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The ID of the resource in the production studio.
    std::shared_ptr<string> hostResourceId_ = nullptr;
    // The cache mode of the Static Page Caching policy. Valid values:
    // 
    // *   0: standard mode
    // *   1: force mode
    // *   2: no cache
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The IDs of the resources for which you want to modify the resource group. The number of resource IDs is 1 to 50.
    std::shared_ptr<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds> resourceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
