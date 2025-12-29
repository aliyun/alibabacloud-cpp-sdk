// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEPOOLCOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEPOOLCOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateNodePoolComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodePoolComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(disableRolling, disableRolling_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(rollingPolicy, rollingPolicy_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodePoolComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(disableRolling, disableRolling_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(rollingPolicy, rollingPolicy_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpdateNodePoolComponentRequest() = default ;
    UpdateNodePoolComponentRequest(const UpdateNodePoolComponentRequest &) = default ;
    UpdateNodePoolComponentRequest(UpdateNodePoolComponentRequest &&) = default ;
    UpdateNodePoolComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodePoolComponentRequest() = default ;
    UpdateNodePoolComponentRequest& operator=(const UpdateNodePoolComponentRequest &) = default ;
    UpdateNodePoolComponentRequest& operator=(UpdateNodePoolComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RollingPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RollingPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(batchInterval, batchInterval_);
        DARABONBA_PTR_TO_JSON(maxParallelism, maxParallelism_);
        DARABONBA_PTR_TO_JSON(pausePolicy, pausePolicy_);
      };
      friend void from_json(const Darabonba::Json& j, RollingPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(batchInterval, batchInterval_);
        DARABONBA_PTR_FROM_JSON(maxParallelism, maxParallelism_);
        DARABONBA_PTR_FROM_JSON(pausePolicy, pausePolicy_);
      };
      RollingPolicy() = default ;
      RollingPolicy(const RollingPolicy &) = default ;
      RollingPolicy(RollingPolicy &&) = default ;
      RollingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RollingPolicy() = default ;
      RollingPolicy& operator=(const RollingPolicy &) = default ;
      RollingPolicy& operator=(RollingPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchInterval_ == nullptr
        && this->maxParallelism_ == nullptr && this->pausePolicy_ == nullptr; };
      // batchInterval Field Functions 
      bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
      void deleteBatchInterval() { this->batchInterval_ = nullptr;};
      inline int64_t getBatchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0L) };
      inline RollingPolicy& setBatchInterval(int64_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


      // maxParallelism Field Functions 
      bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
      void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
      inline int64_t getMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0L) };
      inline RollingPolicy& setMaxParallelism(int64_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


      // pausePolicy Field Functions 
      bool hasPausePolicy() const { return this->pausePolicy_ != nullptr;};
      void deletePausePolicy() { this->pausePolicy_ = nullptr;};
      inline string getPausePolicy() const { DARABONBA_PTR_GET_DEFAULT(pausePolicy_, "") };
      inline RollingPolicy& setPausePolicy(string pausePolicy) { DARABONBA_PTR_SET_VALUE(pausePolicy_, pausePolicy) };


    protected:
      shared_ptr<int64_t> batchInterval_ {};
      shared_ptr<int64_t> maxParallelism_ {};
      shared_ptr<string> pausePolicy_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(customConfig, customConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(customConfig, customConfig_);
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
      virtual bool empty() const override { return this->customConfig_ == nullptr; };
      // customConfig Field Functions 
      bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
      void deleteCustomConfig() { this->customConfig_ = nullptr;};
      inline const map<string, string> & getCustomConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, string>) };
      inline map<string, string> getCustomConfig() { DARABONBA_PTR_GET(customConfig_, map<string, string>) };
      inline Config& setCustomConfig(const map<string, string> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
      inline Config& setCustomConfig(map<string, string> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


    protected:
      shared_ptr<map<string, string>> customConfig_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->disableRolling_ == nullptr && this->name_ == nullptr && this->nodeNames_ == nullptr && this->rollingPolicy_ == nullptr && this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdateNodePoolComponentRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, UpdateNodePoolComponentRequest::Config) };
    inline UpdateNodePoolComponentRequest::Config getConfig() { DARABONBA_PTR_GET(config_, UpdateNodePoolComponentRequest::Config) };
    inline UpdateNodePoolComponentRequest& setConfig(const UpdateNodePoolComponentRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateNodePoolComponentRequest& setConfig(UpdateNodePoolComponentRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // disableRolling Field Functions 
    bool hasDisableRolling() const { return this->disableRolling_ != nullptr;};
    void deleteDisableRolling() { this->disableRolling_ = nullptr;};
    inline bool getDisableRolling() const { DARABONBA_PTR_GET_DEFAULT(disableRolling_, false) };
    inline UpdateNodePoolComponentRequest& setDisableRolling(bool disableRolling) { DARABONBA_PTR_SET_VALUE(disableRolling_, disableRolling) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateNodePoolComponentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & getNodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> getNodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline UpdateNodePoolComponentRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline UpdateNodePoolComponentRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // rollingPolicy Field Functions 
    bool hasRollingPolicy() const { return this->rollingPolicy_ != nullptr;};
    void deleteRollingPolicy() { this->rollingPolicy_ = nullptr;};
    inline const UpdateNodePoolComponentRequest::RollingPolicy & getRollingPolicy() const { DARABONBA_PTR_GET_CONST(rollingPolicy_, UpdateNodePoolComponentRequest::RollingPolicy) };
    inline UpdateNodePoolComponentRequest::RollingPolicy getRollingPolicy() { DARABONBA_PTR_GET(rollingPolicy_, UpdateNodePoolComponentRequest::RollingPolicy) };
    inline UpdateNodePoolComponentRequest& setRollingPolicy(const UpdateNodePoolComponentRequest::RollingPolicy & rollingPolicy) { DARABONBA_PTR_SET_VALUE(rollingPolicy_, rollingPolicy) };
    inline UpdateNodePoolComponentRequest& setRollingPolicy(UpdateNodePoolComponentRequest::RollingPolicy && rollingPolicy) { DARABONBA_PTR_SET_RVALUE(rollingPolicy_, rollingPolicy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateNodePoolComponentRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<UpdateNodePoolComponentRequest::Config> config_ {};
    shared_ptr<bool> disableRolling_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> nodeNames_ {};
    shared_ptr<UpdateNodePoolComponentRequest::RollingPolicy> rollingPolicy_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
