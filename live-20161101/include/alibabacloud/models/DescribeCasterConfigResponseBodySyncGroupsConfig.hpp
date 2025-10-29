// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYSYNCGROUPSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYSYNCGROUPSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodySyncGroupsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodySyncGroupsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SyncGroup, syncGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodySyncGroupsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SyncGroup, syncGroup_);
    };
    DescribeCasterConfigResponseBodySyncGroupsConfig() = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfig(const DescribeCasterConfigResponseBodySyncGroupsConfig &) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfig(DescribeCasterConfigResponseBodySyncGroupsConfig &&) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodySyncGroupsConfig() = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfig& operator=(const DescribeCasterConfigResponseBodySyncGroupsConfig &) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfig& operator=(DescribeCasterConfigResponseBodySyncGroupsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->syncGroup_ == nullptr; };
    // syncGroup Field Functions 
    bool hasSyncGroup() const { return this->syncGroup_ != nullptr;};
    void deleteSyncGroup() { this->syncGroup_ = nullptr;};
    inline const vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup> & syncGroup() const { DARABONBA_PTR_GET_CONST(syncGroup_, vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup>) };
    inline vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup> syncGroup() { DARABONBA_PTR_GET(syncGroup_, vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup>) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfig& setSyncGroup(const vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup> & syncGroup) { DARABONBA_PTR_SET_VALUE(syncGroup_, syncGroup) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfig& setSyncGroup(vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup> && syncGroup) { DARABONBA_PTR_SET_RVALUE(syncGroup_, syncGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroup>> syncGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
