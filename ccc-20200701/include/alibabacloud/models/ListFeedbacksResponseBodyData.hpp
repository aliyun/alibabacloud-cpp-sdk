// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEEDBACKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFEEDBACKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFeedbacksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeedbacksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(UserRating, userRating_);
      DARABONBA_PTR_TO_JSON(UserResponse, userResponse_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeedbacksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(UserRating, userRating_);
      DARABONBA_PTR_FROM_JSON(UserResponse, userResponse_);
    };
    ListFeedbacksResponseBodyData() = default ;
    ListFeedbacksResponseBodyData(const ListFeedbacksResponseBodyData &) = default ;
    ListFeedbacksResponseBodyData(ListFeedbacksResponseBodyData &&) = default ;
    ListFeedbacksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeedbacksResponseBodyData() = default ;
    ListFeedbacksResponseBodyData& operator=(const ListFeedbacksResponseBodyData &) = default ;
    ListFeedbacksResponseBodyData& operator=(ListFeedbacksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->instanceId_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->userRating_ == nullptr && return this->userResponse_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListFeedbacksResponseBodyData& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFeedbacksResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListFeedbacksResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListFeedbacksResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // userRating Field Functions 
    bool hasUserRating() const { return this->userRating_ != nullptr;};
    void deleteUserRating() { this->userRating_ = nullptr;};
    inline int32_t userRating() const { DARABONBA_PTR_GET_DEFAULT(userRating_, 0) };
    inline ListFeedbacksResponseBodyData& setUserRating(int32_t userRating) { DARABONBA_PTR_SET_VALUE(userRating_, userRating) };


    // userResponse Field Functions 
    bool hasUserResponse() const { return this->userResponse_ != nullptr;};
    void deleteUserResponse() { this->userResponse_ = nullptr;};
    inline string userResponse() const { DARABONBA_PTR_GET_DEFAULT(userResponse_, "") };
    inline ListFeedbacksResponseBodyData& setUserResponse(string userResponse) { DARABONBA_PTR_SET_VALUE(userResponse_, userResponse) };


  protected:
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int32_t> userRating_ = nullptr;
    std::shared_ptr<string> userResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
