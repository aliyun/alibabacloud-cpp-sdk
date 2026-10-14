// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPTIMIZETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPTIMIZETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetOptimizeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOptimizeTaskResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(checkpoint, checkpoint_);
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(nextTriggerTime, nextTriggerTime_);
      DARABONBA_PTR_TO_JSON(optimizeTaskName, optimizeTaskName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOptimizeTaskResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(checkpoint, checkpoint_);
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(nextTriggerTime, nextTriggerTime_);
      DARABONBA_PTR_FROM_JSON(optimizeTaskName, optimizeTaskName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetOptimizeTaskResponseBody() = default ;
    GetOptimizeTaskResponseBody(const GetOptimizeTaskResponseBody &) = default ;
    GetOptimizeTaskResponseBody(GetOptimizeTaskResponseBody &&) = default ;
    GetOptimizeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOptimizeTaskResponseBody() = default ;
    GetOptimizeTaskResponseBody& operator=(const GetOptimizeTaskResponseBody &) = default ;
    GetOptimizeTaskResponseBody& operator=(GetOptimizeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->config_ == nullptr && this->createTime_ == nullptr && this->nextTriggerTime_ == nullptr && this->optimizeTaskName_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline     const Darabonba::Json & getCheckpoint() const { DARABONBA_GET(checkpoint_) };
    Darabonba::Json & getCheckpoint() { DARABONBA_GET(checkpoint_) };
    inline GetOptimizeTaskResponseBody& setCheckpoint(const Darabonba::Json & checkpoint) { DARABONBA_SET_VALUE(checkpoint_, checkpoint) };
    inline GetOptimizeTaskResponseBody& setCheckpoint(Darabonba::Json && checkpoint) { DARABONBA_SET_RVALUE(checkpoint_, checkpoint) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline GetOptimizeTaskResponseBody& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline GetOptimizeTaskResponseBody& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetOptimizeTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // nextTriggerTime Field Functions 
    bool hasNextTriggerTime() const { return this->nextTriggerTime_ != nullptr;};
    void deleteNextTriggerTime() { this->nextTriggerTime_ = nullptr;};
    inline string getNextTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(nextTriggerTime_, "") };
    inline GetOptimizeTaskResponseBody& setNextTriggerTime(string nextTriggerTime) { DARABONBA_PTR_SET_VALUE(nextTriggerTime_, nextTriggerTime) };


    // optimizeTaskName Field Functions 
    bool hasOptimizeTaskName() const { return this->optimizeTaskName_ != nullptr;};
    void deleteOptimizeTaskName() { this->optimizeTaskName_ = nullptr;};
    inline string getOptimizeTaskName() const { DARABONBA_PTR_GET_DEFAULT(optimizeTaskName_, "") };
    inline GetOptimizeTaskResponseBody& setOptimizeTaskName(string optimizeTaskName) { DARABONBA_PTR_SET_VALUE(optimizeTaskName_, optimizeTaskName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOptimizeTaskResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOptimizeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetOptimizeTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetOptimizeTaskResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetOptimizeTaskResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    Darabonba::Json checkpoint_ {};
    Darabonba::Json config_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> nextTriggerTime_ {};
    shared_ptr<string> optimizeTaskName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
