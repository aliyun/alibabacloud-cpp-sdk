// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCATIONDATECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_LOCATIONDATECLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Address.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class LocationDateCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LocationDateCluster& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterEndTime, locationDateClusterEndTime_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterLevel, locationDateClusterLevel_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterStartTime, locationDateClusterStartTime_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, LocationDateCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterEndTime, locationDateClusterEndTime_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterLevel, locationDateClusterLevel_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterStartTime, locationDateClusterStartTime_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    LocationDateCluster() = default ;
    LocationDateCluster(const LocationDateCluster &) = default ;
    LocationDateCluster(LocationDateCluster &&) = default ;
    LocationDateCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LocationDateCluster() = default ;
    LocationDateCluster& operator=(const LocationDateCluster &) = default ;
    LocationDateCluster& operator=(LocationDateCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addresses_ == nullptr
        && return this->createTime_ == nullptr && return this->customId_ == nullptr && return this->customLabels_ == nullptr && return this->locationDateClusterEndTime_ == nullptr && return this->locationDateClusterLevel_ == nullptr
        && return this->locationDateClusterStartTime_ == nullptr && return this->objectId_ == nullptr && return this->title_ == nullptr && return this->updateTime_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> addresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline LocationDateCluster& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline LocationDateCluster& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline LocationDateCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline LocationDateCluster& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline LocationDateCluster& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline LocationDateCluster& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // locationDateClusterEndTime Field Functions 
    bool hasLocationDateClusterEndTime() const { return this->locationDateClusterEndTime_ != nullptr;};
    void deleteLocationDateClusterEndTime() { this->locationDateClusterEndTime_ = nullptr;};
    inline string locationDateClusterEndTime() const { DARABONBA_PTR_GET_DEFAULT(locationDateClusterEndTime_, "") };
    inline LocationDateCluster& setLocationDateClusterEndTime(string locationDateClusterEndTime) { DARABONBA_PTR_SET_VALUE(locationDateClusterEndTime_, locationDateClusterEndTime) };


    // locationDateClusterLevel Field Functions 
    bool hasLocationDateClusterLevel() const { return this->locationDateClusterLevel_ != nullptr;};
    void deleteLocationDateClusterLevel() { this->locationDateClusterLevel_ = nullptr;};
    inline string locationDateClusterLevel() const { DARABONBA_PTR_GET_DEFAULT(locationDateClusterLevel_, "") };
    inline LocationDateCluster& setLocationDateClusterLevel(string locationDateClusterLevel) { DARABONBA_PTR_SET_VALUE(locationDateClusterLevel_, locationDateClusterLevel) };


    // locationDateClusterStartTime Field Functions 
    bool hasLocationDateClusterStartTime() const { return this->locationDateClusterStartTime_ != nullptr;};
    void deleteLocationDateClusterStartTime() { this->locationDateClusterStartTime_ = nullptr;};
    inline string locationDateClusterStartTime() const { DARABONBA_PTR_GET_DEFAULT(locationDateClusterStartTime_, "") };
    inline LocationDateCluster& setLocationDateClusterStartTime(string locationDateClusterStartTime) { DARABONBA_PTR_SET_VALUE(locationDateClusterStartTime_, locationDateClusterStartTime) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline LocationDateCluster& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline LocationDateCluster& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline LocationDateCluster& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Address>> addresses_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> customId_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<string> locationDateClusterEndTime_ = nullptr;
    std::shared_ptr<string> locationDateClusterLevel_ = nullptr;
    std::shared_ptr<string> locationDateClusterStartTime_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
