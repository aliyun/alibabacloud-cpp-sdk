// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROBOTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROBOTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class RobotCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RobotCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RecordFlag, recordFlag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
    };
    friend void from_json(const Darabonba::Json& j, RobotCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RecordFlag, recordFlag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
    };
    RobotCallRequest() = default ;
    RobotCallRequest(const RobotCallRequest &) = default ;
    RobotCallRequest(RobotCallRequest &&) = default ;
    RobotCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RobotCallRequest() = default ;
    RobotCallRequest& operator=(const RobotCallRequest &) = default ;
    RobotCallRequest& operator=(RobotCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && return this->calledShowNumber_ == nullptr && return this->earlyMediaAsr_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr && return this->params_ == nullptr
        && return this->recordFlag_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->robotId_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline RobotCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string calledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline RobotCallRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // earlyMediaAsr Field Functions 
    bool hasEarlyMediaAsr() const { return this->earlyMediaAsr_ != nullptr;};
    void deleteEarlyMediaAsr() { this->earlyMediaAsr_ = nullptr;};
    inline bool earlyMediaAsr() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaAsr_, false) };
    inline RobotCallRequest& setEarlyMediaAsr(bool earlyMediaAsr) { DARABONBA_PTR_SET_VALUE(earlyMediaAsr_, earlyMediaAsr) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline RobotCallRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RobotCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline RobotCallRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // recordFlag Field Functions 
    bool hasRecordFlag() const { return this->recordFlag_ != nullptr;};
    void deleteRecordFlag() { this->recordFlag_ = nullptr;};
    inline bool recordFlag() const { DARABONBA_PTR_GET_DEFAULT(recordFlag_, false) };
    inline RobotCallRequest& setRecordFlag(bool recordFlag) { DARABONBA_PTR_SET_VALUE(recordFlag_, recordFlag) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RobotCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RobotCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline int64_t robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0L) };
    inline RobotCallRequest& setRobotId(int64_t robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calledShowNumber_ = nullptr;
    std::shared_ptr<bool> earlyMediaAsr_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<bool> recordFlag_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> robotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
