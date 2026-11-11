// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateContextStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(strategyVersion, strategyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(strategyVersion, strategyVersion_);
    };
    UpdateContextStoreResponseBody() = default ;
    UpdateContextStoreResponseBody(const UpdateContextStoreResponseBody &) = default ;
    UpdateContextStoreResponseBody(UpdateContextStoreResponseBody &&) = default ;
    UpdateContextStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextStoreResponseBody() = default ;
    UpdateContextStoreResponseBody& operator=(const UpdateContextStoreResponseBody &) = default ;
    UpdateContextStoreResponseBody& operator=(UpdateContextStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(runtimeRecallEnabled, runtimeRecallEnabled_);
        DARABONBA_PTR_TO_JSON(runtimeRecallRevision, runtimeRecallRevision_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(runtimeRecallEnabled, runtimeRecallEnabled_);
        DARABONBA_PTR_FROM_JSON(runtimeRecallRevision, runtimeRecallRevision_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->runtimeRecallEnabled_ == nullptr
        && this->runtimeRecallRevision_ == nullptr; };
      // runtimeRecallEnabled Field Functions 
      bool hasRuntimeRecallEnabled() const { return this->runtimeRecallEnabled_ != nullptr;};
      void deleteRuntimeRecallEnabled() { this->runtimeRecallEnabled_ = nullptr;};
      inline bool getRuntimeRecallEnabled() const { DARABONBA_PTR_GET_DEFAULT(runtimeRecallEnabled_, false) };
      inline Config& setRuntimeRecallEnabled(bool runtimeRecallEnabled) { DARABONBA_PTR_SET_VALUE(runtimeRecallEnabled_, runtimeRecallEnabled) };


      // runtimeRecallRevision Field Functions 
      bool hasRuntimeRecallRevision() const { return this->runtimeRecallRevision_ != nullptr;};
      void deleteRuntimeRecallRevision() { this->runtimeRecallRevision_ = nullptr;};
      inline int64_t getRuntimeRecallRevision() const { DARABONBA_PTR_GET_DEFAULT(runtimeRecallRevision_, 0L) };
      inline Config& setRuntimeRecallRevision(int64_t runtimeRecallRevision) { DARABONBA_PTR_SET_VALUE(runtimeRecallRevision_, runtimeRecallRevision) };


    protected:
      // Indicates whether runtime recall is allowed after the experience library is updated.
      shared_ptr<bool> runtimeRecallEnabled_ {};
      // The runtime recall property version that takes effect after this update.
      shared_ptr<int64_t> runtimeRecallRevision_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr && this->strategyVersion_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdateContextStoreResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, UpdateContextStoreResponseBody::Config) };
    inline UpdateContextStoreResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, UpdateContextStoreResponseBody::Config) };
    inline UpdateContextStoreResponseBody& setConfig(const UpdateContextStoreResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateContextStoreResponseBody& setConfig(UpdateContextStoreResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateContextStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyVersion Field Functions 
    bool hasStrategyVersion() const { return this->strategyVersion_ != nullptr;};
    void deleteStrategyVersion() { this->strategyVersion_ = nullptr;};
    inline int32_t getStrategyVersion() const { DARABONBA_PTR_GET_DEFAULT(strategyVersion_, 0) };
    inline UpdateContextStoreResponseBody& setStrategyVersion(int32_t strategyVersion) { DARABONBA_PTR_SET_VALUE(strategyVersion_, strategyVersion) };


  protected:
    // The configuration properties after updating the runtime recall switch. This block is not returned for other library update operations.
    shared_ptr<UpdateContextStoreResponseBody::Config> config_ {};
    // The request ID. You can use this ID to locate the request when troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // The strategy version number that takes effect after the update for the memory type. If the strategy remains unchanged, the version number is the same as before the update.
    shared_ptr<int32_t> strategyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
