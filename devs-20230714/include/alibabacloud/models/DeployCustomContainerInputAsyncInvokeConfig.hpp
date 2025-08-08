// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTASYNCINVOKECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployCustomContainerInputAsyncInvokeConfigDestinationConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputAsyncInvokeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputAsyncInvokeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(asyncTask, asyncTask_);
      DARABONBA_PTR_TO_JSON(destinationConfig, destinationConfig_);
      DARABONBA_PTR_TO_JSON(maxAsyncEventAgeInSeconds, maxAsyncEventAgeInSeconds_);
      DARABONBA_PTR_TO_JSON(maxAsyncRetryAttempts, maxAsyncRetryAttempts_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputAsyncInvokeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncTask, asyncTask_);
      DARABONBA_PTR_FROM_JSON(destinationConfig, destinationConfig_);
      DARABONBA_PTR_FROM_JSON(maxAsyncEventAgeInSeconds, maxAsyncEventAgeInSeconds_);
      DARABONBA_PTR_FROM_JSON(maxAsyncRetryAttempts, maxAsyncRetryAttempts_);
    };
    DeployCustomContainerInputAsyncInvokeConfig() = default ;
    DeployCustomContainerInputAsyncInvokeConfig(const DeployCustomContainerInputAsyncInvokeConfig &) = default ;
    DeployCustomContainerInputAsyncInvokeConfig(DeployCustomContainerInputAsyncInvokeConfig &&) = default ;
    DeployCustomContainerInputAsyncInvokeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputAsyncInvokeConfig() = default ;
    DeployCustomContainerInputAsyncInvokeConfig& operator=(const DeployCustomContainerInputAsyncInvokeConfig &) = default ;
    DeployCustomContainerInputAsyncInvokeConfig& operator=(DeployCustomContainerInputAsyncInvokeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTask_ != nullptr
        && this->destinationConfig_ != nullptr && this->maxAsyncEventAgeInSeconds_ != nullptr && this->maxAsyncRetryAttempts_ != nullptr; };
    // asyncTask Field Functions 
    bool hasAsyncTask() const { return this->asyncTask_ != nullptr;};
    void deleteAsyncTask() { this->asyncTask_ = nullptr;};
    inline bool asyncTask() const { DARABONBA_PTR_GET_DEFAULT(asyncTask_, false) };
    inline DeployCustomContainerInputAsyncInvokeConfig& setAsyncTask(bool asyncTask) { DARABONBA_PTR_SET_VALUE(asyncTask_, asyncTask) };


    // destinationConfig Field Functions 
    bool hasDestinationConfig() const { return this->destinationConfig_ != nullptr;};
    void deleteDestinationConfig() { this->destinationConfig_ = nullptr;};
    inline const Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig & destinationConfig() const { DARABONBA_PTR_GET_CONST(destinationConfig_, Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig) };
    inline Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig destinationConfig() { DARABONBA_PTR_GET(destinationConfig_, Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig) };
    inline DeployCustomContainerInputAsyncInvokeConfig& setDestinationConfig(const Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig & destinationConfig) { DARABONBA_PTR_SET_VALUE(destinationConfig_, destinationConfig) };
    inline DeployCustomContainerInputAsyncInvokeConfig& setDestinationConfig(Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig && destinationConfig) { DARABONBA_PTR_SET_RVALUE(destinationConfig_, destinationConfig) };


    // maxAsyncEventAgeInSeconds Field Functions 
    bool hasMaxAsyncEventAgeInSeconds() const { return this->maxAsyncEventAgeInSeconds_ != nullptr;};
    void deleteMaxAsyncEventAgeInSeconds() { this->maxAsyncEventAgeInSeconds_ = nullptr;};
    inline int64_t maxAsyncEventAgeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxAsyncEventAgeInSeconds_, 0L) };
    inline DeployCustomContainerInputAsyncInvokeConfig& setMaxAsyncEventAgeInSeconds(int64_t maxAsyncEventAgeInSeconds) { DARABONBA_PTR_SET_VALUE(maxAsyncEventAgeInSeconds_, maxAsyncEventAgeInSeconds) };


    // maxAsyncRetryAttempts Field Functions 
    bool hasMaxAsyncRetryAttempts() const { return this->maxAsyncRetryAttempts_ != nullptr;};
    void deleteMaxAsyncRetryAttempts() { this->maxAsyncRetryAttempts_ = nullptr;};
    inline int64_t maxAsyncRetryAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxAsyncRetryAttempts_, 0L) };
    inline DeployCustomContainerInputAsyncInvokeConfig& setMaxAsyncRetryAttempts(int64_t maxAsyncRetryAttempts) { DARABONBA_PTR_SET_VALUE(maxAsyncRetryAttempts_, maxAsyncRetryAttempts) };


  protected:
    std::shared_ptr<bool> asyncTask_ = nullptr;
    std::shared_ptr<Models::DeployCustomContainerInputAsyncInvokeConfigDestinationConfig> destinationConfig_ = nullptr;
    std::shared_ptr<int64_t> maxAsyncEventAgeInSeconds_ = nullptr;
    std::shared_ptr<int64_t> maxAsyncRetryAttempts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
