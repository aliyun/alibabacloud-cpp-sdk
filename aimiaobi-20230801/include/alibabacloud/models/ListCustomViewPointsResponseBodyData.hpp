// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomViewPointsResponseBodyDataViewPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListCustomViewPointsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewPointsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomViewPointsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
    };
    ListCustomViewPointsResponseBodyData() = default ;
    ListCustomViewPointsResponseBodyData(const ListCustomViewPointsResponseBodyData &) = default ;
    ListCustomViewPointsResponseBodyData(ListCustomViewPointsResponseBodyData &&) = default ;
    ListCustomViewPointsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewPointsResponseBodyData() = default ;
    ListCustomViewPointsResponseBodyData& operator=(const ListCustomViewPointsResponseBodyData &) = default ;
    ListCustomViewPointsResponseBodyData& operator=(ListCustomViewPointsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTaskId_ != nullptr
        && this->attitude_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->id_ != nullptr && this->status_ != nullptr
        && this->taskErrorMessage_ != nullptr && this->taskStatus_ != nullptr && this->viewPoints_ != nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline ListCustomViewPointsResponseBodyData& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline ListCustomViewPointsResponseBodyData& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListCustomViewPointsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListCustomViewPointsResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCustomViewPointsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCustomViewPointsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline ListCustomViewPointsResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListCustomViewPointsResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // viewPoints Field Functions 
    bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
    void deleteViewPoints() { this->viewPoints_ = nullptr;};
    inline const vector<Models::ListCustomViewPointsResponseBodyDataViewPoints> & viewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Models::ListCustomViewPointsResponseBodyDataViewPoints>) };
    inline vector<Models::ListCustomViewPointsResponseBodyDataViewPoints> viewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Models::ListCustomViewPointsResponseBodyDataViewPoints>) };
    inline ListCustomViewPointsResponseBodyData& setViewPoints(const vector<Models::ListCustomViewPointsResponseBodyDataViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
    inline ListCustomViewPointsResponseBodyData& setViewPoints(vector<Models::ListCustomViewPointsResponseBodyDataViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


  protected:
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<vector<Models::ListCustomViewPointsResponseBodyDataViewPoints>> viewPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
