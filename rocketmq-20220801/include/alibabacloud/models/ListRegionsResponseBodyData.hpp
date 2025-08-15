// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegionsResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListRegionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(regionName, regionName_);
      DARABONBA_PTR_TO_JSON(supportRocketmqV4, supportRocketmqV4_);
      DARABONBA_PTR_TO_JSON(supportRocketmqV5, supportRocketmqV5_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(regionName, regionName_);
      DARABONBA_PTR_FROM_JSON(supportRocketmqV4, supportRocketmqV4_);
      DARABONBA_PTR_FROM_JSON(supportRocketmqV5, supportRocketmqV5_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListRegionsResponseBodyData() = default ;
    ListRegionsResponseBodyData(const ListRegionsResponseBodyData &) = default ;
    ListRegionsResponseBodyData(ListRegionsResponseBodyData &&) = default ;
    ListRegionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsResponseBodyData() = default ;
    ListRegionsResponseBodyData& operator=(const ListRegionsResponseBodyData &) = default ;
    ListRegionsResponseBodyData& operator=(ListRegionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->regionId_ != nullptr && this->regionName_ != nullptr && this->supportRocketmqV4_ != nullptr && this->supportRocketmqV5_ != nullptr && this->tags_ != nullptr
        && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRegionsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRegionsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline ListRegionsResponseBodyData& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // supportRocketmqV4 Field Functions 
    bool hasSupportRocketmqV4() const { return this->supportRocketmqV4_ != nullptr;};
    void deleteSupportRocketmqV4() { this->supportRocketmqV4_ = nullptr;};
    inline bool supportRocketmqV4() const { DARABONBA_PTR_GET_DEFAULT(supportRocketmqV4_, false) };
    inline ListRegionsResponseBodyData& setSupportRocketmqV4(bool supportRocketmqV4) { DARABONBA_PTR_SET_VALUE(supportRocketmqV4_, supportRocketmqV4) };


    // supportRocketmqV5 Field Functions 
    bool hasSupportRocketmqV5() const { return this->supportRocketmqV5_ != nullptr;};
    void deleteSupportRocketmqV5() { this->supportRocketmqV5_ = nullptr;};
    inline bool supportRocketmqV5() const { DARABONBA_PTR_GET_DEFAULT(supportRocketmqV5_, false) };
    inline ListRegionsResponseBodyData& setSupportRocketmqV5(bool supportRocketmqV5) { DARABONBA_PTR_SET_VALUE(supportRocketmqV5_, supportRocketmqV5) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListRegionsResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListRegionsResponseBodyDataTags>) };
    inline vector<Models::ListRegionsResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListRegionsResponseBodyDataTags>) };
    inline ListRegionsResponseBodyData& setTags(const vector<Models::ListRegionsResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListRegionsResponseBodyData& setTags(vector<Models::ListRegionsResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListRegionsResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the ApsaraMQ for RocketMQ instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The region name.
    std::shared_ptr<string> regionName_ = nullptr;
    // Indicates whether ApsaraMQ for RocketMQ V4 is activated.
    std::shared_ptr<bool> supportRocketmqV4_ = nullptr;
    // Indicates whether ApsaraMQ for RocketMQ V5 is activated.
    std::shared_ptr<bool> supportRocketmqV5_ = nullptr;
    // The region tags.
    std::shared_ptr<vector<Models::ListRegionsResponseBodyDataTags>> tags_ = nullptr;
    // The time when the ApsaraMQ for RocketMQ instance was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
