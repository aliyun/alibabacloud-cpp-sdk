// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TIMEDRESIDENTRESOURCEPOOLAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_TIMEDRESIDENTRESOURCEPOOLAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TimedResidentResourcePoolApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TimedResidentResourcePoolApplication& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(operationType, operationType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timedPoolId, timedPoolId_);
    };
    friend void from_json(const Darabonba::Json& j, TimedResidentResourcePoolApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(operationType, operationType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timedPoolId, timedPoolId_);
    };
    TimedResidentResourcePoolApplication() = default ;
    TimedResidentResourcePoolApplication(const TimedResidentResourcePoolApplication &) = default ;
    TimedResidentResourcePoolApplication(TimedResidentResourcePoolApplication &&) = default ;
    TimedResidentResourcePoolApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TimedResidentResourcePoolApplication() = default ;
    TimedResidentResourcePoolApplication& operator=(const TimedResidentResourcePoolApplication &) = default ;
    TimedResidentResourcePoolApplication& operator=(TimedResidentResourcePoolApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->content_ == nullptr && this->createdTime_ == nullptr && this->lastModifiedTime_ == nullptr && this->operationType_ == nullptr && this->status_ == nullptr
        && this->timedPoolId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline TimedResidentResourcePoolApplication& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TimedResidentResourcePoolApplication& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline TimedResidentResourcePoolApplication& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline TimedResidentResourcePoolApplication& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline TimedResidentResourcePoolApplication& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TimedResidentResourcePoolApplication& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timedPoolId Field Functions 
    bool hasTimedPoolId() const { return this->timedPoolId_ != nullptr;};
    void deleteTimedPoolId() { this->timedPoolId_ = nullptr;};
    inline string getTimedPoolId() const { DARABONBA_PTR_GET_DEFAULT(timedPoolId_, "") };
    inline TimedResidentResourcePoolApplication& setTimedPoolId(string timedPoolId) { DARABONBA_PTR_SET_VALUE(timedPoolId_, timedPoolId) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> createdTime_ {};
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<string> operationType_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> timedPoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
