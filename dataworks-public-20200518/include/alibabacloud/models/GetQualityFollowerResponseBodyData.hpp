// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYFOLLOWERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYFOLLOWERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetQualityFollowerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityFollowerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMode, alarmMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Follower, follower_);
      DARABONBA_PTR_TO_JSON(FollowerAccountName, followerAccountName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityFollowerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMode, alarmMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Follower, follower_);
      DARABONBA_PTR_FROM_JSON(FollowerAccountName, followerAccountName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetQualityFollowerResponseBodyData() = default ;
    GetQualityFollowerResponseBodyData(const GetQualityFollowerResponseBodyData &) = default ;
    GetQualityFollowerResponseBodyData(GetQualityFollowerResponseBodyData &&) = default ;
    GetQualityFollowerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityFollowerResponseBodyData() = default ;
    GetQualityFollowerResponseBodyData& operator=(const GetQualityFollowerResponseBodyData &) = default ;
    GetQualityFollowerResponseBodyData& operator=(GetQualityFollowerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmMode_ != nullptr
        && this->createTime_ != nullptr && this->entityId_ != nullptr && this->follower_ != nullptr && this->followerAccountName_ != nullptr && this->id_ != nullptr
        && this->modifyTime_ != nullptr && this->projectName_ != nullptr && this->tableName_ != nullptr; };
    // alarmMode Field Functions 
    bool hasAlarmMode() const { return this->alarmMode_ != nullptr;};
    void deleteAlarmMode() { this->alarmMode_ = nullptr;};
    inline int32_t alarmMode() const { DARABONBA_PTR_GET_DEFAULT(alarmMode_, 0) };
    inline GetQualityFollowerResponseBodyData& setAlarmMode(int32_t alarmMode) { DARABONBA_PTR_SET_VALUE(alarmMode_, alarmMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetQualityFollowerResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline GetQualityFollowerResponseBodyData& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // follower Field Functions 
    bool hasFollower() const { return this->follower_ != nullptr;};
    void deleteFollower() { this->follower_ = nullptr;};
    inline string follower() const { DARABONBA_PTR_GET_DEFAULT(follower_, "") };
    inline GetQualityFollowerResponseBodyData& setFollower(string follower) { DARABONBA_PTR_SET_VALUE(follower_, follower) };


    // followerAccountName Field Functions 
    bool hasFollowerAccountName() const { return this->followerAccountName_ != nullptr;};
    void deleteFollowerAccountName() { this->followerAccountName_ = nullptr;};
    inline string followerAccountName() const { DARABONBA_PTR_GET_DEFAULT(followerAccountName_, "") };
    inline GetQualityFollowerResponseBodyData& setFollowerAccountName(string followerAccountName) { DARABONBA_PTR_SET_VALUE(followerAccountName_, followerAccountName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetQualityFollowerResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetQualityFollowerResponseBodyData& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetQualityFollowerResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetQualityFollowerResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The alert mode. The value is as follows:
    // 
    // - 1 (Mail)
    // - 2 (email and SMS)
    // - 4 (DingTalk groups of robots or hook)
    // - 5 (DingTalk groups of robots @ ALL)
    std::shared_ptr<int32_t> alarmMode_ = nullptr;
    // The time when the data quality rule subscription configuration was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the partition expression.
    std::shared_ptr<string> entityId_ = nullptr;
    // The subscriber to receive alert information.
    std::shared_ptr<string> follower_ = nullptr;
    // The Alibaba Cloud account name of the subscriber.
    std::shared_ptr<string> followerAccountName_ = nullptr;
    // The ID of the subscription relationship.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The update time of the data quality rule subscription configuration.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the engine or data source.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the partitioned table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
