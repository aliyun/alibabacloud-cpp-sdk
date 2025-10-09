// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODYDATADEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODYDATADEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDeploymentPackageResponseBodyDataDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentPackageResponseBodyDataDeployment& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDeploymentPackageResponseBodyDataDeployment& obj) { 
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
    GetDeploymentPackageResponseBodyDataDeployment() = default ;
    GetDeploymentPackageResponseBodyDataDeployment(const GetDeploymentPackageResponseBodyDataDeployment &) = default ;
    GetDeploymentPackageResponseBodyDataDeployment(GetDeploymentPackageResponseBodyDataDeployment &&) = default ;
    GetDeploymentPackageResponseBodyDataDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentPackageResponseBodyDataDeployment() = default ;
    GetDeploymentPackageResponseBodyDataDeployment& operator=(const GetDeploymentPackageResponseBodyDataDeployment &) = default ;
    GetDeploymentPackageResponseBodyDataDeployment& operator=(GetDeploymentPackageResponseBodyDataDeployment &&) = default ;
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
    inline GetDeploymentPackageResponseBodyDataDeployment& setCheckingStatus(int32_t checkingStatus) { DARABONBA_PTR_SET_VALUE(checkingStatus_, checkingStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDeploymentPackageResponseBodyDataDeployment& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDeploymentPackageResponseBodyDataDeployment& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDeploymentPackageResponseBodyDataDeployment& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline GetDeploymentPackageResponseBodyDataDeployment& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // fromEnvironment Field Functions 
    bool hasFromEnvironment() const { return this->fromEnvironment_ != nullptr;};
    void deleteFromEnvironment() { this->fromEnvironment_ = nullptr;};
    inline int32_t fromEnvironment() const { DARABONBA_PTR_GET_DEFAULT(fromEnvironment_, 0) };
    inline GetDeploymentPackageResponseBodyDataDeployment& setFromEnvironment(int32_t fromEnvironment) { DARABONBA_PTR_SET_VALUE(fromEnvironment_, fromEnvironment) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline string handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, "") };
    inline GetDeploymentPackageResponseBodyDataDeployment& setHandlerId(string handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeploymentPackageResponseBodyDataDeployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDeploymentPackageResponseBodyDataDeployment& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toEnvironment Field Functions 
    bool hasToEnvironment() const { return this->toEnvironment_ != nullptr;};
    void deleteToEnvironment() { this->toEnvironment_ = nullptr;};
    inline int32_t toEnvironment() const { DARABONBA_PTR_GET_DEFAULT(toEnvironment_, 0) };
    inline GetDeploymentPackageResponseBodyDataDeployment& setToEnvironment(int32_t toEnvironment) { DARABONBA_PTR_SET_VALUE(toEnvironment_, toEnvironment) };


  protected:
    std::shared_ptr<int32_t> checkingStatus_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    std::shared_ptr<int32_t> fromEnvironment_ = nullptr;
    std::shared_ptr<string> handlerId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> toEnvironment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
