// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERALIUIDBYINSTANCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERALIUIDBYINSTANCEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class GetUserAliUidByInstanceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAliUidByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Cpus, cpus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResouceType, resouceType_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserUid, userUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAliUidByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Cpus, cpus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResouceType, resouceType_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserUid, userUid_);
    };
    GetUserAliUidByInstanceIdResponseBody() = default ;
    GetUserAliUidByInstanceIdResponseBody(const GetUserAliUidByInstanceIdResponseBody &) = default ;
    GetUserAliUidByInstanceIdResponseBody(GetUserAliUidByInstanceIdResponseBody &&) = default ;
    GetUserAliUidByInstanceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAliUidByInstanceIdResponseBody() = default ;
    GetUserAliUidByInstanceIdResponseBody& operator=(const GetUserAliUidByInstanceIdResponseBody &) = default ;
    GetUserAliUidByInstanceIdResponseBody& operator=(GetUserAliUidByInstanceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->code_ == nullptr && this->cpus_ == nullptr && this->createTime_ == nullptr && this->intranetIp_ == nullptr
        && this->memory_ == nullptr && this->message_ == nullptr && this->namespaceId_ == nullptr && this->podName_ == nullptr && this->podUid_ == nullptr
        && this->requestId_ == nullptr && this->resouceType_ == nullptr && this->resourceInstanceId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr
        && this->userUid_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cpus Field Functions 
    bool hasCpus() const { return this->cpus_ != nullptr;};
    void deleteCpus() { this->cpus_ = nullptr;};
    inline int64_t getCpus() const { DARABONBA_PTR_GET_DEFAULT(cpus_, 0L) };
    inline GetUserAliUidByInstanceIdResponseBody& setCpus(int64_t cpus) { DARABONBA_PTR_SET_VALUE(cpus_, cpus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetUserAliUidByInstanceIdResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline GetUserAliUidByInstanceIdResponseBody& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resouceType Field Functions 
    bool hasResouceType() const { return this->resouceType_ != nullptr;};
    void deleteResouceType() { this->resouceType_ = nullptr;};
    inline string getResouceType() const { DARABONBA_PTR_GET_DEFAULT(resouceType_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setResouceType(string resouceType) { DARABONBA_PTR_SET_VALUE(resouceType_, resouceType) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetUserAliUidByInstanceIdResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userUid Field Functions 
    bool hasUserUid() const { return this->userUid_ != nullptr;};
    void deleteUserUid() { this->userUid_ = nullptr;};
    inline string getUserUid() const { DARABONBA_PTR_GET_DEFAULT(userUid_, "") };
    inline GetUserAliUidByInstanceIdResponseBody& setUserUid(string userUid) { DARABONBA_PTR_SET_VALUE(userUid_, userUid) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> applicationName_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> cpus_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> intranetIp_ {};
    shared_ptr<int64_t> memory_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> namespaceId_ {};
    shared_ptr<string> podName_ {};
    shared_ptr<string> podUid_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resouceType_ {};
    shared_ptr<string> resourceInstanceId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> updateTime_ {};
    shared_ptr<string> userUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
