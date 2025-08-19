// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DestinationConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class AsyncConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncConfig& obj) { 
      DARABONBA_PTR_TO_JSON(asyncTask, asyncTask_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(destinationConfig, destinationConfig_);
      DARABONBA_PTR_TO_JSON(functionArn, functionArn_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(maxAsyncEventAgeInSeconds, maxAsyncEventAgeInSeconds_);
      DARABONBA_PTR_TO_JSON(maxAsyncRetryAttempts, maxAsyncRetryAttempts_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncTask, asyncTask_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(destinationConfig, destinationConfig_);
      DARABONBA_PTR_FROM_JSON(functionArn, functionArn_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(maxAsyncEventAgeInSeconds, maxAsyncEventAgeInSeconds_);
      DARABONBA_PTR_FROM_JSON(maxAsyncRetryAttempts, maxAsyncRetryAttempts_);
    };
    AsyncConfig() = default ;
    AsyncConfig(const AsyncConfig &) = default ;
    AsyncConfig(AsyncConfig &&) = default ;
    AsyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncConfig() = default ;
    AsyncConfig& operator=(const AsyncConfig &) = default ;
    AsyncConfig& operator=(AsyncConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTask_ != nullptr
        && this->createdTime_ != nullptr && this->destinationConfig_ != nullptr && this->functionArn_ != nullptr && this->lastModifiedTime_ != nullptr && this->maxAsyncEventAgeInSeconds_ != nullptr
        && this->maxAsyncRetryAttempts_ != nullptr; };
    // asyncTask Field Functions 
    bool hasAsyncTask() const { return this->asyncTask_ != nullptr;};
    void deleteAsyncTask() { this->asyncTask_ = nullptr;};
    inline bool asyncTask() const { DARABONBA_PTR_GET_DEFAULT(asyncTask_, false) };
    inline AsyncConfig& setAsyncTask(bool asyncTask) { DARABONBA_PTR_SET_VALUE(asyncTask_, asyncTask) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline AsyncConfig& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // destinationConfig Field Functions 
    bool hasDestinationConfig() const { return this->destinationConfig_ != nullptr;};
    void deleteDestinationConfig() { this->destinationConfig_ = nullptr;};
    inline const DestinationConfig & destinationConfig() const { DARABONBA_PTR_GET_CONST(destinationConfig_, DestinationConfig) };
    inline DestinationConfig destinationConfig() { DARABONBA_PTR_GET(destinationConfig_, DestinationConfig) };
    inline AsyncConfig& setDestinationConfig(const DestinationConfig & destinationConfig) { DARABONBA_PTR_SET_VALUE(destinationConfig_, destinationConfig) };
    inline AsyncConfig& setDestinationConfig(DestinationConfig && destinationConfig) { DARABONBA_PTR_SET_RVALUE(destinationConfig_, destinationConfig) };


    // functionArn Field Functions 
    bool hasFunctionArn() const { return this->functionArn_ != nullptr;};
    void deleteFunctionArn() { this->functionArn_ = nullptr;};
    inline string functionArn() const { DARABONBA_PTR_GET_DEFAULT(functionArn_, "") };
    inline AsyncConfig& setFunctionArn(string functionArn) { DARABONBA_PTR_SET_VALUE(functionArn_, functionArn) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline AsyncConfig& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // maxAsyncEventAgeInSeconds Field Functions 
    bool hasMaxAsyncEventAgeInSeconds() const { return this->maxAsyncEventAgeInSeconds_ != nullptr;};
    void deleteMaxAsyncEventAgeInSeconds() { this->maxAsyncEventAgeInSeconds_ = nullptr;};
    inline int64_t maxAsyncEventAgeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxAsyncEventAgeInSeconds_, 0L) };
    inline AsyncConfig& setMaxAsyncEventAgeInSeconds(int64_t maxAsyncEventAgeInSeconds) { DARABONBA_PTR_SET_VALUE(maxAsyncEventAgeInSeconds_, maxAsyncEventAgeInSeconds) };


    // maxAsyncRetryAttempts Field Functions 
    bool hasMaxAsyncRetryAttempts() const { return this->maxAsyncRetryAttempts_ != nullptr;};
    void deleteMaxAsyncRetryAttempts() { this->maxAsyncRetryAttempts_ = nullptr;};
    inline int64_t maxAsyncRetryAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxAsyncRetryAttempts_, 0L) };
    inline AsyncConfig& setMaxAsyncRetryAttempts(int64_t maxAsyncRetryAttempts) { DARABONBA_PTR_SET_VALUE(maxAsyncRetryAttempts_, maxAsyncRetryAttempts) };


  protected:
    std::shared_ptr<bool> asyncTask_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<DestinationConfig> destinationConfig_ = nullptr;
    std::shared_ptr<string> functionArn_ = nullptr;
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<int64_t> maxAsyncEventAgeInSeconds_ = nullptr;
    std::shared_ptr<int64_t> maxAsyncRetryAttempts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
