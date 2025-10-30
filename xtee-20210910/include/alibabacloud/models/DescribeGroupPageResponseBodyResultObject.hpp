// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeGroupPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(communityNo, communityNo_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(groupRisk, groupRisk_);
      DARABONBA_PTR_TO_JSON(groupScale, groupScale_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(communityNo, communityNo_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(groupRisk, groupRisk_);
      DARABONBA_PTR_FROM_JSON(groupScale, groupScale_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DescribeGroupPageResponseBodyResultObject() = default ;
    DescribeGroupPageResponseBodyResultObject(const DescribeGroupPageResponseBodyResultObject &) = default ;
    DescribeGroupPageResponseBodyResultObject(DescribeGroupPageResponseBodyResultObject &&) = default ;
    DescribeGroupPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupPageResponseBodyResultObject() = default ;
    DescribeGroupPageResponseBodyResultObject& operator=(const DescribeGroupPageResponseBodyResultObject &) = default ;
    DescribeGroupPageResponseBodyResultObject& operator=(DescribeGroupPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->communityNo_ == nullptr
        && return this->createTime_ == nullptr && return this->groupRisk_ == nullptr && return this->groupScale_ == nullptr && return this->id_ == nullptr && return this->sceneName_ == nullptr
        && return this->taskId_ == nullptr && return this->userId_ == nullptr; };
    // communityNo Field Functions 
    bool hasCommunityNo() const { return this->communityNo_ != nullptr;};
    void deleteCommunityNo() { this->communityNo_ = nullptr;};
    inline string communityNo() const { DARABONBA_PTR_GET_DEFAULT(communityNo_, "") };
    inline DescribeGroupPageResponseBodyResultObject& setCommunityNo(string communityNo) { DARABONBA_PTR_SET_VALUE(communityNo_, communityNo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeGroupPageResponseBodyResultObject& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // groupRisk Field Functions 
    bool hasGroupRisk() const { return this->groupRisk_ != nullptr;};
    void deleteGroupRisk() { this->groupRisk_ = nullptr;};
    inline string groupRisk() const { DARABONBA_PTR_GET_DEFAULT(groupRisk_, "") };
    inline DescribeGroupPageResponseBodyResultObject& setGroupRisk(string groupRisk) { DARABONBA_PTR_SET_VALUE(groupRisk_, groupRisk) };


    // groupScale Field Functions 
    bool hasGroupScale() const { return this->groupScale_ != nullptr;};
    void deleteGroupScale() { this->groupScale_ = nullptr;};
    inline string groupScale() const { DARABONBA_PTR_GET_DEFAULT(groupScale_, "") };
    inline DescribeGroupPageResponseBodyResultObject& setGroupScale(string groupScale) { DARABONBA_PTR_SET_VALUE(groupScale_, groupScale) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeGroupPageResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeGroupPageResponseBodyResultObject& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeGroupPageResponseBodyResultObject& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeGroupPageResponseBodyResultObject& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Community number.
    std::shared_ptr<string> communityNo_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Group risk concentration.
    std::shared_ptr<string> groupRisk_ = nullptr;
    // Group scale.
    std::shared_ptr<string> groupScale_ = nullptr;
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Scene name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // User UID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
