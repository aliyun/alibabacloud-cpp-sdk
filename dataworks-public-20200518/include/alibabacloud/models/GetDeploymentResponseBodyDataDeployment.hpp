// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTRESPONSEBODYDATADEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTRESPONSEBODYDATADEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDeploymentResponseBodyDataDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentResponseBodyDataDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingStatus, checkingStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(FromEnvironment, fromEnvironment_);
      DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ToEnvironment, toEnvironment_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentResponseBodyDataDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingStatus, checkingStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(FromEnvironment, fromEnvironment_);
      DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ToEnvironment, toEnvironment_);
    };
    GetDeploymentResponseBodyDataDeployment() = default ;
    GetDeploymentResponseBodyDataDeployment(const GetDeploymentResponseBodyDataDeployment &) = default ;
    GetDeploymentResponseBodyDataDeployment(GetDeploymentResponseBodyDataDeployment &&) = default ;
    GetDeploymentResponseBodyDataDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentResponseBodyDataDeployment() = default ;
    GetDeploymentResponseBodyDataDeployment& operator=(const GetDeploymentResponseBodyDataDeployment &) = default ;
    GetDeploymentResponseBodyDataDeployment& operator=(GetDeploymentResponseBodyDataDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingStatus_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->errorMessage_ != nullptr && this->executeTime_ != nullptr && this->fromEnvironment_ != nullptr
        && this->handlerId_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->toEnvironment_ != nullptr; };
    // checkingStatus Field Functions 
    bool hasCheckingStatus() const { return this->checkingStatus_ != nullptr;};
    void deleteCheckingStatus() { this->checkingStatus_ = nullptr;};
    inline int32_t checkingStatus() const { DARABONBA_PTR_GET_DEFAULT(checkingStatus_, 0) };
    inline GetDeploymentResponseBodyDataDeployment& setCheckingStatus(int32_t checkingStatus) { DARABONBA_PTR_SET_VALUE(checkingStatus_, checkingStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDeploymentResponseBodyDataDeployment& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDeploymentResponseBodyDataDeployment& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDeploymentResponseBodyDataDeployment& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline GetDeploymentResponseBodyDataDeployment& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // fromEnvironment Field Functions 
    bool hasFromEnvironment() const { return this->fromEnvironment_ != nullptr;};
    void deleteFromEnvironment() { this->fromEnvironment_ = nullptr;};
    inline int32_t fromEnvironment() const { DARABONBA_PTR_GET_DEFAULT(fromEnvironment_, 0) };
    inline GetDeploymentResponseBodyDataDeployment& setFromEnvironment(int32_t fromEnvironment) { DARABONBA_PTR_SET_VALUE(fromEnvironment_, fromEnvironment) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline string handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, "") };
    inline GetDeploymentResponseBodyDataDeployment& setHandlerId(string handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeploymentResponseBodyDataDeployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDeploymentResponseBodyDataDeployment& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toEnvironment Field Functions 
    bool hasToEnvironment() const { return this->toEnvironment_ != nullptr;};
    void deleteToEnvironment() { this->toEnvironment_ = nullptr;};
    inline int32_t toEnvironment() const { DARABONBA_PTR_GET_DEFAULT(toEnvironment_, 0) };
    inline GetDeploymentResponseBodyDataDeployment& setToEnvironment(int32_t toEnvironment) { DARABONBA_PTR_SET_VALUE(toEnvironment_, toEnvironment) };


  protected:
    // The check status of one or more files in the deployment task. If the value of the ToEnvironment parameter is 1, the files can be deployed to the production environment only when the value of the Status parameter is 1 and the CheckingStatus parameter is empty. Valid values:
    // 
    // *   7: The file failed the check.
    // *   8: The file is being checked.
    std::shared_ptr<int32_t> checkingStatus_ = nullptr;
    // The time when the deployment task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who created the deployment task.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The error message that was returned when the deployment package failed. In this case, the value of the Status parameter is 2.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the deployment task was run. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    // The environment in which the deployment task was run. Valid values: 0 and 1. A value of 0 indicates the on-premises environment. A value of 1 indicates the development environment.
    std::shared_ptr<int32_t> fromEnvironment_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who ran the deployment task.
    std::shared_ptr<string> handlerId_ = nullptr;
    // The name of the deployment task. The value is the same as the name of the specific deployment task that is displayed on the Release Package page in the Deploy module.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the deployment task. Valid values: 0, 1, and 2. A value of 0 indicates that the task is ready. A value of 1 indicates that the task was successful. A value of 2 indicates that the task failed.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The environment to which the file was deployed. Valid values: 1 and 2. A value of 1 indicates the development environment. A value of 2 indicates the production environment.
    std::shared_ptr<int32_t> toEnvironment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
