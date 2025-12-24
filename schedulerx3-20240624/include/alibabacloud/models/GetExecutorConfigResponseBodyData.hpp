// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTORCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTORCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetExecutorConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecutorConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ExecutorType, executorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecutorConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ExecutorType, executorType_);
    };
    GetExecutorConfigResponseBodyData() = default ;
    GetExecutorConfigResponseBodyData(const GetExecutorConfigResponseBodyData &) = default ;
    GetExecutorConfigResponseBodyData(GetExecutorConfigResponseBodyData &&) = default ;
    GetExecutorConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecutorConfigResponseBodyData() = default ;
    GetExecutorConfigResponseBodyData& operator=(const GetExecutorConfigResponseBodyData &) = default ;
    GetExecutorConfigResponseBodyData& operator=(GetExecutorConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->executorType_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetExecutorConfigResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // executorType Field Functions 
    bool hasExecutorType() const { return this->executorType_ != nullptr;};
    void deleteExecutorType() { this->executorType_ = nullptr;};
    inline string executorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, "") };
    inline GetExecutorConfigResponseBodyData& setExecutorType(string executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> executorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
