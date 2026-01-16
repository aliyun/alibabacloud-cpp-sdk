// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTASYNCINVOKECONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTASYNCINVOKECONFIGINPUT_HPP_
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
  class PutAsyncInvokeConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutAsyncInvokeConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(asyncTask, asyncTask_);
      DARABONBA_PTR_TO_JSON(destinationConfig, destinationConfig_);
      DARABONBA_PTR_TO_JSON(maxAsyncEventAgeInSeconds, maxAsyncEventAgeInSeconds_);
      DARABONBA_PTR_TO_JSON(maxAsyncRetryAttempts, maxAsyncRetryAttempts_);
    };
    friend void from_json(const Darabonba::Json& j, PutAsyncInvokeConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncTask, asyncTask_);
      DARABONBA_PTR_FROM_JSON(destinationConfig, destinationConfig_);
      DARABONBA_PTR_FROM_JSON(maxAsyncEventAgeInSeconds, maxAsyncEventAgeInSeconds_);
      DARABONBA_PTR_FROM_JSON(maxAsyncRetryAttempts, maxAsyncRetryAttempts_);
    };
    PutAsyncInvokeConfigInput() = default ;
    PutAsyncInvokeConfigInput(const PutAsyncInvokeConfigInput &) = default ;
    PutAsyncInvokeConfigInput(PutAsyncInvokeConfigInput &&) = default ;
    PutAsyncInvokeConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutAsyncInvokeConfigInput() = default ;
    PutAsyncInvokeConfigInput& operator=(const PutAsyncInvokeConfigInput &) = default ;
    PutAsyncInvokeConfigInput& operator=(PutAsyncInvokeConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTask_ == nullptr
        && this->destinationConfig_ == nullptr && this->maxAsyncEventAgeInSeconds_ == nullptr && this->maxAsyncRetryAttempts_ == nullptr; };
    // asyncTask Field Functions 
    bool hasAsyncTask() const { return this->asyncTask_ != nullptr;};
    void deleteAsyncTask() { this->asyncTask_ = nullptr;};
    inline bool getAsyncTask() const { DARABONBA_PTR_GET_DEFAULT(asyncTask_, false) };
    inline PutAsyncInvokeConfigInput& setAsyncTask(bool asyncTask) { DARABONBA_PTR_SET_VALUE(asyncTask_, asyncTask) };


    // destinationConfig Field Functions 
    bool hasDestinationConfig() const { return this->destinationConfig_ != nullptr;};
    void deleteDestinationConfig() { this->destinationConfig_ = nullptr;};
    inline const DestinationConfig & getDestinationConfig() const { DARABONBA_PTR_GET_CONST(destinationConfig_, DestinationConfig) };
    inline DestinationConfig getDestinationConfig() { DARABONBA_PTR_GET(destinationConfig_, DestinationConfig) };
    inline PutAsyncInvokeConfigInput& setDestinationConfig(const DestinationConfig & destinationConfig) { DARABONBA_PTR_SET_VALUE(destinationConfig_, destinationConfig) };
    inline PutAsyncInvokeConfigInput& setDestinationConfig(DestinationConfig && destinationConfig) { DARABONBA_PTR_SET_RVALUE(destinationConfig_, destinationConfig) };


    // maxAsyncEventAgeInSeconds Field Functions 
    bool hasMaxAsyncEventAgeInSeconds() const { return this->maxAsyncEventAgeInSeconds_ != nullptr;};
    void deleteMaxAsyncEventAgeInSeconds() { this->maxAsyncEventAgeInSeconds_ = nullptr;};
    inline int64_t getMaxAsyncEventAgeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxAsyncEventAgeInSeconds_, 0L) };
    inline PutAsyncInvokeConfigInput& setMaxAsyncEventAgeInSeconds(int64_t maxAsyncEventAgeInSeconds) { DARABONBA_PTR_SET_VALUE(maxAsyncEventAgeInSeconds_, maxAsyncEventAgeInSeconds) };


    // maxAsyncRetryAttempts Field Functions 
    bool hasMaxAsyncRetryAttempts() const { return this->maxAsyncRetryAttempts_ != nullptr;};
    void deleteMaxAsyncRetryAttempts() { this->maxAsyncRetryAttempts_ = nullptr;};
    inline int64_t getMaxAsyncRetryAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxAsyncRetryAttempts_, 0L) };
    inline PutAsyncInvokeConfigInput& setMaxAsyncRetryAttempts(int64_t maxAsyncRetryAttempts) { DARABONBA_PTR_SET_VALUE(maxAsyncRetryAttempts_, maxAsyncRetryAttempts) };


  protected:
    shared_ptr<bool> asyncTask_ {};
    shared_ptr<DestinationConfig> destinationConfig_ {};
    shared_ptr<int64_t> maxAsyncEventAgeInSeconds_ {};
    shared_ptr<int64_t> maxAsyncRetryAttempts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
